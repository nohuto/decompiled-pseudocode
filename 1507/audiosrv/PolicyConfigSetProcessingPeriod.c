/*
 * XREFs of PolicyConfigSetProcessingPeriod @ 0x1800899F0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall PolicyConfigSetProcessingPeriod(__int64 a1, __int64 a2, __int64 a3)
{
  return (*(__int64 (__fastcall **)(CPolicyConfig *, __int64, __int64))(*(_QWORD *)g_PolicyConfig + 64LL))(
           g_PolicyConfig,
           a2,
           a3);
}
