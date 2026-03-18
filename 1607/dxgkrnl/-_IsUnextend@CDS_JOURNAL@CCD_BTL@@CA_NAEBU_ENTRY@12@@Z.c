/*
 * XREFs of ?_IsUnextend@CDS_JOURNAL@CCD_BTL@@CA_NAEBU_ENTRY@12@@Z @ 0x1C000A588
 * Callers:
 *     ?CommitTo@CDS_JOURNAL@CCD_BTL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z @ 0x1C00B93CC (-CommitTo@CDS_JOURNAL@CCD_BTL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z.c)
 *     ?_CommitEntry@CDS_JOURNAL@CCD_BTL@@CAJAEBU_ENTRY@12@PEAVCCD_TOPOLOGY@@_N@Z @ 0x1C00D5604 (-_CommitEntry@CDS_JOURNAL@CCD_BTL@@CAJAEBU_ENTRY@12@PEAVCCD_TOPOLOGY@@_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCD_BTL::CDS_JOURNAL::_IsUnextend(const struct CCD_BTL::CDS_JOURNAL::_ENTRY *a1)
{
  char v1; // dl

  v1 = 0;
  if ( (*((_DWORD *)a1 + 11) & 0x180000) == 0x180000 && !*((_DWORD *)a1 + 17) )
    return *((_DWORD *)a1 + 18) == 0;
  return v1;
}
