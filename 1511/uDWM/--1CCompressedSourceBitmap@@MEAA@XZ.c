/*
 * XREFs of ??1CCompressedSourceBitmap@@MEAA@XZ @ 0x180042274
 * Callers:
 *     ??_ECCompressedSourceBitmap@@MEAAPEAXI@Z @ 0x180041C80 (--_ECCompressedSourceBitmap@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CCompressedSourceBitmap::~CCompressedSourceBitmap(CCompressedSourceBitmap *this)
{
  __int64 v1; // rbp
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi

  v1 = *((_QWORD *)this + 36);
  *(_QWORD *)this = &CCompressedSourceBitmap::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CCompressedSourceBitmap::`vftable'{for `IBitmapSource'};
  *((_QWORD *)this + 3) = &CCompressedSourceBitmap::`vftable'{for `IBitmapDest'};
  *((_QWORD *)this + 4) = &CCompressedSourceBitmap::`vftable'{for `IBitmapUnlock'};
  *((_QWORD *)this + 5) = &CCompressedSourceBitmap::`vftable'{for `IWICBitmap'};
  *((_QWORD *)this + 6) = &CCompressedSourceBitmap::`vftable'{for `CMILResourceCache'};
  *((_QWORD *)this + 14) = &CCompressedSourceBitmap::`vftable'{for `CMTALock'};
  *((_QWORD *)this + 32) = &CCompressedSourceBitmap::`vftable'{for `IBitmapCompressedPixels'};
  *((_QWORD *)this + 33) = &CCompressedSourceBitmap::`vftable'{for `IWICDecoderBitmapSource'};
  if ( v1 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v1);
  v3 = *((_QWORD *)this + 35);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 16LL))(*((_QWORD *)this + 35));
  v4 = *((_QWORD *)this + 34);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 16LL))(*((_QWORD *)this + 34));
  v5 = *((_QWORD *)this + 38);
  if ( v5 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 16LL))(*((_QWORD *)this + 38));
  CBitmap::~CBitmap(this);
}
