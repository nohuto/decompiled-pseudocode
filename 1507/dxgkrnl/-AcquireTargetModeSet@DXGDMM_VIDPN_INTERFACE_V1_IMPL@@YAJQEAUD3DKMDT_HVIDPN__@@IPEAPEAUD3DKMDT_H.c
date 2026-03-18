/*
 * XREFs of ?AcquireTargetModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_DXGDMM_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1C00A8D10
 * Callers:
 *     <none>
 * Callees:
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C00043F8 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0004CDC (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0007520 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?QueryDxgDmmVidPnTargetModeSetInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1C0096FD0 (-QueryDxgDmmVidPnTargetModeSetInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPNTARGETMODESET_INTERF.c)
 */

__int64 __fastcall DXGDMM_VIDPN_INTERFACE_V1_IMPL::AcquireTargetModeSet(
        DXGDMM_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        _QWORD *a3,
        struct D3DKMDT_HVIDPNTARGETMODESET__ **a4)
{
  __int64 v6; // rsi
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  VIDPN_MGR *v15; // r10
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rdi
  struct _DXGDMM_VIDPNTARGETMODESET_INTERFACE *v26; // rax
  _QWORD *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  struct _DXGDMM_VIDPNTARGETMODESET_INTERFACE *v34; // [rsp+50h] [rbp+18h] BYREF

  v6 = (unsigned int)a2;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 6036);
  v8 = 0;
  if ( a3 && a4 )
  {
    *a3 = 0LL;
    *a4 = 0LL;
    v9 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this);
    v11 = v9;
    if ( v9 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(v9 + 48) + 72LL) == v9 )
      {
        v30 = WdLogNewEntry5_WdError(v10);
        *(_QWORD *)(v30 + 24) = v6;
        *(_QWORD *)(v30 + 32) = v11;
        WdLogEvent5_WdError(v30);
        v8 = -1071774909;
      }
      else if ( DMMVIDPNTOPOLOGY::IsTargetInTopology((DMMVIDPNTOPOLOGY *)(v9 + 96), v6) )
      {
        v34 = 0LL;
        VIDPN_MGR::QueryDxgDmmVidPnTargetModeSetInterface(v15, &v34, v13, v14);
        v16 = IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(v11 + 312), v6);
        v21 = v16;
        if ( v16 )
        {
          v22 = *(_QWORD *)(v16 + 104);
          if ( v22 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v22 + 96));
            v23 = *(_QWORD *)(v21 + 104);
            if ( v23 )
            {
LABEL_10:
              v24 = v23 + 137;
              if ( v24 )
                v25 = v24 - 137;
              else
                v25 = 0LL;
              v26 = v34;
              *a3 = v25;
              *a4 = (struct D3DKMDT_HVIDPNTARGETMODESET__ *)v26;
              goto LABEL_13;
            }
          }
          else
          {
            v23 = 0LL;
          }
          v33 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
          WdLogEvent5_WdAssertion(v33);
          goto LABEL_10;
        }
        v32 = WdLogNewEntry5_WdError(v18);
        *(_QWORD *)(v32 + 24) = v6;
        WdLogEvent5_WdError(v32);
        v8 = -1071774971;
      }
      else
      {
        v31 = WdLogNewEntry5_WdError(v12);
        *(_QWORD *)(v31 + 24) = v6;
        *(_QWORD *)(v31 + 32) = v11;
        WdLogEvent5_WdError(v31);
        v8 = -1071774912;
      }
    }
    else
    {
      v29 = WdLogNewEntry5_WdError(v10);
      *(_QWORD *)(v29 + 24) = this;
      WdLogEvent5_WdError(v29);
      v8 = -1071774973;
    }
  }
  else
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdError(this);
    v28[3] = 0LL;
    v28[4] = v6;
    v28[5] = this;
    WdLogEvent5_WdError(v28);
    v8 = -1073741811;
  }
LABEL_13:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v18, &EventProfilerExit, v19, 6036);
  return v8;
}
