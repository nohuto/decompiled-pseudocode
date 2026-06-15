/*
 * XREFs of ?ResetPolicyGainStages@CAudioSession@@AEAAJXZ @ 0x180015318
 * Callers:
 *     ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z @ 0x180015860 (-SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z.c)
 *     ?SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@@Z @ 0x180015BE0 (-SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017B70 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetStartPosition@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x18002C2A4 (-GetStartPosition@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementT.c)
 *     ?GetNextValue@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@QEAAAEAPEAVCGainStage@@AEAPEAU__POSITION@@@Z @ 0x18002C56C (-GetNextValue@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementTrait.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180054338 (WPP_SF_.c)
 */

__int64 __fastcall CAudioSession::ResetPolicyGainStages(CAudioSession *this)
{
  char *v2; // rdi
  _QWORD *NextValue; // rax
  __int64 v5; // rbx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+28h] [rbp-10h]
  __int64 StartPosition; // [rsp+40h] [rbp+8h] BYREF

  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 41LL, &WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids);
  }
  v7 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 496);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v2 = (char *)this + 536;
  StartPosition = ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::GetStartPosition((char *)this + 536);
  while ( StartPosition )
  {
    NextValue = (_QWORD *)ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::GetNextValue(
                            v2,
                            &StartPosition);
    v5 = *NextValue;
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*NextValue + 24LL))(*NextValue) )
    {
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 42LL, &WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids);
      }
      if ( !*(_BYTE *)(v5 + 32) )
        *(_DWORD *)(v5 + 48) = 1065353216;
    }
  }
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
