/*
 * XREFs of ??0CBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x18009042C
 * Callers:
 *     ??0CDxHandleBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x180055410 (--0CDxHandleBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_IN.c)
 *     ??0CSectionBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@@Z @ 0x18018E444 (--0CSectionBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INF.c)
 *     ??0CDxHandleYUVBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x180190604 (--0CDxHandleYUVBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?AddHwProtectedEntity@CD3DDeviceManager@@QEAAXU_LUID@@@Z @ 0x1801726AC (-AddHwProtectedEntity@CD3DDeviceManager@@QEAAXU_LUID@@@Z.c)
 */

CBitmapRealization *__fastcall CBitmapRealization::CBitmapRealization(
        CBitmapRealization *this,
        const struct _GUID *a2,
        const struct CSM_BUFFER_ATTRIBUTES *a3,
        const struct CSM_REALIZATION_INFO *a4,
        struct CDecodeBitmap *a5)
{
  __int128 v6; // xmm0
  __int128 v7; // xmm1

  *(_QWORD *)this = &CD2DBitmapCache::`vftable'{for `CMILCOMBase'};
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = &CD2DBitmapCache::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 3) = &CD2DBitmapCache::`vftable'{for `IDeviceResourceNotify'};
  v6 = (__int128)*a2;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_OWORD *)this + 2) = v6;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *(_QWORD *)this = &CBitmapRealization::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CDxHandleBitmapRealization::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 3) = &CBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 14) = &CBitmapRealization::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 15) = &CSectionBitmapRealization::`vftable'{for `IDeviceResource'};
  *((_OWORD *)this + 8) = *(_OWORD *)a3;
  *((_OWORD *)this + 9) = *((_OWORD *)a3 + 1);
  *((_OWORD *)this + 10) = *((_OWORD *)a3 + 2);
  *((_OWORD *)this + 11) = *((_OWORD *)a3 + 3);
  *((_OWORD *)this + 12) = *((_OWORD *)a3 + 4);
  *((_OWORD *)this + 13) = *((_OWORD *)a3 + 5);
  *((_OWORD *)this + 14) = *((_OWORD *)a3 + 6);
  *((_QWORD *)this + 30) = *((_QWORD *)a3 + 14);
  *(_OWORD *)((char *)this + 248) = *(_OWORD *)a4;
  v7 = *((_OWORD *)a4 + 1);
  *((_BYTE *)this + 280) = 0;
  *(_OWORD *)((char *)this + 264) = v7;
  *((_QWORD *)this + 36) = (char *)this + 296;
  *((_DWORD *)this + 74) = 0;
  *((_QWORD *)this + 46) = (char *)this + 400;
  *((_QWORD *)this + 47) = (char *)this + 400;
  *((_DWORD *)this + 96) = 2;
  *(_QWORD *)((char *)this + 388) = 2LL;
  *((_QWORD *)this + 45) = a5;
  if ( a5 )
    (*(void (__fastcall **)(struct CDecodeBitmap *))(*(_QWORD *)a5 + 8LL))(a5);
  if ( (*((_DWORD *)this + 61) & 0x100) != 0 )
    CD3DDeviceManager::AddHwProtectedEntity(
      (CD3DDeviceManager *)&g_D3DDeviceManager,
      *(struct _LUID *)((char *)this + 264));
  return this;
}
