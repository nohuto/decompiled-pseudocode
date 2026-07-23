/*
 * XREFs of TpAllocWait @ 0x180009600
 * Callers:
 *     RtlRegisterWait @ 0x180007100 (RtlRegisterWait.c)
 *     RtlpWnfRegisterTpNotification @ 0x180051338 (RtlpWnfRegisterTpNotification.c)
 *     EtwpRegisterTpNotificationOnce @ 0x180051D60 (EtwpRegisterTpNotificationOnce.c)
 * Callees:
 *     TppInitializeTimer @ 0x18000CF00 (TppInitializeTimer.c)
 *     TppGetCurrentThreadNumaNode @ 0x18000D404 (TppGetCurrentThreadNumaNode.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     NtCreateWaitCompletionPacket @ 0x1800A6830 (NtCreateWaitCompletionPacket.c)
 *     TppRaiseInvalidParameter @ 0x1800F5658 (TppRaiseInvalidParameter.c)
 */

NTSTATUS __cdecl TpAllocWait(
        PTP_WAIT *WaitReturn,
        PTP_WAIT_CALLBACK Callback,
        PVOID Context,
        PTP_CALLBACK_ENVIRON CallbackEnviron)
{
  int v4; // esi
  int v5; // r12d
  PTP_WAIT *v7; // r15
  char *Heap; // rbx
  HANDLE *v9; // r14
  int v10; // edx
  int WaitCompletionPacket; // edi
  __int64 v12; // rcx
  char *v13; // rsi
  _DWORD *v14; // r14
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (int)CallbackEnviron;
  v5 = (int)Context;
  v7 = WaitReturn;
  if ( !WaitReturn
    || !Callback
    || CallbackEnviron && (CallbackEnviron->u.Flags & 0xFFFFFFFC) != 0
    || (WaitReturn = (PTP_WAIT *)NtCurrentPeb()->Ldr, *((_BYTE *)WaitReturn + 72)) )
  {
    TppRaiseInvalidParameter(WaitReturn, Callback);
    return -1073741811;
  }
  else
  {
    Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 1835008) | 8, 0x1D0uLL);
    if ( !Heap )
      return -1073741801;
    v9 = (HANDLE *)(Heap + 360);
    *((_QWORD *)Heap + 21) = retaddr;
    WaitCompletionPacket = NtCreateWaitCompletionPacket((PHANDLE)Heap + 45, 1u, 0LL);
    if ( WaitCompletionPacket < 0
      || (LOBYTE(v10) = 1,
          WaitCompletionPacket = TppInitializeTimer(
                                   (_DWORD)Heap,
                                   v10,
                                   v5,
                                   v4,
                                   (__int64)TppWaitpCleanupGroupMemberVFuncs,
                                   (__int64)&TppWaitpTaskVFuncs),
          WaitCompletionPacket < 0) )
    {
      if ( *v9 )
        NtClose(*v9);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 1835008, Heap);
    }
    else
    {
      v12 = *((_QWORD *)Heap + 17);
      *((_QWORD *)Heap + 55) = TppWaitCompletion;
      v13 = Heap + 452;
      v14 = Heap + 448;
      if ( v12 )
      {
        TppGetCurrentThreadNumaNode(v12, Heap + 448, Heap + 452);
      }
      else
      {
        *v14 = 0;
        *v13 = 0;
      }
      *((_QWORD *)Heap + 52) = 0LL;
      *((_QWORD *)Heap + 54) = Heap + 424;
      *((_QWORD *)Heap + 53) = Heap + 424;
      *((_QWORD *)Heap + 48) = TppDirectTaskVFuncs;
      *((_DWORD *)Heap + 98) = *v14;
      Heap[396] = *v13;
      *((_QWORD *)Heap + 10) = Callback;
      *v7 = (PTP_WAIT)Heap;
    }
    return WaitCompletionPacket;
  }
}
