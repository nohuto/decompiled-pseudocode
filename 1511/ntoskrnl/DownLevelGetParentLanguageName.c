/*
 * XREFs of DownLevelGetParentLanguageName @ 0x140217B24
 * Callers:
 *     LdrpGetParentLangId @ 0x1401F9908 (LdrpGetParentLangId.c)
 * Callees:
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1401277F0 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     bsearch @ 0x140144680 (bsearch.c)
 */

__int64 __fastcall DownLevelGetParentLanguageName(const void *a1, char *a2)
{
  int *v3; // rax
  __int64 v4; // rbx
  char *v5; // r8
  unsigned __int64 v6; // rbx

  if ( !a1 )
    return 0LL;
  if ( !a2 )
    return 0LL;
  v3 = (int *)bsearch(
                a1,
                &off_14023F7B0,
                0x19CuLL,
                0x10uLL,
                (int (__cdecl *)(const void *, const void *))CompareLangName);
  if ( !v3 )
    return 0LL;
  v4 = -1LL;
  v5 = (char *)*((_QWORD *)&unk_140241170 + 3 * *((int *)&unk_140241170 + 6 * v3[2] + 4) + 1);
  do
    ++v4;
  while ( *(_WORD *)&v5[2 * v4] );
  v6 = v4 + 1;
  if ( (int)StringCchCopyNW(a2, 85LL, v5, v6) < 0 )
    LODWORD(v6) = 0;
  return (unsigned int)v6;
}
