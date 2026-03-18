/*
 * XREFs of CmpIsHiveLoadingOnOtherThread @ 0x140449E34
 * Callers:
 *     CmpDoCreateChild @ 0x140448EE0 (CmpDoCreateChild.c)
 *     CmpParseCacheLookupByHash @ 0x14044C0C8 (CmpParseCacheLookupByHash.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsHiveLoadingOnOtherThread(__int64 a1)
{
  return (*(_DWORD *)(a1 + 144) & 0x20) != 0 && *(struct _KTHREAD **)(a1 + 5416) != KeGetCurrentThread();
}
