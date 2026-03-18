/*
 * XREFs of ?AcquireSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_DXGDMM_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1C00AD010
 * Callers:
 *     <none>
 * Callees:
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C00043C4 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C000741C (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0007520 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?QueryDxgDmmVidPnSourceModeSetInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1C0097000 (-QueryDxgDmmVidPnSourceModeSetInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPNSOURCEMODESET_INTERF.c)
 */

__int64 __fastcall DXGDMM_VIDPN_INTERFACE_V1_IMPL::AcquireSourceModeSet(
        DXGDMM_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        _QWORD *a3,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ **a4)
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
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdi
  struct _DXGDMM_VIDPNSOURCEMODESET_INTERFACE *v25; // rax
  _QWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  struct _DXGDMM_VIDPNSOURCEMODESET_INTERFACE *v33; // [rsp+50h] [rbp+18h] BYREF

  v6 = (unsigned int)a2;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 6034);
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
        v29 = WdLogNewEntry5_WdError(v10);
        *(_QWORD *)(v29 + 24) = v6;
        *(_QWORD *)(v29 + 32) = v11;
        WdLogEvent5_WdError(v29);
        v8 = -1071774909;
      }
      else if ( DMMVIDPNTOPOLOGY::IsSourceInTopology((DMMVIDPNTOPOLOGY *)(v9 + 96), v6) )
      {
        v33 = 0LL;
        VIDPN_MGR::QueryDxgDmmVidPnSourceModeSetInterface(v15, &v33, v13, v14);
        v16 = IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(v11 + 304), v6);
        v20 = v16;
        if ( v16 )
        {
          v21 = *(_QWORD *)(v16 + 104);
          if ( v21 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v21 + 96));
            v22 = *(_QWORD *)(v20 + 104);
            if ( v22 )
            {
LABEL_10:
              v23 = v22 + 137;
              if ( v23 )
                v24 = v23 - 137;
              else
                v24 = 0LL;
              v25 = v33;
              *a3 = v24;
              *a4 = (struct D3DKMDT_HVIDPNSOURCEMODESET__ *)v25;
              goto LABEL_13;
            }
          }
          else
          {
            v22 = 0LL;
          }
          v32 = WdLogNewEntry5_WdAssertion(v17, v20, v18, v19);
          WdLogEvent5_WdAssertion(v32);
          goto LABEL_10;
        }
        v31 = WdLogNewEntry5_WdError(v17);
        *(_QWORD *)(v31 + 24) = v6;
        *(_QWORD *)(v31 + 32) = v11;
        WdLogEvent5_WdError(v31);
        v8 = -1071774972;
      }
      else
      {
        v30 = WdLogNewEntry5_WdError(v12);
        *(_QWORD *)(v30 + 24) = v6;
        *(_QWORD *)(v30 + 32) = v11;
        WdLogEvent5_WdError(v30);
        v8 = -1071774919;
      }
    }
    else
    {
      v28 = WdLogNewEntry5_WdError(v10);
      *(_QWORD *)(v28 + 24) = this;
      WdLogEvent5_WdError(v28);
      v8 = -1071774973;
    }
  }
  else
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdError(this);
    v27[3] = 0LL;
    v27[4] = v6;
    v27[5] = this;
    WdLogEvent5_WdError(v27);
    v8 = -1073741811;
  }
LABEL_13:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v17, &EventProfilerExit, v18, 6034);
  return v8;
}
