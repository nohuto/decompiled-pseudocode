/*
 * XREFs of RtlGetNtProductType @ 0x1400AB154
 * Callers:
 *     IoFillDumpHeader @ 0x1401C5444 (IoFillDumpHeader.c)
 *     KeCapturePersistentThreadState @ 0x1401C80E8 (KeCapturePersistentThreadState.c)
 *     MmWriteTriageInformation @ 0x1401E7F6C (MmWriteTriageInformation.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x1404727EC (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     RtlGetVersion @ 0x1404C17B0 (RtlGetVersion.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140076730 (PsGetServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400C1B90 (PsIsCurrentThreadInServerSilo.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x1406891EC (RtlpGetNtProductTypeFromRegistry.c)
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
