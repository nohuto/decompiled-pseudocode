/*
 * XREFs of lGetGlyphBitmap @ 0x1C00C267C
 * Callers:
 *     ttfdQueryFontData @ 0x1C00C2348 (ttfdQueryFontData.c)
 *     lGetGlyphBitmapVertical @ 0x1C024340C (lGetGlyphBitmapVertical.c)
 * Callees:
 *     pvSetMemoryBases @ 0x1C00C12D0 (pvSetMemoryBases.c)
 *     fs_ContourScan @ 0x1C00C142C (fs_ContourScan.c)
 *     CJGD @ 0x1C00C296C (CJGD.c)
 *     vFillGLYPHDATA @ 0x1C00C29A4 (vFillGLYPHDATA.c)
 *     bGetGlyphOutline @ 0x1C00C3F44 (bGetGlyphOutline.c)
 *     fs_FindBitMapSize @ 0x1C00C408C (fs_FindBitMapSize.c)
 *     vCopyClearTypeBits @ 0x1C0101910 (vCopyClearTypeBits.c)
 *     vCopyAndZeroOutPaddingBits @ 0x1C0116FC0 (vCopyAndZeroOutPaddingBits.c)
 *     vGCGB @ 0x1C0125C44 (vGCGB.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     vShiftBitmapInfo @ 0x1C015A840 (vShiftBitmapInfo.c)
 */

__int64 __fastcall lGetGlyphBitmap(__int64 a1, int a2, char *a3, __int64 a4, unsigned int a5, _DWORD *a6)
{
  int BitMapSize; // eax
  __int16 *v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r9
  unsigned int v14; // r14d
  unsigned int v16; // r15d
  int v17; // eax
  unsigned __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // eax
  __int64 v22; // r8
  int v23; // [rsp+40h] [rbp-C0h]
  __int64 v24; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v25[16]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v26; // [rsp+60h] [rbp-A0h]
  unsigned int v27; // [rsp+64h] [rbp-9Ch]
  char v28; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v29[240]; // [rsp+B0h] [rbp-50h] BYREF

  v23 = 0;
  *a6 = 0;
  if ( *(_DWORD *)(a1 + 16) != a2 )
  {
    if ( !(unsigned int)bGetGlyphOutline(a1, a2, (unsigned int)&v24, 1, (__int64)a6) )
      return 0xFFFFFFFFLL;
    BitMapSize = fs_FindBitMapSize(*(_QWORD *)(a1 + 176), *(_QWORD *)(a1 + 184));
    if ( BitMapSize )
    {
      *a6 = BitMapSize;
      return 0xFFFFFFFFLL;
    }
    *(_DWORD *)(a1 + 20) = v24;
    *(_DWORD *)(a1 + 16) = a2;
  }
  v11 = *(__int16 **)(a1 + 184);
  v12 = (unsigned int)(v11[51] - v11[49]);
  if ( v11[52] == v11[50] || !(_DWORD)v12 )
  {
    v23 = 1;
    v14 = CJGD(1LL, 1LL, a1);
  }
  else
  {
    v14 = CJGD((unsigned int)(v11[52] - v11[50]), v12, a1);
    if ( v14 > *(_DWORD *)(a1 + 172) )
      v14 = *(_DWORD *)(a1 + 172);
  }
  if ( !a3 )
  {
    if ( !a4 )
      return v14;
    a3 = &v28;
  }
  if ( *(_DWORD *)(a1 + 308) && (*(_DWORD *)(a1 + 304) & 2) != 0 )
  {
    vShiftBitmapInfo(a1, v29, v13);
    vFillGLYPHDATA(
      *(_DWORD *)(a1 + 312),
      *(_DWORD *)(a1 + 20),
      a1,
      (unsigned int)v29,
      (__int64)a3,
      (__int64)v25,
      (__int64)&v24);
  }
  else
  {
    vFillGLYPHDATA(a2, *(_DWORD *)(a1 + 20), a1, v13, (__int64)a3, (__int64)v25, (__int64)&v24);
  }
  if ( !a4 )
    return v14;
  v16 = v26;
  v17 = CJGD(v26, v27, a1);
  if ( v17 >= 0 && a5 >= v17 )
  {
    v18 = pvSetMemoryBases(*(int **)(a1 + 184), *(_QWORD **)(a1 + 176), *(_DWORD *)(a1 + 40) & 0x10000);
    *(_QWORD *)(a1 + 24) = v18;
    if ( v18 )
    {
      *(_WORD *)(*(_QWORD *)(a1 + 176) + 104LL) = *(_WORD *)(*(_QWORD *)(a1 + 184) + 98LL);
      *(_WORD *)(*(_QWORD *)(a1 + 176) + 106LL) = *(_WORD *)(*(_QWORD *)(a1 + 184) + 102LL);
      if ( (*(_DWORD *)(a1 + 40) & 0x30010000) == 0x30010000 )
      {
        *(_WORD *)(*(_QWORD *)(a1 + 176) + 104LL) *= 5;
        *(_WORD *)(*(_QWORD *)(a1 + 176) + 106LL) *= 5;
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 112LL) = 0LL;
      *a6 = fs_ContourScan(*(_QWORD *)(a1 + 176), *(_QWORD *)(a1 + 184), v19, v20);
      *(_DWORD *)(a1 + 16) = -1;
      if ( !*a6 )
      {
        if ( !v23 && v16 && v27 )
        {
          v21 = *(_DWORD *)(a1 + 40);
          v22 = *(_QWORD *)(a1 + 184);
          if ( (v21 & 0x10000) != 0 )
          {
            if ( (v21 & 0x10000000) != 0 )
              vCopyClearTypeBits(
                a1,
                a4,
                *(_QWORD *)(v22 + 88),
                (unsigned int)v25,
                *(_WORD *)(v22 + 232),
                *(_WORD *)(v22 + 234));
            else
              vGCGB(a1, a4, *(_QWORD *)(v22 + 88), v25);
          }
          else
          {
            vCopyAndZeroOutPaddingBits(a1, a4, *(_QWORD *)(v22 + 88), v25);
          }
          if ( (*(_DWORD *)(a1 + 116) & 3) != 0 )
          {
            *(_DWORD *)a4 = *((_DWORD *)a3 + 8);
            *(_DWORD *)(a4 + 4) = *((_DWORD *)a3 + 9);
          }
          else
          {
            *(_QWORD *)a4 = v24;
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
        return v14;
      }
      EngFreeMem(*(PVOID *)(a1 + 24));
      *(_QWORD *)(a1 + 24) = 0LL;
    }
  }
  return 0xFFFFFFFFLL;
}
