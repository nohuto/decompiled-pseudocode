/*
 * XREFs of TpAllocWait @ 0x18003A580
 * Callers:
 *     RtlRegisterWait @ 0x180064AA0 (RtlRegisterWait.c)
 *     EtwpRegisterTpNotificationOnce @ 0x180081530 (EtwpRegisterTpNotificationOnce.c)
 *     RtlpWnfRegisterTpNotification @ 0x180082A94 (RtlpWnfRegisterTpNotification.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     TppInitializeTimer @ 0x18003D268 (TppInitializeTimer.c)
 *     TppGetCurrentThreadNumaNode @ 0x18003E1DC (TppGetCurrentThreadNumaNode.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtCreateWaitCompletionPacket @ 0x1800A7BD0 (NtCreateWaitCompletionPacket.c)
 *     TppRaiseInvalidParameter @ 0x1800FE5C4 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpAllocWait(__int64 *a1, __int64 a2, int a3, __int64 a4)
{
  int v4; // esi
  __int64 Heap; // rbx
  HANDLE *v9; // r14
  int v10; // edx
  int WaitCompletionPacket; // edi
  __int64 v12; // rcx
  _BYTE *v13; // rsi
  _DWORD *v14; // r14
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v4 = a4;
  if ( !a1 || !a2 || a4 && (*(_DWORD *)(a4 + 56) & 0xFFFFFFFC) != 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter();
    return 3221225485LL;
  }
  else
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 1835008) | 8u, 0x1D8uLL);
    if ( Heap )
    {
      v9 = (HANDLE *)(Heap + 368);
      *(_QWORD *)(Heap + 176) = retaddr;
      WaitCompletionPacket = NtCreateWaitCompletionPacket(Heap + 368, 1LL);
      if ( WaitCompletionPacket < 0
        || (LOBYTE(v10) = 1,
            WaitCompletionPacket = TppInitializeTimer(
                                     Heap,
                                     v10,
                                     a3,
                                     v4,
                                     (__int64)TppWaitpCleanupGroupMemberVFuncs,
                                     (__int64)TppWaitpTaskVFuncs),
            WaitCompletionPacket < 0) )
      {
        if ( *v9 )
          NtClose(*v9);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 1835008), Heap);
      }
      else
      {
        v12 = *(_QWORD *)(Heap + 144);
        *(_QWORD *)(Heap + 448) = TppWaitCompletion;
        v13 = (_BYTE *)(Heap + 460);
        v14 = (_DWORD *)(Heap + 456);
        if ( v12 )
        {
          TppGetCurrentThreadNumaNode(v12, Heap + 456, Heap + 460);
        }
        else
        {
          *v14 = 0;
          *v13 = 0;
        }
        *(_QWORD *)(Heap + 424) = 0LL;
        *(_QWORD *)(Heap + 440) = Heap + 432;
        *(_QWORD *)(Heap + 432) = Heap + 432;
        *(_QWORD *)(Heap + 392) = TppDirectTaskVFuncs;
        *(_DWORD *)(Heap + 400) = *v14;
        *(_BYTE *)(Heap + 404) = *v13;
        *(_QWORD *)(Heap + 80) = a2;
        *a1 = Heap;
      }
    }
    else
    {
      return (unsigned int)-1073741801;
    }
    return (unsigned int)WaitCompletionPacket;
  }
}
