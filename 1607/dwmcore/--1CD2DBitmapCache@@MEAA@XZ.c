/*
 * XREFs of ??1CD2DBitmapCache@@MEAA@XZ @ 0x18009F7D8
 * Callers:
 *     ??1CRenderTargetBitmap@@MEAA@XZ @ 0x18001EACC (--1CRenderTargetBitmap@@MEAA@XZ.c)
 *     ??1CBitmapRealization@@MEAA@XZ @ 0x1800905AC (--1CBitmapRealization@@MEAA@XZ.c)
 *     ??_ECD2DBitmapCache@@MEAAPEAXI@Z @ 0x180131AB0 (--_ECD2DBitmapCache@@MEAAPEAXI@Z.c)
 *     ??1CDxHandleStereoBitmapRealization@@MEAA@XZ @ 0x18018FFD8 (--1CDxHandleStereoBitmapRealization@@MEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ClearCache@CD2DBitmapCache@@IEAAXXZ @ 0x18009F84C (-ClearCache@CD2DBitmapCache@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD2DBitmapCache::~CD2DBitmapCache(CD2DBitmapCache *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  *(_QWORD *)this = &CD2DBitmapCache::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CD2DBitmapCache::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 3) = &CD2DBitmapCache::`vftable'{for `IDeviceResourceNotify'};
  CD2DBitmapCache::ClearCache(this);
  v2 = *((_QWORD *)this + 6);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 7);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *((_QWORD *)this + 9);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 80);
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
