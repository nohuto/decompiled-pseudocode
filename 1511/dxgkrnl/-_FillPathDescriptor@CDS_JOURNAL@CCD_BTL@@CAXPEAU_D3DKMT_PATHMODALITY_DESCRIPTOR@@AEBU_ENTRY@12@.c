/*
 * XREFs of ?_FillPathDescriptor@CDS_JOURNAL@CCD_BTL@@CAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@12@_N2PEAVDXGADAPTER@@@Z @ 0x1C00ACF30
 * Callers:
 *     ?FillPathDescriptor@CDS_JOURNAL@CCD_BTL@@SAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_D3DKMT_AUGMENT_CDSJ@@_N2PEAVDXGADAPTER@@@Z @ 0x1C00ADB8C (-FillPathDescriptor@CDS_JOURNAL@CCD_BTL@@SAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_D3DKMT_AUG.c)
 *     ?_CommitEntry@CDS_JOURNAL@CCD_BTL@@CAJAEBU_ENTRY@12@PEAVCCD_TOPOLOGY@@_N@Z @ 0x1C00ADE24 (-_CommitEntry@CDS_JOURNAL@CCD_BTL@@CAJAEBU_ENTRY@12@PEAVCCD_TOPOLOGY@@_N@Z.c)
 *     ?_ExtendTopology@CDS_JOURNAL@CCD_BTL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@12@@Z @ 0x1C0184A48 (-_ExtendTopology@CDS_JOURNAL@CCD_BTL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@12@@Z.c)
 * Callees:
 *     ?_IsCDSJWidthAndHeightSwapped@CDS_JOURNAL@CCD_BTL@@CA_NPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C000AA10 (-_IsCDSJWidthAndHeightSwapped@CDS_JOURNAL@CCD_BTL@@CA_NPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     EnforceDriverModelScalingPolicy @ 0x1C00AD130 (EnforceDriverModelScalingPolicy.c)
 *     _EnforceDriverModelScalingPolicy @ 0x1C00AD1D0 (_EnforceDriverModelScalingPolicy.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1C00AE2A0 (DxgkGetAdapterDefaultScaling.c)
 *     ConvertGdiScalingToDMMScaling @ 0x1C00AE3B0 (ConvertGdiScalingToDMMScaling.c)
 *     DmmGetDefaultScaling @ 0x1C017A3FC (DmmGetDefaultScaling.c)
 */

void __fastcall CCD_BTL::CDS_JOURNAL::_FillPathDescriptor(
        struct _D3DKMT_PATHMODALITY_DESCRIPTOR *a1,
        const struct CCD_BTL::CDS_JOURNAL::_ENTRY *a2,
        __int64 a3,
        __int64 a4,
        struct DXGADAPTER *a5)
{
  unsigned int *v5; // rdi
  char v6; // r12
  char v7; // r15
  int v10; // ecx
  int v11; // eax
  int v12; // r9d
  int v13; // eax
  bool v14; // zf
  int v15; // r10d
  int v16; // r11d
  int v17; // eax
  int v18; // r10d
  int v19; // r11d
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // eax
  unsigned int v26; // eax
  int v27; // ecx
  int v28; // eax
  int v29; // ecx
  __int64 v30; // rcx
  _QWORD *v31; // rax
  _DWORD *v32; // rdx
  _QWORD *v33; // rax

