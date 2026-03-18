/*
 * XREFs of ??1CCompressedSourceBitmap@@MEAA@XZ @ 0x1801837B8
 * Callers:
 *     ??_ECCompressedSourceBitmap@@MEAAPEAXI@Z @ 0x1801838B0 (--_ECCompressedSourceBitmap@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompressedSourceBitmap::~CCompressedSourceBitmap(CCompressedSourceBitmap *this)
{
  __int64 v1; // rdx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

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
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
  v3 = *((_QWORD *)this + 35);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *((_QWORD *)this + 34);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *((_QWORD *)this + 38);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  CBitmap::~CBitmap(this);
}
