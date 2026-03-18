/*
 * XREFs of ?Pop@?$CWatermarkStack@_N$0EA@$01$09@@QEAAHPEA_N@Z @ 0x1801122A4
 * Callers:
 *     ?PopAlpha@CDrawingContext@@AEAAXXZ @ 0x180107360 (-PopAlpha@CDrawingContext@@AEAAXXZ.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x180122CAC (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?PopStacksForBspChildVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z @ 0x18018CF90 (-PopStacksForBspChildVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z.c)
 *     ?PopStacksForBspRootVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z @ 0x18018D05C (-PopStacksForBspRootVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWatermarkStack<bool,64,2,10>::Pop(_DWORD *a1)
{
  __int64 result; // rax

  result = (unsigned int)*a1;
  if ( (_DWORD)result )
  {
    *a1 = result - 1;
    return 1LL;
  }
  return result;
}
