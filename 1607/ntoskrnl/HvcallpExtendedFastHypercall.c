/*
 * XREFs of HvcallpExtendedFastHypercall @ 0x140168B10
 * Callers:
 *     HvcallpExtendedFastHypercallWithOutput @ 0x140168B70 (HvcallpExtendedFastHypercallWithOutput.c)
 *     HvlpWritePerfRegister @ 0x1401BC800 (HvlpWritePerfRegister.c)
 *     HvlSvmAttachPasidSpace @ 0x1401BDE18 (HvlSvmAttachPasidSpace.c)
 *     HvlSvmClearPrqStalled @ 0x1401BDEF0 (HvlSvmClearPrqStalled.c)
 *     HvlSvmCreatePasidSpace @ 0x1401BDF44 (HvlSvmCreatePasidSpace.c)
 *     HvlSvmCreatePrQueue @ 0x1401BDFB0 (HvlSvmCreatePrQueue.c)
 *     HvlSvmDeletePrQueue @ 0x1401BE0A8 (HvlSvmDeletePrQueue.c)
 *     HvlSvmDetachPasidSpace @ 0x1401BE0E8 (HvlSvmDetachPasidSpace.c)
 *     HvlSvmDisablePasid @ 0x1401BE154 (HvlSvmDisablePasid.c)
 *     HvlSvmEnablePasid @ 0x1401BE198 (HvlSvmEnablePasid.c)
 *     HvlSvmSetDeviceEnabled @ 0x1401BE4E0 (HvlSvmSetDeviceEnabled.c)
 *     HvlSvmSetPasidAddressSpace @ 0x1401BE570 (HvlSvmSetPasidAddressSpace.c)
 *     HvlpAttachRootSvmDevice @ 0x1401BE67C (HvlpAttachRootSvmDevice.c)
 *     HvlpDetachRootSvmDevice @ 0x1401BE734 (HvlpDetachRootSvmDevice.c)
 *     HvlpFastAcknowledgePageRequest @ 0x1401BE794 (HvlpFastAcknowledgePageRequest.c)
 *     HvlpFastFlushPasidAddressList @ 0x1401BE7DC (HvlpFastFlushPasidAddressList.c)
 *     HvlpFastSendSyntheticClusterIpiEx @ 0x1401BE87C (HvlpFastSendSyntheticClusterIpiEx.c)
 *     HvlpFlushPasidAddressSpace @ 0x1401BE910 (HvlpFlushPasidAddressSpace.c)
 *     HvlpFastFlushAddressSpaceTb @ 0x1401C15B4 (HvlpFastFlushAddressSpaceTb.c)
 *     HvlpFastFlushListTb @ 0x1401C1614 (HvlpFastFlushListTb.c)
 *     HvlpFastFlushListTbEx @ 0x1401C16E0 (HvlpFastFlushListTbEx.c)
 *     HvcallFastExtended @ 0x140231E68 (HvcallFastExtended.c)
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
