/*
 * XREFs of STROBJ_bGetAdvanceWidths @ 0x140236C40
 * Callers:
 *     NtGdiSTROBJ_bGetAdvanceWidths @ 0x140236B30 (NtGdiSTROBJ_bGetAdvanceWidths.c)
 * Callees:
 *     ?STROBJ_bGetAdvanceWidthsLinked@@YAHPEAVESTROBJ@@KKPEAU_POINTQF@@@Z @ 0x1403350A8 (-STROBJ_bGetAdvanceWidthsLinked@@YAHPEAVESTROBJ@@KKPEAU_POINTQF@@@Z.c)
 */

BOOL __stdcall STROBJ_bGetAdvanceWidths(STROBJ *pso, ULONG iFirst, ULONG c, POINTQF *pptqD)
{
  ULONG cGlyphs; // ecx
  ULONG v6; // eax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r8

  cGlyphs = pso->cGlyphs;
  v6 = iFirst + c;
  if ( iFirst >= cGlyphs || v6 > cGlyphs || v6 < iFirst )
    return 0;
  if ( ((__int64)pso[4].pwszOrg & 0x1400) != 0 )
    return STROBJ_bGetAdvanceWidthsLinked((struct ESTROBJ *)pso, iFirst, c, pptqD);
  v7 = *(_QWORD *)&pso[1].rclBkGround.top + 24LL * iFirst;
  v8 = v7 + 24LL * c;
  if ( *(_DWORD *)(**(_QWORD **)&pso[1].ulCharInc + 648LL) )
  {
    while ( v7 < v8 )
    {
      pptqD->x.HighPart = *(_DWORD *)(*(_QWORD *)(v7 + 8) + 12LL);
      pptqD->x.LowPart = 0;
      pptqD->y.QuadPart = 0LL;
      v7 += 24LL;
      ++pptqD;
    }
  }
  else
  {
    while ( v7 < v8 )
    {
      *pptqD++ = *(POINTQF *)(*(_QWORD *)(v7 + 8) + 48LL);
      v7 += 24LL;
    }
  }
  return 1;
}
