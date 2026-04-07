/*
 * XREFs of ??_GCBitmapLock@@UEAAPEAXI@Z @ 0x1800416D0
 * Callers:
 *     ??_ECBitmapLock@@WBA@EAAPEAXI@Z @ 0x180050FB0 (--_ECBitmapLock@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CBitmapLock@@UEAA@XZ @ 0x180041998 (--1CBitmapLock@@UEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

CBitmapLock *__fastcall CBitmapLock::`scalar deleting destructor'(CBitmapLock *this, char a2)
{
  CBitmapLock::~CBitmapLock(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CBitmapLock *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
