/*
 * XREFs of LookupAccessMaskInTable @ 0x14070A1DC
 * Callers:
 *     LocalConvertAclToString @ 0x140708CD8 (LocalConvertAclToString.c)
 * Callees:
 *     <none>
 */

wchar_t **__fastcall LookupAccessMaskInTable(__int64 a1, int a2, int a3)
{
  __int64 v3; // r10
  _DWORD *v4; // r9
  unsigned int i; // ecx

  v3 = 0LL;
  v4 = &unk_1403235DC;
  for ( i = 0; i < 0x1C; ++i )
  {
    if ( (a3 & v4[1]) == a3 && a2 == *v4 )
      break;
    v4 += 6;
  }
  if ( i < 0x1C )
    return &(&off_1403235D0)[3 * i];
  return (wchar_t **)v3;
}
