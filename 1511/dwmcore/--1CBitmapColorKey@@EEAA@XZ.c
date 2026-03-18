/*
 * XREFs of ??1CBitmapColorKey@@EEAA@XZ @ 0x180150460
 * Callers:
 *     ??_GCBitmapColorKey@@EEAAPEAXI@Z @ 0x180150570 (--_GCBitmapColorKey@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CBitmapColorKey::~CBitmapColorKey(CBitmapColorKey *this)
{
  __int64 v1; // rsi

  v1 = *((_QWORD *)this + 4);
  *(_QWORD *)this = &CBitmapColorKey::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CBitmapColorKey::`vftable'{for `IBitmapSource'};
  *((_QWORD *)this + 3) = &CBitmapColorKey::`vftable'{for `IWICBitmapSource'};
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
