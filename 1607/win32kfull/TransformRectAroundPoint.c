/*
 * XREFs of TransformRectAroundPoint @ 0x1C01DCE14
 * Callers:
 *     GetNewMonitor @ 0x1C0070AA8 (GetNewMonitor.c)
 *     ?TransformRectAroundCursor@@YAXPEAU_MOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z @ 0x1C01DAFE4 (-TransformRectAroundCursor@@YAXPEAU_MOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z.c)
 *     MigrateRectMonitors @ 0x1C0202620 (MigrateRectMonitors.c)
 * Callees:
 *     <none>
 */

INT __fastcall TransformRectAroundPoint(
        _DWORD *a1,
        unsigned __int16 a2,
        _DWORD *a3,
        _DWORD *a4,
        unsigned __int16 a5,
        __int64 a6)
{
  INT result; // eax
  INT v10; // ebx

  if ( a3 )
  {
    *a4 = a6 - EngMulDiv(a6 - *a1, a3[2] - *a3, a1[2] - *a1);
    result = EngMulDiv(HIDWORD(a6) - a1[1], a3[3] - a3[1], a1[3] - a1[1]);
    a4[1] = HIDWORD(a6) - result;
    a4[2] = *a4 + a3[2] - *a3;
    a4[3] = HIDWORD(a6) - result + a3[3] - a3[1];
  }
  else
  {
    v10 = a2;
    *a4 = a6 - EngMulDiv(a6 - *a1, a5, a2);
    a4[1] = HIDWORD(a6) - EngMulDiv(HIDWORD(a6) - a1[1], a5, v10);
    a4[2] = *a4 + EngMulDiv(a1[2] - *a1, a5, v10);
    result = a4[1] + EngMulDiv(a1[3] - a1[1], a5, v10);
    a4[3] = result;
  }
  return result;
}
