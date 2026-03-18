/*
 * XREFs of ?UpdateDisplayRestriction@CBitmapRealization@@QEAA_NHPEAUHMONITOR__@@@Z @ 0x18008322C
 * Callers:
 *     ?UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180032C50 (-UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ??0CDxHandleBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x180032F30 (--0CDxHandleBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_IN.c)
 *     ??0CDxHandleYUVBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x18015E34C (--0CDxHandleYUVBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION.c)
 *     ?UpdateAttributes@CDxHandleDecodeBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x18015FF30 (-UpdateAttributes@CDxHandleDecodeBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ?GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z @ 0x18001D708 (-GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?SetDisplayRestriction@CDxHandleBitmapRealization@@UEAA_NVDisplayId@@@Z @ 0x180032E50 (-SetDisplayRestriction@CDxHandleBitmapRealization@@UEAA_NVDisplayId@@@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18006EE14 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x18006F924 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

char __fastcall CBitmapRealization::UpdateDisplayRestriction(CBitmapRealization *this, int a2, HMONITOR a3)
{
  unsigned int v3; // ebx
  CDisplaySet *v4; // rdi
  char (__fastcall *v7)(__int64, int); // rdi
  int CurrentDisplaySet; // eax
  int DisplayIdFromMonitor; // eax
  CDisplaySet *v11; // [rsp+50h] [rbp+8h] BYREF
  int v12; // [rsp+58h] [rbp+10h] BYREF

  v3 = DisplayId::Invalid;
  v4 = 0LL;
  v11 = 0LL;
  v12 = DisplayId::Invalid;
  if ( a2 && a3 )
  {
    CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v11);
    if ( CurrentDisplaySet < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, CurrentDisplaySet, 0xADu);
      v4 = v11;
    }
    else
    {
      v4 = v11;
      DisplayIdFromMonitor = CDisplaySet::GetDisplayIdFromMonitor(v11, a3, (struct DisplayId *)&v12);
      if ( DisplayIdFromMonitor < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, DisplayIdFromMonitor, 0xB0u);
      v3 = v12;
    }
  }
  else
  {
    v3 = DisplayId::None;
  }
  if ( v4 )
    CDisplaySet::Release(v4);
  v7 = *(char (__fastcall **)(__int64, int))(*(_QWORD *)this + 56LL);
  if ( v7 == CDxHandleBitmapRealization::SetDisplayRestriction )
    return CDxHandleBitmapRealization::SetDisplayRestriction((__int64)this, v3);
  else
    return v7((__int64)this, v3);
}
