/*
 * XREFs of ?RemovePath@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIE@Z @ 0x1C017DF80
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C0008180 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000C1AC (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C0178054 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::RemovePath(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        __int64 a3,
        char a4)
{
  __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rcx
  struct DMMVIDPNTOPOLOGY *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 Container; // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r9
  _QWORD *v18; // rax

  v5 = (unsigned int)a3;
  v6 = (__int64)this;
  v7 = (unsigned int)a2;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 6024);
  v8 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v6);
  v10 = (struct DMMVIDPNTOPOLOGY *)v8;
  if ( v8 )
  {
    Container = ContainedBy<DMMVIDPN>::GetContainer(v8 + 160);
    v15 = VIDPN_MGR::RemovePathFromVidPnTopology(*(VIDPN_MGR **)(Container + 48), v10, (unsigned int)v7, v5, a4);
    v6 = v15;
    if ( v15 >= 0 )
    {
      LODWORD(v6) = 0;
    }
    else
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, v16, v13, v17);
      v18[3] = v7;
      v18[4] = v5;
      v18[5] = v10;
      v18[6] = v6;
    }
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v11 + 24) = v6;
    WdLogEvent5_WdError(v11);
    LODWORD(v6) = -1071774976;
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v12, &EventProfilerExit, v13, 6024);
  return (unsigned int)v6;
}
