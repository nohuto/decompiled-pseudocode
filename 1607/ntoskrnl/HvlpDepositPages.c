/*
 * XREFs of HvlpDepositPages @ 0x1401BB624
 * Callers:
 *     HvlpStartLogicalProcessor @ 0x1401BC6C0 (HvlpStartLogicalProcessor.c)
 *     HvlMapDeviceInterrupt @ 0x1401BD2A4 (HvlMapDeviceInterrupt.c)
 *     HvlSetHpetConfig @ 0x1401BDB64 (HvlSetHpetConfig.c)
 *     HvlSvmAttachPasidSpace @ 0x1401BDF34 (HvlSvmAttachPasidSpace.c)
 *     HvlSvmCreatePasidSpace @ 0x1401BE060 (HvlSvmCreatePasidSpace.c)
 *     HvlSvmCreatePrQueue @ 0x1401BE0CC (HvlSvmCreatePrQueue.c)
 *     HvlSvmEnablePasid @ 0x1401BE2B4 (HvlSvmEnablePasid.c)
 *     HvlSvmSetPasidAddressSpace @ 0x1401BE68C (HvlSvmSetPasidAddressSpace.c)
 *     HvlpAttachRootSvmDevice @ 0x1401BE798 (HvlpAttachRootSvmDevice.c)
 *     PsDispatchIumService @ 0x14020FC24 (PsDispatchIumService.c)
 *     HvlpAddPhysicalMemory @ 0x14023CE6C (HvlpAddPhysicalMemory.c)
 *     HvlpCreateRootVirtualProcessor @ 0x140620478 (HvlpCreateRootVirtualProcessor.c)
 * Callees:
 *     MmAllocateNodePagesForMdlEx @ 0x1400AA474 (MmAllocateNodePagesForMdlEx.c)
 *     HvlpAcquireHypercallPage @ 0x1401BB294 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401BBD4C (HvlpReleaseHypercallPage.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HvlpDepositPages(unsigned __int16 a1)
{
  _OWORD *NodePagesForMdl; // rbx
  __int64 v3; // rdi
  _QWORD *v4; // rax
  _OWORD *v5; // rcx
  _OWORD *v6; // rax
  __int128 v7; // xmm1
  PHYSICAL_ADDRESS v8[5]; // [rsp+40h] [rbp-28h] BYREF

  NodePagesForMdl = (_OWORD *)MmAllocateNodePagesForMdlEx(0, -1, 0, 0x80000, 1, a1, 4);
  if ( !NodePagesForMdl )
    return 3221225495LL;
  v3 = 8LL;
  v4 = (_QWORD *)HvlpAcquireHypercallPage(v8, 1, 0LL, 8LL);
  *v4 = HvlPartitionId;
  v5 = NodePagesForMdl + 3;
  v6 = v4 + 1;
  do
  {
    *v6 = *v5;
    v6[1] = v5[1];
    v6[2] = v5[2];
    v6[3] = v5[3];
    v6[4] = v5[4];
    v6[5] = v5[5];
    v6[6] = v5[6];
    v6 += 8;
    v7 = v5[7];
    v5 += 8;
    *(v6 - 1) = v7;
    --v3;
  }
  while ( v3 );
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))HvcallCodeVa)(0x8000000048LL, (PHYSICAL_ADDRESS)v8[3].QuadPart, 0LL);
  HvlpReleaseHypercallPage(v8);
  ExFreePoolWithTag(NodePagesForMdl, 0);
  return 0LL;
}
