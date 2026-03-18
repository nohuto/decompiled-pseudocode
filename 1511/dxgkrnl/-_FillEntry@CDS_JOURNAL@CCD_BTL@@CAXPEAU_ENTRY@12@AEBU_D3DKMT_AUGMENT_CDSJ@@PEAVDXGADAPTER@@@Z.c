/*
 * XREFs of ?_FillEntry@CDS_JOURNAL@CCD_BTL@@CAXPEAU_ENTRY@12@AEBU_D3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z @ 0x1C00ADC30
 * Callers:
 *     ?FillPathDescriptor@CDS_JOURNAL@CCD_BTL@@SAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_D3DKMT_AUGMENT_CDSJ@@_N2PEAVDXGADAPTER@@@Z @ 0x1C00ADB8C (-FillPathDescriptor@CDS_JOURNAL@CCD_BTL@@SAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_D3DKMT_AUG.c)
 *     ?Augment@CDS_JOURNAL@CCD_BTL@@QEAAJPEAU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C00ADF9C (-Augment@CDS_JOURNAL@CCD_BTL@@QEAAJPEAU_D3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     ?ApplyCdsjToPathModality@CDS_JOURNAL@CCD_BTL@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C00C9D94 (-ApplyCdsjToPathModality@CDS_JOURNAL@CCD_BTL@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CCD_BTL::CDS_JOURNAL::_FillEntry(
        struct CCD_BTL::CDS_JOURNAL::_ENTRY *a1,
        const struct _D3DKMT_AUGMENT_CDSJ *a2,
        struct DXGADAPTER *a3)
{
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // r8
  int v6; // eax
  __int64 v7; // r8
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // r8
  int v15; // eax
  __int64 v16; // r8
  int v17; // eax
  int v18; // eax

  *((_DWORD *)a1 + 4) = *(_DWORD *)a2;
  *(_QWORD *)((char *)a1 + 20) = *(_QWORD *)((char *)a2 + 4);
  *((_DWORD *)a1 + 7) = *((_DWORD *)a2 + 3);
  *((_DWORD *)a1 + 8) = *((_DWORD *)a2 + 4);
  *((_DWORD *)a1 + 9) = *((_DWORD *)a2 + 5);
  v3 = *((_QWORD *)a2 + 3);
  if ( (*(_DWORD *)(v3 + 72) & 0x20) != 0 )
  {
    v4 = *(_QWORD *)(v3 + 76);
    *((_DWORD *)a1 + 10) |= 0x20u;
    *(_QWORD *)((char *)a1 + 44) = v4;
  }
  v5 = *((_QWORD *)a2 + 3);
  if ( (*(_DWORD *)(v5 + 72) & 0x80u) != 0 )
  {
    v6 = *(_DWORD *)(v5 + 84);
    *((_DWORD *)a1 + 10) |= 0x80u;
    *((_DWORD *)a1 + 13) = v6;
  }
  v7 = *((_QWORD *)a2 + 3);
  if ( (*(_DWORD *)(v7 + 72) & 0x20000000) != 0 )
  {
    v18 = *(_DWORD *)(v7 + 88);
    *((_DWORD *)a1 + 10) |= 0x20000000u;
    *((_DWORD *)a1 + 14) = v18;
  }
  v8 = *((_QWORD *)a2 + 3);
  if ( (*(_DWORD *)(v8 + 72) & 0x40000) != 0 )
  {
    v9 = *(_DWORD *)(v8 + 168);
    *((_DWORD *)a1 + 10) |= 0x40000u;
    *((_DWORD *)a1 + 15) = v9;
  }
  v10 = *((_QWORD *)a2 + 3);
  if ( (*(_DWORD *)(v10 + 72) & 0x80000) != 0 )
  {
    v11 = *(_DWORD *)(v10 + 172);
    *((_DWORD *)a1 + 10) |= 0x80000u;
    *((_DWORD *)a1 + 16) = v11;
  }
  v12 = *((_QWORD *)a2 + 3);
  if ( (*(_DWORD *)(v12 + 72) & 0x100000) != 0 )
  {
    v13 = *(_DWORD *)(v12 + 176);
    *((_DWORD *)a1 + 10) |= 0x100000u;
    *((_DWORD *)a1 + 17) = v13;
  }
  v14 = *((_QWORD *)a2 + 3);
  if ( (*(_DWORD *)(v14 + 72) & 0x400000) != 0 )
  {
    v15 = *(_DWORD *)(v14 + 184);
    *((_DWORD *)a1 + 10) |= 0x400000u;
    *((_DWORD *)a1 + 18) = v15;
  }
  v16 = *((_QWORD *)a2 + 3);
  if ( (*(_DWORD *)(v16 + 72) & 0x200000) != 0 )
  {
    v17 = *(_DWORD *)(v16 + 180);
    *((_DWORD *)a1 + 10) |= 0x200000u;
    *((_DWORD *)a1 + 19) = v17;
  }
}
