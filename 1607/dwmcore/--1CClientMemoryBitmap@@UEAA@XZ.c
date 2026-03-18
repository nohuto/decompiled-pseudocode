/*
 * XREFs of ??1CClientMemoryBitmap@@UEAA@XZ @ 0x1800B1DA4
 * Callers:
 *     ??_ECClientMemoryBitmap@@UEAAPEAXI@Z @ 0x1800B1BD0 (--_ECClientMemoryBitmap@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CClientMemoryBitmap::~CClientMemoryBitmap(CClientMemoryBitmap *this)
{
  __int64 v2; // rcx

  *((_QWORD *)this + 33) = 0LL;
  *(_QWORD *)this = &CClientMemoryBitmap::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CClientMemoryBitmap::`vftable'{for `IBitmapSource'};
  *((_QWORD *)this + 3) = &CSystemMemoryBitmap::`vftable'{for `IBitmapDest'};
  *((_QWORD *)this + 4) = &CSystemMemoryBitmap::`vftable'{for `IBitmapUnlock'};
  *((_QWORD *)this + 5) = &CClientMemoryBitmap::`vftable'{for `IWICBitmap'};
  *((_QWORD *)this + 6) = &CClientMemoryBitmap::`vftable'{for `CMILResourceCache'};
  *((_QWORD *)this + 14) = &CClientMemoryBitmap::`vftable'{for `CMTALock'};
  *((_QWORD *)this + 32) = &CSystemMemoryBitmap::`vftable';
  v2 = *((_QWORD *)this + 35);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  CSystemMemoryBitmap::~CSystemMemoryBitmap(this);
}
