/*
 * XREFs of PplpFreeOneLookasideList @ 0x1C006FC40
 * Callers:
 *     PplCreateLookasideList @ 0x1C001D790 (PplCreateLookasideList.c)
 *     PplDestroyLookasideList @ 0x1C006FA08 (PplDestroyLookasideList.c)
 *     PplHotAddProcCompleteNotify @ 0x1C006FA94 (PplHotAddProcCompleteNotify.c)
 *     PplHotAddProcStartNotify @ 0x1C006FB34 (PplHotAddProcStartNotify.c)
 * Callees:
 *     <none>
 */

void __fastcall PplpFreeOneLookasideList(__int64 a1, ULONG a2)
{
  if ( *(_BYTE *)(a1 + 112) )
    ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)a1);
  ExFreePoolWithTag((PVOID)a1, a2);
}
