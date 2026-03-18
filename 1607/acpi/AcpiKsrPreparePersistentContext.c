/*
 * XREFs of AcpiKsrPreparePersistentContext @ 0x1C009D430
 * Callers:
 *     AcpiKsrCallback @ 0x1C009D3F0 (AcpiKsrCallback.c)
 * Callees:
 *     KsrPersistMetadata_0 @ 0x1C0001010 (KsrPersistMetadata_0.c)
 */

__int64 AcpiKsrPreparePersistentContext()
{
  if ( (_DWORD)AcpiKsrContext != 1481917259 )
  {
    qword_1C0073A78 = 0LL;
    AcpiKsrContext = 0x15854434BLL;
    qword_1C0073A78 = *((_BYTE *)AcpiInformation + 84) & 1;
  }
  return KsrPersistMetadata_0();
}
