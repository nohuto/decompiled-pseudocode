/*
 * XREFs of CmpIsHiveLoadingOnOtherThread @ 0x1403E0734
 * Callers:
 *     CmpParseCacheLookupByHash @ 0x1403BB5A4 (CmpParseCacheLookupByHash.c)
 *     CmpDoCreateChild @ 0x1403DF308 (CmpDoCreateChild.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsHiveLoadingOnOtherThread(__int64 a1)
{
  return (*(_DWORD *)(a1 + 144) & 0x20) != 0 && *(struct _KTHREAD **)(a1 + 5416) != KeGetCurrentThread();
}
