/*
 * XREFs of ?TransformShellProvidedRectangles@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@3PEAUtagWND@@33@Z @ 0x1C02062F0
 * Callers:
 *     ?xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@@Z @ 0x1C0207C40 (-xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@P.c)
 *     xxxEndSetWindowArrangement @ 0x1C020C568 (xxxEndSetWindowArrangement.c)
 * Callees:
 *     IntersectRect @ 0x1C006B798 (IntersectRect.c)
 *     GetWindowExtendedMargin @ 0x1C00916E4 (GetWindowExtendedMargin.c)
 *     ?GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z @ 0x1C0205414 (-GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z.c)
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
  int v19; // r8d
  int v20; // eax
  int v21; // edx
  int v22; // ecx
  int v23; // eax
  int v24; // ecx
  int v25; // edx
  int v26; // eax
  int v27; // eax
  __int64 result; // rax
  int v29; // r8d
  int v30; // edx
  char v31; // [rsp+60h] [rbp+8h]

  v8 = *((_DWORD *)a1 + 24);
  v9 = (int *)(a2 + 76);
  v10 = *((_DWORD *)a1 + 22);
  v12 = *((_DWORD *)a1 + 25);
  v14 = *((_DWORD *)a1 + 23);
  OverlapCoordinatesForArrangement = GetOverlapCoordinatesForArrangement((const struct tagRECT *const)(a2 + 76), a4, 0);
  v16 = a7;
  v31 = OverlapCoordinatesForArrangement;
  TransformRectBetweenCoordinateSpaces(a7, v17, *a1, a6);
  v18 = *a1;
  v19 = *(_DWORD *)(*a1 + 344);
  if ( v19 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 16) + 408LL) + 8LL) + 244LL) & 1) == 0 )
  {
    if ( v19 == 1 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 16) + 408LL) + 8LL) + 244LL) & 1) != 0 )
      v9 = (int *)(a2 + 108);
  }
  else
  {
    v9 = (int *)(a2 + 92);
  }
  IntersectRect(v16, v16, v9);
  if ( (unsigned int)GetWindowExtendedMargin(*a1, &a7) )
  {
    v20 = (unsigned __int16)a7 + WORD1(a7);
    v10 -= v20;
    v8 -= v20;
    v14 -= WORD2(a7) + HIWORD(a7);
    v12 -= WORD2(a7) + HIWORD(a7);
  }
  if ( a3 == 1 )
  {
    if ( *v16 > *v9 )
      *v16 = *v9;
    v21 = *v16;
    v22 = v16[2] - *v16;
    if ( v22 < v10 )
      v16[2] = v21 + v10;
    if ( v22 >= v8 )
      v16[2] = v21 + v8;
  }
  else
  {
    v23 = v9[2];
    if ( v16[2] < v23 )
      v16[2] = v23;
    v24 = v16[2];
    v25 = v24 - *v16;
    if ( v25 < v10 )
      *v16 = v24 - v10;
    if ( v25 >= v8 )
      *v16 = v24 - v8;
  }
  if ( (v31 & 2) != 0 )
  {
    v26 = v9[1];
    if ( v16[1] > v26 )
      v16[1] = v26;
  }
  if ( (v31 & 8) != 0 )
  {
    v27 = v9[3];
    if ( v16[3] < v27 )
      v16[3] = v27;
  }
  result = (unsigned int)v16[3];
  v29 = v16[1];
  v30 = v16[3] - v29;
  if ( v30 < v14 )
  {
    if ( (v31 & 2) != 0 )
    {
      result = (unsigned int)(v29 + v14);
      v16[3] = result;
    }
    else
    {
      result = (unsigned int)(result - v14);
      v16[1] = result;
    }
  }
  if ( v30 >= v12 )
  {
    if ( (v31 & 2) != 0 )
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
