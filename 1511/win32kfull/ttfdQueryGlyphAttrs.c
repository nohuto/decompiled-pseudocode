/*
 * XREFs of ttfdQueryGlyphAttrs @ 0x1C024769C
 * Callers:
 *     ttfdSemQueryGlyphAttrs @ 0x1C0244C40 (ttfdSemQueryGlyphAttrs.c)
 * Callees:
 *     ttfdOpenFontContext @ 0x1C0118EA0 (ttfdOpenFontContext.c)
 */

__int64 __fastcall ttfdQueryGlyphAttrs(__int64 a1)
{
  __int64 v3; // rax

  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 4LL) & 1) == 0
    && ((v3 = *(_QWORD *)(a1 + 56)) != 0 || (v3 = ttfdOpenFontContext(), (*(_QWORD *)(a1 + 56) = v3) != 0LL)) )
  {
    return *(_QWORD *)(**(_QWORD **)(v3 + 8) + 32LL);
  }
  else
  {
    return 0LL;
  }
}
