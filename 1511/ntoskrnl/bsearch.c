/*
 * XREFs of bsearch @ 0x140144680
 * Callers:
 *     DownLevelLangIDToLanguageName @ 0x140127874 (DownLevelLangIDToLanguageName.c)
 *     DownLevelLanguageNameToLangID @ 0x14013B11C (DownLevelLanguageNameToLangID.c)
 *     DownLevelGetParentLanguageName @ 0x140217B24 (DownLevelGetParentLanguageName.c)
 *     EtwpIsGuidAllowed @ 0x14046D428 (EtwpIsGuidAllowed.c)
 *     sub_14048A4FC @ 0x14048A4FC (sub_14048A4FC.c)
 *     ExpFindFastCacheDescriptor @ 0x1405170F0 (ExpFindFastCacheDescriptor.c)
 *     sub_14066994C @ 0x14066994C (sub_14066994C.c)
 * Callees:
 *     PopPoCoalescinCallback @ 0x1401264C0 (PopPoCoalescinCallback.c)
 */

void *__cdecl bsearch(
        const void *Key,
        const void *Base,
        size_t NumOfElements,
        size_t SizeOfElements,
        int (__cdecl *PtFuncCompare)(const void *, const void *))
{
  size_t v6; // rsi
  char *v7; // rdi
  char *v8; // rbx
  size_t v11; // rbp
  bool v12; // zf
  char *v13; // r14
  int v14; // eax

  v6 = NumOfElements;
  v7 = (char *)Base + SizeOfElements * (NumOfElements - 1);
  v8 = (char *)Base;
  if ( !Base && NumOfElements || !SizeOfElements || !PtFuncCompare )
  {
    PopPoCoalescinCallback();
    return 0LL;
  }
  if ( Base > v7 )
    return 0LL;
  while ( 1 )
  {
    v11 = v6 >> 1;
    if ( !(v6 >> 1) )
      break;
    v12 = (v6 & 1) == 0;
    v6 = v11 - 1;
    if ( !v12 )
      v6 = v11;
    v13 = &v8[SizeOfElements * v6];
    v14 = ((__int64 (__fastcall *)(const void *, char *))PtFuncCompare)(Key, v13);
    if ( !v14 )
      return &v8[SizeOfElements * v6];
    if ( v14 >= 0 )
    {
      v8 = &v13[SizeOfElements];
      v6 = v11;
    }
    else
    {
      v7 = &v13[-SizeOfElements];
    }
    if ( v8 > v7 )
      return 0LL;
  }
  if ( !v6 )
    return 0LL;
  if ( ((unsigned int (__fastcall *)(const void *, char *))PtFuncCompare)(Key, v8) )
    return 0LL;
  return v8;
}
