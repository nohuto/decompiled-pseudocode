/*
 * XREFs of ??1CBitmap@@UEAA@XZ @ 0x180043CB4
 * Callers:
 *     ??1CCompressedSourceBitmap@@MEAA@XZ @ 0x1800439AC (--1CCompressedSourceBitmap@@MEAA@XZ.c)
 *     ??1CWICBitmapWrapper@@UEAA@XZ @ 0x180044528 (--1CWICBitmapWrapper@@UEAA@XZ.c)
 *     ??_ECBitmap@@UEAAPEAXI@Z @ 0x18009BD30 (--_ECBitmap@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002AA44 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??1CMTALock@@UEAA@XZ @ 0x180044284 (--1CMTALock@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBitmap::~CBitmap(CBitmap *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  *(_QWORD *)this = &CBitmap::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CBitmap::`vftable'{for `IBitmapSource'};
  *((_QWORD *)this + 3) = &CBitmap::`vftable'{for `IBitmapDest'};
  v2 = *((_QWORD *)this + 29);
  *((_QWORD *)this + 4) = &CBitmap::`vftable'{for `IBitmapUnlock'};
  *((_QWORD *)this + 5) = &CBitmap::`vftable'{for `IWICBitmap'};
  *((_QWORD *)this + 6) = &CBitmap::`vftable'{for `CMILResourceCache'};
  *((_QWORD *)this + 14) = &CBitmap::`vftable'{for `CMTALock'};
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    v2);
  CMTALock::~CMTALock((CBitmap *)((char *)this + 112));
  *((_QWORD *)this + 6) = &CMILResourceCache::`vftable';
  while ( *((_DWORD *)this + 20) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 7) + 8LL * (unsigned int)--*((_DWORD *)this + 20));
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 56);
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
