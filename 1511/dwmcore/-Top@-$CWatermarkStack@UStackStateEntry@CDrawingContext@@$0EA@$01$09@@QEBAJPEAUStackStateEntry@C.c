/*
 * XREFs of ?Top@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEBAJPEAUStackStateEntry@CDrawingContext@@I@Z @ 0x1800A9B4C
 * Callers:
 *     ?Pop@CDrawingContext@@UEAAJXZ @ 0x18003C8F0 (-Pop@CDrawingContext@@UEAAJXZ.c)
 *     ?PopStacksForNode@CDrawingContext@@AEAAJPEBVCVisual@@@Z @ 0x1800F37DC (-PopStacksForNode@CDrawingContext@@AEAAJPEBVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Top(int *a1, _OWORD *a2)
{
  __int64 result; // rax
  int v4; // ecx

  result = 0LL;
  v4 = *a1;
  if ( !v4 )
    return 2147500037LL;
  *a2 = *(_OWORD *)(*((_QWORD *)a1 + 2) + 16LL * (unsigned int)(v4 - 1));
  return result;
}
