/*
 * XREFs of ??1CAudioSessionNotificationProcess@@QEAA@XZ @ 0x18007ED10
 * Callers:
 *     ?AddInterface@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNotificationProcess@@@Z @ 0x18007EFA0 (-AddInterface@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNotif.c)
 *     _CLockedList_CAudioSessionNotificationProcess_1_0_::AddInterface_::_1_::dtor$0 @ 0x18007F093 (_CLockedList_CAudioSessionNotificationProcess_1_0_--AddInterface_--_1_--dtor$0.c)
 *     ?CallDestructors@?$CAtlArray@VCAudioSessionNotificationProcess@@V?$CElementTraits@VCAudioSessionNotificationProcess@@@ATL@@@ATL@@CAXPEAVCAudioSessionNotificationProcess@@_K@Z @ 0x18007F134 (-CallDestructors@-$CAtlArray@VCAudioSessionNotificationProcess@@V-$CElementTraits@VCAudioSession.c)
 *     ?Invoke@CAudioSessionManagerNotification@@UEAAJVCAudioSessionNotificationProcess@@@Z @ 0x18007FCD0 (-Invoke@CAudioSessionManagerNotification@@UEAAJVCAudioSessionNotificationProcess@@@Z.c)
 *     _CAudioSessionManagerNotification::Invoke_::_1_::dtor$0 @ 0x18007FEBB (_CAudioSessionManagerNotification--Invoke_--_1_--dtor$0.c)
 *     ?RemoveInterface@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNotificationProcess@@@Z @ 0x18008065C (-RemoveInterface@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNo.c)
 *     _CLockedList_CAudioSessionNotificationProcess_1_0_::RemoveInterface_::_1_::dtor$0 @ 0x18008073A (_CLockedList_CAudioSessionNotificationProcess_1_0_--RemoveInterface_--_1_--dtor$0.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

void __fastcall CAudioSessionNotificationProcess::~CAudioSessionNotificationProcess(
        CAudioSessionNotificationProcess *this)
{
  if ( *(_QWORD *)this )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
    *(_QWORD *)this = 0LL;
  }
}
