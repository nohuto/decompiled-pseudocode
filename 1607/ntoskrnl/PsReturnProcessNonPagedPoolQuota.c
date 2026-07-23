/*
 * XREFs of PsReturnProcessNonPagedPoolQuota @ 0x140028040
 * Callers:
 *     MiDecrementCloneBlockReference @ 0x1400B6B30 (MiDecrementCloneBlockReference.c)
 *     MiCloneVads @ 0x1400BA3F0 (MiCloneVads.c)
 *     NtSetInformationProcess @ 0x1404248E0 (NtSetInformationProcess.c)
 *     MiReturnVadQuota @ 0x14042E950 (MiReturnVadQuota.c)
 *     MiRemoveVadCharges @ 0x14042E9F0 (MiRemoveVadCharges.c)
 *     MiInsertVadCharges @ 0x14042ED10 (MiInsertVadCharges.c)
 *     PspProcessDelete @ 0x14045F6F8 (PspProcessDelete.c)
 *     MiBuildNewCloneDescriptor @ 0x14050A7A4 (MiBuildNewCloneDescriptor.c)
 *     MiCloneProcessAddressSpace @ 0x14050A958 (MiCloneProcessAddressSpace.c)
 *     MiFreeVadEventBitmap @ 0x140659E10 (MiFreeVadEventBitmap.c)
 *     MiFreeCloneDescriptor @ 0x140663320 (MiFreeCloneDescriptor.c)
 *     ExDereferenceHandleDebugInfo @ 0x1406AD484 (ExDereferenceHandleDebugInfo.c)
 *     ExEnableHandleTracing @ 0x1406AD4DC (ExEnableHandleTracing.c)
 *     VfIoFreeIrp @ 0x14070BC98 (VfIoFreeIrp.c)
 *     ViIrpAllocateLockedPacket @ 0x14070C14C (ViIrpAllocateLockedPacket.c)
 * Callees:
 *     PspReturnQuota @ 0x140010620 (PspReturnQuota.c)
 */

signed __int64 __fastcall PsReturnProcessNonPagedPoolQuota(ULONG_PTR a1, ULONG_PTR a2)
{
  signed __int64 result; // rax

  if ( (PEPROCESS)a1 != PsInitialSystemProcess )
    return PspReturnQuota(*(char **)(a1 + 1040), a1, 0, a2);
  return result;
}
