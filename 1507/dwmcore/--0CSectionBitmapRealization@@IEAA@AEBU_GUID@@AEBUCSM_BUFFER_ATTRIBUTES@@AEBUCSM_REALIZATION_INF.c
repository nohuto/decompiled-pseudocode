/*
 * XREFs of ??0CSectionBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@@Z @ 0x18014D4F4
 * Callers:
 *     ?Create@CSectionBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x18014D924 (-Create@CSectionBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_.c)
 * Callees:
 *     ??0CBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x18004676C (--0CBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z.c)
 */

CSectionBitmapRealization *__fastcall CSectionBitmapRealization::CSectionBitmapRealization(
        CSectionBitmapRealization *this,
        const struct _GUID *a2,
        const struct CSM_BUFFER_ATTRIBUTES *a3,
        const struct CSM_REALIZATION_INFO *a4,
        const struct CSM_SYSMEM_SECTION_INFO *a5)
{
  __int64 v6; // xmm1_8
  CSectionBitmapRealization *result; // rax

  CBitmapRealization::CBitmapRealization(this, a2, a3, a4);
  *((_QWORD *)this + 2) = &CSectionBitmapRealization::`vftable'{for `ID2DBitmapCache'};
  *(_QWORD *)this = &CSectionBitmapRealization::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 3) = &CSectionBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 14) = &CSectionBitmapRealization::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 15) = &CSectionBitmapRealization::`vftable'{for `IDeviceResource'};
  *(_OWORD *)((char *)this + 456) = *(_OWORD *)a5;
  v6 = *((_QWORD *)a5 + 2);
  *((_QWORD *)this + 60) = 0LL;
  *((_BYTE *)this + 512) = 0;
  *((_QWORD *)this + 65) = 0LL;
  result = this;
  *((_QWORD *)this + 59) = v6;
  return result;
}
