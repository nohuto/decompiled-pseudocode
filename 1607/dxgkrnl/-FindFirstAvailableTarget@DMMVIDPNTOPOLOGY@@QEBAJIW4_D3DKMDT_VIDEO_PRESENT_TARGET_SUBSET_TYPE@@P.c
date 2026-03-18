/*
 * XREFs of ?FindFirstAvailableTarget@DMMVIDPNTOPOLOGY@@QEBAJIW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2@Z @ 0x1C01A7BB0
 * Callers:
 *     ?_AddPathToFirstAvailableTarget@VIDPN_MGR@@AEBAJPEAVDMMVIDPNTOPOLOGY@@IW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@W4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GE@Z @ 0x1C01A2D34 (-_AddPathToFirstAvailableTarget@VIDPN_MGR@@AEBAJPEAVDMMVIDPNTOPOLOGY@@IW4_D3DKMDT_VIDEO_PRESENT_.c)
 *     ?FindFirstAvailableTarget@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@PEAI@Z @ 0x1C01A6500 (-FindFirstAvailableTarget@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY_.c)
 *     ?_AugmentVidPnTopology@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDMMVIDPNTOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C01AD9EC (-_AugmentVidPnTopology@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDMMVIDPNTOPOLOGY@@PEAU_D3DKMT_AUGMENT_CD.c)
 * Callees:
 *     IsInternalVideoOutput @ 0x1C000B478 (IsInternalVideoOutput.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000C9C4 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEAAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C001D620 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEAAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00804BC (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::FindFirstAvailableTarget(
        DMMVIDPNTOPOLOGY *a1,
        unsigned int a2,
        int a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6)
{
  __int64 v6; // r12
  __int64 v10; // rax
  __int64 v11; // rax
  _DWORD *v12; // rsi
  _DWORD *v13; // rdi
  __int64 Container; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r15
  bool v19; // bp
  _QWORD *v20; // rbx
  struct DMMVIDEOPRESENTTARGET *NextTarget; // rbx
  DMMVIDEOPRESENTTARGETSET *v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v26; // rax

  v6 = a2;
  if ( !a4 )
  {
    v10 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !a3 )
  {
    v11 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v11);
  }
  v12 = a5;
  *a4 = -1;
  if ( a5 )
    *a5 = -2;
  v13 = a6;
  if ( a6 )
    *a6 = -2;
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a1 + 160);
  v18 = Container;
  v19 = (_DWORD)v6 == -1;
  v20 = (_QWORD *)(*(_QWORD *)(Container + 312) + 24LL);
  if ( (_QWORD *)*v20 == v20 )
  {
    NextTarget = 0LL;
    goto LABEL_22;
  }
  NextTarget = (struct DMMVIDEOPRESENTTARGET *)(*v20 - 8LL);
  if ( NextTarget )
  {
    v22 = *(DMMVIDEOPRESENTTARGETSET **)(Container + 312);
    while ( 1 )
    {
      if ( v19 )
      {
        v23 = *((_QWORD *)NextTarget + 12);
        if ( *(_QWORD *)(v23 + 96)
          && (a3 != 2 || IsInternalVideoOutput(*(_DWORD *)(v23 + 72)))
          && (unsigned int)DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(a1, *((unsigned int *)NextTarget + 6), v16, v17) == -1 )
        {
LABEL_21:
          v13 = a6;
          v12 = a5;
          break;
        }
      }
      else
      {
        v19 = *((_DWORD *)NextTarget + 6) == (_DWORD)v6;
      }
      NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget(v22, NextTarget);
      if ( !NextTarget )
        goto LABEL_21;
    }
  }
LABEL_22:
  if ( v19 )
  {
    if ( NextTarget )
    {
      *a4 = *((_DWORD *)NextTarget + 6);
      if ( v12 )
        *v12 = *(_DWORD *)(*((_QWORD *)NextTarget + 12) + 72LL);
      if ( v13 )
        *v13 = *(_DWORD *)(*((_QWORD *)NextTarget + 12) + 76LL);
      return 0LL;
    }
    else
    {
      v26 = WdLogNewEntry5_WdDmmEvent(v15);
      *(_QWORD *)(v26 + 24) = v18;
      WdLogEvent5_WdDmmEvent(v26);
      return 3223192371LL;
    }
  }
  else
  {
    v24 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v24 + 24) = v18;
    *(_QWORD *)(v24 + 32) = v6;
    WdLogEvent5_WdError(v24);
    return 3223192325LL;
  }
}
