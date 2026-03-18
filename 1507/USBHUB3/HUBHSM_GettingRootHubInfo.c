/*
 * XREFs of HUBHSM_GettingRootHubInfo @ 0x1C0007FD0
 * Callers:
 *     <none>
 * Callees:
 *     HUBUCX_GetRootHubInfoUsingUCXIoctl @ 0x1C001D160 (HUBUCX_GetRootHubInfoUsingUCXIoctl.c)
 */

__int64 __fastcall HUBHSM_GettingRootHubInfo(__int64 a1)
{
  HUBUCX_GetRootHubInfoUsingUCXIoctl(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
