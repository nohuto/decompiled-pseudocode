/*
 * XREFs of _ATL::CAtlArray_CDuckingNotification_ATL::CElementTraits_CDuckingNotification___::Add_::_1_::dtor$0 @ 0x18002209D
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800014A0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

void __fastcall ATL::CAtlArray_CDuckingNotification_ATL::CElementTraits_CDuckingNotification___::Add_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  CBackgroundSessionCallbacks::OnTaskInstanceCompleted(
    *(CBackgroundSessionCallbacks **)(a2 + 104),
    (struct _GUID *)(32LL * *(_QWORD *)(a2 + 96) + **(_QWORD **)(a2 + 80)));
}
