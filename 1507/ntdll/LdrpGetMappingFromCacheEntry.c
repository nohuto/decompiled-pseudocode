/*
 * XREFs of LdrpGetMappingFromCacheEntry @ 0x1800CB900
 * Callers:
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1800CB764 (LdrpGetAlternateResourceModuleHandleEx.c)
 * Callees:
 *     RtlImageNtHeader @ 0x180016830 (RtlImageNtHeader.c)
 */

char __fastcall LdrpGetMappingFromCacheEntry(unsigned int a1, unsigned __int64 a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rax
  char result; // al

  if ( !a2 )
    return 0;
  if ( !a3 )
    return 0;
  if ( a1 >= AlternateResourceModuleCount )
    return 0;
  _mm_lfence();
  v7 = 9LL * a1;
  v8 = *(_QWORD *)(AlternateResourceModules + 8 * v7 + 32);
  v9 = *(_QWORD *)(AlternateResourceModules + 8 * v7 + 48);
  if ( (unsigned __int64)(v8 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return 0;
  if ( !v9 )
  {
    v10 = RtlImageNtHeader(v8 & 0xFFFFFFFFFFFFFFFCuLL);
    if ( !v10 )
      return 0;
    v9 = *(_WORD *)(v10 + 24) == 267 || *(_WORD *)(v10 + 24) == 523 ? *(unsigned int *)(v10 + 80) : 0LL;
    if ( !v9 )
      return 0;
  }
  if ( a2 < (v8 & 0xFFFFFFFFFFFFFFFCuLL) || a2 >= v9 + (v8 & 0xFFFFFFFFFFFFFFFCuLL) )
    return 0;
  *a3 = v8;
  result = 1;
  *a4 = v9;
  return result;
}
