/*
 * XREFs of StorDeleteScsiIdentity @ 0x1C000F658
 * Callers:
 *     RaidDeleteBusEnumerator @ 0x1C000C390 (RaidDeleteBusEnumerator.c)
 *     RaidBusEnumeratorProcessBusUnit @ 0x1C000F52C (RaidBusEnumeratorProcessBusUnit.c)
 *     RaidUnitFreeResources @ 0x1C0011CBC (RaidUnitFreeResources.c)
 * Callees:
 *     <none>
 */

void *__fastcall StorDeleteScsiIdentity(_QWORD *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx

  v2 = (void *)*a1;
  if ( v2 )
    ExFreePoolWithTag(v2, 0x32316152u);
  v3 = (void *)a1[2];
  if ( v3 )
    ExFreePoolWithTag(v3, 0x53446152u);
  a1[2] = 0LL;
  *((_DWORD *)a1 + 2) = 0;
  v4 = (void *)a1[4];
  if ( v4 )
    ExFreePoolWithTag(v4, 0x32316152u);
  v5 = (void *)a1[5];
  if ( v5 )
    ExFreePoolWithTag(v5, 0x32316152u);
  return memset(a1, 0, 0x30uLL);
}
