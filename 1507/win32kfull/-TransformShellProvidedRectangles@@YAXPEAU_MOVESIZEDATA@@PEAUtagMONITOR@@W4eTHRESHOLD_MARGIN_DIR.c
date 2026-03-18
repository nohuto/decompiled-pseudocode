/*
 * XREFs of ?TransformShellProvidedRectangles@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@3PEAUtagWND@@33@Z @ 0x1C0205F20
 * Callers:
 *     ?xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@@Z @ 0x1C02078FC (-xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@P.c)
 *     xxxEndSetWindowArrangement @ 0x1C020BEC4 (xxxEndSetWindowArrangement.c)
 * Callees:
 *     IntersectRect @ 0x1C008E444 (IntersectRect.c)
 *     ?GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z @ 0x1C020505C (-GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z.c)
 */

__int64 __fastcall TransformShellProvidedRectangles(
        _DWORD *a1,
        __int64 a2,
        int a3,
        const struct tagRECT *a4,
        __int64 a5,
        __int64 a6,
        int *a7,
        __int64 a8)
{
  int *v8; // rdi
  char OverlapCoordinatesForArrangement; // r14
  __int64 v13; // rdx
  __int64 v14; // rdx
  int v15; // r8d
  int v16; // edx
  int v17; // ecx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  int v22; // edx
  int v23; // r8d
  int v24; // eax
  int v25; // eax
  int v26; // eax
  __int64 result; // rax
  int v28; // r9d
  int v29; // edx
  int v30; // r8d
  int v31; // r8d

  v8 = (int *)(a2 + 76);
  OverlapCoordinatesForArrangement = GetOverlapCoordinatesForArrangement((const struct tagRECT *const)(a2 + 76), a4, 0);
  TransformRectBetweenCoordinateSpaces(a7, v13, *(_QWORD *)a1, a6);
  v14 = *(_QWORD *)a1;
  v15 = *(_DWORD *)(*(_QWORD *)a1 + 344LL);
  if ( v15 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0 )
  {
    if ( v15 == 1 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 416LL) + 8LL) + 260LL) & 1) != 0 )
      v8 = (int *)(a2 + 108);
  }
  else
  {
    v8 = (int *)(a2 + 92);
  }
  IntersectRect(a7, a7, v8);
  if ( a3 == 1 )
  {
    if ( *a7 > *v8 )
      *a7 = *v8;
    v16 = *a7;
    v17 = a7[2] - *a7;
    v18 = a1[22];
    if ( v17 < v18 )
      a7[2] = v16 + v18;
    v19 = a1[24];
    if ( v17 >= v19 )
      a7[2] = v16 + v19;
  }
  else
  {
    v20 = v8[2];
    if ( a7[2] < v20 )
      a7[2] = v20;
    v21 = a7[2];
    v22 = v21 - *a7;
    v23 = a1[22];
    if ( v22 < v23 )
      *a7 = v21 - v23;
    v24 = a1[24];
    if ( v22 >= v24 )
      *a7 = v21 - v24;
  }
  if ( (OverlapCoordinatesForArrangement & 2) != 0 )
  {
    v25 = v8[1];
    if ( a7[1] > v25 )
      a7[1] = v25;
  }
  if ( (OverlapCoordinatesForArrangement & 8) != 0 )
  {
    v26 = v8[3];
    if ( a7[3] < v26 )
      a7[3] = v26;
  }
  result = (unsigned int)a7[3];
  v28 = a7[1];
  v29 = a7[3] - v28;
  v30 = a1[23];
  if ( v29 < v30 )
  {
    if ( (OverlapCoordinatesForArrangement & 2) != 0 )
    {
      result = (unsigned int)(v30 + v28);
      a7[3] = result;
    }
    else
    {
      result = (unsigned int)(result - v30);
      a7[1] = result;
    }
  }
  v31 = a1[25];
  if ( v29 >= v31 )
  {
    if ( (OverlapCoordinatesForArrangement & 2) != 0 )
    {
      a7[3] = v31 + a7[1];
    }
    else
    {
      result = (unsigned int)(a7[3] - v31);
      a7[1] = result;
    }
  }
  if ( a5 )
  {
    if ( a8 )
      return TransformRectBetweenCoordinateSpaces(a8, a5, *(_QWORD *)a1, a6);
  }
  return result;
}
