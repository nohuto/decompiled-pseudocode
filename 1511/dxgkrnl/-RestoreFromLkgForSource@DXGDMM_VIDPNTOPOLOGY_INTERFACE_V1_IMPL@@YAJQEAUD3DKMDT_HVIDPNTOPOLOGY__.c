/*
 * XREFs of ?RestoreFromLkgForSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IQEAI@Z @ 0x1C017E080
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004934 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C0008180 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000C1AC (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?RestorePresentPathsFromLkgTopology@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@I@Z @ 0x1C01786D0 (-RestorePresentPathsFromLkgTopology@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@I@Z.c)
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
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r14
  int v18; // eax
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v22; // [rsp+50h] [rbp+18h] BYREF

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
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v22, (__int64)v14);
      if ( !*((_QWORD *)v14 + 1) )
      {
        v16 = WdLogNewEntry5_WdAssertion(v15);
        WdLogEvent5_WdAssertion(v16);
      }
      v17 = *(_QWORD *)(*((_QWORD *)v14 + 1) + 16LL);
      v18 = VIDPN_MGR::RestorePresentPathsFromLkgTopology(v14, Container, v5);
      v6 = v18;
      if ( v18 >= 0 )
      {
        *a3 = -1;
        LODWORD(v6) = 0;
      }
      else
      {
        v20 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v19);
        v20[3] = v5;
        v20[4] = v17;
        v20[5] = Container;
        v20[6] = v6;
        WdLogEvent5_WdDmmEvent(v20);
      }
      DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v22 + 40));
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
