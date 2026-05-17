/*
 * XREFs of bsearch @ 0x180098050
 * Callers:
 *     RtlpFindGuidInSection @ 0x180012990 (RtlpFindGuidInSection.c)
 *     RtlpLocateActivationContextSection @ 0x180016240 (RtlpLocateActivationContextSection.c)
 *     RtlpFindUnicodeStringInSection @ 0x18001653C (RtlpFindUnicodeStringInSection.c)
 *     RtlQueryProtectedPolicy @ 0x180088F40 (RtlQueryProtectedPolicy.c)
 *     RtlSetProtectedPolicy @ 0x1800E9E40 (RtlSetProtectedPolicy.c)
 * Callees:
 *     _invalid_parameter @ 0x180095768 (_invalid_parameter.c)
 *     _guard_check_icall @ 0x18009BCC8 (_guard_check_icall.c)
 */

void *__cdecl bsearch(
        const void *Key,
        const void *Base,
        size_t NumOfElements,
        size_t SizeOfElements,
        _CoreCrtNonSecureSearchSortCompareFunction CompareFunction)
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
  if ( (Base || !NumOfElements) && SizeOfElements && CompareFunction )
  {
    while ( v8 <= v7 )
    {
      v11 = v6 >> 1;
      if ( !(v6 >> 1) )
      {
        if ( !v6 )
          return 0LL;
        if ( ((unsigned int (__fastcall *)(const void *, char *))CompareFunction)(Key, v8) )
          return 0LL;
        return v8;
      }
      v12 = (v6 & 1) == 0;
      v6 = v11 - 1;
      if ( !v12 )
        v6 = v11;
      v13 = &v8[SizeOfElements * v6];
      v14 = ((__int64 (__fastcall *)(const void *, char *))CompareFunction)(Key, v13);
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
    invalid_parameter();
  }
  return 0LL;
}
