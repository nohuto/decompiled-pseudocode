/*
 * XREFs of HvcallpExtendedFastHypercall @ 0x14015D130
 * Callers:
 *     HvcallpExtendedFastHypercallWithOutput @ 0x14015D190 (HvcallpExtendedFastHypercallWithOutput.c)
 *     HvlSvmAttachPasidSpace @ 0x1401B15EC (HvlSvmAttachPasidSpace.c)
 *     HvlSvmClearPrqStalled @ 0x1401B16C4 (HvlSvmClearPrqStalled.c)
 *     HvlSvmCreatePasidSpace @ 0x1401B1718 (HvlSvmCreatePasidSpace.c)
 *     HvlSvmCreatePrQueue @ 0x1401B1784 (HvlSvmCreatePrQueue.c)
 *     HvlSvmDeletePrQueue @ 0x1401B187C (HvlSvmDeletePrQueue.c)
 *     HvlSvmDetachPasidSpace @ 0x1401B18BC (HvlSvmDetachPasidSpace.c)
 *     HvlSvmDisablePasid @ 0x1401B1928 (HvlSvmDisablePasid.c)
 *     HvlSvmEnablePasid @ 0x1401B196C (HvlSvmEnablePasid.c)
 *     HvlSvmSetDeviceEnabled @ 0x1401B1CB0 (HvlSvmSetDeviceEnabled.c)
 *     HvlSvmSetPasidAddressSpace @ 0x1401B1D40 (HvlSvmSetPasidAddressSpace.c)
 *     HvlpAttachRootSvmDevice @ 0x1401B1E4C (HvlpAttachRootSvmDevice.c)
 *     HvlpDetachRootSvmDevice @ 0x1401B1F04 (HvlpDetachRootSvmDevice.c)
 *     HvlpFastAcknowledgePageRequest @ 0x1401B1F64 (HvlpFastAcknowledgePageRequest.c)
 *     HvlpFastFlushPasidAddressList @ 0x1401B1FAC (HvlpFastFlushPasidAddressList.c)
 *     HvlpFastSendSyntheticClusterIpiEx @ 0x1401B204C (HvlpFastSendSyntheticClusterIpiEx.c)
 *     HvlpFlushPasidAddressSpace @ 0x1401B20E0 (HvlpFlushPasidAddressSpace.c)
 *     HvcallFastExtended @ 0x140217E60 (HvcallFastExtended.c)
 *     HvlpFastFlushAddressSpaceTb @ 0x140221584 (HvlpFastFlushAddressSpaceTb.c)
 *     HvlpFastFlushAddressSpaceTbEx @ 0x1402215E4 (HvlpFastFlushAddressSpaceTbEx.c)
 *     HvlpFastFlushListTb @ 0x140221688 (HvlpFastFlushListTb.c)
 *     HvlpFastFlushListTbEx @ 0x140221760 (HvlpFastFlushListTbEx.c)
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
