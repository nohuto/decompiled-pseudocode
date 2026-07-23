/*
 * XREFs of TppInitializeTimerSubQueue @ 0x180073340
 * Callers:
 *     TppInitializeTimerQueue @ 0x1800732D0 (TppInitializeTimerQueue.c)
 * Callees:
 *     TppGetCurrentThreadNumaNode @ 0x18003E1CC (TppGetCurrentThreadNumaNode.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     ZwAssociateWaitCompletionPacket @ 0x1800A7590 (ZwAssociateWaitCompletionPacket.c)
 *     NtCreateTimer2 @ 0x1800A7B10 (NtCreateTimer2.c)
 *     NtCreateWaitCompletionPacket @ 0x1800A7BD0 (NtCreateWaitCompletionPacket.c)
 */

NTSTATUS __fastcall TppInitializeTimerSubQueue(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  HANDLE *v3; // rbx
  NTSTATUS result; // eax
  NTSTATUS WaitCompletionPacket; // ebp
  BOOLEAN AlreadySignaled; // [rsp+60h] [rbp+8h] BYREF

  *(_QWORD *)a1 = 0LL;
  v3 = (HANDLE *)(a1 + 24);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  result = NtCreateTimer2((PHANDLE)(a1 + 24), 0LL, 0LL, 8u, 0x100002u);
  if ( result >= 0 )
  {
    WaitCompletionPacket = NtCreateWaitCompletionPacket((PHANDLE)(a1 + 32), 1u, 0LL);
    if ( WaitCompletionPacket < 0 )
    {
      NtClose(*v3);
    }
    else
    {
      ZwAssociateWaitCompletionPacket(
        *(HANDLE *)(a1 + 32),
        *(HANDLE *)(a2 + 64),
        *v3,
        (PVOID)(a1 + 40),
        (PVOID)(a2 + 112),
        0,
        a3,
        &AlreadySignaled);
      *(_QWORD *)(a1 + 96) = TppTimerQueueExpiration;
      TppGetCurrentThreadNumaNode(a2, (_DWORD *)(a1 + 104), (unsigned __int8 *)(a1 + 108));
      *(_QWORD *)(a1 + 72) = 0LL;
      *(_QWORD *)(a1 + 88) = a1 + 80;
      *(_QWORD *)(a1 + 80) = a1 + 80;
      *(_QWORD *)(a1 + 40) = TppDirectTaskVFuncs;
      *(_DWORD *)(a1 + 48) = *(_DWORD *)(a1 + 104);
      *(_BYTE *)(a1 + 52) = *(_BYTE *)(a1 + 108);
    }
    return WaitCompletionPacket;
  }
  return result;
}
