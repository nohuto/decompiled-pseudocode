/*
 * XREFs of ?GetWindow@CIconicAnimatedVisual@@QEAAPEAUHWND__@@XZ @ 0x180099BA8
 * Callers:
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18003206C (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x18007A26C (-_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 * Callees:
 *     <none>
 */

HWND __fastcall CIconicAnimatedVisual::GetWindow(CIconicAnimatedVisual *this)
{
  __int64 v1; // rdx
  HWND result; // rax

  v1 = *((_QWORD *)this + 35);
  result = 0LL;
  if ( v1 )
    return *(HWND *)(v1 + 40);
  return result;
}
