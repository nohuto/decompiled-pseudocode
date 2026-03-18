/*
 * XREFs of LookupAceFlagsInTable @ 0x14070A220
 * Callers:
 *     LocalConvertAclToString @ 0x140708CD8 (LocalConvertAclToString.c)
 * Callees:
 *     <none>
 */

wchar_t **__fastcall LookupAceFlagsInTable(__int64 a1, int a2, int a3)
{
  __int64 v3; // r10
  _DWORD *v4; // r9
  unsigned int i; // ecx

  v3 = 0LL;
  v4 = &unk_1403233AC;
  for ( i = 0; i < 7; ++i )
  {
    if ( (a3 & v4[1]) == a3 && a2 == *v4 )
      break;
    v4 += 6;
  }
  if ( i < 7 )
    return &(&off_1403233A0)[3 * i];
  return (wchar_t **)v3;
}
