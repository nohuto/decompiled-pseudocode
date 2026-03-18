/*
 * XREFs of ?RemoveAllPaths@DMMVIDPNTOPOLOGY@@QEAAJXZ @ 0x1C00CC220
 * Callers:
 *     ?RestorePresentPathsFromLkgTopology@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C00CC290 (-RestorePresentPathsFromLkgTopology@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?RestorePresentPathsFromLkgTopology@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@I@Z @ 0x1C0174088 (-RestorePresentPathsFromLkgTopology@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@I@Z.c)
 *     DmmAssignEmptyTopologyToActiveVidPn @ 0x1C0175350 (DmmAssignEmptyTopologyToActiveVidPn.c)
 * Callees:
 *     ?GetNextSource@DMMVIDPNSOURCESET@@QEBAPEAVDMMVIDPNSOURCE@@QEBV2@@Z @ 0x1C0007B30 (-GetNextSource@DMMVIDPNSOURCESET@@QEBAPEAVDMMVIDPNSOURCE@@QEBV2@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0009804 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C00CC158 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::RemoveAllPaths(DMMVIDPNTOPOLOGY *this)
{
  DMMVIDPNSOURCESET *v2; // rsi
  _QWORD *v3; // rbx
  unsigned int *i; // rbx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  __int64 v12; // rax
  __int64 v13; // rax

  v2 = *(DMMVIDPNSOURCESET **)(ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160) + 304);
  v3 = (_QWORD *)((char *)v2 + 24);
  if ( (_QWORD *)*v3 != v3 )
  {
    for ( i = (unsigned int *)(*v3 - 8LL);
          i;
          i = (unsigned int *)DMMVIDPNSOURCESET::GetNextSource(v2, (const struct DMMVIDPNSOURCE *const)i) )
    {
      v5 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource(this, i[6]);
      v10 = v5;
      if ( v5 == -1071774919 )
        break;
      if ( v5 < 0 )
      {
        if ( v5 != -1073741790 )
        {
          v12 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
          WdLogEvent5_WdAssertion(v12);
        }
        v13 = WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
        *(_QWORD *)(v13 + 24) = i[6];
        *(_QWORD *)(v13 + 32) = v10;
        return (unsigned int)v10;
      }
    }
  }
  return 0LL;
}
