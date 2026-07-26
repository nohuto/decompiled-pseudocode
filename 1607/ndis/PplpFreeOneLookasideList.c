/*
 * XREFs of PplpFreeOneLookasideList @ 0x1C0073F70
 * Callers:
 *     PplCreateLookasideList @ 0x1C002356C (PplCreateLookasideList.c)
 *     PplDestroyLookasideList @ 0x1C0073D38 (PplDestroyLookasideList.c)
 *     PplHotAddProcCompleteNotify @ 0x1C0073DC4 (PplHotAddProcCompleteNotify.c)
 *     PplHotAddProcStartNotify @ 0x1C0073E64 (PplHotAddProcStartNotify.c)
 * Callees:
 *     <none>
 */

void __fastcall PplpFreeOneLookasideList(__int64 a1, ULONG a2)
{
  if ( *(_BYTE *)(a1 + 112) )
    ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)a1);
  ExFreePoolWithTag((PVOID)a1, a2);
}
