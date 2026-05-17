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
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 1835008) | 8u, 464LL);
    if ( Heap )
    {
      v9 = (HANDLE *)(Heap + 360);
      *(_QWORD *)(Heap + 168) = retaddr;
      WaitCompletionPacket = NtCreateWaitCompletionPacket(Heap + 360, 1LL);
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
        v12 = *(_QWORD *)(Heap + 136);
        *(_QWORD *)(Heap + 440) = TppWaitCompletion;
        v13 = (_BYTE *)(Heap + 452);
        v14 = (_DWORD *)(Heap + 448);
        if ( v12 )
        {
          TppGetCurrentThreadNumaNode(v12, Heap + 448, Heap + 452);
        }
        else
        {
          *v14 = 0;
          *v13 = 0;
        }
        *(_QWORD *)(Heap + 416) = 0LL;
        *(_QWORD *)(Heap + 432) = Heap + 424;
        *(_QWORD *)(Heap + 424) = Heap + 424;
        *(_QWORD *)(Heap + 384) = TppDirectTaskVFuncs;
        *(_DWORD *)(Heap + 392) = *v14;
        *(_BYTE *)(Heap + 396) = *v13;
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
