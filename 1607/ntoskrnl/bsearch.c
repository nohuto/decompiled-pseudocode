/*
 * XREFs of bsearch @ 0x14014DAA0
 * Callers:
 *     DownLevelLangIDToLanguageName @ 0x1401323C4 (DownLevelLangIDToLanguageName.c)
 *     DownLevelLanguageNameToLangID @ 0x1401409B8 (DownLevelLanguageNameToLangID.c)
 *     DownLevelGetParentLanguageName @ 0x140231CF4 (DownLevelGetParentLanguageName.c)
 *     EtwpIsGuidAllowed @ 0x140491F64 (EtwpIsGuidAllowed.c)
 *     sub_1404A4A10 @ 0x1404A4A10 (sub_1404A4A10.c)
 *     ExpFindFastCacheDescriptor @ 0x1406AEFD0 (ExpFindFastCacheDescriptor.c)
 *     sub_1406AF038 @ 0x1406AF038 (sub_1406AF038.c)
 * Callees:
 *     xHalFreeMessageTarget @ 0x140130D64 (xHalFreeMessageTarget.c)
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
  if ( (Base || !NumOfElements) && SizeOfElements && PtFuncCompare )
  {
    xHalFreeMessageTarget();
    while ( v8 <= v7 )
    {
      v11 = v6 >> 1;
      if ( !(v6 >> 1) )
      {
        if ( !v6 )
          return 0LL;
        if ( ((unsigned int (__fastcall *)(const void *, char *))PtFuncCompare)(Key, v8) )
          return 0LL;
        return v8;
      }
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
    }
  }
  else
  {
    xHalFreeMessageTarget();
  }
  return 0LL;
}
