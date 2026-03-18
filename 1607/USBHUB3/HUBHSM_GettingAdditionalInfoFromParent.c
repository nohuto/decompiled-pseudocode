/*
 * XREFs of HUBHSM_GettingAdditionalInfoFromParent @ 0x1C0008620
 * Callers:
 *     <none>
 * Callees:
 *     HUBPARENT_GetInfoFromParentUsingParentIoctl @ 0x1C0006DD0 (HUBPARENT_GetInfoFromParentUsingParentIoctl.c)
 */

__int64 __fastcall HUBHSM_GettingAdditionalInfoFromParent(__int64 a1)
{
  HUBPARENT_GetInfoFromParentUsingParentIoctl(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
