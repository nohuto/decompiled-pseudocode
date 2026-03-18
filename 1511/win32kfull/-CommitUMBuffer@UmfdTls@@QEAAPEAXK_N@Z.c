/*
 * XREFs of ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C02D5DAC
 * Callers:
 *     ?CreateUsermodeParameters@DestroyFontRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02D8050 (-CreateUsermodeParameters@DestroyFontRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@EscapeRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02D80F0 (-CreateUsermodeParameters@EscapeRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@FontManagementRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02D81F0 (-CreateUsermodeParameters@FontManagementRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@FreeRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02D8380 (-CreateUsermodeParameters@FreeRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@GetTrueTypeFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02D83D0 (-CreateUsermodeParameters@GetTrueTypeFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@LoadFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02D8430 (-CreateUsermodeParameters@LoadFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02D8540 (-CreateUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryFontDataRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02D86B0 (-CreateUsermodeParameters@QueryFontDataRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02D8880 (-CreateUsermodeParameters@QueryFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryFontRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02D8900 (-CreateUsermodeParameters@QueryFontRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryFontTreeRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02D8970 (-CreateUsermodeParameters@QueryFontTreeRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryGlyphAttrsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02D89E0 (-CreateUsermodeParameters@QueryGlyphAttrsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryTrueTypeOutlineRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02D8A80 (-CreateUsermodeParameters@QueryTrueTypeOutlineRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryTrueTypeTableRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02D8C00 (-CreateUsermodeParameters@QueryTrueTypeTableRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@TrueTypeFreeGlyphsetRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02D8D40 (-CreateUsermodeParameters@TrueTypeFreeGlyphsetRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@UnloadFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02D8DA0 (-CreateUsermodeParameters@UnloadFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 * Callees:
 *     memset @ 0x1C0152CC0 (memset.c)
 *     ?CommitBuffer@UmfdUMBuffer@@QEAAPEAXK@Z @ 0x1C02D7100 (-CommitBuffer@UmfdUMBuffer@@QEAAPEAXK@Z.c)
 */

void *__fastcall UmfdTls::CommitUMBuffer(UmfdUMBuffer **this, unsigned int a2)
{
  void *v3; // rax
  void *v4; // rbx

  v3 = UmfdUMBuffer::CommitBuffer(*this, a2);
  v4 = v3;
  if ( v3 )
    memset(v3, 0, a2);
  return v4;
}
