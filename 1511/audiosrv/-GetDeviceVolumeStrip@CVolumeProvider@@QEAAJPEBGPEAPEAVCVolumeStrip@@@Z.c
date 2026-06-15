/*
 * XREFs of ?GetDeviceVolumeStrip@CVolumeProvider@@QEAAJPEBGPEAPEAVCVolumeStrip@@@Z @ 0x18000EE10
 * Callers:
 *     AudioVolumeConnect @ 0x180038CD0 (AudioVolumeConnect.c)
 *     ?ProcessAwayModeStateChange@CAudioSrv@@AEAAKE@Z @ 0x18006862C (-ProcessAwayModeStateChange@CAudioSrv@@AEAAKE@Z.c)
 *     ?GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAVCVolumeStrip@@@Z @ 0x180074560 (-GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAVCVolumeStrip@@@Z.c)
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53_NPEAPEAUIAudioDeviceGraph@@@Z @ 0x18008BBE8 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 *     ??0CEndpointVolumeState@@QEAA@PEBGMH@Z @ 0x18009B898 (--0CEndpointVolumeState@@QEAA@PEBGMH@Z.c)
 *     ?ApplyEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKPEAH1PEAM11@Z @ 0x18009E4C8 (-ApplyEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKPEAH1PEAM11@Z.c)
 *     ?UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z @ 0x18009F3EC (-UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z.c)
 * Callees:
 *     ?AddRef@CVolumeStrip@@UEAAKXZ @ 0x18000F650 (-AddRef@CVolumeStrip@@UEAAKXZ.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAVCVolumeStrip@@@Z @ 0x180043FEC (-CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAVCVolumeStrip@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CVolumeProvider::GetDeviceVolumeStrip(
        LPCRITICAL_SECTION lpCriticalSection,
        const unsigned __int16 *a2,
        PCNZWCH **a3)
{
  int DeviceVolumeStrip; // ebx
  PCNZWCH *Flink; // rdi
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // r14
  unsigned int (__fastcall *v9)(CVolumeStrip *__hidden); // rbp

  DeviceVolumeStrip = 0;
  EnterCriticalSection(lpCriticalSection);
  if ( a2 )
  {
    if ( a3 )
    {
      Flink = 0LL;
      EnterCriticalSection(lpCriticalSection);
      DebugInfo = lpCriticalSection[1].DebugInfo;
      if ( DebugInfo )
      {
        while ( 1 )
        {
          Flink = (PCNZWCH *)DebugInfo->ProcessLocksList.Flink;
          DebugInfo = *(PRTL_CRITICAL_SECTION_DEBUG *)&DebugInfo->Type;
          if ( CompareStringW(0x7Fu, 1u, Flink[28], -1, a2, -1) == 2 )
            break;
          Flink = 0LL;
          if ( !DebugInfo )
            goto LABEL_7;
        }
        v9 = (unsigned int (__fastcall *)(CVolumeStrip *__hidden))*((_QWORD *)*Flink + 1);
        if ( v9 == CVolumeStrip::AddRef )
          CVolumeStrip::AddRef((CVolumeStrip *)Flink);
        else
          v9((CVolumeStrip *)Flink);
      }
LABEL_7:
      LeaveCriticalSection(lpCriticalSection);
      *a3 = Flink;
      if ( !Flink )
        DeviceVolumeStrip = CVolumeProvider::CreateDeviceVolumeStrip(lpCriticalSection, a2, (struct CVolumeStrip **)a3);
    }
    else
    {
      DeviceVolumeStrip = -2147467261;
    }
  }
  else
  {
    DeviceVolumeStrip = -2147024809;
  }
  LeaveCriticalSection(lpCriticalSection);
  if ( DeviceVolumeStrip < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      10LL,
      &WPP_196b41b4f5a2aeeda9cf96382b85a072_Traceguids,
      (unsigned int)DeviceVolumeStrip);
  }
  return (unsigned int)DeviceVolumeStrip;
}
