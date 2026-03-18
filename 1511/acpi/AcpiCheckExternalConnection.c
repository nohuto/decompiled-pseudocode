/*
 * XREFs of AcpiCheckExternalConnection @ 0x1C00686C0
 * Callers:
 *     ACPIRootIrpQueryBusRelations @ 0x1C0068660 (ACPIRootIrpQueryBusRelations.c)
 *     IrqArbAddAllocation @ 0x1C0069680 (IrqArbAddAllocation.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1C006C4D0 (IrqArbpFindSuitableRangeIsa.c)
 *     AcpiExternalTranslateBiosToNtResources @ 0x1C007A768 (AcpiExternalTranslateBiosToNtResources.c)
 * Callees:
 *     <none>
 */

__int64 AcpiCheckExternalConnection()
{
  PVOID v0; // rbx
  __int64 result; // rax

  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(&ExternalTranslatorInterfaceLock, 1u);
  v0 = ExternalTranslationInterface;
  ExReleaseResourceLite(&ExternalTranslatorInterfaceLock);
  KeLeaveCriticalRegion();
  result = 0LL;
  if ( !v0 )
    return QueryExternalTranslatorInterface();
  return result;
}
