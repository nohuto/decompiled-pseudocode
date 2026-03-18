/*
 * XREFs of ?AcquireSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_DXGK_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1C00962D0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C00043C4 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C000741C (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0007520 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::AcquireSourceModeSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        _QWORD *a3,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ **a4)
{
  __int64 v6; // r12
  _QWORD *v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdi
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v31; // [rsp+50h] [rbp+8h]

  v6 = (unsigned int)a2;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 7043);
  v8 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v10 = 0;
  v8[3] = this;
  v8[4] = v6;
  v8[5] = a3;
  v8[6] = a4;
  if ( a3 && a4 )
  {
    *a3 = 0LL;
    *a4 = 0LL;
    v11 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this);
    v13 = v11;
    if ( v11 )
    {
      if ( !DMMVIDPNTOPOLOGY::IsSourceInTopology((DMMVIDPNTOPOLOGY *)(v11 + 96), v6) )
      {
        v28 = WdLogNewEntry5_WdError(v14);
        *(_QWORD *)(v28 + 24) = v6;
        *(_QWORD *)(v28 + 32) = v13;
        WdLogEvent5_WdError(v28);
      }
      v31 = *(struct D3DKMDT_HVIDPNSOURCEMODESET__ **)(*(_QWORD *)(v13 + 48) + 384LL);
      v15 = IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(v13 + 304), v6);
      v20 = v15;
      if ( v15 )
      {
        v21 = *(_QWORD *)(v15 + 104);
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
            *a3 = v24;
            *a4 = v31;
            goto LABEL_13;
          }
        }
        else
        {
          v22 = 0LL;
        }
        v30 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
        WdLogEvent5_WdAssertion(v30);
        goto LABEL_10;
      }
      v29 = WdLogNewEntry5_WdError(v17);
      *(_QWORD *)(v29 + 24) = v6;
      WdLogEvent5_WdError(v29);
      v10 = -1071774972;
    }
    else
    {
      v27 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v27 + 24) = this;
      WdLogEvent5_WdError(v27);
      v10 = -1071774973;
    }
  }
  else
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(v9);
    v26[3] = 0LL;
    v26[4] = v6;
    v26[5] = this;
    WdLogEvent5_WdError(v26);
    v10 = -1073741811;
  }
LABEL_13:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v17, &EventProfilerExit, v18, 7043);
  return v10;
}
