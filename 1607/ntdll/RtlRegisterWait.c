/*
 * XREFs of RtlRegisterWait @ 0x180064A90
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlpTpResumeImpersonation @ 0x18003A000 (RtlpTpResumeImpersonation.c)
 *     RtlpTpDeleteData @ 0x18003A138 (RtlpTpDeleteData.c)
 *     TpAllocWait @ 0x18003A570 (TpAllocWait.c)
 *     TpSetWaitEx @ 0x18003BD50 (TpSetWaitEx.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     RtlpTpInitializeData @ 0x180064CF4 (RtlpTpInitializeData.c)
 *     RtlpTpRevertCapture @ 0x180064D68 (RtlpTpRevertCapture.c)
 */

NTSTATUS __cdecl RtlRegisterWait(
        PHANDLE WaitHandle,
        HANDLE Handle,
        WAITORTIMERCALLBACKFUNC Function,
        PVOID Context,
        ULONG Milliseconds,
        ULONG Flags)
{
  int v8; // edi
  PTP_WAIT *Heap; // rax
  PTP_WAIT *v10; // rbx
  PTP_WAIT *v11; // r12
  unsigned int v12; // eax
  char v14; // [rsp+20h] [rbp-98h]
  int v15; // [rsp+24h] [rbp-94h]
  PTP_WAIT *BaseAddress; // [rsp+28h] [rbp-90h]
  HANDLE TokenHandle; // [rsp+30h] [rbp-88h] BYREF
  TP_CALLBACK_ENVIRON_V3 CallbackEnviron; // [rsp+40h] [rbp-78h] BYREF

  v14 = 0;
  TokenHandle = 0LL;
  BaseAddress = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return -1073741823;
  if ( (char *)Handle - 1 > (char *)0xFFFFFFFFFFFFFFFCLL || !Function )
    return -1073741811;
  *WaitHandle = 0LL;
  v8 = RtlpTpRevertCapture(&TokenHandle);
  v15 = v8;
  if ( v8 < 0 )
  {
    v10 = 0LL;
  }
  else
  {
    Heap = (PTP_WAIT *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x60uLL);
    v10 = Heap;
    BaseAddress = Heap;
    if ( Heap )
    {
      v11 = Heap + 6;
      Heap[6] = 0LL;
      v8 = RtlpTpInitializeData((PHANDLE)Heap);
      v15 = v8;
      if ( v8 >= 0 )
      {
        v14 = 1;
        v10[2] = 0LL;
        *((_DWORD *)v10 + 6) = 0;
        v10[4] = (PTP_WAIT)Function;
        v10[5] = (PTP_WAIT)Context;
        v10[7] = (PTP_WAIT)Handle;
        if ( Milliseconds == -1 )
        {
          v10[8] = 0LL;
          v10[9] = 0LL;
        }
        else
        {
          v10[8] = (PTP_WAIT)Milliseconds;
          v10[8] = (PTP_WAIT)(-10000LL * Milliseconds);
          v10[9] = (PTP_WAIT)(v10 + 8);
        }
        v10[10] = 0LL;
        *((_DWORD *)v10 + 22) = 0;
        CallbackEnviron.Version = 3;
        memset(&CallbackEnviron.Pool, 0, 52);
        CallbackEnviron.CallbackPriority = TP_CALLBACK_PRIORITY_NORMAL;
        CallbackEnviron.Size = 72;
        v12 = 0;
        if ( (Flags & 0xC4) != 0 )
          v12 = 2;
        CallbackEnviron.u.Flags = v12;
        if ( (Flags & 0x10) != 0 )
          CallbackEnviron.u.Flags = v12 | 1;
        CallbackEnviron.FinalizationCallback = (void (__fastcall *)(struct _TP_CALLBACK_INSTANCE *, void *))RtlpTpWaitFinalizationCallback;
        v8 = TpAllocWait(v11, RtlpTpWaitCallback, v10, &CallbackEnviron);
        v15 = v8;
        if ( v8 >= 0 )
        {
          RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v10 + 2);
          *WaitHandle = v10;
          TpSetWaitEx(*v11, Handle, (PLARGE_INTEGER)v10[9], 0LL);
          RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v10 + 2);
          v10 = 0LL;
          BaseAddress = 0LL;
          v8 = 0;
          v15 = 0;
        }
      }
    }
    else
    {
      v8 = -1073741801;
      v15 = -1073741801;
    }
  }
  if ( v10 )
  {
    if ( v14 )
      RtlpTpDeleteData((void **)v10);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    v8 = v15;
  }
  RtlpTpResumeImpersonation(TokenHandle);
  return v8;
}
