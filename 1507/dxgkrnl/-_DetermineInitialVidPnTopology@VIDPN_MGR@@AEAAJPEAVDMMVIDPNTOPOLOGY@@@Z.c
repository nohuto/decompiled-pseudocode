/*
 * XREFs of ?_DetermineInitialVidPnTopology@VIDPN_MGR@@AEAAJPEAVDMMVIDPNTOPOLOGY@@@Z @ 0x1C0174EBC
 * Callers:
 *     ?SaveInitialVidPnTopologyAsLkg@VIDPN_MGR@@QEAAJXZ @ 0x1C00CDA50 (-SaveInitialVidPnTopologyAsLkg@VIDPN_MGR@@QEAAJXZ.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0003E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0009804 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?_AddPathToFirstAvailableTarget@VIDPN_MGR@@AEBAJPEAVDMMVIDPNTOPOLOGY@@IW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@W4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GE@Z @ 0x1C0174D7C (-_AddPathToFirstAvailableTarget@VIDPN_MGR@@AEBAJPEAVDMMVIDPNTOPOLOGY@@IW4_D3DKMDT_VIDEO_PRESENT_.c)
 */

__int64 __fastcall VIDPN_MGR::_DetermineInitialVidPnTopology(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbp
  int AvailableTarget; // eax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v17; // rax
  __int64 v18; // [rsp+20h] [rbp-28h]
  __int64 v19; // [rsp+28h] [rbp-20h]
  unsigned int v20; // [rsp+30h] [rbp-18h]

  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v6);
  }
  ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 11) + 72LL));
  v8 = *((_QWORD *)this + 11);
  v9 = (_QWORD *)(v8 + 24);
  if ( (_QWORD *)*v9 == v9 )
    v10 = 0LL;
  else
    v10 = *v9 - 8LL;
  v11 = *(unsigned int *)(v10 + 24);
  AvailableTarget = VIDPN_MGR::_AddPathToFirstAvailableTarget(this, a2, *(_DWORD *)(v10 + 24), v7, v18, v19, v20);
  v14 = AvailableTarget;
  if ( AvailableTarget == -1071774925 )
  {
    v15 = WdLogNewEntry5_WdDmmEvent(v13);
    *(_QWORD *)(v15 + 24) = a2;
    *(_QWORD *)(v15 + 32) = v11;
    WdLogEvent5_WdDmmEvent(v15);
LABEL_8:
    LODWORD(v14) = 0;
    goto LABEL_9;
  }
  if ( AvailableTarget >= 0 )
    goto LABEL_8;
  v17 = WdLogNewEntry5_WdError(v13);
  *(_QWORD *)(v17 + 24) = v11;
  *(_QWORD *)(v17 + 32) = v14;
  WdLogEvent5_WdError(v17);
LABEL_9:
  if ( v8 )
    ReferenceCounted::Release((ReferenceCounted *)(v8 + 64));
  return (unsigned int)v14;
}
