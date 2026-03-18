/*
 * XREFs of LookupAccessMaskInTable @ 0x1406870C0
 * Callers:
 *     LocalConvertAclToString @ 0x140684128 (LocalConvertAclToString.c)
 *     LocalGetAclForString @ 0x1406859BC (LocalGetAclForString.c)
 * Callees:
 *     _wcsnicmp @ 0x140144480 (_wcsnicmp.c)
 */

wchar_t **__fastcall LookupAccessMaskInTable(wchar_t *Str1, int a2, int a3)
{
  __int64 v3; // rbx
  const wchar_t **v4; // rsi
  unsigned int v8; // edi
  bool v9; // r14

  v3 = 0LL;
  v4 = (const wchar_t **)&unk_1402D44A8;
  v8 = 0;
  v9 = Str1 != 0LL;
  do
  {
    if ( (a3 & (_DWORD)v4[1]) == a3
      && (v9 ? wcsnicmp(Str1, *(v4 - 1), *(unsigned int *)v4) == 0 : a2 == *((_DWORD *)v4 + 1)) )
    {
      break;
    }
    ++v8;
    v4 += 3;
  }
  while ( v8 < 0x1C );
  if ( v8 < 0x1C )
    return &(&off_1402D44A0)[3 * v8];
  return (wchar_t **)v3;
}
