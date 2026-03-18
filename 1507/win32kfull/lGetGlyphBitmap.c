/*
 * XREFs of lGetGlyphBitmap @ 0x1C00B209C
 * Callers:
 *     ttfdQueryFontData @ 0x1C00B1D84 (ttfdQueryFontData.c)
 *     lGetGlyphBitmapVertical @ 0x1C0247118 (lGetGlyphBitmapVertical.c)
 * Callees:
 *     pvSetMemoryBases @ 0x1C00AF4B4 (pvSetMemoryBases.c)
 *     fs_ContourScan @ 0x1C00AF620 (fs_ContourScan.c)
 *     vFillGLYPHDATA @ 0x1C00B23C0 (vFillGLYPHDATA.c)
 *     bGetGlyphOutline @ 0x1C00B3AC4 (bGetGlyphOutline.c)
 *     fs_FindBitMapSize @ 0x1C00B3C18 (fs_FindBitMapSize.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     vShiftBitmapInfo @ 0x1C015D890 (vShiftBitmapInfo.c)
 */

__int64 __fastcall lGetGlyphBitmap(__int64 a1, int a2, char *a3, __int64 a4, unsigned int a5, _DWORD *a6)
{
  int v6; // r13d
  int BitMapSize; // eax
  __int16 *v13; // r8
  unsigned int v14; // esi
  int v15; // ecx
  int v16; // eax
  unsigned int v17; // esi
  unsigned int v18; // eax
  signed int v19; // eax
  unsigned __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // eax
  __int64 (__fastcall *v24)(); // r10
  __int64 v25; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v26[16]; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v27; // [rsp+58h] [rbp-A8h]
  int v28; // [rsp+5Ch] [rbp-A4h]
  char v29; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v30[240]; // [rsp+A0h] [rbp-60h] BYREF

  v6 = 0;
  *a6 = 0;
  if ( *(_DWORD *)(a1 + 16) != a2 )
  {
    if ( !(unsigned int)bGetGlyphOutline(a1, a2, (unsigned int)&v25, 1, (__int64)a6) )
      return 0xFFFFFFFFLL;
    BitMapSize = fs_FindBitMapSize(*(_QWORD *)(a1 + 176), *(_QWORD *)(a1 + 184));
    if ( BitMapSize )
    {
      *a6 = BitMapSize;
      return 0xFFFFFFFFLL;
    }
    *(_DWORD *)(a1 + 20) = v25;
    *(_DWORD *)(a1 + 16) = a2;
  }
  v13 = *(__int16 **)(a1 + 184);
  v14 = v13[52] - v13[50];
  v15 = v13[51] - v13[49];
  if ( v13[52] == v13[50] || !v15 )
  {
    v6 = 1;
    v17 = 20;
  }
  else
  {
    v16 = *(_DWORD *)(a1 + 40);
    if ( (v16 & 0x10000) != 0 )
    {
      if ( (v16 & 0x10000000) == 0 )
        v14 = (v14 + 1) >> 1;
    }
    else
    {
      v14 = (v14 + 7) >> 3;
    }
    v17 = ((v15 * v14 + 3) & 0xFFFFFFFC) + 16;
    if ( v17 > *(_DWORD *)(a1 + 172) )
      v17 = *(_DWORD *)(a1 + 172);
  }
  if ( !a3 )
  {
    if ( !a4 )
      return v17;
    a3 = &v29;
  }
  if ( *(_DWORD *)(a1 + 308) && (*(_DWORD *)(a1 + 304) & 2) != 0 )
  {
    vShiftBitmapInfo(a1, v30);
    vFillGLYPHDATA(
      *(_DWORD *)(a1 + 312),
      *(_DWORD *)(a1 + 20),
      a1,
      (unsigned int)v30,
      (__int64)a3,
      (__int64)v26,
      (__int64)&v25);
  }
  else
  {
    vFillGLYPHDATA(a2, *(_DWORD *)(a1 + 20), a1, *(_QWORD *)(a1 + 184), (__int64)a3, (__int64)v26, (__int64)&v25);
  }
  if ( a4 )
  {
    if ( (*(_DWORD *)(a1 + 40) & 0x10000) != 0 )
    {
      v18 = v27;
      if ( (*(_DWORD *)(a1 + 40) & 0x10000000) == 0 )
        v18 = (v27 + 1) >> 1;
    }
    else
    {
      v18 = (v27 + 7) >> 3;
    }
    v19 = ((v28 * v18 + 3) & 0xFFFFFFFC) + 16;
    if ( v19 < 0 )
      return 0xFFFFFFFFLL;
    if ( a5 < v19 )
      return 0xFFFFFFFFLL;
    v20 = pvSetMemoryBases(*(int **)(a1 + 184), *(_QWORD **)(a1 + 176), *(_DWORD *)(a1 + 40) & 0x10000);
    *(_QWORD *)(a1 + 24) = v20;
    if ( !v20 )
      return 0xFFFFFFFFLL;
    *(_WORD *)(*(_QWORD *)(a1 + 176) + 104LL) = *(_WORD *)(*(_QWORD *)(a1 + 184) + 98LL);
    *(_WORD *)(*(_QWORD *)(a1 + 176) + 106LL) = *(_WORD *)(*(_QWORD *)(a1 + 184) + 102LL);
    *(_QWORD *)(*(_QWORD *)(a1 + 176) + 112LL) = 0LL;
    *a6 = fs_ContourScan(*(_QWORD *)(a1 + 176), *(_QWORD *)(a1 + 184), v21, v22);
    *(_DWORD *)(a1 + 16) = -1;
    if ( *a6 )
    {
      EngFreeMem(*(PVOID *)(a1 + 24));
      *(_QWORD *)(a1 + 24) = 0LL;
      return 0xFFFFFFFFLL;
    }
    if ( !v6 && v27 && v28 )
    {
      v23 = *(_DWORD *)(a1 + 40);
      if ( (v23 & 0x10000) != 0 )
      {
        v24 = vCopyGrayBits;
        if ( (v23 & 0x10000000) != 0 )
          v24 = vCopyClearTypeBits;
      }
      else
      {
        v24 = vCopyAndZeroOutPaddingBits;
      }
      ((void (__fastcall *)(__int64, __int64, _QWORD, _BYTE *))v24)(
        a1,
        a4,
        *(_QWORD *)(*(_QWORD *)(a1 + 184) + 88LL),
        v26);
      if ( (*(_DWORD *)(a1 + 116) & 3) != 0 )
      {
        *(_DWORD *)a4 = *((_DWORD *)a3 + 8);
        *(_DWORD *)(a4 + 4) = *((_DWORD *)a3 + 9);
      }
      else
      {
        *(_QWORD *)a4 = v25;
      }
    }
    else
    {
      *(_DWORD *)a4 = *(_DWORD *)(a1 + 200);
      *(_DWORD *)(a4 + 4) = *(_DWORD *)(a1 + 204);
      *(_DWORD *)(a4 + 8) = 1;
      *(_DWORD *)(a4 + 12) = 1;
      *(_BYTE *)(a4 + 16) = 0;
    }
    *(_QWORD *)a3 = a4;
    EngFreeMem(*(PVOID *)(a1 + 24));
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  return v17;
}
