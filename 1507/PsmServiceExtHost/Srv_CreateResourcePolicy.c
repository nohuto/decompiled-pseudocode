/*
 * XREFs of Srv_CreateResourcePolicy @ 0x1800464F0
 * Callers:
 *     <none>
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall Srv_CreateResourcePolicy(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(**((_QWORD **)g_pResourcePolicyEngineServerProxy
                                                                        + 13)
                                                                     + 40LL))(
           *((_QWORD *)g_pResourcePolicyEngineServerProxy + 13),
           a2,
           a3,
           a4);
}
