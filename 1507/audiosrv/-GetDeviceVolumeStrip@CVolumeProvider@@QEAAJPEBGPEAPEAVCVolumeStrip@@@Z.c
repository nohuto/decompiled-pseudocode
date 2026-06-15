/*
 * XREFs of ?GetDeviceVolumeStrip@CVolumeProvider@@QEAAJPEBGPEAPEAVCVolumeStrip@@@Z @ 0x18002CD20
 * Callers:
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEAPEAUIAudioDeviceGraph@@@Z @ 0x180021F10 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 *     AudioVolumeConnect @ 0x18002CB90 (AudioVolumeConnect.c)
 *     ?ProcessAwayModeStateChange@CAudioSrv@@AEAAKE@Z @ 0x180069ACC (-ProcessAwayModeStateChange@CAudioSrv@@AEAAKE@Z.c)
 *     ?GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAVCVolumeStrip@@@Z @ 0x180079340 (-GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAVCVolumeStrip@@@Z.c)
 *     ??0CEndpointVolumeState@@QEAA@PEBGMH@Z @ 0x18009EA28 (--0CEndpointVolumeState@@QEAA@PEBGMH@Z.c)
 *     ?ApplyEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKPEAH1PEAM11@Z @ 0x1800A1358 (-ApplyEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKPEAH1PEAM11@Z.c)
 *     ?UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z @ 0x1800A223C (-UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAVCVolumeStrip@@@Z @ 0x18003D250 (-CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAVCVolumeStrip@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ??1?$CComPtr@UIKsGetProposedFormat@@@ATL@@QEAA@XZ @ 0x180066D3C (--1-$CComPtr@UIKsGetProposedFormat@@@ATL@@QEAA@XZ.c)
 *     ??0?$CComPtr@VCVolumeStrip@@@ATL@@QEAA@XZ @ 0x180067670 (--0-$CComPtr@VCVolumeStrip@@@ATL@@QEAA@XZ.c)
 *     ?Attach@?$CComPtrBase@UIAudioSessionInfo@@@ATL@@QEAAXPEAUIAudioSessionInfo@@@Z @ 0x180067FD4 (-Attach@-$CComPtrBase@UIAudioSessionInfo@@@ATL@@QEAAXPEAUIAudioSessionInfo@@@Z.c)
 *     ?HasTooManyReferences@@YA_NPEAUIUnknown@@@Z @ 0x180072F90 (-HasTooManyReferences@@YA_NPEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CVolumeProvider::GetDeviceVolumeStrip(
        LPCRITICAL_SECTION lpCriticalSection,
        STRSAFE_PCNZWCH pszSrc,
        struct IUnknown **a3)
{
  int v6; // edi
  PCNZWCH *Flink; // r14
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rbx
  struct IUnknown *v9; // rbx
  int DeviceVolumeStrip; // eax
  struct IUnknown *v12; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0;
  ATL::CComPtr<CVolumeStrip>::CComPtr<CVolumeStrip>(&v12);
  EnterCriticalSection(lpCriticalSection);
  if ( pszSrc )
  {
    if ( a3 )
    {
      Flink = 0LL;
      EnterCriticalSection(lpCriticalSection);
      DebugInfo = lpCriticalSection[1].DebugInfo;
      while ( DebugInfo )
      {
        Flink = (PCNZWCH *)DebugInfo->ProcessLocksList.Flink;
        DebugInfo = *(PRTL_CRITICAL_SECTION_DEBUG *)&DebugInfo->Type;
        if ( CompareStringW(0x7Fu, 1u, Flink[28], -1, pszSrc, -1) == 2 )
        {
          (*((void (__fastcall **)(PCNZWCH *))*Flink + 1))(Flink);
          break;
        }
        Flink = 0LL;
      }
      LeaveCriticalSection(lpCriticalSection);
      ATL::CComPtrBase<IAudioSessionInfo>::Attach(&v12, Flink);
      v9 = v12;
      if ( (v12
         || (DeviceVolumeStrip = CVolumeProvider::CreateDeviceVolumeStrip(
                                   lpCriticalSection,
                                   pszSrc,
                                   (struct CVolumeStrip **)&v12),
             v9 = v12,
             v6 = DeviceVolumeStrip,
             DeviceVolumeStrip >= 0))
        && HasTooManyReferences(v9) )
      {
        v6 = -2147024882;
      }
      else
      {
        v12 = 0LL;
        *a3 = v9;
      }
    }
    else
    {
      v6 = -2147467261;
    }
  }
  else
  {
    v6 = -2147024809;
  }
  LeaveCriticalSection(lpCriticalSection);
  if ( v6 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      12LL,
      &WPP_890e168e4d5dba4455ca7d4f19a944e5_Traceguids,
      (unsigned int)v6);
  }
  ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(&v12);
  return (unsigned int)v6;
}
