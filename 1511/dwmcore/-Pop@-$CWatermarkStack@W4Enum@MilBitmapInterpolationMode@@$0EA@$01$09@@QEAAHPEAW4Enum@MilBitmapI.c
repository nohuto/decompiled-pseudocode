/*
 * XREFs of ?Pop@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAHPEAW4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800FE26C
 * Callers:
 *     ?Pop@CDrawingContext@@UEAAJXZ @ 0x18003C8F0 (-Pop@CDrawingContext@@UEAAJXZ.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x18010D0B8 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?PopStacks@CBspPreComputeHelper@@AEAAXPEBVCVisual@@0@Z @ 0x18015AEBC (-PopStacks@CBspPreComputeHelper@@AEAAXPEBVCVisual@@0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Pop(_DWORD *a1)
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
