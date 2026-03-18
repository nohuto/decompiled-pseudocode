/*
 * XREFs of ttfdOpenFontContextInternal @ 0x1C011A638
 * Callers:
 *     ttfdOpenFontContext @ 0x1C0118EA0 (ttfdOpenFontContext.c)
 * Callees:
 *     bInitInAndOut @ 0x1C00A38BC (bInitInAndOut.c)
 *     EngMapFontFileFDInternal @ 0x1C00A9F68 (EngMapFontFileFDInternal.c)
 *     EngUnmapFontFileFD @ 0x1C00AA120 (EngUnmapFontFileFD.c)
 *     vGetMinD @ 0x1C0118274 (vGetMinD.c)
 *     bNewXform @ 0x1C0118F04 (bNewXform.c)
 */

_DWORD *__fastcall ttfdOpenFontContextInternal(__int64 a1)
{
  __int64 v1; // rdi
  int v2; // ebx
  __int64 v4; // rax
  ULONG_PTR v5; // rbp
  __int64 v6; // r15
  __int64 v7; // rbx
  unsigned int v8; // ecx
  unsigned int v9; // r8d
  PVOID v10; // rax
  _QWORD *v11; // rax
  _DWORD *v12; // rsi
  _DWORD *result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  v2 = *(_DWORD *)(a1 + 4);
  if ( !v1 )
    return 0LL;
  v4 = *(_QWORD *)(v1 + 48);
  v5 = *(_QWORD *)(v4 + 56);
  if ( !*(_DWORD *)v1
    && !(unsigned int)EngMapFontFileFDInternal(
                        *(struct _FILEVIEW **)(v4 + 56),
                        (_QWORD *)(v1 + 16),
                        (_DWORD *)(v1 + 24),
                        1) )
  {
    return 0LL;
  }
  v6 = (unsigned int)(v2 - 1);
  v7 = *(_QWORD *)(v1 + 16 * (v6 + 3));
  if ( !*(_DWORD *)(v7 + 48) )
  {
    v8 = *(_DWORD *)(v7 + 292);
    v9 = v8 + *(_DWORD *)(v7 + 296);
    *(_QWORD *)(v7 + 64) = *(_QWORD *)(v1 + 16);
    *(_DWORD *)(v7 + 72) = *(_DWORD *)(v1 + 24);
    if ( v9 < v8
      || v9 + 1576 < v9
      || (v10 = EngAllocMem(0, v9 + 1576, 0x64667454u), (*(_QWORD *)(v7 + 24) = v10) == 0LL) )
    {
      if ( !*(_DWORD *)v1 )
        EngUnmapFontFileFD(v5);
      return 0LL;
    }
    if ( !(unsigned int)bInitInAndOut(v7) )
    {
      if ( !*(_DWORD *)v1 )
        EngUnmapFontFileFD(v5);
LABEL_14:
      EngFreeMem(*(PVOID *)(v7 + 24));
      *(_QWORD *)(v7 + 24) = 0LL;
      return 0LL;
    }
    if ( !*(_WORD *)(v7 + 324) )
      vGetMinD(v7);
  }
  v11 = EngAllocMem(0, 0x198u, 0x64667454u);
  *(_QWORD *)(v7 + 40) = v11;
  v12 = v11;
  if ( v11 )
  {
    *v11 = a1;
    v11[1] = v7;
    v11[24] = v7 + 112;
    *((_DWORD *)v11 + 10) = *(_DWORD *)(a1 + 12);
    *(_QWORD *)((char *)v11 + 44) = *(_QWORD *)(a1 + 32);
    *((_DWORD *)v11 + 13) = *(_DWORD *)(a1 + 40);
    v11[22] = *(_QWORD *)(v7 + 24);
    v11[23] = *(_QWORD *)(v7 + 24) + 168LL;
    *((_DWORD *)v11 + 77) = (*(_BYTE *)(v1 + 16 * v6 + 44) & 1) == 0;
    if ( (unsigned int)bNewXform((XFORMOBJ *)a1, (__int64)v11) )
    {
      v12[76] = 0;
      *((_WORD *)v12 + 201) = -1;
      result = v12;
      ++*(_DWORD *)(v7 + 48);
      *(_QWORD *)(v7 + 40) = 0LL;
      ++*(_DWORD *)v1;
      return result;
    }
    EngFreeMem(v12);
    *(_QWORD *)(v7 + 40) = 0LL;
  }
  if ( !*(_DWORD *)v1 )
    EngUnmapFontFileFD(v5);
  if ( !*(_DWORD *)(v7 + 48) )
    goto LABEL_14;
  return 0LL;
}
