/*
 * XREFs of CmpIsHiveLoadingOnOtherThread @ 0x1404A0EB8
 * Callers:
 *     CmpPerformCompleteKcbCacheLookup @ 0x1404A000C (CmpPerformCompleteKcbCacheLookup.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsHiveLoadingOnOtherThread(__int64 a1)
{
  return (*(_DWORD *)(a1 + 144) & 0x20) != 0 && *(struct _KTHREAD **)(a1 + 5416) != KeGetCurrentThread();
}
