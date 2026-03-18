/*
 * XREFs of ??0CDxHandleAdvancedDirectFlipBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@U_LUID@@@Z @ 0x18015D230
 * Callers:
 *     ?Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@U_LUID@@PEAPEAVCBitmapRealization@@@Z @ 0x18015D388 (-Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@A.c)
 * Callees:
 *     ??0CDxHandleBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x180032F30 (--0CDxHandleBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_IN.c)
 */

CDxHandleAdvancedDirectFlipBitmapRealization *__fastcall CDxHandleAdvancedDirectFlipBitmapRealization::CDxHandleAdvancedDirectFlipBitmapRealization(
        CDxHandleAdvancedDirectFlipBitmapRealization *this,
        const struct _GUID *a2,
        const struct CSM_BUFFER_ATTRIBUTES *a3,
        const struct CSM_REALIZATION_INFO *a4,
        struct _LUID a5)
{
  CDxHandleBitmapRealization::CDxHandleBitmapRealization(this, a2, a3, a4);
  *(_QWORD *)this = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 3) = &CDxHandleStereoBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 14) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 15) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `IDeviceResource'};
  *((_QWORD *)this + 59) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable';
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  *((_WORD *)this + 252) = 0;
  *(struct _LUID *)((char *)this + 508) = a5;
  return this;
}
