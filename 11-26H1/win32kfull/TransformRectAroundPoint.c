/*
 * XREFs of TransformRectAroundPoint @ 0x14021C91C
 * Callers:
 *     GetNewMonitor @ 0x14004B044 (GetNewMonitor.c)
 *     ?xxxDetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z @ 0x14011D65C (-xxxDetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

INT __fastcall TransformRectAroundPoint(
        int *a1,
        unsigned __int16 a2,
        _DWORD *a3,
        _DWORD *a4,
        unsigned __int16 a5,
        __int64 a6)
{
  int v7; // r9d
  INT v10; // edi
  INT v11; // eax
  INT v12; // ecx
  INT v13; // eax
  INT v14; // ecx
  INT result; // eax
  int v16; // ebx
  INT v17; // eax
  int v18; // r9d
  INT v19; // r8d
  INT v20; // edx
  int v21; // ecx

  v7 = *a1;
  if ( a3 )
  {
    v17 = EngMulDiv(a6 - v7, a3[2] - *a3, a1[2] - v7);
    v18 = a1[1];
    v19 = a1[3] - v18;
    v20 = a3[3] - a3[1];
    *a4 = a6 - v17;
    result = EngMulDiv(HIDWORD(a6) - v18, v20, v19);
    v21 = *a4 + a3[2] - *a3;
    a4[1] = HIDWORD(a6) - result;
    v16 = a3[3] + HIDWORD(a6) - result - a3[1];
    a4[2] = v21;
  }
  else
  {
    v10 = a2;
    *a4 = a6 - EngMulDiv(a6 - v7, a5, a2);
    v11 = EngMulDiv(HIDWORD(a6) - a1[1], a5, v10);
    v12 = a1[2] - *a1;
    a4[1] = HIDWORD(a6) - v11;
    v13 = EngMulDiv(v12, a5, v10);
    v14 = a1[3] - a1[1];
    a4[2] = *a4 + v13;
    result = EngMulDiv(v14, a5, v10);
    v16 = result + a4[1];
  }
  a4[3] = v16;
  return result;
}
