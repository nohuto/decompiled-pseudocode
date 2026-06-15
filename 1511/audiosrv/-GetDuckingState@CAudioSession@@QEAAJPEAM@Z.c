/*
 * XREFs of ?GetDuckingState@CAudioSession@@QEAAJPEAM@Z @ 0x180073948
 * Callers:
 *     ?GetDuckingState@CServerAudioSessionControl@@UEAAJPEAM@Z @ 0x180077E80 (-GetDuckingState@CServerAudioSessionControl@@UEAAJPEAM@Z.c)
 * Callees:
 *     ?GetStartPosition@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x180012550 (-GetStartPosition@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementT.c)
 *     ?GetNextValue@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@QEAAAEAPEAVCGainStage@@AEAPEAU__POSITION@@@Z @ 0x1800128B4 (-GetNextValue@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementTrait.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_qSg @ 0x1800778C8 (WPP_SF_qSg.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::GetDuckingState(CAudioSession *this, float *a2)
{
  float v4; // xmm6_4
  int v5; // edx
  int v6; // r8d
  _QWORD *NextValue; // rax
  __int64 v8; // rsi
  double v10; // [rsp+28h] [rbp-50h]
  LPCRITICAL_SECTION v11; // [rsp+38h] [rbp-40h] BYREF
  char v12; // [rsp+40h] [rbp-38h]
  __int64 StartPosition; // [rsp+80h] [rbp+8h] BYREF

  v4 = FLOAT_1_0;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v11, (struct _RTL_CRITICAL_SECTION *)((char *)this + 496));
  StartPosition = ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::GetStartPosition((__int64 *)this + 67);
  while ( StartPosition )
  {
    NextValue = (_QWORD *)ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::GetNextValue(
                            (__int64)this + 536,
                            &StartPosition);
    v8 = *NextValue;
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*NextValue + 24LL))(*NextValue)
      && v4 > *(float *)(v8 + 48) )
    {
      v4 = *(float *)(v8 + 48);
    }
  }
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v10 = v4;
    WPP_SF_qSg(*((_QWORD *)WPP_GLOBAL_Control + 2), v5, v6, (_DWORD)this, *((_QWORD *)this + 107), SLOBYTE(v10));
  }
  *a2 = v4;
  if ( v12 )
    ATL::CCritSecLock::Unlock(&v11);
  return 0LL;
}
