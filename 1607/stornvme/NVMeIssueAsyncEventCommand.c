/*
 * XREFs of NVMeIssueAsyncEventCommand @ 0x1C000D574
 * Callers:
 *     NVMeStartAsyncEventCommands @ 0x1C0008574 (NVMeStartAsyncEventCommands.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C000C870 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeGetLogPageCompletion @ 0x1C000CF90 (NVMeGetLogPageCompletion.c)
 * Callees:
 *     memset @ 0x1C0003180 (memset.c)
 */

__int64 __fastcall NVMeIssueAsyncEventCommand(__int64 a1, __int64 a2)
{
  void *v4; // rcx
  __int64 v5; // rax

  v4 = *(void **)(a2 + 96);
  *(_BYTE *)(a2 + 11) = 0;
  memset(v4, 0, 0x1098uLL);
  v5 = *(_QWORD *)(a2 + 96);
  *(_QWORD *)(a2 + 64) = v5;
  *(_DWORD *)a2 = 1;
  *(_BYTE *)(v5 + 4245) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a2 + 96) + 4245LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a2 + 96) + 4236LL) = 0;
  *(_BYTE *)(*(_QWORD *)(a2 + 96) + 4096LL) = 12;
  *(_QWORD *)(*(_QWORD *)(a2 + 96) + 4216LL) = NVMeAsyncEventRequestCompletion;
  return ProcessCommand(a1, a2 + 8);
}
