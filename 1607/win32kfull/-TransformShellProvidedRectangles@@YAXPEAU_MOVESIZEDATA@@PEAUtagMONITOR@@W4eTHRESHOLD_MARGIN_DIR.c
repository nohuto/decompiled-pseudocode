/*
 * XREFs of ?TransformShellProvidedRectangles@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@3PEAUtagWND@@33@Z @ 0x1C01FD5F8
 * Callers:
 *     ?xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@@Z @ 0x1C01FEFF8 (-xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@P.c)
 *     xxxEndSetWindowArrangement @ 0x1C02036C0 (xxxEndSetWindowArrangement.c)
 * Callees:
 *     IntersectRect @ 0x1C005D934 (IntersectRect.c)
 *     GetWindowExtendedMargin @ 0x1C00ACD48 (GetWindowExtendedMargin.c)
 *     ?GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z @ 0x1C01FC710 (-GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z.c)
 */

__int64 __fastcall TransformShellProvidedRectangles(
        __int64 *a1,
        __int64 a2,
        int a3,
        const struct tagRECT *a4,
        __int64 a5,
        __int64 a6,
        int *a7,
        __int64 a8)
{
  int v8; // esi
  int *v9; // rdi
  int v10; // ebp
  int v12; // r14d
  int v14; // r15d
  char OverlapCoordinatesForArrangement; // al
  int *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // eax
  int v22; // edx
  int v23; // ecx
  int v24; // eax
  int v25; // ecx
  int v26; // edx
  int v27; // eax
  int v28; // eax
  __int64 result; // rax
  int v30; // r8d
  int v31; // edx
  char v32; // [rsp+60h] [rbp+8h]

  v8 = *((_DWORD *)a1 + 24);
  v9 = (int *)(a2 + 76);
  v10 = *((_DWORD *)a1 + 22);
  v12 = *((_DWORD *)a1 + 25);
  v14 = *((_DWORD *)a1 + 23);
  OverlapCoordinatesForArrangement = GetOverlapCoordinatesForArrangement((const struct tagRECT *const)(a2 + 76), a4, 0);
  v16 = a7;
  v32 = OverlapCoordinatesForArrangement;
  TransformRectBetweenCoordinateSpaces(a7, v17, *a1, a6);
  v18 = *a1;
  if ( (*(_DWORD *)(*a1 + 352) & 0xF) == 0
    && (v19 = *(_QWORD *)(*(_QWORD *)(v18 + 16) + 408LL)) != 0
    && (*(_DWORD *)(*(_QWORD *)(v19 + 8) + 244LL) & 1) != 0 )
  {
    v9 = (int *)(a2 + 92);
  }
  else if ( (*(_DWORD *)(*a1 + 352) & 0xF) == 1 )
  {
    v20 = *(_QWORD *)(*(_QWORD *)(v18 + 16) + 408LL);
    if ( v20 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v20 + 8) + 244LL) & 1) != 0 )
        v9 = (int *)(a2 + 108);
    }
  }
  IntersectRect(v16, v16, v9);
  if ( (unsigned int)GetWindowExtendedMargin(*a1, &a7) )
  {
    v21 = (unsigned __int16)a7 + WORD1(a7);
    v10 -= v21;
    v8 -= v21;
    v14 -= WORD2(a7) + HIWORD(a7);
    v12 -= WORD2(a7) + HIWORD(a7);
  }
  if ( a3 == 1 )
  {
    if ( *v16 > *v9 )
      *v16 = *v9;
    v22 = *v16;
    v23 = v16[2] - *v16;
    if ( v23 < v10 )
      v16[2] = v22 + v10;
    if ( v23 >= v8 )
      v16[2] = v22 + v8;
  }
  else
  {
    v24 = v9[2];
    if ( v16[2] < v24 )
      v16[2] = v24;
    v25 = v16[2];
    v26 = v25 - *v16;
    if ( v26 < v10 )
      *v16 = v25 - v10;
    if ( v26 >= v8 )
      *v16 = v25 - v8;
  }
  if ( (v32 & 2) != 0 )
  {
    v27 = v9[1];
    if ( v16[1] > v27 )
      v16[1] = v27;
  }
  if ( (v32 & 8) != 0 )
  {
    v28 = v9[3];
    if ( v16[3] < v28 )
      v16[3] = v28;
  }
  result = (unsigned int)v16[3];
  v30 = v16[1];
  v31 = v16[3] - v30;
  if ( v31 < v14 )
  {
    if ( (v32 & 2) != 0 )
    {
      result = (unsigned int)(v30 + v14);
      v16[3] = result;
    }
    else
    {
      result = (unsigned int)(result - v14);
      v16[1] = result;
    }
  }
  if ( v31 >= v12 )
  {
    if ( (v32 & 2) != 0 )
    {
      v16[3] = v12 + v16[1];
    }
    else
    {
      result = (unsigned int)(v16[3] - v12);
      v16[1] = result;
    }
  }
  if ( a5 )
  {
    if ( a8 )
      return TransformRectBetweenCoordinateSpaces(a8, a5, *a1, a6);
  }
  return result;
}
