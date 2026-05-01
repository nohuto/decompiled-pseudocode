/*
 * XREFs of RmpActivityHostQueryIsAoW @ 0x180004BCC
 * Callers:
 *     RmpPolicyComputeDesiredState @ 0x18000D390 (RmpPolicyComputeDesiredState.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall RmpActivityHostQueryIsAoW(__int64 a1, _DWORD *a2)
{
  if ( !*(_DWORD *)(a1 + 40) )
    return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD *))(*((_QWORD *)RmSvcGlobals + 10)
                                                                                         + 200LL))(
             a1 + 512,
             *(unsigned int *)(a1 + 580),
             a1 + 48,
             *(unsigned int *)(a1 + 584),
             *(_QWORD *)(a1 + 24),
             a2);
  *a2 = 0;
  return 0LL;
}
