/*
 * XREFs of ??1CBitmapOfDeviceBitmaps@@MEAA@XZ @ 0x180094420
 * Callers:
 *     ??_ECBitmapOfDeviceBitmaps@@MEAAPEAXI@Z @ 0x180093EF0 (--_ECBitmapOfDeviceBitmaps@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveResourceNotifier@CHwBitmapColorSource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x180083320 (-RemoveResourceNotifier@CHwBitmapColorSource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Destruct@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAXXZ @ 0x1800A4064 (-Destruct@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBitmapOfDeviceBitmaps::~CBitmapOfDeviceBitmaps(CBitmapOfDeviceBitmaps *this)
{
  __int64 v1; // rsi
  const struct IDeviceResourceNotify *v2; // r14
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r8

  v1 = *((unsigned int *)this + 80);
  *(_QWORD *)this = &CBitmapOfDeviceBitmaps::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CBitmapOfDeviceBitmaps::`vftable'{for `IBitmapSource'};
  *((_QWORD *)this + 3) = &CBitmapOfDeviceBitmaps::`vftable'{for `IBitmapDest'};
  *((_QWORD *)this + 4) = &CBitmapOfDeviceBitmaps::`vftable'{for `IBitmapUnlock'};
  *((_QWORD *)this + 5) = &CBitmapOfDeviceBitmaps::`vftable'{for `IWICBitmap'};
  *((_QWORD *)this + 6) = &CBitmapOfDeviceBitmaps::`vftable'{for `CMILResourceCache'};
  *((_QWORD *)this + 14) = &CBitmapOfDeviceBitmaps::`vftable'{for `CMTALock'};
  *((_QWORD *)this + 32) = &CBitmapOfDeviceBitmaps::`vftable'{for `IDeviceResource'};
  v2 = (CBitmapOfDeviceBitmaps *)((char *)this + 264);
  *((_QWORD *)this + 33) = &CBitmapOfDeviceBitmaps::`vftable'{for `IDeviceResourceNotify'};
  if ( (_DWORD)v1 )
  {
    v4 = 96 * v1;
    do
    {
      v4 -= 96LL;
      LODWORD(v1) = v1 - 1;
      v5 = *(_QWORD *)(v4 + *((_QWORD *)this + 37) + 16);
      if ( v5 )
        CHwBitmapColorSource::RemoveResourceNotifier((CHwBitmapColorSource *)(v5 + 104), v2);
      CBitmapOfDeviceBitmaps::DeviceBitmapInfo::Destruct((CBitmapOfDeviceBitmaps::DeviceBitmapInfo *)(v4 + *((_QWORD *)this + 37)));
    }
    while ( (_DWORD)v1 );
  }
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)this + 34));
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 520, v6, v7);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 296, v8, v9);
  CBitmap::~CBitmap(this);
}
