/*
 * XREFs of PsReturnProcessNonPagedPoolQuota @ 0x14006C2EC
 * Callers:
 *     MiDecrementCloneBlockReference @ 0x140011D94 (MiDecrementCloneBlockReference.c)
 *     MiCloneVads @ 0x14001D7C8 (MiCloneVads.c)
 *     PspProcessDelete @ 0x1403E3968 (PspProcessDelete.c)
 *     MiInsertVadCharges @ 0x140415EF0 (MiInsertVadCharges.c)
 *     MiRemoveVadCharges @ 0x14041AF70 (MiRemoveVadCharges.c)
 *     MiReturnVadQuota @ 0x14041B250 (MiReturnVadQuota.c)
 *     NtSetInformationProcess @ 0x1404507B0 (NtSetInformationProcess.c)
 *     MiBuildNewCloneDescriptor @ 0x140460EE0 (MiBuildNewCloneDescriptor.c)
 *     MiCloneProcessAddressSpace @ 0x14046100C (MiCloneProcessAddressSpace.c)
 *     MiFreeVadEventBitmap @ 0x140623EA4 (MiFreeVadEventBitmap.c)
 *     MiFreeCloneDescriptor @ 0x14062CD38 (MiFreeCloneDescriptor.c)
 *     ExDereferenceHandleDebugInfo @ 0x14066C7D4 (ExDereferenceHandleDebugInfo.c)
 *     ExEnableHandleTracing @ 0x14066C82C (ExEnableHandleTracing.c)
 *     VfIoFreeIrp @ 0x1406BFC10 (VfIoFreeIrp.c)
 *     ViIrpAllocateLockedPacket @ 0x1406C00C4 (ViIrpAllocateLockedPacket.c)
 * Callees:
 *     PspReturnQuota @ 0x140089190 (PspReturnQuota.c)
 */

__int64 __fastcall PsReturnProcessNonPagedPoolQuota(struct _KPROCESS *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 != PsInitialSystemProcess )
    return PspReturnQuota(a1[1].ActiveProcessors.Bitmap[4], a1, 0LL, a2);
  return result;
}
