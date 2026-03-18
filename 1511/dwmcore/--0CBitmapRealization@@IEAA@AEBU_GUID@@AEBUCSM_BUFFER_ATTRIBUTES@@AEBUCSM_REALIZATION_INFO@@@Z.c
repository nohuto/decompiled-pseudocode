/*
 * XREFs of ??0CBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x180083698
 * Callers:
 *     ??0CDxHandleBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x180032F30 (--0CDxHandleBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_IN.c)
 *     ??0CSectionBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@@Z @ 0x18015BE54 (--0CSectionBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INF.c)
 *     ??0CDxHandleYUVBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x18015E34C (--0CDxHandleYUVBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION.c)
 * Callees:
 *     <none>
 */

CBitmapRealization *__fastcall CBitmapRealization::CBitmapRealization(
        CBitmapRealization *this,
        const struct _GUID *a2,
        const struct CSM_BUFFER_ATTRIBUTES *a3,
        const struct CSM_REALIZATION_INFO *a4)
{
  __int128 v5; // xmm0
  _OWORD *v6; // rcx
  __int128 v7; // xmm1

  *(_QWORD *)this = &CD2DBitmapCache::`vftable'{for `CMILCOMBase'};
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 3) = &CD2DBitmapCache::`vftable'{for `IDeviceResourceNotify'};
  v5 = (__int128)*a2;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_OWORD *)this + 2) = v5;
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
  v6 = (_OWORD *)((char *)this + 128);
  *v6 = *(_OWORD *)a3;
  v6[1] = *((_OWORD *)a3 + 1);
  v6[2] = *((_OWORD *)a3 + 2);
  v6[3] = *((_OWORD *)a3 + 3);
  v6[4] = *((_OWORD *)a3 + 4);
  v6[5] = *((_OWORD *)a3 + 5);
  v6[6] = *((_OWORD *)a3 + 6);
  v6 += 8;
  *(v6 - 1) = *((_OWORD *)a3 + 7);
  *v6 = *((_OWORD *)a3 + 8);
  v6[1] = *((_OWORD *)a3 + 9);
  *((_QWORD *)v6 + 4) = *((_QWORD *)a3 + 20);
  *(_OWORD *)((char *)this + 296) = *(_OWORD *)a4;
  v7 = *((_OWORD *)a4 + 1);
  *((_BYTE *)this + 328) = 0;
  *(_OWORD *)((char *)this + 312) = v7;
  *((_QWORD *)this + 42) = (char *)this + 344;
  *((_DWORD *)this + 86) = 0;
  *((_QWORD *)this + 51) = (char *)this + 440;
  *((_QWORD *)this + 52) = (char *)this + 440;
  *((_DWORD *)this + 106) = 2;
  *(_QWORD *)((char *)this + 428) = 2LL;
  if ( *((_DWORD *)this + 64) )
    ++CComposition::s_cHwProtectedEntities;
  return this;
}
