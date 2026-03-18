/*
 * XREFs of ??0CDxHandleStereoBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x18018FEF0
 * Callers:
 *     ?Create@CDxHandleStereoBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x180190104 (-Create@CDxHandleStereoBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALI.c)
 * Callees:
 *     ??0CDxHandleBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x180055410 (--0CDxHandleBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_IN.c)
 */

CDxHandleStereoBitmapRealization *__fastcall CDxHandleStereoBitmapRealization::CDxHandleStereoBitmapRealization(
        CDxHandleStereoBitmapRealization *this,
        const struct _GUID *a2,
        const struct CSM_BUFFER_ATTRIBUTES *a3,
        const struct CSM_REALIZATION_INFO *a4)
{
  CDxHandleStereoBitmapRealization *result; // rax
  struct _GUID v7; // xmm0

  CDxHandleBitmapRealization::CDxHandleBitmapRealization(this, a2, a3, a4, 0LL);
  *((_QWORD *)this + 54) = 0LL;
  *(_QWORD *)this = &CDxHandleStereoBitmapRealization::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CDxHandleStereoBitmapRealization::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 3) = &CDxHandleStereoBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 14) = &CDxHandleStereoBitmapRealization::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 15) = &CSectionBitmapRealization::`vftable'{for `IDeviceResource'};
  *((_DWORD *)this + 112) = 0;
  *((_QWORD *)this + 55) = &CD2DBitmapCache::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 57) = &CD2DBitmapCache::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 58) = &CD2DBitmapCache::`vftable'{for `IDeviceResourceNotify'};
  result = this;
  v7 = *a2;
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  *(struct _GUID *)((char *)this + 472) = v7;
  *((_QWORD *)this + 65) = 0LL;
  *((_QWORD *)this + 66) = 0LL;
  *((_DWORD *)this + 134) = 0;
  *((_DWORD *)this + 135) = 0;
  *((_DWORD *)this + 136) = 0;
  return result;
}
