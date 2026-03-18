/*
 * XREFs of ??1CRenderTargetBitmap@@MEAA@XZ @ 0x18001EACC
 * Callers:
 *     ??_ECRenderTargetBitmap@@MEAAPEAXI@Z @ 0x18001EA10 (--_ECRenderTargetBitmap@@MEAAPEAXI@Z.c)
 *     ??1CRenderTargetImageSource@@MEAA@XZ @ 0x180131A54 (--1CRenderTargetImageSource@@MEAA@XZ.c)
 * Callees:
 *     ?ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ @ 0x18001EC44 (-ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRenderTargetBitmap::~CRenderTargetBitmap(CRenderTargetBitmap *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  *(_QWORD *)this = &CRenderTargetBitmap::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CDecodeBitmap::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 3) = &CDecodeBitmap::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 14) = &CDecodeBitmap::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 15) = &CDecodeBitmap::`vftable'{for `IDeviceResource'};
  CRenderTargetBitmap::ReleaseRenderTargetBitmap(this);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 160, v2, v3);
  v4 = *((_QWORD *)this + 19);
  if ( v4 )
  {
    *((_QWORD *)this + 19) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 18);
  if ( v5 )
  {
    *((_QWORD *)this + 18) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 17);
  if ( v6 )
  {
    *((_QWORD *)this + 17) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 16);
  if ( v7 )
  {
    *((_QWORD *)this + 16) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  CD2DBitmapCache::~CD2DBitmapCache(this);
}
