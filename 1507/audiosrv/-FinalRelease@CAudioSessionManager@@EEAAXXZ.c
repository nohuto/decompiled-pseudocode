/*
 * XREFs of ?FinalRelease@CAudioSessionManager@@EEAAXXZ @ 0x18007F260
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ?GetStartPosition@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x18000B598 (-GetStartPosition@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceI.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?RemoveAtPos@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180080608 (-RemoveAtPos@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTrai.c)
 */

void __fastcall CAudioSessionManager::FinalRelease(CAudioSessionManager *this)
{
  __int64 StartPosition; // rax
  __int64 v3; // r15

  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x3Cu,
      (__int64)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  while ( 1 )
  {
    StartPosition = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetStartPosition((__int64 *)this + 7);
    if ( !StartPosition )
      break;
    v3 = *(_QWORD *)(StartPosition + 80);
    ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::RemoveAtPos(
      (char *)this + 56,
      StartPosition);
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x3Du,
        (__int64)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids);
    }
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v3 + 184LL))(v3, (char *)this - 8);
    (*(void (__fastcall **)(__int64, struct ISessionInternalEvents *))(*(_QWORD *)v3 + 184LL))(
      v3,
      g_PolicyEventsHandler);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
}
