/*
 * XREFs of bsearch_s @ 0x14014E10C
 * Callers:
 *     SeQuerySecureBootPlatformManifest @ 0x140693FE0 (SeQuerySecureBootPlatformManifest.c)
 * Callees:
 *     xHalFreeMessageTarget @ 0x1401312D4 (xHalFreeMessageTarget.c)
 */

void *__cdecl bsearch_s(
        const void *Key,
        const void *Base,
        rsize_t NumOfElements,
        rsize_t SizeOfElements,
        int (__cdecl *PtFuncCompare)(void *, const void *, const void *),
        void *Context)
{
  rsize_t v7; // rsi
  char *v8; // rdi
  char *v9; // rbx
  rsize_t v12; // rbp
  bool v13; // zf
  char *v14; // r14
  int v15; // eax

  v7 = NumOfElements;
  v8 = (char *)Base + SizeOfElements * (NumOfElements - 1);
  v9 = (char *)Base;
  if ( (Base || !NumOfElements) && SizeOfElements && PtFuncCompare )
  {
    xHalFreeMessageTarget();
    while ( v9 <= v8 )
    {
      v12 = v7 >> 1;
      if ( !(v7 >> 1) )
      {
        if ( !v7 )
          return 0LL;
        if ( ((unsigned int (__fastcall *)(void *, const void *, char *))PtFuncCompare)(Context, Key, v9) )
          return 0LL;
        return v9;
      }
      v13 = (v7 & 1) == 0;
      v7 = v12 - 1;
      if ( !v13 )
        v7 = v12;
      v14 = &v9[SizeOfElements * v7];
      v15 = ((__int64 (__fastcall *)(void *, const void *, char *))PtFuncCompare)(Context, Key, v14);
      if ( !v15 )
        return &v9[SizeOfElements * v7];
      if ( v15 >= 0 )
      {
        v9 = &v14[SizeOfElements];
        v7 = v12;
      }
      else
      {
        v8 = &v14[-SizeOfElements];
      }
    }
  }
  else
  {
    xHalFreeMessageTarget();
  }
  return 0LL;
}
