/*
 * XREFs of ?GetDuckingState@CAudioSession@@QEAAJPEAM@Z @ 0x180078728
 * Callers:
 *     ?GetDuckingState@CServerAudioSessionControl@@UEAAJPEAM@Z @ 0x18007CB90 (-GetDuckingState@CServerAudioSessionControl@@UEAAJPEAM@Z.c)
 * Callees:
 *     ?GetStartPosition@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x18000B170 (-GetStartPosition@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementT.c)
 *     ?GetNextValue@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@QEAAAEAPEAVCGainStage@@AEAPEAU__POSITION@@@Z @ 0x18000B484 (-GetNextValue@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementTrait.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_qSg @ 0x18007C5D8 (WPP_SF_qSg.c)
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
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v11, (struct _RTL_CRITICAL_SECTION *)((char *)this + 344));
  StartPosition = ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::GetStartPosition((__int64 *)this + 48);
  while ( StartPosition )
  {
    NextValue = (_QWORD *)ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::GetNextValue(
                            (__int64)this + 384,
                            &StartPosition);
    v8 = *NextValue;
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*NextValue + 24LL))(*NextValue)
      && v4 > *(float *)(v8 + 48) )
    {
      v4 = *(float *)(v8 + 48);
    }
  }
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    v10 = v4;
    WPP_SF_qSg(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      v5,
      v6,
      (_DWORD)this,
      *((_QWORD *)this + 88),
      SLOBYTE(v10));
  }
  *a2 = v4;
  if ( v12 )
    ATL::CCritSecLock::Unlock(&v11);
  return 0LL;
}
