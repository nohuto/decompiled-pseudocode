/*
 * XREFs of NVMeIoCompletionQueueCreate @ 0x1C000D18C
 * Callers:
 *     IoQueuesCreation @ 0x1C0005BD0 (IoQueuesCreation.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002690 (ProcessCommand.c)
 *     memset @ 0x1C0003180 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000ED04 (WaitForCommandCompleteWithCustomTimeout.c)
 */

bool __fastcall NVMeIoCompletionQueueCreate(__int64 a1, unsigned __int16 a2, char a3)
{
  int v4; // ebx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // eax
  unsigned int v10; // eax
  __int64 v11; // r8

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
  v8 = 168LL * (v4 - 1);
  *(_BYTE *)v7 = 5;
  *(_QWORD *)(v7 + 24) = *(_QWORD *)(*(_QWORD *)(a1 + 552) + v8 + 8);
  *(_WORD *)(v7 + 40) = v4;
  LOWORD(v6) = *(_WORD *)(a1 + 230);
  *(_DWORD *)(v7 + 44) |= 1u;
  *(_WORD *)(v7 + 42) = v6 - 1;
  v9 = *(_DWORD *)(v7 + 44);
  if ( *(_BYTE *)(a1 + 16) )
    v10 = v9 & 0xFFFFFFFD;
  else
    v10 = v9 | 2;
  *(_DWORD *)(v7 + 44) = v10;
  *(_WORD *)(v7 + 46) = *(_WORD *)(*(_QWORD *)(a1 + 552) + v8 + 104);
  ProcessCommand(a1, a1 + 568);
  LOBYTE(v11) = a3;
  WaitForCommandCompleteWithCustomTimeout(a1, a1 + 568, v11, 10000LL);
  return *(_BYTE *)(a1 + 571) == 1;
}
