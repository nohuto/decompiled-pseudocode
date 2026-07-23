/*
 * XREFs of TpAllocWait @ 0x18007CFD0
 * Callers:
 *     RtlpWnfRegisterTpNotification @ 0x18007AFA4 (RtlpWnfRegisterTpNotification.c)
 *     EtwpRegisterTpNotificationOnce @ 0x18007B4F0 (EtwpRegisterTpNotificationOnce.c)
 *     RtlRegisterWait @ 0x18007BDC0 (RtlRegisterWait.c)
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     TppInitializeTimer @ 0x18003DAB8 (TppInitializeTimer.c)
 *     TppGetCurrentThreadNumaNode @ 0x18003DE48 (TppGetCurrentThreadNumaNode.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     NtCreateWaitCompletionPacket @ 0x1800944B0 (NtCreateWaitCompletionPacket.c)
 *     TppRaiseInvalidParameter @ 0x1800F5C58 (TppRaiseInvalidParameter.c)
 */

NTSTATUS __cdecl TpAllocWait(
        PTP_WAIT *WaitReturn,
        PTP_WAIT_CALLBACK Callback,
        PVOID Context,
        PTP_CALLBACK_ENVIRON CallbackEnviron)
{
  int v5; // r12d
  PTP_WAIT *v7; // r15
  char *Heap; // rbx
  HANDLE *v9; // r14
  NTSTATUS WaitCompletionPacket; // edi
  __int64 v11; // rcx
  char *v12; // rsi
  _DWORD *v13; // r14
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

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
      || (WaitCompletionPacket = TppInitializeTimer(
                                   (__int64)Heap,
                                   1,
                                   v5,
                                   (__int64)CallbackEnviron,
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
      v11 = *((_QWORD *)Heap + 17);
      *((_QWORD *)Heap + 55) = TppWaitCompletion;
      v12 = Heap + 452;
      v13 = Heap + 448;
      if ( v11 )
      {
        TppGetCurrentThreadNumaNode(v11, (_DWORD *)Heap + 112, (unsigned __int8 *)Heap + 452);
      }
      else
      {
        *v13 = 0;
        *v12 = 0;
      }
      *((_QWORD *)Heap + 52) = 0LL;
      *((_QWORD *)Heap + 54) = Heap + 424;
      *((_QWORD *)Heap + 53) = Heap + 424;
      *((_QWORD *)Heap + 48) = TppDirectTaskVFuncs;
      *((_DWORD *)Heap + 98) = *v13;
      Heap[396] = *v12;
      *((_QWORD *)Heap + 10) = Callback;
      *v7 = (PTP_WAIT)Heap;
    }
    return WaitCompletionPacket;
  }
}
