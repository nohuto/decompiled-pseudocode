/*
 * XREFs of HvcallpExtendedFastHypercall @ 0x1401685A0
 * Callers:
 *     HvcallpExtendedFastHypercallWithOutput @ 0x140168600 (HvcallpExtendedFastHypercallWithOutput.c)
 *     HvlpWritePerfRegister @ 0x1401BC91C (HvlpWritePerfRegister.c)
 *     HvlSvmAttachPasidSpace @ 0x1401BDF34 (HvlSvmAttachPasidSpace.c)
 *     HvlSvmClearPrqStalled @ 0x1401BE00C (HvlSvmClearPrqStalled.c)
 *     HvlSvmCreatePasidSpace @ 0x1401BE060 (HvlSvmCreatePasidSpace.c)
 *     HvlSvmCreatePrQueue @ 0x1401BE0CC (HvlSvmCreatePrQueue.c)
 *     HvlSvmDeletePrQueue @ 0x1401BE1C4 (HvlSvmDeletePrQueue.c)
 *     HvlSvmDetachPasidSpace @ 0x1401BE204 (HvlSvmDetachPasidSpace.c)
 *     HvlSvmDisablePasid @ 0x1401BE270 (HvlSvmDisablePasid.c)
 *     HvlSvmEnablePasid @ 0x1401BE2B4 (HvlSvmEnablePasid.c)
 *     HvlSvmSetDeviceEnabled @ 0x1401BE5FC (HvlSvmSetDeviceEnabled.c)
 *     HvlSvmSetPasidAddressSpace @ 0x1401BE68C (HvlSvmSetPasidAddressSpace.c)
 *     HvlpAttachRootSvmDevice @ 0x1401BE798 (HvlpAttachRootSvmDevice.c)
 *     HvlpDetachRootSvmDevice @ 0x1401BE850 (HvlpDetachRootSvmDevice.c)
 *     HvlpFastAcknowledgePageRequest @ 0x1401BE8B0 (HvlpFastAcknowledgePageRequest.c)
 *     HvlpFastFlushPasidAddressList @ 0x1401BE8F8 (HvlpFastFlushPasidAddressList.c)
 *     HvlpFastSendSyntheticClusterIpiEx @ 0x1401BE998 (HvlpFastSendSyntheticClusterIpiEx.c)
 *     HvlpFlushPasidAddressSpace @ 0x1401BEA2C (HvlpFlushPasidAddressSpace.c)
 *     HvlpFastFlushAddressSpaceTb @ 0x1401C16D0 (HvlpFastFlushAddressSpaceTb.c)
 *     HvlpFastFlushListTb @ 0x1401C1730 (HvlpFastFlushListTb.c)
 *     HvlpFastFlushListTbEx @ 0x1401C17FC (HvlpFastFlushListTbEx.c)
 *     HvcallFastExtended @ 0x14023203C (HvcallFastExtended.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvcallpExtendedFastHypercall(__int64 a1, _QWORD *a2, __int64 a3)
{
  signed __int64 v3; // r8

  v3 = (unsigned __int64)(a3 + 15) >> 4;
  if ( v3 > 1 )
    __asm { jmp     r9 }
  return HvcallCodeVa(a1, *a2, a2[1]);
}