  *(_DWORD *)a1 &= 0xFF7DFE78;
  v5 = (unsigned int *)((char *)a2 + 40);
  v6 = a4;
  v7 = a3;
  if ( (*((_DWORD *)a2 + 10) & 0x80u) != 0 )
  {
    v10 = *((_DWORD *)a2 + 13);
    if ( v10 )
    {
      v29 = v10 - 1;
      if ( !v29 )
      {
        *((_DWORD *)a1 + 30) = 2;
        goto LABEL_4;
      }
      v30 = (unsigned int)(v29 - 1);
      if ( !(_DWORD)v30 )
      {
        *((_DWORD *)a1 + 30) = 3;
        goto LABEL_4;
      }
      if ( (_DWORD)v30 == 1 )
      {
        *((_DWORD *)a1 + 30) = 4;
        goto LABEL_4;
      }
      v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v30, a2, a3, a4);
      v31[3] = v5;
      v31[4] = *v5;
      v31[5] = v5[3];
      WdLogEvent5_WdWarning(v31);
    }
    *((_DWORD *)a1 + 30) = 1;
LABEL_4:
    *(_DWORD *)a1 |= 0x200u;
    *((_DWORD *)a1 + 1) |= 0x200u;
  }
  if ( (*v5 & 0x80000) != 0 )
  {
    v11 = *((_DWORD *)a2 + 16);
    *(_DWORD *)a1 |= 0x20000u;
    *((_DWORD *)a1 + 35) = v11;
  }
  v12 = 0x100000;
  if ( (*v5 & 0x100000) != 0 )
  {
    v13 = *((_DWORD *)a2 + 17);
    *(_DWORD *)a1 |= 0x20000u;
    *((_DWORD *)a1 + 36) = v13;
  }
  if ( (*((_DWORD *)a2 + 4) & 0x10) == 0 )
  {
    if ( (*v5 & 0x80000) != 0 )
    {
      v14 = !CCD_BTL::CDS_JOURNAL::_IsCDSJWidthAndHeightSwapped(a1);
      v17 = *((_DWORD *)a2 + 16);
      if ( v14 )
        *((_DWORD *)a1 + 21) = v17;
      else
        *((_DWORD *)a1 + 22) = v17;
      *(_DWORD *)a1 |= v15;
      *((_DWORD *)a1 + 1) |= v16;
    }
    if ( (v12 & *v5) != 0 )
    {
      v14 = !CCD_BTL::CDS_JOURNAL::_IsCDSJWidthAndHeightSwapped(a1);
      v20 = *((_DWORD *)a2 + 17);
      if ( v14 )
        *((_DWORD *)a1 + 22) = v20;
      else
        *((_DWORD *)a1 + 21) = v20;
      *(_DWORD *)a1 |= v18;
      *((_DWORD *)a1 + 1) |= v19;
    }
  }
  if ( (*v5 & 0x20) != 0 )
  {
    v21 = *(_QWORD *)((char *)a2 + 44);
    *(_DWORD *)a1 |= 0x800u;
    *(_QWORD *)((char *)a1 + 132) = v21;
  }
  if ( (*v5 & 0x20000000) != 0 && *((_DWORD *)a2 + 14) )
  {
    v32 = (_DWORD *)((char *)a1 + 128);
    if ( (*v5 & 0x20000000) != 0 )
      ConvertGdiScalingToDMMScaling(v5[4], v32);
    else
      *v32 = 253;
  }
  else if ( (*(_DWORD *)a1 & 0x10000) == 0 )
  {
    if ( a5 )
      DmmGetDefaultScaling(a5, (char *)a1 + 128);
    else
      DxgkGetAdapterDefaultScaling((char *)a2 + 20);
  }
  if ( a5 )
    EnforceDriverModelScalingPolicy(a5, (char *)a1 + 128);
  else
    EnforceDriverModelScalingPolicy((char *)a2 + 20);
  v25 = *((_DWORD *)a1 + 32);
  *(_DWORD *)a1 |= 0x10400u;
  *((_DWORD *)a1 + 31) = v25;
  if ( (*v5 & 0x40000) != 0 )
  {
    v26 = v5[5];
    switch ( v26 )
    {
      case 0x20u:
LABEL_26:
        *((_DWORD *)a1 + 26) = 21;
        break;
      case 8u:
        *((_DWORD *)a1 + 26) = 41;
        break;
      case 0x10u:
        *((_DWORD *)a1 + 26) = 23;
        break;
      case 0x18u:
        *((_DWORD *)a1 + 26) = 20;
        break;
      default:
        v33 = (_QWORD *)WdLogNewEntry5_WdWarning(0x40000LL, v22, v23, v24);
        v33[3] = v5;
        v33[4] = *v5;
        v33[5] = v5[5];
        WdLogEvent5_WdWarning(v33);
        goto LABEL_26;
    }
  }
  if ( (*v5 & 0x200000) != 0 )
  {
    *((_DWORD *)a1 + 18) ^= ((unsigned __int8)(((v5[9] & 2) != 0 && (*v5 & 0x200000) != 0) + 1) ^ (unsigned __int8)*((_DWORD *)a1 + 18)) & 7;
    *(_DWORD *)a1 |= 4u;
  }
  if ( (*v5 & 0x400000) != 0 )
  {
    v27 = *(_DWORD *)a1;
    if ( (*(_DWORD *)a1 & 4) != 0 && (unsigned int)(((int)(*((_DWORD *)a1 + 18) << 29) >> 29) - 2) <= 1 )
      v28 = 2 * *((_DWORD *)a2 + 18);
    else
      v28 = *((_DWORD *)a2 + 18);
    *((_DWORD *)a1 + 11) = v28;
    *(_DWORD *)a1 = v27 | 2;
    *((_DWORD *)a1 + 12) = 1;
  }
  if ( !v6 && !v7 )
  {
    *((_DWORD *)a1 + 30) = 0;
    *(_DWORD *)a1 &= ~0x200u;
  }
}
