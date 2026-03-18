/*
 * XREFs of ?TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0I0I0@Z @ 0x1C02DBF14
 * Callers:
 *     ?CreateUsermodeParameters@FontManagementRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02DB2E0 (-CreateUsermodeParameters@FontManagementRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02DB630 (-CreateUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryFontDataRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02DB7A0 (-CreateUsermodeParameters@QueryFontDataRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryTrueTypeOutlineRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02DBB70 (-CreateUsermodeParameters@QueryTrueTypeOutlineRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryTrueTypeTableRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02DBCF0 (-CreateUsermodeParameters@QueryTrueTypeTableRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 * Callees:
 *     ?TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0I0@Z @ 0x1C02DBEDC (-TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0I0@Z.c)
 */

char __fastcall UmfdTls::TryComputeAlignedFieldSizes(
        unsigned int a1,
        unsigned int *a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned int a7,
        unsigned int *a8)
{
  if ( a1 + 7 < a1 )
    return 0;
  *a2 = (a1 + 7) & 0xFFFFFFF8;
  return UmfdTls::TryComputeAlignedFieldSizes(a3, a4, a5, a6, a7, a8);
}
