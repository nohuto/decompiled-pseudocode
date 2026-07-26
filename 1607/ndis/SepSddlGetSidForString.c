/*
 * XREFs of SepSddlGetSidForString @ 0x1C009D7D4
 * Callers:
 *     SepSddlGetAclForString @ 0x1C009D468 (SepSddlGetAclForString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepSddlGetSidForString(wchar_t *Str1, _QWORD *a2, _QWORD *a3)
{
  unsigned int *v4; // rsi
  __int64 v7; // rbx
  __int64 v8; // rbx
  bool v9; // zf

  v4 = (unsigned int *)&unk_1C0088674;
  v7 = 0LL;
  while ( _wcsnicmp(Str1, (const wchar_t *)&unk_1C0088660 + 12 * v7 + 6, *v4) )
  {
    v7 = (unsigned int)(v7 + 1);
    v4 += 6;
    if ( (unsigned int)v7 >= 0xE )
    {
      *a2 = 0LL;
      return 3221225587LL;
    }
  }
  v8 = 3 * v7;
  v9 = *((_DWORD *)&unk_1C0088660 + 2 * v8 + 2) == 1;
  *a3 = &Str1[*((unsigned int *)&unk_1C0088660 + 2 * v8 + 5)];
  if ( !v9 || IoIsWdmVersionAvailable(1u, 0x20u) )
    *a2 = *(LUID *)((char *)&SeExports->SeCreateTokenPrivilege + *((_QWORD *)&unk_1C0088660 + v8));
  else
    *a2 = 0LL;
  return 0LL;
}
