/*
 * XREFs of ?_DetermineInitialVidPnTopology@VIDPN_MGR@@AEAAJPEAVDMMVIDPNTOPOLOGY@@@Z @ 0x1C01A2E78
 * Callers:
 *     ?SaveInitialVidPnTopologyAsLkg@VIDPN_MGR@@QEAAJXZ @ 0x1C00F4784 (-SaveInitialVidPnTopologyAsLkg@VIDPN_MGR@@QEAAJXZ.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004734 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?_AddPathToFirstAvailableTarget@VIDPN_MGR@@AEBAJPEAVDMMVIDPNTOPOLOGY@@IW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@W4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GE@Z @ 0x1C01A2D34 (-_AddPathToFirstAvailableTarget@VIDPN_MGR@@AEBAJPEAVDMMVIDPNTOPOLOGY@@IW4_D3DKMDT_VIDEO_PRESENT_.c)
 */

__int64 __fastcall VIDPN_MGR::_DetermineInitialVidPnTopology(VIDPN_MGR *this, struct DMMVIDPNTOPOLOGY *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // r14
  int AvailableTarget; // eax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v17; // rax
  __int64 v18; // [rsp+20h] [rbp-38h]
  __int64 v19; // [rsp+20h] [rbp-38h]
  __int64 v20; // [rsp+28h] [rbp-30h]
  __int64 v21; // [rsp+28h] [rbp-30h]
  unsigned int v22; // [rsp+30h] [rbp-28h]
  unsigned int v23; // [rsp+30h] [rbp-28h]

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v4);
  }
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 11) + 72LL));
  v5 = *((_QWORD *)this + 11);
  v6 = (_QWORD *)(v5 + 24);
  if ( (_QWORD *)*v6 == v6 )
    v7 = 0LL;
  else
    v7 = *v6 - 8LL;
  v8 = *(unsigned int *)(v7 + 24);
  AvailableTarget = VIDPN_MGR::_AddPathToFirstAvailableTarget(this, a2, *(_DWORD *)(v7 + 24), 2, v18, v20, v22);
  v11 = AvailableTarget;
  if ( AvailableTarget == -1071774925 )
  {
    v12 = WdLogNewEntry5_WdDmmEvent(v10);
    *(_QWORD *)(v12 + 24) = a2;
    *(_QWORD *)(v12 + 32) = v8;
    WdLogEvent5_WdDmmEvent(v12);
    v13 = VIDPN_MGR::_AddPathToFirstAvailableTarget(this, a2, v8, 1, v19, v21, v23);
    LODWORD(v11) = v13;
    if ( v13 == -1071774925 )
    {
      v15 = WdLogNewEntry5_WdDmmEvent(v14);
      *(_QWORD *)(v15 + 24) = a2;
      *(_QWORD *)(v15 + 32) = v8;
      WdLogEvent5_WdDmmEvent(v15);
LABEL_9:
      LODWORD(v11) = 0;
      goto LABEL_10;
    }
    if ( v13 >= 0 )
      goto LABEL_9;
    v17 = WdLogNewEntry5_WdError(v14);
  }
  else
  {
    if ( AvailableTarget >= 0 )
      goto LABEL_9;
    v17 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v17 + 24) = v8;
    *(_QWORD *)(v17 + 32) = v11;
  }
  WdLogEvent5_WdError(v17);
LABEL_10:
  if ( v5 )
    ReferenceCounted::Release((ReferenceCounted *)(v5 + 64));
  return (unsigned int)v11;
}
