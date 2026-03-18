/*
 * XREFs of ??1CBitmapRealization@@MEAA@XZ @ 0x1800905AC
 * Callers:
 *     ??1CDxHandleBitmapRealization@@MEAA@XZ @ 0x1800551A8 (--1CDxHandleBitmapRealization@@MEAA@XZ.c)
 *     ??1CSectionBitmapRealization@@MEAA@XZ @ 0x18018E4D0 (--1CSectionBitmapRealization@@MEAA@XZ.c)
 *     ??1CDxHandleYUVBitmapRealization@@MEAA@XZ @ 0x18019069C (--1CDxHandleYUVBitmapRealization@@MEAA@XZ.c)
 *     ??_ECBitmapRealization@@MEAAPEAXI@Z @ 0x180191800 (--_ECBitmapRealization@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18009A9F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveHwProtectedEntity@CD3DDeviceManager@@QEAAXU_LUID@@@Z @ 0x180172DE4 (-RemoveHwProtectedEntity@CD3DDeviceManager@@QEAAXU_LUID@@@Z.c)
 */

void __fastcall CBitmapRealization::~CBitmapRealization(CBitmapRealization *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx

  *(_QWORD *)this = &CBitmapRealization::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CDxHandleBitmapRealization::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 3) = &CBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 14) = &CBitmapRealization::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 15) = &CSectionBitmapRealization::`vftable'{for `IDeviceResource'};
  v4 = *((_QWORD *)this + 45);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  if ( (*((_DWORD *)this + 61) & 0x100) != 0 )
    CD3DDeviceManager::RemoveHwProtectedEntity(
      (CD3DDeviceManager *)&g_D3DDeviceManager,
      *(struct _LUID *)((char *)this + 264));
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 368, a2, a3);
  FastRegion::CRegion::FreeMemory((CBitmapRealization *)((char *)this + 288));
  CD2DBitmapCache::~CD2DBitmapCache(this);
}
