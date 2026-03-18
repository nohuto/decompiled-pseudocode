/*
 * XREFs of ?_CommitEntry@CDS_JOURNAL@CCD_BTL@@CAJAEBU_ENTRY@12@PEAVCCD_TOPOLOGY@@_N@Z @ 0x1C00ADE24
 * Callers:
 *     ?Augment@CDS_JOURNAL@CCD_BTL@@QEAAJPEAU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C00ADF9C (-Augment@CDS_JOURNAL@CCD_BTL@@QEAAJPEAU_D3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     ?CommitTo@CDS_JOURNAL@CCD_BTL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z @ 0x1C00AE0F0 (-CommitTo@CDS_JOURNAL@CCD_BTL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z.c)
 *     ?ApplyCdsjToPathModality@CDS_JOURNAL@CCD_BTL@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C00C9D94 (-ApplyCdsjToPathModality@CDS_JOURNAL@CCD_BTL@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@@Z.c)
 * Callees:
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x1C0009FC0 (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z @ 0x1C000AC34 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z.c)
 *     ?_IsUnextend@CDS_JOURNAL@CCD_BTL@@CA_NAEBU_ENTRY@12@@Z @ 0x1C000AC54 (-_IsUnextend@CDS_JOURNAL@CCD_BTL@@CA_NAEBU_ENTRY@12@@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00A484C (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?_FillPathDescriptor@CDS_JOURNAL@CCD_BTL@@CAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@12@_N2PEAVDXGADAPTER@@@Z @ 0x1C00ACF30 (-_FillPathDescriptor@CDS_JOURNAL@CCD_BTL@@CAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@12@.c)
 *     ?RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z @ 0x1C01820E4 (-RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z.c)
 *     ?_ExtendTopology@CDS_JOURNAL@CCD_BTL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@12@@Z @ 0x1C0184A48 (-_ExtendTopology@CDS_JOURNAL@CCD_BTL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@12@@Z.c)
 */

__int64 __fastcall CCD_BTL::CDS_JOURNAL::_CommitEntry(
        const struct CCD_BTL::CDS_JOURNAL::_ENTRY *a1,
        struct CCD_TOPOLOGY *this)
{
  char IsPrimaryClonePathByModality; // bp
  int v3; // r12d
  unsigned int v4; // r14d
  unsigned int i; // esi
  __int64 v8; // rax
  unsigned __int16 v9; // cx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rcx
  unsigned int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int j; // ebp
  __int64 v17; // rax
  unsigned __int16 v18; // cx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v19; // rax
  struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v20; // r15
  __int64 v21; // r8
  char v22; // r11
  __int64 v23; // r9
  __int64 result; // rax
  _QWORD *v25; // rax

  IsPrimaryClonePathByModality = 0;
  v3 = -1;
  v4 = -1;
  for ( i = 0; ; ++i )
  {
    v8 = *((_QWORD *)this + 8);
    v9 = v8 ? *(_WORD *)(v8 + 20) : 0;
    if ( i >= v9 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, i);
    if ( *((_DWORD *)PathDescriptor + 5) == *((_DWORD *)a1 + 8)
      && *((_DWORD *)PathDescriptor + 2) == *((_DWORD *)a1 + 5)
      && *((_DWORD *)PathDescriptor + 3) == *((_DWORD *)a1 + 6) )
    {
      v4 = *((_DWORD *)PathDescriptor + 4);
      v3 = *((_DWORD *)PathDescriptor + 50);
      IsPrimaryClonePathByModality = CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, i);
      break;
    }
  }
  v11 = 0;
  if ( CCD_BTL::CDS_JOURNAL::_IsUnextend(a1) )
  {
    if ( v4 == -1 || !IsPrimaryClonePathByModality )
    {
LABEL_28:
      v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
      v25[3] = *((int *)a1 + 6);
      v25[4] = *((unsigned int *)a1 + 5);
      v25[5] = *((unsigned int *)a1 + 8);
      v25[6] = this;
      v25[7] = *((_QWORD *)this + 8);
      WdLogEvent5_WdWarning(v25);
      return 0LL;
    }
    result = CCD_TOPOLOGY::RemoveCloneGroupByModality(this, (const struct _LUID *)((char *)a1 + 20), v4);
  }
  else
  {
    if ( v4 != -1 )
    {
      if ( IsPrimaryClonePathByModality )
      {
        for ( j = 0; ; ++j )
        {
          v17 = *((_QWORD *)this + 8);
          v18 = v17 ? *(_WORD *)(v17 + 20) : 0;
          if ( j >= v18 )
            break;
          v19 = CCD_TOPOLOGY::GetPathDescriptor(this, j);
          v20 = v19;
          if ( v3 == *((_DWORD *)v19 + 50) )
          {
            CCD_TOPOLOGY::IsMatchingSource(v19, (const struct _LUID *)((char *)a1 + 20), v4);
            LOBYTE(v21) = CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, j);
            LOBYTE(v23) = v22;
            CCD_BTL::CDS_JOURNAL::_FillPathDescriptor(v20, a1, v21, v23, 0LL);
          }
        }
        return v11;
      }
      goto LABEL_28;
    }
    result = CCD_BTL::CDS_JOURNAL::_ExtendTopology(this, a1);
  }
  v11 = result;
  if ( (int)result >= 0 )
    return v11;
  return result;
}
