/*
 * XREFs of NdisGetHypervisorInfo @ 0x1C004E5D0
 * Callers:
 *     ndisMSetHDSplitAttributes @ 0x1C00B2E4C (ndisMSetHDSplitAttributes.c)
 * Callees:
 *     ndisInitHypervisorInfo @ 0x1C004F2F8 (ndisInitHypervisorInfo.c)
 */

NDIS_STATUS __stdcall NdisGetHypervisorInfo(PNDIS_HYPERVISOR_INFO HypervisorInfo)
{
  NDIS_STATUS v1; // r10d

  if ( HypervisorInfo->Header.Size < 0xCu )
    return -1073676266;
  ndisInitHypervisorInfo();
  return v1;
}
