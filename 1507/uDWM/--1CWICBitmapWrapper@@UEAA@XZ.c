/*
 * XREFs of ??1CWICBitmapWrapper@@UEAA@XZ @ 0x18003F2FC
 * Callers:
 *     ??_GCWICBitmapWrapper@@UEAAPEAXI@Z @ 0x18003F0A0 (--_GCWICBitmapWrapper@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CWICBitmapWrapper::~CWICBitmapWrapper(CWICBitmapWrapper *this)
{
  __int64 v1; // rsi

  v1 = *((_QWORD *)this + 32);
  *(_QWORD *)this = &CWICBitmapWrapper::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CWICBitmapWrapper::`vftable'{for `IBitmapSource'};
  *((_QWORD *)this + 3) = &CWICBitmapWrapper::`vftable'{for `IBitmapDest'};
  *((_QWORD *)this + 4) = &CWICBitmapWrapper::`vftable'{for `IBitmapUnlock'};
  *((_QWORD *)this + 5) = &CWICBitmapWrapper::`vftable'{for `IWICBitmap'};
  *((_QWORD *)this + 6) = &CWICBitmapWrapper::`vftable'{for `CMILResourceCache'};
  *((_QWORD *)this + 14) = &CWICBitmapWrapper::`vftable'{for `CMTALock'};
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  CBitmap::~CBitmap(this);
}
