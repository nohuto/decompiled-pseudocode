/*
 * XREFs of lGGOBitmap @ 0x1C0246EF8
 * Callers:
 *     ttfdGlyphBitmap @ 0x1C02475D4 (ttfdGlyphBitmap.c)
 * Callees:
 *     pvSetMemoryBases @ 0x1C00A9290 (pvSetMemoryBases.c)
 *     fs_ContourScan @ 0x1C00A9410 (fs_ContourScan.c)
 *     vFillGLYPHDATA @ 0x1C00AAC68 (vFillGLYPHDATA.c)
 *     fs_FindBitMapSize @ 0x1C00AC4E8 (fs_FindBitMapSize.c)
 *     fs_NewGlyph @ 0x1C00AD304 (fs_NewGlyph.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     vShiftBitmapInfo @ 0x1C0153150 (vShiftBitmapInfo.c)
 *     fs_NewContourGridFit @ 0x1C0246EC0 (fs_NewContourGridFit.c)
 */

__int64 __fastcall lGGOBitmap(__int64 a1, int a2, _QWORD *a3, _BYTE *a4, int a5)
{
  int v6; // r14d
  int v8; // esi
  ULONG v9; // ebx
  __int64 v11; // rbp
  _WORD *v12; // r12
  BOOL v13; // eax
  unsigned int v14; // eax
  __int64 v15; // r11
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // esi
  int v19; // eax
  const void *v20; // rdx
  unsigned int v22; // [rsp+40h] [rbp-168h]
  BOOL v23; // [rsp+44h] [rbp-164h]
  __int64 v24; // [rsp+48h] [rbp-160h] BYREF
  int v25[8]; // [rsp+50h] [rbp-158h] BYREF
  _BYTE v26[240]; // [rsp+70h] [rbp-138h] BYREF

  v6 = a2;
  v8 = 0;
  v9 = 0;
  v11 = *(_QWORD *)(a1 + 176);
  v12 = *(_WORD **)(a1 + 184);
  v13 = *(_WORD *)(a1 + 402) == 0;
  *(_DWORD *)(a1 + 32) = 1;
  v23 = v13;
  *(_DWORD *)(a1 + 16) = -1;
  *(_DWORD *)(a1 + 20) = -1;
  *(_WORD *)(v11 + 106) = a2;
  *(_QWORD *)(v11 + 108) = 0LL;
  *(_WORD *)(v11 + 104) = -1;
  if ( (unsigned int)fs_NewGlyph(v11, v12)
    || (v14 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 184) + 36LL),
        *(_QWORD *)(v11 + 104) = 0LL,
        *(_QWORD *)(v11 + 112) = 0LL,
        *(_DWORD *)(v11 + 120) = 0,
        v22 = v14,
        (unsigned int)fs_NewContourGridFit(v11, (__int64)v12))
    || (unsigned int)fs_FindBitMapSize((_QWORD *)v11, (__int64)v12) )
  {
    v9 = 1003;
LABEL_27:
    EngSetLastError(v9);
    v8 = -1;
    goto LABEL_28;
  }
  if ( a3 )
  {
    if ( *(_DWORD *)(a1 + 308) && (*(_DWORD *)(a1 + 304) & 2) != 0 )
    {
      v6 = *(_DWORD *)(a1 + 312);
      vShiftBitmapInfo(a1, (__int64)v26, *(_QWORD *)(a1 + 184));
    }
    else
    {
      v15 = *(_QWORD *)(a1 + 184);
    }
    vFillGLYPHDATA(v6, v22, a1, v15, a3, v25, &v24);
  }
  if ( a4 )
  {
    if ( !a5 )
      goto LABEL_13;
    if ( (*(_DWORD *)(a1 + 116) & 8) != 0 )
    {
      *a4 = 0;
    }
    else
    {
      v16 = pvSetMemoryBases(*(int **)(a1 + 184), (_QWORD *)v11, !v23);
      *(_QWORD *)(a1 + 24) = v16;
      if ( !v16 )
      {
        v9 = 8;
        goto LABEL_27;
      }
      if ( (unsigned int)fs_ContourScan(v11, (__int64)v12) )
        goto LABEL_25;
      v17 = *(_QWORD *)(a1 + 184);
      v18 = *(__int16 *)(v17 + 102) - *(__int16 *)(v17 + 98);
      v19 = *(__int16 *)(v17 + 96);
      v20 = *(const void **)(v17 + 88);
      v8 = v19 * v18;
      if ( a5 < v8 )
        v8 = a5;
      if ( !v20 )
LABEL_25:
        v9 = 1003;
      else
        memmove(a4, v20, v8);
      EngFreeMem(*(PVOID *)(a1 + 24));
      *(_QWORD *)(a1 + 24) = 0LL;
      if ( v9 )
        goto LABEL_27;
    }
  }
  else
  {
    if ( a5 )
    {
LABEL_13:
      v9 = 87;
      goto LABEL_27;
    }
    v8 = *(__int16 *)(*(_QWORD *)(a1 + 184) + 96LL)
       * (*(__int16 *)(*(_QWORD *)(a1 + 184) + 102LL) - *(__int16 *)(*(_QWORD *)(a1 + 184) + 98LL));
  }
LABEL_28:
  *(_DWORD *)(a1 + 32) = 1;
  *(_DWORD *)(a1 + 16) = -1;
  *(_DWORD *)(a1 + 20) = -1;
  return (unsigned int)v8;
}
