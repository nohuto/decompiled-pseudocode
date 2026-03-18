/*
 * XREFs of HUBHSM_GettingRootHubInfo @ 0x1C0008530
 * Callers:
 *     <none>
 * Callees:
 *     HUBUCX_GetRootHubInfoUsingUCXIoctl @ 0x1C001DCB0 (HUBUCX_GetRootHubInfoUsingUCXIoctl.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBHSM_GettingRootHubInfo(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  (*(void (__fastcall **)(_QWORD, __int64))(v1 + 552))(*(_QWORD *)(v1 + 224), v1 + 152);
  HUBUCX_GetRootHubInfoUsingUCXIoctl(v1);
  return 1000LL;
}
