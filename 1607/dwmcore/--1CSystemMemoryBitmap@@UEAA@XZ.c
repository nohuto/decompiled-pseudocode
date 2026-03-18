/*
 * XREFs of ??1CSystemMemoryBitmap@@UEAA@XZ @ 0x1800A17E0
 * Callers:
 *     ??1CClientMemoryBitmap@@UEAA@XZ @ 0x1800B1DA4 (--1CClientMemoryBitmap@@UEAA@XZ.c)
 *     ??_ECSystemMemoryBitmap@@UEAAPEAXI@Z @ 0x1801820A0 (--_ECSystemMemoryBitmap@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSystemMemoryBitmap::~CSystemMemoryBitmap(CSystemMemoryBitmap *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 33);
  *(_QWORD *)this = &CSystemMemoryBitmap::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CClientMemoryBitmap::`vftable'{for `IBitmapSource'};
  *((_QWORD *)this + 3) = &CSystemMemoryBitmap::`vftable'{for `IBitmapDest'};
  *((_QWORD *)this + 4) = &CSystemMemoryBitmap::`vftable'{for `IBitmapUnlock'};
  *((_QWORD *)this + 5) = &CClientMemoryBitmap::`vftable'{for `IWICBitmap'};
  *((_QWORD *)this + 6) = &CClientMemoryBitmap::`vftable'{for `CMILResourceCache'};
  *((_QWORD *)this + 14) = &CSystemMemoryBitmap::`vftable'{for `CMTALock'};
  *((_QWORD *)this + 32) = &CSystemMemoryBitmap::`vftable';
  if ( v1 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
  CBitmap::~CBitmap(this);
}
