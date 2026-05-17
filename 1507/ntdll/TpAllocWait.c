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

__int64 __fastcall TpAllocWait(_PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // r12d
  _QWORD *p_Length; // r15
  __int64 Heap; // rbx
  HANDLE *v9; // r14
  int WaitCompletionPacket; // edi
  __int64 v11; // rcx
  _BYTE *v12; // rsi
  _DWORD *v13; // r14
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v5 = a3;
  p_Length = &Ldr->Length;
  if ( !Ldr
    || !a2
    || a4 && (*(_DWORD *)(a4 + 56) & 0xFFFFFFFC) != 0
    || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    TppRaiseInvalidParameter(Ldr, a2, a3);
    return 3221225485LL;
  }
  else
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 1835008) | 8u, 464LL);
    if ( Heap )
    {
      v9 = (HANDLE *)(Heap + 360);
      *(_QWORD *)(Heap + 168) = retaddr;
      WaitCompletionPacket = NtCreateWaitCompletionPacket(Heap + 360, 1LL);
      if ( WaitCompletionPacket < 0
        || (WaitCompletionPacket = TppInitializeTimer(
                                     Heap,
                                     1,
                                     v5,
                                     a4,
                                     (__int64)TppWaitpCleanupGroupMemberVFuncs,
                                     (__int64)TppWaitpTaskVFuncs),
            WaitCompletionPacket < 0) )
      {
        if ( *v9 )
          NtClose(*v9);
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 1835008, Heap);
      }
      else
      {
        v11 = *(_QWORD *)(Heap + 136);
        *(_QWORD *)(Heap + 440) = TppWaitCompletion;
        v12 = (_BYTE *)(Heap + 452);
        v13 = (_DWORD *)(Heap + 448);
        if ( v11 )
        {
          TppGetCurrentThreadNumaNode(v11, (_DWORD *)(Heap + 448), (unsigned __int8 *)(Heap + 452));
        }
        else
        {
          *v13 = 0;
          *v12 = 0;
        }
        *(_QWORD *)(Heap + 416) = 0LL;
        *(_QWORD *)(Heap + 432) = Heap + 424;
        *(_QWORD *)(Heap + 424) = Heap + 424;
        *(_QWORD *)(Heap + 384) = TppDirectTaskVFuncs;
        *(_DWORD *)(Heap + 392) = *v13;
        *(_BYTE *)(Heap + 396) = *v12;
        *(_QWORD *)(Heap + 80) = a2;
        *p_Length = Heap;
      }
    }
    else
    {
      return (unsigned int)-1073741801;
    }
    return (unsigned int)WaitCompletionPacket;
  }
}
