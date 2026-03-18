/*
 * XREFs of lGetGlyphBitmap @ 0x1C00AA914
 * Callers:
 *     ttfdQueryFontData @ 0x1C00AA5BC (ttfdQueryFontData.c)
 *     lGetGlyphBitmapVertical @ 0x1C0147338 (lGetGlyphBitmapVertical.c)
 * Callees:
 *     vCopyClearTypeBits @ 0x1C00A6DAC (vCopyClearTypeBits.c)
 *     pvSetMemoryBases @ 0x1C00A9290 (pvSetMemoryBases.c)
 *     fs_ContourScan @ 0x1C00A9410 (fs_ContourScan.c)
 *     vFillGLYPHDATA @ 0x1C00AAC68 (vFillGLYPHDATA.c)
 *     CJGD @ 0x1C00AB374 (CJGD.c)
 *     bGetGlyphOutline @ 0x1C00AC394 (bGetGlyphOutline.c)
 *     fs_FindBitMapSize @ 0x1C00AC4E8 (fs_FindBitMapSize.c)
 *     vCopyAndZeroOutPaddingBits @ 0x1C00F6224 (vCopyAndZeroOutPaddingBits.c)
 *     vGCGB @ 0x1C01040A4 (vGCGB.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     vShiftBitmapInfo @ 0x1C0153150 (vShiftBitmapInfo.c)
 */

__int64 __fastcall lGetGlyphBitmap(__int64 a1, int a2, char *a3, __int64 a4, unsigned int a5, _DWORD *a6)
{
  int BitMapSize; // eax
  __int16 *v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r9
  unsigned int v15; // r14d
  unsigned int v16; // r15d
  int v17; // eax
  unsigned __int64 v18; // rax
  int v19; // eax
  __int64 v20; // r8
  int v21; // [rsp+40h] [rbp-C0h]
  __int64 v22; // [rsp+48h] [rbp-B8h] BYREF
  int v23[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v24; // [rsp+60h] [rbp-A0h]
  unsigned int v25; // [rsp+64h] [rbp-9Ch]
  char v26; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v27[240]; // [rsp+B0h] [rbp-50h] BYREF

  v21 = 0;
  *a6 = 0;
  if ( *(_DWORD *)(a1 + 16) != a2 )
  {
    if ( !(unsigned int)bGetGlyphOutline(a1, a2, (unsigned int)&v22, 1, (__int64)a6) )
      return 0xFFFFFFFFLL;
    BitMapSize = fs_FindBitMapSize(*(_QWORD *)(a1 + 176), *(_QWORD *)(a1 + 184));
    if ( BitMapSize )
    {
      *a6 = BitMapSize;
      return 0xFFFFFFFFLL;
    }
    *(_DWORD *)(a1 + 20) = v22;
    *(_DWORD *)(a1 + 16) = a2;
  }
  v12 = *(__int16 **)(a1 + 184);
  v13 = (unsigned int)(v12[51] - v12[49]);
  if ( v12[52] == v12[50] || !(_DWORD)v13 )
  {
    v21 = 1;
    v15 = CJGD(1LL, 1LL, a1);
  }
  else
  {
    v15 = CJGD((unsigned int)(v12[52] - v12[50]), v13, a1);
    if ( v15 > *(_DWORD *)(a1 + 172) )
      v15 = *(_DWORD *)(a1 + 172);
  }
  if ( !a3 )
  {
    if ( !a4 )
      return v15;
    a3 = &v26;
  }
  if ( *(_DWORD *)(a1 + 308) && (*(_DWORD *)(a1 + 304) & 2) != 0 )
  {
    vShiftBitmapInfo(a1, v27, v14);
    vFillGLYPHDATA(
      *(_DWORD *)(a1 + 312),
      *(_DWORD *)(a1 + 20),
      a1,
      (unsigned int)v27,
      (__int64)a3,
      (__int64)v23,
      (__int64)&v22);
  }
  else
  {
    vFillGLYPHDATA(a2, *(_DWORD *)(a1 + 20), a1, v14, (__int64)a3, (__int64)v23, (__int64)&v22);
  }
  if ( a4 )
  {
    v16 = v24;
    v17 = CJGD(v24, v25, a1);
    if ( v17 < 0 )
      return 0xFFFFFFFFLL;
    if ( a5 < v17 )
      return 0xFFFFFFFFLL;
    v18 = pvSetMemoryBases(*(int **)(a1 + 184), *(_QWORD **)(a1 + 176), *(_DWORD *)(a1 + 40) & 0x10000);
    *(_QWORD *)(a1 + 24) = v18;
    if ( !v18 )
      return 0xFFFFFFFFLL;
    *(_WORD *)(*(_QWORD *)(a1 + 176) + 104LL) = *(_WORD *)(*(_QWORD *)(a1 + 184) + 98LL);
    *(_WORD *)(*(_QWORD *)(a1 + 176) + 106LL) = *(_WORD *)(*(_QWORD *)(a1 + 184) + 102LL);
    if ( (*(_DWORD *)(a1 + 40) & 0x30010000) == 0x30010000 )
    {
      *(_WORD *)(*(_QWORD *)(a1 + 176) + 104LL) *= 5;
      *(_WORD *)(*(_QWORD *)(a1 + 176) + 106LL) *= 5;
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 176) + 112LL) = 0LL;
    *a6 = fs_ContourScan(*(_QWORD *)(a1 + 176), *(_QWORD *)(a1 + 184));
    *(_DWORD *)(a1 + 16) = -1;
    if ( *a6 )
    {
      EngFreeMem(*(PVOID *)(a1 + 24));
      *(_QWORD *)(a1 + 24) = 0LL;
      return 0xFFFFFFFFLL;
    }
    if ( !v21 && v16 && v25 )
    {
      v19 = *(_DWORD *)(a1 + 40);
      v20 = *(_QWORD *)(a1 + 184);
      if ( (v19 & 0x10000) != 0 )
      {
        if ( (v19 & 0x10000000) != 0 )
          vCopyClearTypeBits(a1, a4, *(_QWORD *)(v20 + 88), v23, *(_WORD *)(v20 + 232), *(_WORD *)(v20 + 234));
        else
          vGCGB(a1, a4, *(_QWORD *)(v20 + 88), v23);
      }
      else
      {
        vCopyAndZeroOutPaddingBits(a1, a4, *(_QWORD *)(v20 + 88), v23);
      }
      if ( (*(_DWORD *)(a1 + 116) & 3) != 0 )
      {
        *(_DWORD *)a4 = *((_DWORD *)a3 + 8);
        *(_DWORD *)(a4 + 4) = *((_DWORD *)a3 + 9);
      }
      else
      {
        *(_QWORD *)a4 = v22;
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
  return v15;
}
