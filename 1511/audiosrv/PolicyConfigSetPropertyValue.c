/*
 * XREFs of PolicyConfigSetPropertyValue @ 0x180086EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall PolicyConfigSetPropertyValue(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  return (*(__int64 (__fastcall **)(CPolicyConfig *, __int64, _QWORD, __int64))(*(_QWORD *)g_PolicyConfig + 96LL))(
           g_PolicyConfig,
           a2,
           a3,
           a4);
}
