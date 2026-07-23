/*
 * XREFs of LdrpGetMappingFromCacheEntry @ 0x14021147C
 * Callers:
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1400F8308 (LdrpGetAlternateResourceModuleHandleEx.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140013DB8 (RtlImageNtHeader.c)
 */

char __fastcall LdrpGetMappingFromCacheEntry(unsigned int a1, unsigned __int64 a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 SizeOfImage; // rdx
  PIMAGE_NT_HEADERS v10; // rax
  unsigned __int16 Magic; // cx
  char result; // al

  if ( !a2 )
    return 0;
  if ( !a3 )
    return 0;
  if ( a1 >= AlternateResourceModuleCount )
    return 0;
  _mm_lfence();
  v7 = 9LL * a1;
  v8 = *((_QWORD *)AlternateResourceModules + v7 + 4);
  SizeOfImage = *((_QWORD *)AlternateResourceModules + v7 + 6);
  if ( (unsigned __int64)(v8 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return 0;
  if ( !SizeOfImage )
  {
    v10 = RtlImageNtHeader((PVOID)(v8 & 0xFFFFFFFFFFFFFFFCuLL));
    if ( !v10 )
      return 0;
    Magic = v10->OptionalHeader.Magic;
    if ( Magic == 267 || Magic == 523 )
      SizeOfImage = v10->OptionalHeader.SizeOfImage;
    else
      SizeOfImage = 0LL;
    if ( !SizeOfImage )
      return 0;
  }
  if ( a2 < (v8 & 0xFFFFFFFFFFFFFFFCuLL) || a2 >= SizeOfImage + (v8 & 0xFFFFFFFFFFFFFFFCuLL) )
    return 0;
  *a3 = v8;
  result = 1;
  *a4 = SizeOfImage;
  return result;
}
