/*
 * XREFs of TransformRectAroundPoint @ 0x1C01E6678
 * Callers:
 *     GetNewMonitor @ 0x1C006DEC0 (GetNewMonitor.c)
 *     ?TransformRectAroundCursor@@YAXPEBUtagRECT@@GPEAU1@1G@Z @ 0x1C01E4700 (-TransformRectAroundCursor@@YAXPEBUtagRECT@@GPEAU1@1G@Z.c)
 *     MigrateRectMonitors @ 0x1C020B510 (MigrateRectMonitors.c)
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
