/*
 * XREFs of PolicyConfigSetShareMode @ 0x180086F30
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall PolicyConfigSetShareMode(__int64 a1, __int64 a2, unsigned int a3)
{
  return (*(__int64 (__fastcall **)(CPolicyConfig *, __int64, _QWORD))(*(_QWORD *)g_PolicyConfig + 80LL))(
           g_PolicyConfig,
           a2,
           a3);
}
