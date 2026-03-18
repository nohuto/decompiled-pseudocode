/*
 * XREFs of NVMeIoSubmissionQueueDelete @ 0x1C000D4B0
 * Callers:
 *     IoQueuesDeletion @ 0x1C0005C68 (IoQueuesDeletion.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002690 (ProcessCommand.c)
 *     memset @ 0x1C0003180 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000ED04 (WaitForCommandCompleteWithCustomTimeout.c)
 */

bool __fastcall NVMeIoSubmissionQueueDelete(__int64 a1, __int16 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8

  *(_BYTE *)(a1 + 571) = 0;
  memset(*(void **)(a1 + 656), 0, 0x1098uLL);
  v4 = *(_QWORD *)(a1 + 656);
  *(_QWORD *)(a1 + 624) = v4;
  *(_DWORD *)(a1 + 560) = 1;
  *(_BYTE *)(v4 + 4245) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 656) + 4245LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a1 + 656) + 4236LL) = 0;
  v5 = *(_QWORD *)(a1 + 656);
  *(_WORD *)(v5 + 4136) = a2;
  *(_BYTE *)(v5 + 4096) = 0;
  ProcessCommand(a1, a1 + 568);
  LOBYTE(v6) = 1;
  WaitForCommandCompleteWithCustomTimeout(a1, a1 + 568, v6, 10000LL);
  return *(_BYTE *)(a1 + 571) == 1;
}
