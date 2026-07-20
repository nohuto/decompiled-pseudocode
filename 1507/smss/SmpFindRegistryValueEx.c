/*
 * XREFs of SmpFindRegistryValueEx @ 0x14000A644
 * Callers:
 *     SmpBuildSubSystemLists @ 0x140009D40 (SmpBuildSubSystemLists.c)
 * Callees:
 *     <none>
 */

const UNICODE_STRING *__fastcall SmpFindRegistryValueEx(const UNICODE_STRING **a1, const UNICODE_STRING *a2)
{
  const UNICODE_STRING *v2; // rbx

  v2 = *a1;
  if ( *a1 == (const UNICODE_STRING *)a1 )
    return 0LL;
  while ( RtlCompareUnicodeString(v2 + 1, a2, 1u) )
  {
    v2 = *(const UNICODE_STRING **)&v2->Length;
    if ( v2 == (const UNICODE_STRING *)a1 )
      return 0LL;
  }
  return v2;
}
