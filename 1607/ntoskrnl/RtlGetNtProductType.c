/*
 * XREFs of RtlGetNtProductType @ 0x1400ACBEC
 * Callers:
 *     IoFillDumpHeader @ 0x1401C55A4 (IoFillDumpHeader.c)
 *     KeCapturePersistentThreadState @ 0x1401C8248 (KeCapturePersistentThreadState.c)
 *     MmWriteTriageInformation @ 0x1401E8140 (MmWriteTriageInformation.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x14047391C (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     RtlGetVersion @ 0x1404DE1AC (RtlGetVersion.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x1400766B0 (PsGetServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400C3CF0 (PsIsCurrentThreadInServerSilo.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x140689108 (RtlpGetNtProductTypeFromRegistry.c)
 */

BOOLEAN __stdcall RtlGetNtProductType(PNT_PRODUCT_TYPE ProductType)
{
  BOOLEAN v2; // bl

  v2 = 0;
  if ( (unsigned __int8)PsIsCurrentThreadInServerSilo() )
  {
    *ProductType = *((PNT_PRODUCT_TYPE)PsGetServerSiloGlobals(-1LL) + 256);
  }
  else if ( MEMORY[0xFFFFF78000000268] )
  {
    *ProductType = MEMORY[0xFFFFF78000000264];
  }
  else if ( KeGetCurrentIrql() > 1u || (int)RtlpGetNtProductTypeFromRegistry(ProductType) < 0 )
  {
    *ProductType = NtProductWinNt;
    return v2;
  }
  return 1;
}
