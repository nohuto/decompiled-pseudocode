/*
 * XREFs of ??0CDxHandleYUVBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x180190604
 * Callers:
 *     ?Create@CDxHandleYUVBitmapRealization@@SAJAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x1801907F0 (-Create@CDxHandleYUVBitmapRealization@@SAJAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZAT.c)
 *     ?CreateSubResourceRealization@CDxHandleYUVBitmapRealization@@QEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x180190908 (-CreateSubResourceRealization@CDxHandleYUVBitmapRealization@@QEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEB.c)
 * Callees:
 *     ?UpdateDisplayRestriction@CBitmapRealization@@QEAA_NHPEAUHMONITOR__@@@Z @ 0x18009016C (-UpdateDisplayRestriction@CBitmapRealization@@QEAA_NHPEAUHMONITOR__@@@Z.c)
 *     ??0CBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x18009042C (--0CBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAV.c)
 */

CDxHandleYUVBitmapRealization *__fastcall CDxHandleYUVBitmapRealization::CDxHandleYUVBitmapRealization(
        CDxHandleYUVBitmapRealization *this,
        const struct _GUID *a2,
        const struct CSM_BUFFER_ATTRIBUTES *a3,
        const struct CSM_REALIZATION_INFO *a4,
        struct CDecodeBitmap *a5)
{
  CBitmapRealization::CBitmapRealization(this, a2, a3, a4, a5);
  *((_QWORD *)this + 53) = 0LL;
  *(_QWORD *)this = &CDxHandleYUVBitmapRealization::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CDxHandleYUVBitmapRealization::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 3) = &CDxHandleYUVBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 14) = &CDxHandleYUVBitmapRealization::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 15) = &CDxHandleYUVBitmapRealization::`vftable'{for `IDeviceResource'};
  *((_QWORD *)this + 52) = &CDxHandleYUVBitmapRealization::`vftable';
  *((_DWORD *)this + 108) = 0;
  CBitmapRealization::UpdateDisplayRestriction(this, *((_DWORD *)a3 + 29) & 1, *((HMONITOR *)a3 + 1));
  return this;
}
