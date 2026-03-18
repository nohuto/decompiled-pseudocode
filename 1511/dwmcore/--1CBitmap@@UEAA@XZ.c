/*
 * XREFs of ??1CBitmap@@UEAA@XZ @ 0x180089124
 * Callers:
 *     ??1CSystemMemoryBitmap@@UEAA@XZ @ 0x1800272C0 (--1CSystemMemoryBitmap@@UEAA@XZ.c)
 *     ??1CBitmapOfDeviceBitmaps@@MEAA@XZ @ 0x18008AEA0 (--1CBitmapOfDeviceBitmaps@@MEAA@XZ.c)
 *     ??1CWICBitmapWrapper@@UEAA@XZ @ 0x1800A2FB4 (--1CWICBitmapWrapper@@UEAA@XZ.c)
 *     ??_ECBitmap@@UEAAPEAXI@Z @ 0x180152290 (--_ECBitmap@@UEAAPEAXI@Z.c)
 *     ??1CCompressedSourceBitmap@@MEAA@XZ @ 0x180152A2C (--1CCompressedSourceBitmap@@MEAA@XZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180051F80 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ??1CMILResourceCache@@IEAA@XZ @ 0x18008A754 (--1CMILResourceCache@@IEAA@XZ.c)
 *     ??1CMTALock@@UEAA@XZ @ 0x1800A251C (--1CMTALock@@UEAA@XZ.c)
 */

void __fastcall CBitmap::~CBitmap(CBitmap *this)
{
  WPF::ProcessHeapImpl *v1; // rdi
  void *v2; // rsi
  void (__fastcall *v4)(WPF::ProcessHeapImpl *, void *); // rbp

  v1 = WPF::g_pProcessHeap;
  v2 = (void *)*((_QWORD *)this + 29);
  *(_QWORD *)this = &CBitmap::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CWICBitmapWrapper::`vftable'{for `IBitmapSource'};
  *((_QWORD *)this + 3) = &CBitmap::`vftable'{for `IBitmapDest'};
  *((_QWORD *)this + 4) = &CSystemMemoryBitmap::`vftable'{for `IBitmapUnlock'};
  *((_QWORD *)this + 5) = &CClientMemoryBitmap::`vftable'{for `IWICBitmap'};
  *((_QWORD *)this + 6) = &CWICBitmapWrapper::`vftable'{for `CMILResourceCache'};
  *((_QWORD *)this + 14) = &CBitmap::`vftable'{for `CMTALock'};
  v4 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)v1 + 32LL);
  if ( v4 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(v1, v2);
  else
    v4(v1, v2);
  CMTALock::~CMTALock((CBitmap *)((char *)this + 112));
  CMILResourceCache::~CMILResourceCache((CBitmap *)((char *)this + 48));
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
