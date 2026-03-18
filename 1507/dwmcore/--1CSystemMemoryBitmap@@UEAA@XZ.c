/*
 * XREFs of ??1CSystemMemoryBitmap@@UEAA@XZ @ 0x180083B00
 * Callers:
 *     ??1CClientMemoryBitmap@@UEAA@XZ @ 0x1800573CC (--1CClientMemoryBitmap@@UEAA@XZ.c)
 *     ??_ECSystemMemoryBitmap@@UEAAPEAXI@Z @ 0x1801438C0 (--_ECSystemMemoryBitmap@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CSystemMemoryBitmap::~CSystemMemoryBitmap(CSystemMemoryBitmap *this)
{
  __int64 v1; // rbp

  v1 = *((_QWORD *)this + 33);
  *(_QWORD *)this = &CSystemMemoryBitmap::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CClientMemoryBitmap::`vftable'{for `IBitmapSource'};
  *((_QWORD *)this + 3) = &CSystemMemoryBitmap::`vftable'{for `IBitmapDest'};
  *((_QWORD *)this + 4) = &CSystemMemoryBitmap::`vftable'{for `IBitmapUnlock'};
  *((_QWORD *)this + 5) = &CClientMemoryBitmap::`vftable'{for `IWICBitmap'};
  *((_QWORD *)this + 6) = &CWICBitmapWrapper::`vftable'{for `CMILResourceCache'};
  *((_QWORD *)this + 14) = &CSystemMemoryBitmap::`vftable'{for `CMTALock'};
  *((_QWORD *)this + 32) = &CSystemMemoryBitmap::`vftable';
  if ( v1 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v1);
  CBitmap::~CBitmap(this);
}
