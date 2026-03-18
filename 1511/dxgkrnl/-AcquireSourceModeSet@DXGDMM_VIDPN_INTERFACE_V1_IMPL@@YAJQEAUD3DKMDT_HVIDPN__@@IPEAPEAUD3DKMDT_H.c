/*
 * XREFs of ?AcquireSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_DXGDMM_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1C00BF6A0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0004EC4 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0004F44 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C0008324 (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?QueryDxgDmmVidPnSourceModeSetInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1C008FC34 (-QueryDxgDmmVidPnSourceModeSetInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPNSOURCEMODESET_INTERF.c)
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
  VIDPN_MGR *v13; // r10
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rdi
  struct _DXGDMM_VIDPNSOURCEMODESET_INTERFACE *v22; // rax
  _QWORD *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  struct _DXGDMM_VIDPNSOURCEMODESET_INTERFACE *v30; // [rsp+50h] [rbp+18h] BYREF

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
        v26 = WdLogNewEntry5_WdError(v10);
        *(_QWORD *)(v26 + 24) = v6;
        *(_QWORD *)(v26 + 32) = v11;
        WdLogEvent5_WdError(v26);
        v8 = -1071774909;
      }
      else if ( DMMVIDPNTOPOLOGY::IsSourceInTopology((DMMVIDPNTOPOLOGY *)(v9 + 96), v6) )
      {
        v30 = 0LL;
        VIDPN_MGR::QueryDxgDmmVidPnSourceModeSetInterface(v13, &v30);
        v14 = IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(v11 + 304), v6);
        v17 = v14;
        if ( v14 )
        {
          v18 = *(_QWORD *)(v14 + 104);
          if ( v18 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v18 + 96));
            v19 = *(_QWORD *)(v17 + 104);
            if ( v19 )
            {
LABEL_10:
              v20 = v19 + 137;
              if ( v20 )
                v21 = v20 - 137;
              else
                v21 = 0LL;
              v22 = v30;
              *a3 = v21;
              *a4 = (struct D3DKMDT_HVIDPNSOURCEMODESET__ *)v22;
              goto LABEL_13;
            }
          }
          else
          {
            v19 = 0LL;
          }
          v29 = WdLogNewEntry5_WdAssertion(v15);
          WdLogEvent5_WdAssertion(v29);
          goto LABEL_10;
        }
        v28 = WdLogNewEntry5_WdError(v15);
        *(_QWORD *)(v28 + 24) = v6;
        *(_QWORD *)(v28 + 32) = v11;
        WdLogEvent5_WdError(v28);
        v8 = -1071774972;
      }
      else
      {
        v27 = WdLogNewEntry5_WdError(v12);
        *(_QWORD *)(v27 + 24) = v6;
        *(_QWORD *)(v27 + 32) = v11;
        WdLogEvent5_WdError(v27);
        v8 = -1071774919;
      }
    }
    else
    {
      v25 = WdLogNewEntry5_WdError(v10);
      *(_QWORD *)(v25 + 24) = this;
      WdLogEvent5_WdError(v25);
      v8 = -1071774973;
    }
  }
  else
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdError(this);
    v24[3] = 0LL;
    v24[4] = v6;
    v24[5] = this;
    WdLogEvent5_WdError(v24);
    v8 = -1073741811;
  }
LABEL_13:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v15, &EventProfilerExit, v16, 6034);
  return v8;
}
