/*
 * XREFs of ?UpdateDisplayRestriction@CBitmapRealization@@QEAA_NHPEAUHMONITOR__@@@Z @ 0x18009016C
 * Callers:
 *     ?UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180055080 (-UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ??0CDxHandleBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x180055410 (--0CDxHandleBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_IN.c)
 *     ??0CDxHandleYUVBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x180190604 (--0CDxHandleYUVBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION.c)
 *     ?UpdateAttributes@CDxHandleYUVBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180191400 (-UpdateAttributes@CDxHandleYUVBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x18003653C (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180038AF8 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetDisplayId@CDxHandleBitmapRealization@@UEAA_NVDisplayId@@@Z @ 0x180055150 (-SetDisplayId@CDxHandleBitmapRealization@@UEAA_NVDisplayId@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z @ 0x180110DC4 (-GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z.c)
 */

char __fastcall CBitmapRealization::UpdateDisplayRestriction(CBitmapRealization *this, __int64 a2, HMONITOR a3)
{
  unsigned int v3; // ebx
  CDisplaySet *v4; // rdi
  char (__fastcall *v7)(__int64, int); // rax
  int CurrentDisplaySet; // eax
  int DisplayIdFromMonitor; // eax
  CDisplaySet *v11; // [rsp+50h] [rbp+8h] BYREF
  int v12; // [rsp+58h] [rbp+10h] BYREF

  v3 = DisplayId::Invalid;
  v4 = 0LL;
  v11 = 0LL;
  v12 = DisplayId::Invalid;
  if ( (_DWORD)a2 && a3 )
  {
    CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v11);
    if ( CurrentDisplaySet < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, CurrentDisplaySet, 0xE3u);
      v4 = v11;
    }
    else
    {
      v4 = v11;
      DisplayIdFromMonitor = CDisplaySet::GetDisplayIdFromMonitor(v11, a3, (struct DisplayId *)&v12);
      if ( DisplayIdFromMonitor < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, DisplayIdFromMonitor, 0xE6u);
      v3 = v12;
    }
  }
  else
  {
    v3 = DisplayId::None;
  }
  if ( v4 )
    CDisplaySet::Release(v4, a2, (__int64)a3);
  v7 = *(char (__fastcall **)(__int64, int))(*(_QWORD *)this + 56LL);
  if ( v7 == CDxHandleBitmapRealization::SetDisplayId )
    return CDxHandleBitmapRealization::SetDisplayId((__int64)this, v3);
  else
    return v7((__int64)this, v3);
}
