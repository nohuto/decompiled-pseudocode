/*
 * XREFs of ??0EXFORMOBJ@@QEAA@PEAVMATRIX@@K@Z @ 0x1C00394A4
 * Callers:
 *     ?lOverhang@RFONTOBJ@@QEAAJXZ @ 0x1C002E74C (-lOverhang@RFONTOBJ@@QEAAJXZ.c)
 *     GreGetTextExtentW @ 0x1C0123640 (GreGetTextExtentW.c)
 *     ??0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z @ 0x1C0124C98 (--0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z.c)
 *     ?vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_IFIMETRICS@@@Z @ 0x1C0299614 (-vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_IFIMETRICS@@@Z.c)
 * Callees:
 *     <none>
 */

EXFORMOBJ *__fastcall EXFORMOBJ::EXFORMOBJ(EXFORMOBJ *this, struct MATRIX *a2, int a3)
{
  *((_DWORD *)this + 3) = 0;
  *(_QWORD *)this = a2;
  if ( (a3 & 1) != 0 )
  {
    EXFORMOBJ::vComputeAccelFlags(this, a3 & 0x38);
  }
  else if ( (a3 & 0x38) != 0 )
  {
    *((_DWORD *)a2 + 8) = a3;
  }
  return this;
}
