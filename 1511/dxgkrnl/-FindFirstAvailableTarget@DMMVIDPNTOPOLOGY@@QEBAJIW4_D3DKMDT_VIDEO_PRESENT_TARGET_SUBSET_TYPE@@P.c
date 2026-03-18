/*
 * XREFs of ?FindFirstAvailableTarget@DMMVIDPNTOPOLOGY@@QEBAJIW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C017E808
 * Callers:
 *     ?_AddPathToFirstAvailableTarget@VIDPN_MGR@@AEBAJPEAVDMMVIDPNTOPOLOGY@@IW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@W4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GE@Z @ 0x1C0179358 (-_AddPathToFirstAvailableTarget@VIDPN_MGR@@AEBAJPEAVDMMVIDPNTOPOLOGY@@IW4_D3DKMDT_VIDEO_PRESENT_.c)
 *     ?FindFirstAvailableTarget@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@PEAI@Z @ 0x1C017D0C0 (-FindFirstAvailableTarget@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY_.c)
 *     ?_AugmentVidPnTopology@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDMMVIDPNTOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C01842B4 (-_AugmentVidPnTopology@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDMMVIDPNTOPOLOGY@@PEAU_D3DKMT_AUGMENT_CD.c)
 * Callees:
 *     IsInternalVideoOutput @ 0x1C000A310 (IsInternalVideoOutput.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000C1AC (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEAAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C00194D0 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEAAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C0091004 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::FindFirstAvailableTarget(
        DMMVIDPNTOPOLOGY *a1,
        unsigned int a2,
        int a3,
        _DWORD *a4,
        _DWORD *a5)
{
  __int64 v5; // r15
  __int64 v9; // rax
  __int64 v10; // rax
  _DWORD *v11; // rdi
  __int64 Container; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbp
  bool v17; // si
  _QWORD *v18; // rbx
  struct DMMVIDEOPRESENTTARGET *NextTarget; // rbx
  DMMVIDEOPRESENTTARGETSET *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v24; // rax

  v5 = a2;
  if ( !a4 )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !a3 )
  {
    v10 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = a5;
  *a4 = -1;
  if ( a5 )
    *a5 = -2;
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a1 + 160);
  v16 = Container;
  v17 = (_DWORD)v5 == -1;
  v18 = (_QWORD *)(*(_QWORD *)(Container + 312) + 24LL);
  if ( (_QWORD *)*v18 == v18 )
  {
    NextTarget = 0LL;
    goto LABEL_20;
  }
  NextTarget = (struct DMMVIDEOPRESENTTARGET *)(*v18 - 8LL);
  if ( NextTarget )
  {
    v20 = *(DMMVIDEOPRESENTTARGETSET **)(Container + 312);
    while ( 1 )
    {
      if ( v17 )
      {
        v21 = *((_QWORD *)NextTarget + 12);
        if ( *(_QWORD *)(v21 + 96)
          && (a3 != 2 || IsInternalVideoOutput(*(_DWORD *)(v21 + 72)))
          && (unsigned int)DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(a1, *((unsigned int *)NextTarget + 6), v14, v15) == -1 )
        {
LABEL_19:
          v11 = a5;
          break;
        }
      }
      else
      {
        v17 = *((_DWORD *)NextTarget + 6) == (_DWORD)v5;
      }
      NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget(v20, NextTarget);
      if ( !NextTarget )
        goto LABEL_19;
    }
  }
LABEL_20:
  if ( v17 )
  {
    if ( NextTarget )
    {
      *a4 = *((_DWORD *)NextTarget + 6);
      if ( v11 )
        *v11 = *(_DWORD *)(*((_QWORD *)NextTarget + 12) + 72LL);
      return 0LL;
    }
    else
    {
      v24 = WdLogNewEntry5_WdDmmEvent(v13);
      *(_QWORD *)(v24 + 24) = v16;
      WdLogEvent5_WdDmmEvent(v24);
      return 3223192371LL;
    }
  }
  else
  {
    v22 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v22 + 24) = v16;
    *(_QWORD *)(v22 + 32) = v5;
    WdLogEvent5_WdError(v22);
    return 3223192325LL;
  }
}
