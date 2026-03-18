/*
 * XREFs of ?ClearCache@CD2DBitmapCache@@IEAAXXZ @ 0x18001B3CC
 * Callers:
 *     ?InitializeCache@CD2DBitmapCache@@UEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x18001B430 (-InitializeCache@CD2DBitmapCache@@UEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 *     ??1CD2DBitmapCache@@MEAA@XZ @ 0x18001B5AC (--1CD2DBitmapCache@@MEAA@XZ.c)
 *     ?NotifyInvalidResource@CDxHandleBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x18008CF50 (-NotifyInvalidResource@CDxHandleBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CD2DBitmapCache@@UEAAXPEBVIDeviceResource@@@Z @ 0x18014DDD0 (-NotifyInvalidResource@CD2DBitmapCache@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x180016050 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CD2DBitmapCache::ClearCache(CD2DBitmapCache *this)
{
  __int64 i; // rbp
  __int64 v3; // rdi

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 26); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 10) + 8 * i);
    CD2DResource::RemoveResourceNotifier((CD2DResource *)(v3 + 16), (CD2DBitmapCache *)((char *)this + 24));
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  *((_DWORD *)this + 26) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 80, 8LL);
}
