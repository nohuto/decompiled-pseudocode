/*
 * XREFs of ExpCheckForLookaside @ 0x140264A98
 * Callers:
 *     ExFreeLargePool @ 0x140046E10 (ExFreeLargePool.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 * Callees:
 *     ExpCheckForLookasideList @ 0x140264AFC (ExpCheckForLookasideList.c)
 *     VfCheckForLookaside @ 0x14074B77C (VfCheckForLookaside.c)
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
