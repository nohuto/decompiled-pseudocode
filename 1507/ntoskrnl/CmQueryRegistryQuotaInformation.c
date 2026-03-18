/*
 * XREFs of CmQueryRegistryQuotaInformation @ 0x140587880
 * Callers:
 *     ExpQuerySystemInformation @ 0x14042E880 (ExpQuerySystemInformation.c)
 * Callees:
 *     CmpUpdateGlobalQuotaAllowed @ 0x1404A0364 (CmpUpdateGlobalQuotaAllowed.c)
 */

__int64 CmQueryRegistryQuotaInformation()
{
  __int64 v0; // r8

  CmpUpdateGlobalQuotaAllowed();
  *(_DWORD *)v0 = CmpGlobalQuota;
  *(_DWORD *)(v0 + 4) = CmpGlobalQuotaUsed;
  *(_QWORD *)(v0 + 8) = CmpSizeOfPagedPoolInBytes;
  return 0LL;
}
