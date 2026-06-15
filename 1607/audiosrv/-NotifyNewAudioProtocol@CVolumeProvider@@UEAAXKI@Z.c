/*
 * XREFs of ?NotifyNewAudioProtocol@CVolumeProvider@@UEAAXKI@Z @ 0x18002B8D0
 * Callers:
 *     VADServerUserSessionChanged @ 0x18002B458 (VADServerUserSessionChanged.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017B70 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetNext@?$CAtlList@PEAVCVolumeStrip@@V?$CElementTraits@PEAVCVolumeStrip@@@ATL@@@ATL@@QEAAAEAPEAVCVolumeStrip@@AEAPEAU__POSITION@@@Z @ 0x18002BBE8 (-GetNext@-$CAtlList@PEAVCVolumeStrip@@V-$CElementTraits@PEAVCVolumeStrip@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     WPP_SF_S @ 0x180038BEC (WPP_SF_S.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 *     WPP_SF_qS @ 0x180055818 (WPP_SF_qS.c)
 *     ?ProviderFinalRelease@CVolumeStrip@@QEAAXXZ @ 0x18005994C (-ProviderFinalRelease@CVolumeStrip@@QEAAXXZ.c)
 *     ?RemoveAt@?$CAtlList@PEAUIAudioStreamVolumeCallback@@V?$CElementTraits@PEAUIAudioStreamVolumeCallback@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180064F54 (-RemoveAt@-$CAtlList@PEAUIAudioStreamVolumeCallback@@V-$CElementTraits@PEAUIAudioStreamVolumeCal.c)
 */

void __fastcall CVolumeProvider::NotifyNewAudioProtocol(CVolumeProvider *this, unsigned int a2, int a3)
{
  __int64 v6; // rdi
  CAudioSession *v7; // rcx
  __int64 v8; // rbx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-28h] BYREF
  char v10; // [rsp+38h] [rbp-20h]
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v10 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v6 = *((_QWORD *)this + 7);
  v11 = v6;
  v7 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_423b265ce07b3f1896f97f09dfab210f_Traceguids, a2);
  }
  while ( v6 )
  {
    v8 = *(_QWORD *)ATL::CAtlList<CVolumeStrip *,ATL::CElementTraits<CVolumeStrip *>>::GetNext(v7, &v11);
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        14LL,
        &WPP_423b265ce07b3f1896f97f09dfab210f_Traceguids,
        *(_QWORD *)(v8 + 224));
    }
    if ( (unsigned int)GetSessionIdFromEndpointId(*(_QWORD *)(v8 + 224)) == a2 && *(_DWORD *)(v8 + 232) != a3 )
    {
      ATL::CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>::RemoveAt(
        (char *)this + 56,
        v6);
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qS(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          15,
          (unsigned int)&WPP_423b265ce07b3f1896f97f09dfab210f_Traceguids,
          v8,
          *(_QWORD *)(v8 + 224));
      }
      CVolumeStrip::ProviderFinalRelease((LPUNKNOWN)v8);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      break;
    }
    v6 = v11;
  }
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
}
