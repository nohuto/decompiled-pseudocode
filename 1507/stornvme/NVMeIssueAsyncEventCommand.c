/*
 * XREFs of NVMeIssueAsyncEventCommand @ 0x1C000C3E0
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C0004400 (NVMeControllerInitPart2.c)
 *     NVMeGetLogPageCompletion @ 0x1C000C010 (NVMeGetLogPageCompletion.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C000C170 (NVMeAsyncEventRequestCompletion.c)
 * Callees:
 *     memset @ 0x1C000EE00 (memset.c)
 */

__int64 __fastcall NVMeIssueAsyncEventCommand(__int64 a1, __int64 a2)
{
  void *v4; // rcx
  __int64 v5; // rax

  v4 = *(void **)(a2 + 96);
  *(_BYTE *)(a2 + 11) = 0;
  memset(v4, 0, 0x10A8uLL);
  v5 = *(_QWORD *)(a2 + 96);
  *(_QWORD *)(a2 + 64) = v5;
  *(_DWORD *)a2 = 1;
  *(_BYTE *)(v5 + 4166) = 1;
  *(_BYTE *)(*(_QWORD *)(a2 + 96) + 4167LL) = 0;
  *(_WORD *)(*(_QWORD *)(a2 + 96) + 4160LL) = 0;
  *(_BYTE *)(*(_QWORD *)(a2 + 96) + 4096LL) = 12;
  *(_QWORD *)(*(_QWORD *)(a2 + 96) + 4216LL) = NVMeAsyncEventRequestCompletion;
  return ProcessCommand(a1, a2 + 8);
}
