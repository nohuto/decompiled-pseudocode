/*
 * XREFs of PolicyConfigSetApplicationDefaultEndpoint @ 0x1800897F0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall PolicyConfigSetApplicationDefaultEndpoint(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  return (*(__int64 (__fastcall **)(CPolicyConfig *, _QWORD, _QWORD, __int64))(*(_QWORD *)g_PolicyConfig + 136LL))(
           g_PolicyConfig,
           a2,
           a3,
           a4);
}
