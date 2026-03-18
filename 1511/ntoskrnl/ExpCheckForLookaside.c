/*
 * XREFs of ExpCheckForLookaside @ 0x1402148BC
 * Callers:
 *     ExFreeLargePool @ 0x1400892D0 (ExFreeLargePool.c)
 *     ExpFreePoolChecks @ 0x140212DB8 (ExpFreePoolChecks.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 * Callees:
 *     ExpCheckForLookasideList @ 0x140214920 (ExpCheckForLookasideList.c)
 *     VfCheckForLookaside @ 0x1406C8BF0 (VfCheckForLookaside.c)
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
