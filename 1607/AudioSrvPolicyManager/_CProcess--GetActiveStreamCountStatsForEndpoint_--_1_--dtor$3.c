/*
 * XREFs of _CProcess::GetActiveStreamCountStatsForEndpoint_::_1_::dtor$3 @ 0x1800255A4
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180001480 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

void __fastcall CProcess::GetActiveStreamCountStatsForEndpoint_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  CBackgroundSessionCallbacks::OnTaskInstanceCompleted(
    *(CBackgroundSessionCallbacks **)(a2 + 64),
    (struct _GUID *)(8LL * *(int *)(a2 + 144) + **(_QWORD **)(a2 + 56)));
}
