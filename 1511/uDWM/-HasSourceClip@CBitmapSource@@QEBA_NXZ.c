/*
 * XREFs of ?HasSourceClip@CBitmapSource@@QEBA_NXZ @ 0x18001CBC8
 * Callers:
 *     ?Initialize@CDrawNineGridInstruction@@AEAAJPEAVCBitmapSource@@@Z @ 0x180013B90 (-Initialize@CDrawNineGridInstruction@@AEAAJPEAVCBitmapSource@@@Z.c)
 *     ?CreateOrUpdateImageBrush@CBitmapSource@@QEAAJPEAPEAVCResource@@00W4Enum@MilStretch@@@Z @ 0x180073CFC (-CreateOrUpdateImageBrush@CBitmapSource@@QEAAJPEAPEAVCResource@@00W4Enum@MilStretch@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmapSource::HasSourceClip(CBitmapSource *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( *((int *)this + 20) > 0 && *((int *)this + 22) > 0 && *((int *)this + 21) > 0 && *((int *)this + 23) > 0 )
    return 1LL;
  return result;
}
