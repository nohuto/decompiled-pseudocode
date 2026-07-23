/*
 * XREFs of ExpOwnerEntryToThread @ 0x14010CA8C
 * Callers:
 *     ExpReleaseResourceForThreadLite @ 0x1400684D0 (ExpReleaseResourceForThreadLite.c)
 *     ExReinitializeResourceLite @ 0x14010C490 (ExReinitializeResourceLite.c)
 *     ExDeleteResourceLite @ 0x14010C7A0 (ExDeleteResourceLite.c)
 *     ExQuerySystemLockInformation @ 0x1403DFCAC (ExQuerySystemLockInformation.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ExpOwnerEntryToThread(__int64 *a1)
{
  unsigned __int64 result; // rax
  __int64 v2; // rcx

  if ( (a1[1] & 2) != 0 )
    return *a1 & 0xFFFFFFFFFFFFFFFCuLL;
  v2 = *a1;
  result = 0LL;
  if ( (v2 & 3) == 0 )
    return v2;
  return result;
}
