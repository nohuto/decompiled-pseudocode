/*
 * XREFs of ??1CBitmap@@UEAA@XZ @ 0x18008009C
 * Callers:
 *     ??1CBitmapOfDeviceBitmaps@@MEAA@XZ @ 0x180048CA0 (--1CBitmapOfDeviceBitmaps@@MEAA@XZ.c)
 *     ??1CWICBitmapWrapper@@UEAA@XZ @ 0x180070034 (--1CWICBitmapWrapper@@UEAA@XZ.c)
 *     ??1CSystemMemoryBitmap@@UEAA@XZ @ 0x180083B00 (--1CSystemMemoryBitmap@@UEAA@XZ.c)
 *     ??_ECBitmap@@UEAAPEAXI@Z @ 0x1801440B0 (--_ECBitmap@@UEAAPEAXI@Z.c)
 *     ??1CCompressedSourceBitmap@@MEAA@XZ @ 0x18014484C (--1CCompressedSourceBitmap@@MEAA@XZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180031300 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ??1CMTALock@@UEAA@XZ @ 0x1800526DC (--1CMTALock@@UEAA@XZ.c)
 *     ??1CMILResourceCache@@IEAA@XZ @ 0x180056DCC (--1CMILResourceCache@@IEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
