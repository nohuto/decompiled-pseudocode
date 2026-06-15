/*
 * XREFs of _ATL::CAtlArray_CAudioSessionNotificationProcess_ATL::CElementTraits_CAudioSessionNotificationProcess___::Add_::_1_::dtor$0 @ 0x18007EE77
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

void __fastcall ATL::CAtlArray_CAudioSessionNotificationProcess_ATL::CElementTraits_CAudioSessionNotificationProcess___::Add_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  CBackgroundSessionCallbacks::OnTaskInstanceCompleted(
    *(CBackgroundSessionCallbacks **)(a2 + 104),
    (struct _GUID *)(8LL * *(_QWORD *)(a2 + 96) + **(_QWORD **)(a2 + 80)));
}
