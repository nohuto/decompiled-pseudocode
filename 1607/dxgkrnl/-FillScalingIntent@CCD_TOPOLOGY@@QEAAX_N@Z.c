/*
 * XREFs of ?FillScalingIntent@CCD_TOPOLOGY@@QEAAX_N@Z @ 0x1C008BB94
 * Callers:
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C008A118 (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?Augment@CDS_JOURNAL@CCD_BTL@@QEAAJPEAU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C00B94FC (-Augment@CDS_JOURNAL@CCD_BTL@@QEAAJPEAU_D3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     ?ApplyCdsjToPathModality@CDS_JOURNAL@CCD_BTL@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C00DEEF4 (-ApplyCdsjToPathModality@CDS_JOURNAL@CCD_BTL@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@@Z.c)
 * Callees:
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C0089D20 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     EnforceDriverModelScalingPolicy @ 0x1C00D5AF4 (EnforceDriverModelScalingPolicy.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1C00D5CD0 (DxgkGetAdapterDefaultScaling.c)
 */

void __fastcall CCD_TOPOLOGY::FillScalingIntent(CCD_TOPOLOGY *this)
{
  unsigned int i; // esi
  __int64 v3; // rax
  unsigned __int16 v4; // dx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rbx
  int v6; // eax
  int v7; // ecx
  int v8; // eax

  for ( i = 0; ; ++i )
  {
    v3 = *((_QWORD *)this + 8);
    v4 = v3 ? *(_WORD *)(v3 + 20) : 0;
    if ( i >= v4 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, i);
    if ( (*(_DWORD *)PathDescriptor & 0x10000) != 0 )
    {
      v6 = *((_DWORD *)PathDescriptor + 32);
      v7 = *((_DWORD *)PathDescriptor + 33);
      if ( v6 != v7 && (unsigned int)(v7 - 4) <= 1 )
      {
        if ( v6 == 1 )
          DxgkGetAdapterDefaultScaling((char *)PathDescriptor + 8);
        else
          *((_DWORD *)PathDescriptor + 33) = v6;
      }
      EnforceDriverModelScalingPolicy((char *)PathDescriptor + 8);
    }
    else
    {
      if ( (*(_DWORD *)PathDescriptor & 0x400) != 0 && (v8 = *((_DWORD *)PathDescriptor + 32), v8 >= 2) && v8 <= 5 )
      {
        *((_DWORD *)PathDescriptor + 33) = v8;
        EnforceDriverModelScalingPolicy((char *)PathDescriptor + 8);
      }
      else
      {
        DxgkGetAdapterDefaultScaling((char *)PathDescriptor + 8);
      }
      *(_DWORD *)PathDescriptor |= 0x10000u;
    }
  }
}
