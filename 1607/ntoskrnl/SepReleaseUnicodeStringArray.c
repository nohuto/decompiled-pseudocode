/*
 * XREFs of SepReleaseUnicodeStringArray @ 0x1403E2468
 * Callers:
 *     NtSetCachedSigningLevel2 @ 0x1403E21EC (NtSetCachedSigningLevel2.c)
 *     NtQuerySecurityPolicy @ 0x14068C778 (NtQuerySecurityPolicy.c)
 * Callees:
 *     <none>
 */

void __fastcall SepReleaseUnicodeStringArray(void *a1, char a2)
{
  if ( a2 == 1 )
  {
    if ( a1 )
      ExFreePoolWithTag(a1, 0);
  }
}
