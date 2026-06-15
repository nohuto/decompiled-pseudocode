/*
 * XREFs of ??1?$CComPtr@UISessionInternalEvents@@@ATL@@QEAA@XZ @ 0x180066578
 * Callers:
 *     _CAudioStreamDestroy::Invoke_::_1_::dtor$0 @ 0x18004A550 (_CAudioStreamDestroy--Invoke_--_1_--dtor$0.c)
 *     _CLockedList_ATL::CComPtr_ISessionInternalEvents__0_0_::RemoveInterface_::_1_::dtor$0 @ 0x18004A740 (_CLockedList_ATL--CComPtr_ISessionInternalEvents__0_0_--RemoveInterface_--_1_--dtor$0.c)
 *     _CLockedList_ATL::CComPtr_ISessionInternalEvents__0_0_::AddInterface_::_1_::dtor$0 @ 0x18004A780 (_CLockedList_ATL--CComPtr_ISessionInternalEvents__0_0_--AddInterface_--_1_--dtor$0.c)
 *     _CAudioStreamStateChanged::Invoke_::_1_::dtor$0 @ 0x18004AA70 (_CAudioStreamStateChanged--Invoke_--_1_--dtor$0.c)
 *     _CAudioSessionGroupingParamChanged::Invoke_::_1_::dtor$0 @ 0x18004C433 (_CAudioSessionGroupingParamChanged--Invoke_--_1_--dtor$0.c)
 *     _CAudioChannelVolumeChanged::Invoke_::_1_::dtor$0 @ 0x1800748EE (_CAudioChannelVolumeChanged--Invoke_--_1_--dtor$0.c)
 *     _CAudioSessionDisconnected::Invoke_::_1_::dtor$0 @ 0x1800749AA (_CAudioSessionDisconnected--Invoke_--_1_--dtor$0.c)
 *     _CAudioSessionDisplayNameChanged::Invoke_::_1_::dtor$0 @ 0x180074A6E (_CAudioSessionDisplayNameChanged--Invoke_--_1_--dtor$0.c)
 *     _CAudioSessionIconPathChanged::Invoke_::_1_::dtor$0 @ 0x180074B2E (_CAudioSessionIconPathChanged--Invoke_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@CServerAudioSessionControl@@UEAAKXZ @ 0x180015730 (-Release@CServerAudioSessionControl@@UEAAKXZ.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180016770 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
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
