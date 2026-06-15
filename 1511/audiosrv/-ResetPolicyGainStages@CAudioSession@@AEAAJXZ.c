/*
 * XREFs of ?ResetPolicyGainStages@CAudioSession@@AEAAJXZ @ 0x180027F58
 * Callers:
 *     ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z @ 0x180028410 (-SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z.c)
 *     ?SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@@Z @ 0x180028660 (-SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ?GetStartPosition@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x180012550 (-GetStartPosition@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementT.c)
 *     ?GetNextValue@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@QEAAAEAPEAVCGainStage@@AEAPEAU__POSITION@@@Z @ 0x1800128B4 (-GetNextValue@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementTrait.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CAudioSession::ResetPolicyGainStages(CAudioSession *this)
{
  _QWORD *NextValue; // rax
  __int64 v4; // rdi
  __int64 StartPosition; // [rsp+40h] [rbp+8h] BYREF

  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x41u, (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 496));
  StartPosition = ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::GetStartPosition((__int64 *)this + 67);
  while ( StartPosition )
  {
    NextValue = (_QWORD *)ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::GetNextValue(
                            (__int64)this + 536,
                            &StartPosition);
    v4 = *NextValue;
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*NextValue + 24LL))(*NextValue) )
    {
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x42u, (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids);
      }
      if ( !*(_BYTE *)(v4 + 32) )
        *(_DWORD *)(v4 + 48) = 1065353216;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 496));
  return 0LL;
}
