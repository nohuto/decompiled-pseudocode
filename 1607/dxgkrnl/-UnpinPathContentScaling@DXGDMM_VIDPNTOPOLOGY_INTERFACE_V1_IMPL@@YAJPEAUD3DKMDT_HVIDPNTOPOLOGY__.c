/*
 * XREFs of ?UnpinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_N@Z @ 0x1C00BDEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00047D8 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C0004FF4 (-UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000ACE8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000C9C4 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C0084900 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::UnpinPathContentScaling(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        __int64 a3,
        char a4)
{
  __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rbp
  DMMVIDPNTOPOLOGY *v8; // rax
  __int64 v9; // rcx
  DMMVIDPNTOPOLOGY *v10; // rdi
  DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 Container; // rdi
  struct D3DKMDT_HVIDPN__ *v15; // rdx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rax
  unsigned int v24[6]; // [rsp+30h] [rbp-18h] BYREF

  v5 = (unsigned int)a3;
  v6 = (__int64)this;
  v7 = (unsigned int)a2;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 6027);
  v8 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v6);
  v10 = v8;
  if ( v8 )
  {
    Path = DMMVIDPNTOPOLOGY::FindPath(v8, v7, v5);
    if ( Path )
    {
      if ( (int)DMMVIDPNPRESENTPATH::UnpinContentScaling(Path) < 0 )
      {
        v22 = WdLogNewEntry5_WdAssertion(v13);
        WdLogEvent5_WdAssertion(v22);
      }
      Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)v10 + 160);
      v24[0] = v7;
      v24[1] = v5;
      if ( Container == -88 )
        v15 = 0LL;
      else
        v15 = (struct D3DKMDT_HVIDPN__ *)Container;
      v16 = VIDPN_MGR::FormalizeVidPnChange(*(_QWORD *)(Container + 48), v15, 8, a4, v24);
      v6 = v16;
      if ( v16 < 0 )
      {
        v23 = (_QWORD *)WdLogNewEntry5_WdError(v17);
        v23[3] = v7;
        v23[4] = v5;
        v23[5] = Container;
        v23[6] = v6;
        WdLogEvent5_WdError(v23);
      }
      else
      {
        LODWORD(v6) = 0;
      }
    }
    else
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdError(v12);
      v21[3] = v7;
      v21[4] = v5;
      v21[5] = v6;
      WdLogEvent5_WdError(v21);
      LODWORD(v6) = -1071774937;
    }
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v20 + 24) = v6;
    WdLogEvent5_WdError(v20);
    LODWORD(v6) = -1071774976;
  }
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v17, &EventProfilerExit, v18, 6027);
  return (unsigned int)v6;
}
