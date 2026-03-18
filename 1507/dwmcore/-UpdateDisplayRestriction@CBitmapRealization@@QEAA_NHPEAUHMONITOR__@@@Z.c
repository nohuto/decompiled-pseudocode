/*
 * XREFs of ?UpdateDisplayRestriction@CBitmapRealization@@QEAA_NHPEAUHMONITOR__@@@Z @ 0x180046928
 * Callers:
 *     ?UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x18001ED20 (-UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ??0CDxHandleBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x18001EF78 (--0CDxHandleBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_IN.c)
 *     ??0CDxHandleYUVBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x18014F88C (--0CDxHandleYUVBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION.c)
 *     ?UpdateAttributes@CDxHandleDecodeBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180152A00 (-UpdateAttributes@CDxHandleDecodeBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ?GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z @ 0x18000F9E0 (-GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z.c)
 *     ?SetDisplayRestriction@CDxHandleBitmapRealization@@UEAA_NVDisplayId@@@Z @ 0x18001EEB0 (-SetDisplayRestriction@CDxHandleBitmapRealization@@UEAA_NVDisplayId@@@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180054C34 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

char __fastcall CBitmapRealization::UpdateDisplayRestriction(CBitmapRealization *this, int a2, HMONITOR a3)
{
  unsigned int v4; // ebx
  char (__fastcall *v6)(__int64, int); // rdi
  int CurrentDisplaySet; // eax
  int DisplayIdFromMonitor; // eax
  CDisplaySet *v10; // [rsp+40h] [rbp+8h] BYREF
  int v11; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0LL;
  v4 = DisplayId::Invalid;
  v11 = DisplayId::Invalid;
  if ( a2 && a3 )
  {
    CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v10);
    if ( CurrentDisplaySet < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, CurrentDisplaySet, 0xADu);
    }
    else
    {
      DisplayIdFromMonitor = CDisplaySet::GetDisplayIdFromMonitor(v10, a3, (struct DisplayId *)&v11);
      if ( DisplayIdFromMonitor < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, DisplayIdFromMonitor, 0xB0u);
      v4 = v11;
    }
  }
  else
  {
    v4 = DisplayId::None;
  }
  v6 = *(char (__fastcall **)(__int64, int))(*(_QWORD *)this + 56LL);
  if ( v6 == CDxHandleBitmapRealization::SetDisplayRestriction )
    return CDxHandleBitmapRealization::SetDisplayRestriction((__int64)this, v4);
  else
    return v6((__int64)this, v4);
}
