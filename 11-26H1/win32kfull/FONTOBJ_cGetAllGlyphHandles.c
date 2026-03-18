/*
 * XREFs of FONTOBJ_cGetAllGlyphHandles @ 0x1402335F0
 * Callers:
 *     NtGdiFONTOBJ_cGetAllGlyphHandles @ 0x1402334E0 (NtGdiFONTOBJ_cGetAllGlyphHandles.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14006FDD0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?chglyGetAllHandles@RFONTOBJ@@QEAAKPEAK@Z @ 0x14023362C (-chglyGetAllHandles@RFONTOBJ@@QEAAKPEAK@Z.c)
 */

ULONG __stdcall FONTOBJ_cGetAllGlyphHandles(FONTOBJ *pfo, HGLYPH *phg)
{
  unsigned int AllHandles; // eax
  ULONG v3; // ebx
  FONTOBJ *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = pfo;
  AllHandles = RFONTOBJ::chglyGetAllHandles((RFONTOBJ *)&v5, phg);
  v5 = 0LL;
  v3 = AllHandles;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v5);
  return v3;
}
