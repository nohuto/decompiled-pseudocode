/*
 * XREFs of ?FillPathDescriptor@CDS_JOURNAL@CCD_BTL@@SAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_D3DKMT_AUGMENT_CDSJ@@_N2PEAVDXGADAPTER@@@Z @ 0x1C00D584C
 * Callers:
 *     ?AugmentTopology@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C00D5748 (-AugmentTopology@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?_FillPathDescriptor@CDS_JOURNAL@CCD_BTL@@CAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@12@_N2PEAVDXGADAPTER@@@Z @ 0x1C00D58F0 (-_FillPathDescriptor@CDS_JOURNAL@CCD_BTL@@CAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@12@.c)
 *     ?_FillEntry@CDS_JOURNAL@CCD_BTL@@CAXPEAU_ENTRY@12@AEBU_D3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z @ 0x1C00D5BCC (-_FillEntry@CDS_JOURNAL@CCD_BTL@@CAXPEAU_ENTRY@12@AEBU_D3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z.c)
 */

void __fastcall CCD_BTL::CDS_JOURNAL::FillPathDescriptor(
        struct _D3DKMT_PATHMODALITY_DESCRIPTOR *a1,
        const struct _D3DKMT_AUGMENT_CDSJ *a2,
        bool a3,
        __int64 a4,
        struct DXGADAPTER *a5)
{
  struct DXGADAPTER *v8; // r8
  _QWORD v9[12]; // [rsp+30h] [rbp-88h] BYREF

  v9[0] = 0LL;
  v9[1] = 0LL;
  *(_QWORD *)((char *)&v9[2] + 4) = 0LL;
  *(_QWORD *)((char *)&v9[3] + 4) = 0LL;
  *(_QWORD *)((char *)&v9[4] + 4) = 0LL;
  memset((char *)&v9[5] + 4, 0, 0x28uLL);
  CCD_BTL::CDS_JOURNAL::_FillEntry((struct CCD_BTL::CDS_JOURNAL::_ENTRY *)v9, a2, v8);
  CCD_BTL::CDS_JOURNAL::_FillPathDescriptor(a1, (const struct CCD_BTL::CDS_JOURNAL::_ENTRY *)v9, a3, 0, a5);
}
