/*
 * XREFs of lGGOBitmap @ 0x1C02430B4
 * Callers:
 *     ttfdGlyphBitmap @ 0x1C0243854 (ttfdGlyphBitmap.c)
 * Callees:
 *     pvSetMemoryBases @ 0x1C00C12D0 (pvSetMemoryBases.c)
 *     fs_ContourScan @ 0x1C00C142C (fs_ContourScan.c)
 *     vFillGLYPHDATA @ 0x1C00C29A4 (vFillGLYPHDATA.c)
 *     fs_FindBitMapSize @ 0x1C00C408C (fs_FindBitMapSize.c)
 *     fs_NewGlyph @ 0x1C00C4E04 (fs_NewGlyph.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     vShiftBitmapInfo @ 0x1C015A840 (vShiftBitmapInfo.c)
 *     fs_NewContourGridFit @ 0x1C024307C (fs_NewContourGridFit.c)
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
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r11
  unsigned __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  int v22; // esi
  int v23; // eax
  const void *v24; // rdx
  unsigned int v26; // [rsp+40h] [rbp-168h]
  BOOL v27; // [rsp+44h] [rbp-164h]
  __int64 v28; // [rsp+48h] [rbp-160h] BYREF
  int v29[8]; // [rsp+50h] [rbp-158h] BYREF
  _BYTE v30[240]; // [rsp+70h] [rbp-138h] BYREF

  v6 = a2;
  v8 = 0;
  v9 = 0;
  v11 = *(_QWORD *)(a1 + 176);
  v12 = *(_WORD **)(a1 + 184);
  v13 = *(_WORD *)(a1 + 402) == 0;
  *(_DWORD *)(a1 + 32) = 1;
  v27 = v13;
  *(_DWORD *)(a1 + 16) = -1;
  *(_DWORD *)(a1 + 20) = -1;
  *(_WORD *)(v11 + 106) = a2;
  *(_QWORD *)(v11 + 108) = 0LL;
  *(_WORD *)(v11 + 104) = -1;
  if ( (unsigned int)fs_NewGlyph(v11, v12, (__int64)a3, (__int64)a4)
    || (v14 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 184) + 36LL),
        *(_QWORD *)(v11 + 104) = 0LL,
        *(_QWORD *)(v11 + 112) = 0LL,
        *(_DWORD *)(v11 + 120) = 0,
        v26 = v14,
        (unsigned int)fs_NewContourGridFit(v11, (__int64)v12))
    || (unsigned int)fs_FindBitMapSize((_QWORD *)v11, (__int64)v12, v15, v16) )
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
      vShiftBitmapInfo(a1, (__int64)v30, *(_QWORD *)(a1 + 184));
    }
    else
    {
      v17 = *(_QWORD *)(a1 + 184);
    }
    vFillGLYPHDATA(v6, v26, a1, v17, a3, v29, &v28);
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
      v18 = pvSetMemoryBases(*(int **)(a1 + 184), (_QWORD *)v11, !v27);
      *(_QWORD *)(a1 + 24) = v18;
      if ( !v18 )
      {
        v9 = 8;
        goto LABEL_27;
      }
      if ( (unsigned int)fs_ContourScan(v11, (__int64)v12, v19, v20) )
        goto LABEL_25;
      v21 = *(_QWORD *)(a1 + 184);
      v22 = *(__int16 *)(v21 + 102) - *(__int16 *)(v21 + 98);
      v23 = *(__int16 *)(v21 + 96);
      v24 = *(const void **)(v21 + 88);
      v8 = v23 * v22;
      if ( a5 < v8 )
        v8 = a5;
      if ( !v24 )
LABEL_25:
        v9 = 1003;
      else
        memmove(a4, v24, v8);
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
