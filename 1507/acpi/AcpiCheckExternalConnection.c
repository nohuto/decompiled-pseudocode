/*
 * XREFs of AcpiCheckExternalConnection @ 0x1C006AC78
 * Callers:
 *     ACPIRootIrpQueryBusRelations @ 0x1C006AC18 (ACPIRootIrpQueryBusRelations.c)
 *     IrqArbAddAllocation @ 0x1C006BB50 (IrqArbAddAllocation.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1C006E858 (IrqArbpFindSuitableRangeIsa.c)
 *     AcpiExternalTranslateBiosToNtResources @ 0x1C007A608 (AcpiExternalTranslateBiosToNtResources.c)
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
