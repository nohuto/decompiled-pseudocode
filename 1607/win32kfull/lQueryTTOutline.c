/*
 * XREFs of lQueryTTOutline @ 0x1C0117134
 * Callers:
 *     ttfdQueryGlyphOutline @ 0x1C01170B8 (ttfdQueryGlyphOutline.c)
 *     lQueryTrueTypeOutlineVertical @ 0x1C0242658 (lQueryTrueTypeOutlineVertical.c)
 *     ttfdQueryQuadTrueTypeOutline @ 0x1C0242744 (ttfdQueryQuadTrueTypeOutline.c)
 * Callees:
 *     vFillGLYPHDATA @ 0x1C00C29A4 (vFillGLYPHDATA.c)
 *     bGetGlyphOutline @ 0x1C00C3F44 (bGetGlyphOutline.c)
 *     fs_FindBitMapSize @ 0x1C00C408C (fs_FindBitMapSize.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     vShiftBitmapInfo @ 0x1C015A840 (vShiftBitmapInfo.c)
 *     cjFillPolygon @ 0x1C024220C (cjFillPolygon.c)
 *     lQuerySingularTrueTypeOutline @ 0x1C02425DC (lQuerySingularTrueTypeOutline.c)
 *     vShiftOutlineInfo @ 0x1C0243FFC (vShiftOutlineInfo.c)
 */

__int64 __fastcall lQueryTTOutline(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        _QWORD *a6,
        unsigned int a7,
        __int64 a8)
{
  int v8; // eax
  char v9; // si
  unsigned int v10; // edi
  int v11; // ebp
  char v13; // r9
  unsigned int v14; // esi
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  _BYTE *v17; // r9
  int v18; // ecx
  unsigned int v20; // eax
  int v21; // r12d
  __int64 v22; // rdx
  _QWORD *v23; // rcx
  unsigned int v24; // [rsp+40h] [rbp-138h] BYREF
  unsigned int v25; // [rsp+44h] [rbp-134h]
  int v26; // [rsp+48h] [rbp-130h] BYREF
  _BYTE v27[240]; // [rsp+50h] [rbp-128h] BYREF

  v8 = *(_DWORD *)(a1 + 116);
  v9 = a4;
  v10 = *(_DWORD *)(a1 + 20);
  v11 = a3;
  v25 = a2;
  v24 = v10;
  if ( (v8 & 8) != 0 )
    return lQuerySingularTrueTypeOutline(a1, (unsigned int)a3, a6);
  if ( *(_DWORD *)(a1 + 16) == (_DWORD)a3 )
  {
    if ( a5 )
      goto LABEL_22;
    if ( !*(_DWORD *)(a1 + 32) )
      goto LABEL_7;
  }
  if ( a5 )
  {
LABEL_22:
    v13 = 2;
    goto LABEL_5;
  }
  v13 = 0;
LABEL_5:
  if ( !bGetGlyphOutline(a1, a3, &v24, v13, &v26) )
    return 0xFFFFFFFFLL;
  v10 = v24;
  a2 = v25;
  *(_DWORD *)(a1 + 32) = 0;
LABEL_7:
  if ( (v9 & 1) != 0 )
  {
    v14 = 0;
  }
  else
  {
    v20 = cjFillPolygon(a1, a2, a8, a7);
    v14 = v20;
    if ( v20 == -1 )
      return 0xFFFFFFFFLL;
    if ( v20 && a8 && *(_DWORD *)(a1 + 308) && (*(_DWORD *)(a1 + 304) & 2) != 0 )
    {
      v21 = *(_DWORD *)(a1 + 20);
      v22 = *(_QWORD *)(a1 + 184);
      v23 = *(_QWORD **)(a1 + 176);
      *(_DWORD *)(a1 + 20) = v10;
      *(_DWORD *)(a1 + 32) = 1;
      if ( (unsigned int)fs_FindBitMapSize(v23, v22, a3, a4) )
      {
LABEL_23:
        EngSetLastError(0x3EBu);
        return 0xFFFFFFFFLL;
      }
      vShiftOutlineInfo(a1, v25, a8, v14);
      *(_DWORD *)(a1 + 20) = v21;
    }
  }
  if ( a6 )
  {
    if ( *(_DWORD *)(a1 + 32)
      || (v15 = *(_QWORD *)(a1 + 184),
          v16 = *(_QWORD **)(a1 + 176),
          *(_DWORD *)(a1 + 32) = 1,
          !(unsigned int)fs_FindBitMapSize(v16, v15, a3, a4)) )
    {
      if ( *(_DWORD *)(a1 + 308) && (*(_DWORD *)(a1 + 304) & 2) != 0 )
      {
        vShiftBitmapInfo(a1, v27, *(_QWORD *)(a1 + 184));
        v18 = *(_DWORD *)(a1 + 312);
        v17 = v27;
      }
      else
      {
        v17 = *(_BYTE **)(a1 + 184);
        v18 = v11;
      }
      vFillGLYPHDATA(v18, v10, a1, (__int64)v17, a6, 0LL, 0LL);
      goto LABEL_15;
    }
    goto LABEL_23;
  }
LABEL_15:
  if ( a5 )
  {
    *(_DWORD *)(a1 + 32) = 1;
    *(_DWORD *)(a1 + 16) = -1;
    *(_DWORD *)(a1 + 20) = -1;
  }
  else
  {
    *(_DWORD *)(a1 + 16) = v11;
    *(_DWORD *)(a1 + 20) = v10;
  }
  return v14;
}
