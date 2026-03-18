/*
 * XREFs of NVMeIoSubmissionQueueCreate @ 0x1C000D384
 * Callers:
 *     IoQueuesCreation @ 0x1C0005BD0 (IoQueuesCreation.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002690 (ProcessCommand.c)
 *     memset @ 0x1C0003180 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000ED04 (WaitForCommandCompleteWithCustomTimeout.c)
 */

bool __fastcall NVMeIoSubmissionQueueCreate(__int64 a1, unsigned __int16 a2, char a3)
{
  int v4; // ebx
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r8

  v4 = a2;
  *(_BYTE *)(a1 + 571) = 0;
  memset(*(void **)(a1 + 656), 0, 0x1098uLL);
  v6 = *(_QWORD *)(a1 + 656);
  *(_QWORD *)(a1 + 624) = v6;
  *(_DWORD *)(a1 + 560) = 1;
  *(_BYTE *)(v6 + 4245) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 656) + 4245LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a1 + 656) + 4236LL) = 0;
  v7 = *(_QWORD *)(a1 + 656) + 4096LL;
  v8 = 136LL * (v4 - 1);
  *(_BYTE *)v7 = 1;
  *(_QWORD *)(v7 + 24) = *(_QWORD *)(*(_QWORD *)(a1 + 544) + v8 + 8);
  *(_WORD *)(v7 + 40) = v4;
  *(_WORD *)(v7 + 42) = *(_WORD *)(a1 + 230) - 1;
  *(_DWORD *)(v7 + 44) = *(_DWORD *)(v7 + 44) & 0xFFFFFFF8 | 5;
  *(_WORD *)(v7 + 46) = *(_WORD *)(*(_QWORD *)(a1 + 544) + v8 + 50);
  ProcessCommand(a1, a1 + 568);
  LOBYTE(v9) = a3;
  WaitForCommandCompleteWithCustomTimeout(a1, a1 + 568, v9, 10000LL);
  return *(_BYTE *)(a1 + 571) == 1;
}
