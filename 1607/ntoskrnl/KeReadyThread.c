/*
 * XREFs of KeReadyThread @ 0x1400F0DBC
 * Callers:
 *     PspInsertThread @ 0x1404F9B40 (PspInsertThread.c)
 * Callees:
 *     KiInSwapSingleProcess @ 0x1400CCAA4 (KiInSwapSingleProcess.c)
 *     KiFastReadyThread @ 0x1400F05F8 (KiFastReadyThread.c)
 */

char __fastcall KeReadyThread(__int64 a1, __int64 a2, _SINGLE_LIST_ENTRY *a3, __int64 a4)
{
  __int64 v4; // rdx
  char result; // al
  unsigned __int8 CurrentIrql; // r8

  v4 = *(_QWORD *)(a1 + 184);
  if ( (*(_DWORD *)(v4 + 572) & 7) == 0 )
    return KiFastReadyThread(a1, v4, a3, a4);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  result = KiInSwapSingleProcess(a1, v4, CurrentIrql);
  if ( !result )
    return KiFastReadyThread(a1, v4, a3, a4);
  return result;
}
