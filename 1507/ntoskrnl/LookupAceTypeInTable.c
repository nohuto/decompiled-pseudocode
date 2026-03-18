/*
 * XREFs of LookupAceTypeInTable @ 0x14070A264
 * Callers:
 *     LocalConvertAclToString @ 0x140708CD8 (LocalConvertAclToString.c)
 * Callees:
 *     <none>
 */

wchar_t **__fastcall LookupAceTypeInTable(__int64 a1, int a2, int a3)
{
  __int64 v3; // r10
  _DWORD *v4; // r9
  unsigned int i; // ecx

  v3 = 0LL;
  v4 = &unk_14032345C;
  for ( i = 0; i < 0x10; ++i )
  {
    if ( (a3 & v4[1]) == a3 && a2 == *v4 )
      break;
    v4 += 6;
  }
  if ( i < 0x10 )
    return &(&off_140323450)[3 * i];
  return (wchar_t **)v3;
}
