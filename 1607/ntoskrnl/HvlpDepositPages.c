/*
 * XREFs of HvlpDepositPages @ 0x1401BB508
 * Callers:
 *     HvlpStartLogicalProcessor @ 0x1401BC5A4 (HvlpStartLogicalProcessor.c)
 *     HvlMapDeviceInterrupt @ 0x1401BD188 (HvlMapDeviceInterrupt.c)
 *     HvlSetHpetConfig @ 0x1401BDA48 (HvlSetHpetConfig.c)
 *     HvlSvmAttachPasidSpace @ 0x1401BDE18 (HvlSvmAttachPasidSpace.c)
 *     HvlSvmCreatePasidSpace @ 0x1401BDF44 (HvlSvmCreatePasidSpace.c)
 *     HvlSvmCreatePrQueue @ 0x1401BDFB0 (HvlSvmCreatePrQueue.c)
 *     HvlSvmEnablePasid @ 0x1401BE198 (HvlSvmEnablePasid.c)
 *     HvlSvmSetPasidAddressSpace @ 0x1401BE570 (HvlSvmSetPasidAddressSpace.c)
 *     HvlpAttachRootSvmDevice @ 0x1401BE67C (HvlpAttachRootSvmDevice.c)
 *     PsDispatchIumService @ 0x14020FA50 (PsDispatchIumService.c)
 *     HvlpAddPhysicalMemory @ 0x14023CD50 (HvlpAddPhysicalMemory.c)
 *     HvlpCreateRootVirtualProcessor @ 0x14062052C (HvlpCreateRootVirtualProcessor.c)
 * Callees:
 *     MmAllocateNodePagesForMdlEx @ 0x1400A89F4 (MmAllocateNodePagesForMdlEx.c)
 *     HvlpAcquireHypercallPage @ 0x1401BB178 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401BBC30 (HvlpReleaseHypercallPage.c)
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
