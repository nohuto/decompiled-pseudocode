/*
 * XREFs of RtlpLocateActivationContextSectionForQuery @ 0x18007A298
 * Callers:
 *     RtlpQueryRunLevel @ 0x180079E84 (RtlpQueryRunLevel.c)
 *     RtlpQueryInformationActivationContextDetailedInformation @ 0x180079F74 (RtlpQueryInformationActivationContextDetailedInformation.c)
 *     RtlpQueryInformationActivationContextCompatibilityInformation @ 0x18007A1D4 (RtlpQueryInformationActivationContextCompatibilityInformation.c)
 *     RtlpQueryAssemblyInformationActivationContextDetailedInformation @ 0x1800D297C (RtlpQueryAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation @ 0x1800D2C08 (RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryInformationActivationContextManifestResourceName @ 0x1800D2E90 (RtlpQueryInformationActivationContextManifestResourceName.c)
 * Callees:
 *     RtlpLocateActivationContextSection @ 0x180016240 (RtlpLocateActivationContextSection.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

void __fastcall RtlpLocateActivationContextSectionForQuery(
        _DWORD *a1,
        int *a2,
        void *a3,
        size_t a4,
        size_t *a5,
        size_t Size,
        _DWORD *a7,
        __int64 a8,
        unsigned int a9,
        _QWORD *a10,
        _DWORD *a11)
{
  int v12; // ebx
  int ActivationContextSection; // eax

  v12 = 0;
  if ( a7
    && (ActivationContextSection = RtlpLocateActivationContextSection(a7, 0LL, a9, a10, a11),
        *a2 = ActivationContextSection,
        ActivationContextSection != -1072365567) )
  {
    LOBYTE(v12) = ActivationContextSection < 0;
    *a1 = v12 + 1;
  }
  else
  {
    *a1 = 2;
    if ( Size > a4 )
    {
      *a2 = -1073741789;
    }
    else
    {
      memset(a3, 0, Size);
      if ( a5 )
        *a5 = Size;
      *a2 = 0;
    }
  }
}
