/*
 * XREFs of ?Pop@?$CWatermarkStack@_N$0EA@$01$09@@QEAAHPEA_N@Z @ 0x1800E06E8
 * Callers:
 *     ?Pop@CDrawingContext@@UEAAJXZ @ 0x180027E60 (-Pop@CDrawingContext@@UEAAJXZ.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x1800F2618 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?PopStacks@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z @ 0x18014C7A8 (-PopStacks@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z.c)
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
