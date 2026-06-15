/*
 * XREFs of PolicyConfigSetEndpointAbilityToBeDefault @ 0x180086DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall PolicyConfigSetEndpointAbilityToBeDefault(__int64 a1, __int64 a2, unsigned int a3)
{
  return (*(__int64 (__fastcall **)(CPolicyConfig *, __int64, _QWORD))(*(_QWORD *)g_PolicyConfig + 128LL))(
           g_PolicyConfig,
           a2,
           a3);
}
