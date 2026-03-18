/*
 * XREFs of ?PinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C00BD640
 * Callers:
 *     <none>
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00047D8 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C0004FD0 (-UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C0005304 (-PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000ACE8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000C9C4 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C0084900 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::PinPathContentRotation(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        __int64 a3,
        int a4,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a5)
{
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rdi
  __int64 v8; // rsi
  DMMVIDPNTOPOLOGY *v9; // rax
  __int64 v10; // rcx
  DMMVIDPNTOPOLOGY *v11; // r15
  struct DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  DMMVIDPNPRESENTPATH *v17; // rbp
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v18; // r12d
  int v19; // eax
  __int64 v20; // rcx
  __int64 Container; // rax
  struct D3DKMDT_HVIDPN__ *v22; // rdx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  int v35; // eax
  __int64 v36; // rax
  unsigned int v37[10]; // [rsp+30h] [rbp-28h] BYREF

  v5 = (__int64)this;
  v6 = a4;
  v7 = (unsigned int)a3;
  v8 = (unsigned int)a2;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 6028);
  v9 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v5);
  v11 = v9;
  if ( v9 )
  {
    if ( (_DWORD)v6 == 254 )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdError(v10);
      v30[3] = 254LL;
      v30[4] = v8;
      v30[5] = v7;
      v30[6] = v5;
      WdLogEvent5_WdError(v30);
      LODWORD(v5) = -1071774907;
    }
    else
    {
      Path = DMMVIDPNTOPOLOGY::FindPath(v9, v8, v7);
      v17 = Path;
      if ( Path )
      {
        v18 = *((_DWORD *)Path + 29);
        v19 = DMMVIDPNPRESENTPATH::PinContentRotation(Path, (enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)v6);
        v5 = v19;
        if ( v19 < 0 )
        {
          v32 = (_QWORD *)WdLogNewEntry5_WdError(v20);
          v32[3] = v6;
          v32[4] = v8;
          v32[5] = v7;
          v32[6] = v5;
          WdLogEvent5_WdError(v32);
        }
        else
        {
          Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)v11 + 160);
          v37[0] = v8;
          v37[1] = v7;
          v22 = (struct D3DKMDT_HVIDPN__ *)(Container + 88);
          if ( Container != -88 )
            v22 = (struct D3DKMDT_HVIDPN__ *)Container;
          v23 = VIDPN_MGR::FormalizeVidPnChange(*(_QWORD *)(Container + 48), v22, 9, a5, v37);
          v5 = v23;
          if ( v23 < 0 )
          {
            if ( v23 == -1071774970 )
            {
              v33 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
              v33[3] = v8;
              v33[4] = v7;
              v33[5] = v6;
              WdLogEvent5_WdWarning(v33);
            }
            else
            {
              v34 = (_QWORD *)WdLogNewEntry5_WdError(v25);
              v34[3] = v6;
              v34[4] = v8;
              v34[5] = v7;
              v34[6] = v5;
              WdLogEvent5_WdError(v34);
            }
            if ( v18 == D3DKMDT_VPPR_UNPINNED )
              v35 = DMMVIDPNPRESENTPATH::UnpinContentRotation(v17);
            else
              v35 = DMMVIDPNPRESENTPATH::PinContentRotation(v17, v18);
            if ( v35 < 0 )
            {
              v36 = WdLogNewEntry5_WdAssertion(v25);
              WdLogEvent5_WdAssertion(v36);
            }
          }
          else
          {
            LODWORD(v5) = 0;
          }
        }
      }
      else
      {
        v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
        v31[3] = v8;
        v31[4] = v7;
        v31[5] = v5;
        WdLogEvent5_WdWarning(v31);
        LODWORD(v5) = -1071774937;
      }
    }
  }
  else
  {
    v29 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v29 + 24) = v5;
    WdLogEvent5_WdError(v29);
    LODWORD(v5) = -1071774976;
  }
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v25, &EventProfilerExit, v26, 6028);
  return (unsigned int)v5;
}
