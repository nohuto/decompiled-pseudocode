/*
 * XREFs of ?_IsUnextend@CDS_JOURNAL@CCD_BTL@@CA_NAEBU_ENTRY@12@@Z @ 0x1C000AC54
 * Callers:
 *     ?_CommitEntry@CDS_JOURNAL@CCD_BTL@@CAJAEBU_ENTRY@12@PEAVCCD_TOPOLOGY@@_N@Z @ 0x1C00ADE24 (-_CommitEntry@CDS_JOURNAL@CCD_BTL@@CAJAEBU_ENTRY@12@PEAVCCD_TOPOLOGY@@_N@Z.c)
 *     ?CommitTo@CDS_JOURNAL@CCD_BTL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z @ 0x1C00AE0F0 (-CommitTo@CDS_JOURNAL@CCD_BTL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCD_BTL::CDS_JOURNAL::_IsUnextend(const struct CCD_BTL::CDS_JOURNAL::_ENTRY *a1)
{
  char v1; // dl

  v1 = 0;
  if ( (*((_DWORD *)a1 + 10) & 0x180000) == 0x180000 && !*((_DWORD *)a1 + 16) )
    return *((_DWORD *)a1 + 17) == 0;
  return v1;
}
