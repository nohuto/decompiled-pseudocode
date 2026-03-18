/*
 * XREFs of ExpCheckForLookaside @ 0x14022E52C
 * Callers:
 *     ExFreeLargePool @ 0x140010BE0 (ExFreeLargePool.c)
 *     ExpFreePoolChecks @ 0x14022D080 (ExpFreePoolChecks.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 * Callees:
 *     ExpCheckForLookasideList @ 0x14022E590 (ExpCheckForLookasideList.c)
 *     VfCheckForLookaside @ 0x140717598 (VfCheckForLookaside.c)
 */

__int64 __fastcall ExpCheckForLookaside(__int64 a1, ULONG_PTR a2)
{
  __int64 result; // rax

  if ( (MmVerifierData & 0x800) == 0 || (result = VfCheckForLookaside(a1, a2), !(_DWORD)result) )
  {
    ExpCheckForLookasideList(a1, a2, &ExNPagedLookasideListHead, &ExNPagedLookasideLock);
    return ExpCheckForLookasideList(a1, a2, &ExPagedLookasideListHead, &ExPagedLookasideLock);
  }
  return result;
}
