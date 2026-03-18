/*
 * XREFs of ?IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z @ 0x1C0181BB0
 * Callers:
 *     ?_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z @ 0x1C00A2B34 (-_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z.c)
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00A3A3C (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00A4E18 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z @ 0x1C000AC34 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z.c)
 */

bool __fastcall CCD_TOPOLOGY::IsSameCloneGroup(CCD_TOPOLOGY *this, unsigned int a2, unsigned int a3, char a4)
{
  int v4; // ebx
  __int64 v5; // rsi
  __int64 v7; // rbp
  __int64 v9; // rax
  __int64 v10; // r9
  unsigned int v11; // eax
  __int64 v12; // rsi
  __int64 v13; // rbp
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  _QWORD *v20; // rdx
  __int64 v21; // rax

  v4 = 0;
  v5 = a3;
  v7 = a2;
  if ( !*((_QWORD *)this + 8) )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = *((_QWORD *)this + 8);
  if ( !v10 || (v11 = *(unsigned __int16 *)(v10 + 20), (unsigned int)v7 >= v11) || (unsigned int)v5 >= v11 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdAssertion(this);
    v20[3] = v7;
    v20[4] = v5;
    v20[5] = this;
    v20[6] = *((_QWORD *)this + 8);
    v21 = *((_QWORD *)this + 8);
    if ( v21 )
      v4 = *(unsigned __int16 *)(v21 + 20);
    v20[7] = v4;
    WdLogEvent5_WdAssertion(v20);
    return 0;
  }
  if ( !a4 )
    return *(_DWORD *)(216 * v7 + v10 + 248) == *(_DWORD *)(216 * v5 + v10 + 248);
  v12 = 216 * v5;
  v13 = 216 * v7;
  if ( !CCD_TOPOLOGY::IsMatchingSource(
          (const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)(v13 + v10 + 48),
          (const struct _LUID *)(v12 + v10 + 56),
          *(_DWORD *)(v12 + v10 + 64)) )
    return 0;
  if ( *(_DWORD *)(v15 + v13 + 248) != *(_DWORD *)(v12 + v15 + 248) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v14);
    WdLogEvent5_WdAssertion(v16);
  }
  v17 = *((_QWORD *)this + 8);
  if ( *(_DWORD *)(v17 + v13 + 68) == *(_DWORD *)(v17 + v12 + 68) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v17);
    WdLogEvent5_WdAssertion(v18);
  }
  return 1;
}
