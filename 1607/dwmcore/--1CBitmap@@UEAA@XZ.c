/*
 * XREFs of ??1CBitmap@@UEAA@XZ @ 0x180085264
 * Callers:
 *     ??1CWICBitmapWrapper@@UEAA@XZ @ 0x18002F458 (--1CWICBitmapWrapper@@UEAA@XZ.c)
 *     ??1CBitmapOfDeviceBitmaps@@MEAA@XZ @ 0x180094420 (--1CBitmapOfDeviceBitmaps@@MEAA@XZ.c)
 *     ??1CSystemMemoryBitmap@@UEAA@XZ @ 0x1800A17E0 (--1CSystemMemoryBitmap@@UEAA@XZ.c)
 *     ??_ECBitmap@@UEAAPEAXI@Z @ 0x180182880 (--_ECBitmap@@UEAAPEAXI@Z.c)
 *     ??1CCompressedSourceBitmap@@MEAA@XZ @ 0x1801837B8 (--1CCompressedSourceBitmap@@MEAA@XZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ??1CMILResourceCache@@IEAA@XZ @ 0x180083394 (--1CMILResourceCache@@IEAA@XZ.c)
 *     ??1CMTALock@@UEAA@XZ @ 0x18009E9FC (--1CMTALock@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBitmap::~CBitmap(CBitmap *this)
{
  void *v2; // rdx
  void (__fastcall *v3)(WPF::ProcessHeapImpl *, void *); // rax
  __int64 v4; // rdx
  __int64 v5; // r8

  *(_QWORD *)this = &CBitmap::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CBitmap::`vftable'{for `IBitmapSource'};
  v2 = (void *)*((_QWORD *)this + 29);
  *((_QWORD *)this + 3) = &CBitmap::`vftable'{for `IBitmapDest'};
  *((_QWORD *)this + 4) = &CBitmap::`vftable'{for `IBitmapUnlock'};
  *((_QWORD *)this + 5) = &CBitmap::`vftable'{for `IWICBitmap'};
  *((_QWORD *)this + 6) = &CBitmap::`vftable'{for `CMILResourceCache'};
  *((_QWORD *)this + 14) = &CBitmap::`vftable'{for `CMTALock'};
  v3 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v3 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v2);
  else
    v3(WPF::g_pProcessHeap, v2);
  CMTALock::~CMTALock((CBitmap *)((char *)this + 112));
  CMILResourceCache::~CMILResourceCache((CBitmap *)((char *)this + 48), v4, v5);
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
