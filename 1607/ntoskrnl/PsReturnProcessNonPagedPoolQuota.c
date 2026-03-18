/*
 * XREFs of PsReturnProcessNonPagedPoolQuota @ 0x1400284C0
 * Callers:
 *     MiDecrementCloneBlockReference @ 0x1400B8CA0 (MiDecrementCloneBlockReference.c)
 *     MiCloneVads @ 0x1400BC560 (MiCloneVads.c)
 *     NtSetInformationProcess @ 0x140425A10 (NtSetInformationProcess.c)
 *     MiReturnVadQuota @ 0x14042FA80 (MiReturnVadQuota.c)
 *     MiRemoveVadCharges @ 0x14042FB20 (MiRemoveVadCharges.c)
 *     MiInsertVadCharges @ 0x14042FE40 (MiInsertVadCharges.c)
 *     PspProcessDelete @ 0x140460828 (PspProcessDelete.c)
 *     MiBuildNewCloneDescriptor @ 0x140527744 (MiBuildNewCloneDescriptor.c)
 *     MiCloneProcessAddressSpace @ 0x1405278F8 (MiCloneProcessAddressSpace.c)
 *     MiFreeVadEventBitmap @ 0x140659D2C (MiFreeVadEventBitmap.c)
 *     MiFreeCloneDescriptor @ 0x14066323C (MiFreeCloneDescriptor.c)
 *     ExDereferenceHandleDebugInfo @ 0x1406AD34C (ExDereferenceHandleDebugInfo.c)
 *     ExEnableHandleTracing @ 0x1406AD3A4 (ExEnableHandleTracing.c)
 *     VfIoFreeIrp @ 0x14070BC68 (VfIoFreeIrp.c)
 *     ViIrpAllocateLockedPacket @ 0x14070C11C (ViIrpAllocateLockedPacket.c)
 * Callees:
 *     PspReturnQuota @ 0x140010AA0 (PspReturnQuota.c)
 */

signed __int64 __fastcall PsReturnProcessNonPagedPoolQuota(ULONG_PTR a1, ULONG_PTR a2)
{
  signed __int64 result; // rax

  if ( (PEPROCESS)a1 != PsInitialSystemProcess )
    return PspReturnQuota(*(char **)(a1 + 1040), a1, 0, a2);
  return result;
}
