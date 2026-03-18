/*
 * XREFs of PsReturnProcessNonPagedPoolQuota @ 0x14008B8B0
 * Callers:
 *     MiCloneVads @ 0x140001EE4 (MiCloneVads.c)
 *     MiDecrementCloneBlockReference @ 0x14000539C (MiDecrementCloneBlockReference.c)
 *     MiCloneProcessAddressSpace @ 0x140406774 (MiCloneProcessAddressSpace.c)
 *     MiBuildNewCloneDescriptor @ 0x1404069E0 (MiBuildNewCloneDescriptor.c)
 *     NtSetInformationProcess @ 0x14041CF90 (NtSetInformationProcess.c)
 *     MiInsertVadCharges @ 0x1404B8410 (MiInsertVadCharges.c)
 *     MiRemoveVadCharges @ 0x1404B9120 (MiRemoveVadCharges.c)
 *     MiReturnVadQuota @ 0x1404B93D0 (MiReturnVadQuota.c)
 *     MiAllocateVirtualMemory @ 0x1404BA9D0 (MiAllocateVirtualMemory.c)
 *     PspProcessDelete @ 0x140503E8C (PspProcessDelete.c)
 *     MiDeletePhysicalProcessPages @ 0x1406A60B8 (MiDeletePhysicalProcessPages.c)
 *     MiDeletePartialCloneVad @ 0x1406AA6A8 (MiDeletePartialCloneVad.c)
 *     MiFreeCloneDescriptor @ 0x1406AA7EC (MiFreeCloneDescriptor.c)
 *     ExDereferenceHandleDebugInfo @ 0x1406EFF48 (ExDereferenceHandleDebugInfo.c)
 *     ExEnableHandleTracing @ 0x1406EFFA0 (ExEnableHandleTracing.c)
 *     VfIoFreeIrp @ 0x140741298 (VfIoFreeIrp.c)
 *     ViIrpAllocateLockedPacket @ 0x1407418B8 (ViIrpAllocateLockedPacket.c)
 * Callees:
 *     PspReturnQuota @ 0x140045E50 (PspReturnQuota.c)
 */

signed __int64 __fastcall PsReturnProcessNonPagedPoolQuota(ULONG_PTR a1, ULONG_PTR a2)
{
  signed __int64 result; // rax

  if ( (PEPROCESS)a1 != PsInitialSystemProcess )
    return PspReturnQuota(*(char **)(a1 + 1040), a1, 0, a2);
  return result;
}
