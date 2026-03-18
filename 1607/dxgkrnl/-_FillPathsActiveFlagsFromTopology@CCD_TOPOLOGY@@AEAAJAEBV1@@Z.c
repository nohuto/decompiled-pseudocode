/*
 * XREFs of ?_FillPathsActiveFlagsFromTopology@CCD_TOPOLOGY@@AEAAJAEBV1@@Z @ 0x1C008AD20
 * Callers:
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C008A078 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ @ 0x1C008ADF0 (-_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ.c)
 *     ?RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z @ 0x1C008CCA8 (-RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z.c)
 * Callees:
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C0089D20 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::_FillPathsActiveFlagsFromTopology(CCD_TOPOLOGY *this, const struct CCD_TOPOLOGY *a2)
{
  unsigned int i; // edi
  __int64 v5; // rax
  unsigned __int16 v6; // dx
  int *PathDescriptor; // rbx
  unsigned int j; // esi
  __int64 v9; // rax
  unsigned __int16 v10; // cx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v11; // rax
  int v12; // ecx
  int v13; // edx

  for ( i = 0; ; ++i )
  {
    v5 = *((_QWORD *)a2 + 8);
    v6 = v5 ? *(_WORD *)(v5 + 20) : 0;
    if ( i >= v6 )
      break;
    PathDescriptor = (int *)CCD_TOPOLOGY::GetPathDescriptor(a2, i);
    if ( *PathDescriptor < 0 )
    {
      for ( j = 0; ; ++j )
      {
        v9 = *((_QWORD *)this + 8);
        v10 = v9 ? *(_WORD *)(v9 + 20) : 0;
        if ( j >= v10 )
          break;
        v11 = CCD_TOPOLOGY::GetPathDescriptor(this, j);
        if ( PathDescriptor[2] == *((_DWORD *)v11 + 2) && PathDescriptor[3] == *((_DWORD *)v11 + 3) )
        {
          v12 = *((_DWORD *)v11 + 5);
          if ( PathDescriptor[5] == v12 )
            *(_DWORD *)v11 |= 0x20000000u;
          v13 = *((_DWORD *)v11 + 4);
          if ( PathDescriptor[4] == v13 )
            *(_DWORD *)v11 |= 0x40000000u;
          if ( PathDescriptor[5] == v12 && PathDescriptor[4] == v13 )
            *(_DWORD *)v11 |= 0x80000000;
        }
      }
    }
  }
  return 0LL;
}
