/*
 * XREFs of ??0CDxHandleBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x180055410
 * Callers:
 *     ?Create@CDxHandleBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x1800B22B4 (-Create@CDxHandleBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION.c)
 *     ??0CDxHandleAdvancedDirectFlipBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@U_LUID@@@Z @ 0x18018ED68 (--0CDxHandleAdvancedDirectFlipBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBU.c)
 *     ??0CDxHandleStereoBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x18018FEF0 (--0CDxHandleStereoBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZAT.c)
 * Callees:
 *     ?UpdateDisplayRestriction@CBitmapRealization@@QEAA_NHPEAUHMONITOR__@@@Z @ 0x18009016C (-UpdateDisplayRestriction@CBitmapRealization@@QEAA_NHPEAUHMONITOR__@@@Z.c)
 *     ??0CBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x18009042C (--0CBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAV.c)
 */

CDxHandleBitmapRealization *__fastcall CDxHandleBitmapRealization::CDxHandleBitmapRealization(
        CDxHandleBitmapRealization *this,
        const struct _GUID *a2,
        const struct CSM_BUFFER_ATTRIBUTES *a3,
        const struct CSM_REALIZATION_INFO *a4,
        struct CDecodeBitmap *a5)
{
  CBitmapRealization::CBitmapRealization(this, a2, a3, a4, a5);
  *((_QWORD *)this + 52) = 0LL;
  *(_QWORD *)this = &CDxHandleBitmapRealization::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CDxHandleBitmapRealization::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 3) = &CDxHandleStereoBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 14) = &CDxHandleBitmapRealization::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 15) = &CSectionBitmapRealization::`vftable'{for `IDeviceResource'};
  *((_DWORD *)this + 106) = 0;
  *((_BYTE *)this + 428) = 1;
  CBitmapRealization::UpdateDisplayRestriction(this, *((_DWORD *)a3 + 29) & 1, *((HMONITOR *)a3 + 1));
  return this;
}
