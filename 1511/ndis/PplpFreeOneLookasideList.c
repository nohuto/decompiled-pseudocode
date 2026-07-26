/*
 * XREFs of PplpFreeOneLookasideList @ 0x1C006F0C0
 * Callers:
 *     PplCreateLookasideList @ 0x1C0021B48 (PplCreateLookasideList.c)
 *     PplDestroyLookasideList @ 0x1C006EE88 (PplDestroyLookasideList.c)
 *     PplHotAddProcCompleteNotify @ 0x1C006EF14 (PplHotAddProcCompleteNotify.c)
 *     PplHotAddProcStartNotify @ 0x1C006EFB4 (PplHotAddProcStartNotify.c)
 * Callees:
 *     <none>
 */

void __fastcall PplpFreeOneLookasideList(__int64 a1, ULONG a2)
{
  if ( *(_BYTE *)(a1 + 112) )
    ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)a1);
  ExFreePoolWithTag((PVOID)a1, a2);
}
