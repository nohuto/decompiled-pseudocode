/*
 * XREFs of PolicyConfigClearApplicationDefaultEndpoint @ 0x180086920
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall PolicyConfigClearApplicationDefaultEndpoint(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  return (*(__int64 (__fastcall **)(CPolicyConfig *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)g_PolicyConfig + 144LL))(
           g_PolicyConfig,
           a2,
           a3,
           a4);
}
