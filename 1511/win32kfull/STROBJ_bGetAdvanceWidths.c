/*
 * XREFs of STROBJ_bGetAdvanceWidths @ 0x1C02B67B0
 * Callers:
 *     NtGdiSTROBJ_bGetAdvanceWidths @ 0x1C02AEBF0 (NtGdiSTROBJ_bGetAdvanceWidths.c)
 * Callees:
 *     ?STROBJ_bGetAdvanceWidthsLinked@@YAHPEAVESTROBJ@@KKPEAU_POINTQF@@@Z @ 0x1C02B4FFC (-STROBJ_bGetAdvanceWidthsLinked@@YAHPEAVESTROBJ@@KKPEAU_POINTQF@@@Z.c)
 */

BOOL __stdcall STROBJ_bGetAdvanceWidths(STROBJ *pso, ULONG iFirst, ULONG c, POINTQF *pptqD)
{
  ULONG cGlyphs; // ecx
  ULONG v6; // eax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r8

  cGlyphs = pso->cGlyphs;
  v6 = iFirst + c;
  if ( iFirst >= cGlyphs || v6 > cGlyphs || v6 < iFirst )
    return 0;
  if ( (pso[1].rclBkGround.top & 0x1400) != 0 )
    return STROBJ_bGetAdvanceWidthsLinked((struct ESTROBJ *)pso, iFirst, c, pptqD);
  v8 = *(_QWORD *)&pso[1].rclBkGround.bottom + 24LL * iFirst;
  v9 = v8 + 24LL * c;
  if ( *(_DWORD *)(**(_QWORD **)&pso[1].ulCharInc + 652LL) )
  {
    while ( v8 < v9 )
    {
      pptqD->x.HighPart = *(_DWORD *)(*(_QWORD *)(v8 + 8) + 12LL);
      pptqD->x.LowPart = 0;
      pptqD->y.QuadPart = 0LL;
      v8 += 24LL;
      ++pptqD;
    }
  }
  else
  {
    while ( v8 < v9 )
    {
      *pptqD++ = *(POINTQF *)(*(_QWORD *)(v8 + 8) + 48LL);
      v8 += 24LL;
    }
  }
  return 1;
}
