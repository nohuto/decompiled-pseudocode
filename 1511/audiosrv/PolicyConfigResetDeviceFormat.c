/*
 * XREFs of PolicyConfigResetDeviceFormat @ 0x180086C10
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall PolicyConfigResetDeviceFormat(__int64 a1, __int64 a2)
{
  return (*(__int64 (__fastcall **)(CPolicyConfig *, __int64))(*(_QWORD *)g_PolicyConfig + 40LL))(g_PolicyConfig, a2);
}
