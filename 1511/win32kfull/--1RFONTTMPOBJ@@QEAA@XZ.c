/*
 * XREFs of ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C0009550
 * Callers:
 *     ?dtHelper@RFONTOBJ@@QEAAXH@Z @ 0x1C0026AEC (-dtHelper@RFONTOBJ@@QEAAXH@Z.c)
 *     NtGdiEngTextOut @ 0x1C02AD4E0 (NtGdiEngTextOut.c)
 *     NtGdiFONTOBJ_cGetGlyphs @ 0x1C02ADBB0 (NtGdiFONTOBJ_cGetGlyphs.c)
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C02ADDF0 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 *     NtGdiFONTOBJ_pifi @ 0x1C02AE060 (NtGdiFONTOBJ_pifi.c)
 * Callees:
 *     <none>
 */

void __fastcall RFONTTMPOBJ::~RFONTTMPOBJ(RFONTTMPOBJ *this)
{
  *(_QWORD *)this = 0LL;
  RFONTOBJ::~RFONTOBJ(this);
}
