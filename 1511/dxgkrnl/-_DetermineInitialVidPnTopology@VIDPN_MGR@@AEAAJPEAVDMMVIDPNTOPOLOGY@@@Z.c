/*
 * XREFs of ?_DetermineInitialVidPnTopology@VIDPN_MGR@@AEAAJPEAVDMMVIDPNTOPOLOGY@@@Z @ 0x1C0179498
 * Callers:
 *     ?SaveInitialVidPnTopologyAsLkg@VIDPN_MGR@@QEAAJXZ @ 0x1C00DD450 (-SaveInitialVidPnTopologyAsLkg@VIDPN_MGR@@QEAAJXZ.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005834 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000C1AC (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?_AddPathToFirstAvailableTarget@VIDPN_MGR@@AEBAJPEAVDMMVIDPNTOPOLOGY@@IW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@W4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GE@Z @ 0x1C0179358 (-_AddPathToFirstAvailableTarget@VIDPN_MGR@@AEBAJPEAVDMMVIDPNTOPOLOGY@@IW4_D3DKMDT_VIDEO_PRESENT_.c)
 */

__int64 __fastcall VIDPN_MGR::_DetermineInitialVidPnTopology(VIDPN_MGR *this, struct DMMVIDPNTOPOLOGY *a2)
{
  __int64 v4; // rax
  __int64 v5; // r9
  __int64 v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rbp
  int AvailableTarget; // eax
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v15; // rax
  __int64 v16; // [rsp+20h] [rbp-28h]
  __int64 v17; // [rsp+28h] [rbp-20h]
  unsigned int v18; // [rsp+30h] [rbp-18h]

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v4);
  }
  ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 11) + 72LL));
  v6 = *((_QWORD *)this + 11);
  v7 = (_QWORD *)(v6 + 24);
  if ( (_QWORD *)*v7 == v7 )
    v8 = 0LL;
  else
    v8 = *v7 - 8LL;
  v9 = *(unsigned int *)(v8 + 24);
  AvailableTarget = VIDPN_MGR::_AddPathToFirstAvailableTarget(this, a2, *(_DWORD *)(v8 + 24), v5, v16, v17, v18);
  v12 = AvailableTarget;
  if ( AvailableTarget == -1071774925 )
  {
    v13 = WdLogNewEntry5_WdDmmEvent(v11);
    *(_QWORD *)(v13 + 24) = a2;
    *(_QWORD *)(v13 + 32) = v9;
    WdLogEvent5_WdDmmEvent(v13);
LABEL_8:
    LODWORD(v12) = 0;
    goto LABEL_9;
  }
  if ( AvailableTarget >= 0 )
    goto LABEL_8;
  v15 = WdLogNewEntry5_WdError(v11);
  *(_QWORD *)(v15 + 24) = v9;
  *(_QWORD *)(v15 + 32) = v12;
  WdLogEvent5_WdError(v15);
LABEL_9:
  if ( v6 )
    ReferenceCounted::Release((ReferenceCounted *)(v6 + 64));
  return (unsigned int)v12;
}
