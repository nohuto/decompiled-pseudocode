/*
 * XREFs of AcpiKsrRestorePersistentContext @ 0x1C009D4A0
 * Callers:
 *     ACPIInitialize @ 0x1C00A90EC (ACPIInitialize.c)
 * Callees:
 *     KsrQueryMetadata_0 @ 0x1C0001018 (KsrQueryMetadata_0.c)
 *     KsrFreePersistedMemoryBlock_0 @ 0x1C0001020 (KsrFreePersistedMemoryBlock_0.c)
 */

__int64 AcpiKsrRestorePersistentContext()
{
  KsrQueryMetadata_0();
  if ( AcpiKsrContext != 0x15854434BLL )
  {
    AcpiKsrContext = 0LL;
    qword_1C0073A78 = 0LL;
  }
  return KsrFreePersistedMemoryBlock_0();
}
