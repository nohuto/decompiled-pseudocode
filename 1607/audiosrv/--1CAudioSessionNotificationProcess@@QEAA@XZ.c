/*
 * XREFs of ??1CAudioSessionNotificationProcess@@QEAA@XZ @ 0x180061948
 * Callers:
 *     ?AddInterface@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNotificationProcess@@@Z @ 0x180061B88 (-AddInterface@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNotif.c)
 *     _CLockedList_CAudioSessionNotificationProcess_1_0_::AddInterface_::_1_::dtor$0 @ 0x180061C7B (_CLockedList_CAudioSessionNotificationProcess_1_0_--AddInterface_--_1_--dtor$0.c)
 *     ?CallDestructors@?$CAtlArray@VCAudioSessionNotificationProcess@@V?$CElementTraits@VCAudioSessionNotificationProcess@@@ATL@@@ATL@@CAXPEAVCAudioSessionNotificationProcess@@_K@Z @ 0x180061D1C (-CallDestructors@-$CAtlArray@VCAudioSessionNotificationProcess@@V-$CElementTraits@VCAudioSession.c)
 *     ?Invoke@CAudioSessionManagerNotification@@UEAAJVCAudioSessionNotificationProcess@@@Z @ 0x180062790 (-Invoke@CAudioSessionManagerNotification@@UEAAJVCAudioSessionNotificationProcess@@@Z.c)
 *     _CAudioSessionManagerNotification::Invoke_::_1_::dtor$0 @ 0x180062923 (_CAudioSessionManagerNotification--Invoke_--_1_--dtor$0.c)
 *     ?RemoveInterface@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNotificationProcess@@@Z @ 0x180063074 (-RemoveInterface@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNo.c)
 *     _CLockedList_CAudioSessionNotificationProcess_1_0_::RemoveInterface_::_1_::dtor$0 @ 0x180063152 (_CLockedList_CAudioSessionNotificationProcess_1_0_--RemoveInterface_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAudioSessionNotificationProcess::~CAudioSessionNotificationProcess(
        CAudioSessionNotificationProcess *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *(_QWORD *)this = 0LL;
  }
}
