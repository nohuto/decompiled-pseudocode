/*
 * XREFs of ??1?$CComPtr@UISessionInternalEvents@@@ATL@@QEAA@XZ @ 0x180067F40
 * Callers:
 *     _CLockedList_ATL::CComPtr_ISessionInternalEvents__0_0_::RemoveInterface_::_1_::dtor$0 @ 0x1800468E0 (_CLockedList_ATL--CComPtr_ISessionInternalEvents__0_0_--RemoveInterface_--_1_--dtor$0.c)
 *     _CLockedList_ATL::CComPtr_ISessionInternalEvents__0_0_::AddInterface_::_1_::dtor$0 @ 0x180046920 (_CLockedList_ATL--CComPtr_ISessionInternalEvents__0_0_--AddInterface_--_1_--dtor$0.c)
 *     _CAudioStreamDestroy::Invoke_::_1_::dtor$0 @ 0x180046990 (_CAudioStreamDestroy--Invoke_--_1_--dtor$0.c)
 *     _CAudioStreamStateChanged::Invoke_::_1_::dtor$0 @ 0x1800469B0 (_CAudioStreamStateChanged--Invoke_--_1_--dtor$0.c)
 *     _CAudioSessionGroupingParamChanged::Invoke_::_1_::dtor$0 @ 0x1800489BD (_CAudioSessionGroupingParamChanged--Invoke_--_1_--dtor$0.c)
 *     _CAudioChannelVolumeChanged::Invoke_::_1_::dtor$0 @ 0x18007965E (_CAudioChannelVolumeChanged--Invoke_--_1_--dtor$0.c)
 *     _CAudioSessionDisconnected::Invoke_::_1_::dtor$0 @ 0x18007971A (_CAudioSessionDisconnected--Invoke_--_1_--dtor$0.c)
 *     _CAudioSessionDisplayNameChanged::Invoke_::_1_::dtor$0 @ 0x1800797DE (_CAudioSessionDisplayNameChanged--Invoke_--_1_--dtor$0.c)
 *     _CAudioSessionIconPathChanged::Invoke_::_1_::dtor$0 @ 0x18007989E (_CAudioSessionIconPathChanged--Invoke_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@CServerAudioSessionControl@@UEAAKXZ @ 0x180018180 (-Release@CServerAudioSessionControl@@UEAAKXZ.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180019460 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall ATL::CComPtr<ISessionInternalEvents>::~CComPtr<ISessionInternalEvents>(CAudioSessionManager **a1)
{
  __int64 (__fastcall *v1)(CServerAudioSessionControl *); // rdi
  __int64 result; // rax

  if ( *a1 )
  {
    v1 = *(__int64 (__fastcall **)(CServerAudioSessionControl *))(*(_QWORD *)*a1 + 16LL);
    if ( v1 == CAudioSessionManager::Release )
    {
      return CAudioSessionManager::Release(*a1);
    }
    else if ( v1 == CServerAudioSessionControl::Release )
    {
      return CServerAudioSessionControl::Release(*a1);
    }
    else
    {
      return v1(*a1);
    }
  }
  return result;
}
