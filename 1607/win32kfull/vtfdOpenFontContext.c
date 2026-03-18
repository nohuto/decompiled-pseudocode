/*
 * XREFs of vtfdOpenFontContext @ 0x1C014DAC4
 * Callers:
 *     vtfdQueryFontData @ 0x1C014D798 (vtfdQueryFontData.c)
 *     vtfdQueryAdvanceWidths @ 0x1C0245584 (vtfdQueryAdvanceWidths.c)
 * Callees:
 *     EngMapFontFileFDInternal @ 0x1C00C20D4 (EngMapFontFileFDInternal.c)
 *     EngUnmapFontFileFD @ 0x1C00C2280 (EngUnmapFontFileFD.c)
 *     bInitXform @ 0x1C014DC3C (bInitXform.c)
 */

_DWORD *__fastcall vtfdOpenFontContext(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v3; // eax
  __int64 i; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  int v7; // ebp
  _DWORD *v8; // rax
  _DWORD *v9; // rdi
  __int64 v10; // rax
  int v11; // eax
  _DWORD *result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  if ( !v1 )
    return 0LL;
  v3 = *(_DWORD *)(a1 + 4);
  if ( !v3 || v3 > *(_DWORD *)(v1 + 36) )
    return 0LL;
  if ( !*(_DWORD *)(v1 + 32) )
  {
    if ( !(unsigned int)EngMapFontFileFDInternal(
                          *(struct _FILEVIEW **)(v1 + 8),
                          (_QWORD *)(v1 + 16),
                          (_DWORD *)(v1 + 24),
                          1) )
      return 0LL;
    for ( i = 0LL;
          (unsigned int)i < *(_DWORD *)(v1 + 36);
          *(_QWORD *)(v1 + 16 * v5 + 40) = *(_QWORD *)(v1 + 16) + *(int *)(v1 + 16 * v5 + 48) )
    {
      v5 = 3 * i;
      i = (unsigned int)(i + 1);
    }
  }
  v6 = *(_QWORD *)(v1 + 48LL * (unsigned int)(*(_DWORD *)(a1 + 4) - 1) + 40);
  v7 = *(unsigned __int8 *)(v6 + 113) | (*(unsigned __int8 *)(v6 + 116) << 24) | (*(unsigned __int16 *)(v6 + 114) << 8);
  v8 = EngAllocMem(0, 0x80u, 0x64667456u);
  v9 = v8;
  if ( v8 )
  {
    *((_QWORD *)v8 + 14) = 48LL * (unsigned int)(*(_DWORD *)(a1 + 4) - 1) + v1 + 40;
    v10 = *(_QWORD *)(v1 + 48LL * (unsigned int)(*(_DWORD *)(a1 + 4) - 1) + 80);
    v9[30] = 0;
    *((_QWORD *)v9 + 1) = v10;
    v11 = v9[30];
    if ( (*(_DWORD *)(a1 + 12) & 0x2000) != 0 )
      v11 = 1;
    v9[30] = v11;
    if ( (*(_DWORD *)(a1 + 12) & 0x4000) != 0 )
      v9[30] |= 2u;
    v9[31] = v7;
    if ( (unsigned int)bInitXform(v9, a1 + 216) )
    {
      *(_QWORD *)v9 = v1;
      result = v9;
      ++*(_DWORD *)(v1 + 32);
      return result;
    }
    if ( !*(_DWORD *)(v1 + 32) )
      EngUnmapFontFileFD(*(_QWORD *)(v1 + 8));
    EngFreeMem(v9);
  }
  else if ( !*(_DWORD *)(v1 + 32) )
  {
    EngUnmapFontFileFD(*(_QWORD *)(v1 + 8));
  }
  return 0LL;
}
