/*
 * XREFs of _TSSession::GetStreamClassPolicyGainsForEndpoint_::_1_::dtor$8 @ 0x180025BAF
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180001480 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

void __fastcall TSSession::GetStreamClassPolicyGainsForEndpoint_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  CBackgroundSessionCallbacks::OnTaskInstanceCompleted(
    *(CBackgroundSessionCallbacks **)(a2 + 80),
    (struct _GUID *)(8LL * *(int *)(a2 + 144) + **(_QWORD **)(a2 + 72)));
}
