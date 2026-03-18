/*
 * XREFs of ?_IsCDSJWidthAndHeightSwapped@CDS_JOURNAL@CCD_BTL@@CA_NPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C000AA10
 * Callers:
 *     ?_FillPathDescriptor@CDS_JOURNAL@CCD_BTL@@CAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@12@_N2PEAVDXGADAPTER@@@Z @ 0x1C00ACF30 (-_FillPathDescriptor@CDS_JOURNAL@CCD_BTL@@CAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@12@.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCD_BTL::CDS_JOURNAL::_IsCDSJWidthAndHeightSwapped(const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *a1)
{
  int v1; // edx

  v1 = *((_DWORD *)a1 + 30);
  if ( (unsigned int)(v1 - 5) <= 0xB )
    v1 = (v1 - 1) % 4 + 1;
  return (*(_DWORD *)a1 & 0x200) != 0 && ((v1 - 2) & 0xFFFFFFFD) == 0;
}
