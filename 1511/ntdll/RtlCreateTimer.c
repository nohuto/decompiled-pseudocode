/*
 * XREFs of RtlCreateTimer @ 0x1800081A0
 * Callers:
 *     RtlSetTimer @ 0x1800F5960 (RtlSetTimer.c)
 * Callees:
 *     RtlpTpDeleteData @ 0x1800089F8 (RtlpTpDeleteData.c)
 *     RtlpTpRevertCapture @ 0x180008A70 (RtlpTpRevertCapture.c)
 *     RtlpTpInitializeData @ 0x180008AF0 (RtlpTpInitializeData.c)
 *     RtlpTpResumeImpersonation @ 0x180008C60 (RtlpTpResumeImpersonation.c)
 *     TpAllocTimer @ 0x18000A620 (TpAllocTimer.c)
 *     TpSetTimerEx @ 0x18000AF20 (TpSetTimerEx.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 */

NTSTATUS __cdecl RtlCreateTimer(
        HANDLE TimerQueueHandle,
        PHANDLE Handle,
        WAITORTIMERCALLBACKFUNC Function,
        PVOID Context,
        ULONG DueTime,
        ULONG Period,
        ULONG Flags)
{
  int v10; // ebx
  char *Heap; // rax
  _QWORD *v12; // rdi
  PTP_TIMER *v13; // r15
  unsigned int v14; // ecx
  __int64 v15; // r8
  int v17; // [rsp+24h] [rbp-94h]
  _QWORD *BaseAddress; // [rsp+28h] [rbp-90h]
  HANDLE TokenHandle; // [rsp+30h] [rbp-88h] BYREF
  LARGE_INTEGER v20; // [rsp+38h] [rbp-80h] BYREF
  TP_CALLBACK_ENVIRON_V3 CallbackEnviron; // [rsp+40h] [rbp-78h] BYREF

  TokenHandle = 0LL;
  BaseAddress = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return -1073741823;
  *Handle = 0LL;
  v10 = RtlpTpRevertCapture(&TokenHandle);
  v17 = v10;
  if ( v10 < 0 )
  {
    v12 = 0LL;
  }
  else
  {
    Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x60uLL);
    v12 = Heap;
    BaseAddress = Heap;
    if ( Heap )
    {
      v13 = (PTP_TIMER *)(Heap + 64);
      *((_QWORD *)Heap + 8) = 0LL;
      *((_DWORD *)Heap + 23) = 0;
      v10 = RtlpTpInitializeData((PHANDLE)Heap + 2);
      v17 = v10;
      if ( v10 < 0 )
        goto LABEL_16;
      v12[4] = Function;
      v12[5] = Context;
      *((_DWORD *)v12 + 12) = 0;
      *((_BYTE *)v12 + 88) = Period != 0;
      v12[7] = TimerQueueHandle;
      v12[9] = 0LL;
      v12[10] = 0LL;
      CallbackEnviron.Version = 3;
      memset(&CallbackEnviron.Pool, 0, 52);
      CallbackEnviron.CallbackPriority = TP_CALLBACK_PRIORITY_NORMAL;
      CallbackEnviron.Size = 72;
      v14 = 0;
      if ( (Flags & 0xE0) != 0 )
        v14 = 2;
      CallbackEnviron.u.Flags = v14;
      if ( (Flags & 0x10) != 0 )
        CallbackEnviron.u.Flags = v14 | 1;
      CallbackEnviron.FinalizationCallback = (void (__fastcall *)(struct _TP_CALLBACK_INSTANCE *, void *))RtlpTpTimerFinalizationCallback;
      v10 = TpAllocTimer(v13, (PTP_TIMER_CALLBACK)RtlpTpTimerCallback, v12, &CallbackEnviron);
      v17 = v10;
      if ( v10 < 0 )
        goto LABEL_16;
      v20.QuadPart = -10000LL * DueTime;
      _InterlockedIncrement((volatile signed __int32 *)TimerQueueHandle);
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)TimerQueueHandle + 1);
      v15 = *((_QWORD *)TimerQueueHandle + 3);
      *BaseAddress = v15;
      BaseAddress[1] = (char *)TimerQueueHandle + 24;
      if ( *(HANDLE *)(v15 + 8) != (char *)TimerQueueHandle + 24 )
        __fastfail(3u);
      *(_QWORD *)(v15 + 8) = BaseAddress;
      *((_QWORD *)TimerQueueHandle + 3) = BaseAddress;
      *Handle = BaseAddress;
      TpSetTimerEx(*v13, &v20, Period, 0);
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)TimerQueueHandle + 1);
      v12 = 0LL;
      BaseAddress = 0LL;
      v10 = 0;
    }
    else
    {
      v10 = -1073741801;
    }
    v17 = v10;
  }
LABEL_16:
  if ( v12 )
  {
    RtlpTpDeleteData(v12 + 2);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    v10 = v17;
  }
  RtlpTpResumeImpersonation(TokenHandle);
  return v10;
}
