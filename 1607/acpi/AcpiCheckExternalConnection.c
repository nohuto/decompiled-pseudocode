/*
 * XREFs of AcpiCheckExternalConnection @ 0x1C0085584
 * Callers:
 *     ACPIRootIrpQueryBusRelations @ 0x1C00855D0 (ACPIRootIrpQueryBusRelations.c)
 *     IrqArbAddAllocation @ 0x1C0089870 (IrqArbAddAllocation.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1C008CB70 (IrqArbpFindSuitableRangeIsa.c)
 *     AcpiExternalTranslateBiosToNtResources @ 0x1C009B508 (AcpiExternalTranslateBiosToNtResources.c)
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
