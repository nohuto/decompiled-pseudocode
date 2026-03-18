/*
 * XREFs of ?RestoreFromLkgForSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IQEAI@Z @ 0x1C0179C20
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C0008434 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0009804 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?RestorePresentPathsFromLkgTopology@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@I@Z @ 0x1C0174088 (-RestorePresentPathsFromLkgTopology@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@I@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::RestoreFromLkgForSource(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        _DWORD *a3,
        unsigned int *const a4)
{
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  struct D3DKMDT_HVIDPN__ *Container; // rsi
  VIDPN_MGR *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // r14
  int v21; // eax
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 v25; // [rsp+50h] [rbp+18h] BYREF

  v5 = (unsigned int)a2;
  v6 = (__int64)this;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 6032);
  if ( a3 )
  {
    *a3 = -1;
    v10 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v6);
    if ( v10 )
    {
      Container = (struct D3DKMDT_HVIDPN__ *)ContainedBy<DMMVIDPN>::GetContainer(v10 + 160);
      v14 = (VIDPN_MGR *)*((_QWORD *)Container + 6);
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v25, (__int64)v14);
      if ( !*((_QWORD *)v14 + 1) )
      {
        v19 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
        WdLogEvent5_WdAssertion(v19);
      }
      v20 = *(_QWORD *)(*((_QWORD *)v14 + 1) + 16LL);
      v21 = VIDPN_MGR::RestorePresentPathsFromLkgTopology(v14, Container, (unsigned int)v5, v18);
      v6 = v21;
      if ( v21 >= 0 )
      {
        *a3 = -1;
        LODWORD(v6) = 0;
      }
      else
      {
        v23 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v22);
        v23[3] = v5;
        v23[4] = v20;
        v23[5] = Container;
        v23[6] = v6;
        WdLogEvent5_WdDmmEvent(v23);
      }
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v25 + 40));
    }
    else
    {
      v12 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v12 + 24) = v6;
      WdLogEvent5_WdError(v12);
      LODWORD(v6) = -1071774976;
    }
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v7 + 24) = 0LL;
    WdLogEvent5_WdError(v7);
    LODWORD(v6) = -1073741811;
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v8, &EventProfilerExit, v9, 6032);
  return (unsigned int)v6;
}
