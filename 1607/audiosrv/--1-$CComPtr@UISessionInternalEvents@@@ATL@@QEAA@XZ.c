/*
 * XREFs of ??1?$CComPtr@UISessionInternalEvents@@@ATL@@QEAA@XZ @ 0x1800509AC
 * Callers:
 *     _CAudioStreamStateChanged::Invoke_::_1_::dtor$0 @ 0x180039F10 (_CAudioStreamStateChanged--Invoke_--_1_--dtor$0.c)
 *     _CLockedList_ATL::CComPtr_ISessionInternalEvents__0_0_::AddInterface_::_1_::dtor$0 @ 0x18003A030 (_CLockedList_ATL--CComPtr_ISessionInternalEvents__0_0_--AddInterface_--_1_--dtor$0.c)
 *     _CLockedList_ATL::CComPtr_ISessionInternalEvents__0_0_::RemoveInterface_::_1_::dtor$0 @ 0x18003A0A0 (_CLockedList_ATL--CComPtr_ISessionInternalEvents__0_0_--RemoveInterface_--_1_--dtor$0.c)
 *     _CAudioStreamDestroy::Invoke_::_1_::dtor$0 @ 0x18003A150 (_CAudioStreamDestroy--Invoke_--_1_--dtor$0.c)
 *     _CAudioSessionGroupingParamChanged::Invoke_::_1_::dtor$0 @ 0x18003C1C2 (_CAudioSessionGroupingParamChanged--Invoke_--_1_--dtor$0.c)
 *     _CAudioChannelVolumeChanged::Invoke_::_1_::dtor$0 @ 0x18005CA84 (_CAudioChannelVolumeChanged--Invoke_--_1_--dtor$0.c)
 *     _CAudioSessionDisconnected::Invoke_::_1_::dtor$0 @ 0x18005CB20 (_CAudioSessionDisconnected--Invoke_--_1_--dtor$0.c)
 *     _CAudioSessionDisplayNameChanged::Invoke_::_1_::dtor$0 @ 0x18005CBC4 (_CAudioSessionDisplayNameChanged--Invoke_--_1_--dtor$0.c)
 *     _CAudioSessionIconPathChanged::Invoke_::_1_::dtor$0 @ 0x18005CC64 (_CAudioSessionIconPathChanged--Invoke_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::CComPtr<ISessionInternalEvents>::~CComPtr<ISessionInternalEvents>(CAudioSessionManager **a1)
{
  CAudioSessionManager *v1; // rcx
  void (*v2)(void); // rax

  v1 = *a1;
  if ( v1 )
  {
    v2 = *(void (**)(void))(*(_QWORD *)v1 + 16LL);
    if ( (char *)v2 == (char *)CAudioSessionManager::Release )
    {
      CAudioSessionManager::Release(v1);
    }
    else if ( (char *)v2 == (char *)CServerAudioSessionControl::Release )
    {
      CServerAudioSessionControl::Release(v1);
    }
    else
    {
      v2();
    }
  }
}
