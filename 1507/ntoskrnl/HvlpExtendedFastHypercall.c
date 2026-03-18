/*
 * XREFs of HvlpExtendedFastHypercall @ 0x14017ECA0
 * Callers:
 *     HvlpExtendedFastHypercallWithOutput @ 0x14017ED00 (HvlpExtendedFastHypercallWithOutput.c)
 *     HvlpFastHypercall @ 0x1401E5834 (HvlpFastHypercall.c)
 *     HvlSvmAttachPasidSpace @ 0x1401EAA9C (HvlSvmAttachPasidSpace.c)
 *     HvlSvmClearPrqStalled @ 0x1401EAB98 (HvlSvmClearPrqStalled.c)
 *     HvlSvmCreatePasidSpace @ 0x1401EAC14 (HvlSvmCreatePasidSpace.c)
 *     HvlSvmCreatePrQueue @ 0x1401EACA0 (HvlSvmCreatePrQueue.c)
 *     HvlSvmDeletePrQueue @ 0x1401EADB8 (HvlSvmDeletePrQueue.c)
 *     HvlSvmDetachPasidSpace @ 0x1401EAE1C (HvlSvmDetachPasidSpace.c)
 *     HvlSvmDisablePasid @ 0x1401EAEAC (HvlSvmDisablePasid.c)
 *     HvlSvmEnablePasid @ 0x1401EAF14 (HvlSvmEnablePasid.c)
 *     HvlSvmSetDeviceEnabled @ 0x1401EB788 (HvlSvmSetDeviceEnabled.c)
 *     HvlSvmSetPasidAddressSpace @ 0x1401EB83C (HvlSvmSetPasidAddressSpace.c)
 *     HvlpAttachRootSvmDevice @ 0x1401EBAA4 (HvlpAttachRootSvmDevice.c)
 *     HvlpDetachRootSvmDevice @ 0x1401EBB7C (HvlpDetachRootSvmDevice.c)
 *     HvlpFastAcknowledgePageRequest @ 0x1401EBC00 (HvlpFastAcknowledgePageRequest.c)
 *     HvlpFastFlushPasidAddressList @ 0x1401EBC58 (HvlpFastFlushPasidAddressList.c)
 *     HvlpFlushPasidAddressSpace @ 0x1401EBCF4 (HvlpFlushPasidAddressSpace.c)
 *     sub_1401EBDAC @ 0x1401EBDAC (sub_1401EBDAC.c)
 *     HvlpFastFlushAddressSpaceTb @ 0x140270938 (HvlpFastFlushAddressSpaceTb.c)
 *     HvlpFastFlushAddressSpaceTbEx @ 0x140270A04 (HvlpFastFlushAddressSpaceTbEx.c)
 *     HvlpFlushRangeListTb @ 0x140270BD0 (HvlpFlushRangeListTb.c)
 *     HvlpFlushRangeListTbEx @ 0x140270FD8 (HvlpFlushRangeListTbEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlpExtendedFastHypercall(__int64 a1, _QWORD *a2, __int64 a3)
{
  signed __int64 v3; // r8

  v3 = (unsigned __int64)(a3 + 15) >> 4;
  if ( v3 > 1 )
    __asm { jmp     r9 }
  return HvlpHypercallCodeVa(a1, *a2, a2[1]);
}
