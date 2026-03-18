/*
 * XREFs of ?AcquireTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1C008D670
 * Callers:
 *     <none>
 * Callees:
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C00043F8 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0004CDC (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::AcquireTargetModeSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        _QWORD *a3,
        struct D3DKMDT_HVIDPNTARGETMODESET__ **a4)
{
  __int64 v6; // r12
  _QWORD *v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  DXGK_VIDPN_INTERFACE_V1_IMPL *v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rdi
  _QWORD *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  struct D3DKMDT_HVIDPNTARGETMODESET__ *v29; // [rsp+50h] [rbp+8h]

  v6 = (unsigned int)a2;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 7048);
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
    if ( !this || (v11 = this, *((_DWORD *)this + 16) != 1833172997) )
      v11 = 0LL;
    if ( v11 )
    {
      if ( !DMMVIDPNTOPOLOGY::IsTargetInTopology((DXGK_VIDPN_INTERFACE_V1_IMPL *)((char *)v11 + 96), v6) )
      {
        v26 = WdLogNewEntry5_WdError(v12);
        *(_QWORD *)(v26 + 24) = v6;
        *(_QWORD *)(v26 + 32) = v11;
        WdLogEvent5_WdError(v26);
      }
      v29 = *(struct D3DKMDT_HVIDPNTARGETMODESET__ **)(*((_QWORD *)v11 + 6) + 392LL);
      v13 = IndexedSet<DMMVIDPNTARGET>::FindById(*((_QWORD *)v11 + 39), v6);
      v18 = v13;
      if ( v13 )
      {
        v19 = *(_QWORD *)(v13 + 104);
        if ( v19 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v19 + 96));
          v20 = *(_QWORD *)(v18 + 104);
          if ( v20 )
          {
LABEL_12:
            v21 = v20 + 137;
            if ( v21 )
              v22 = v21 - 137;
            else
              v22 = 0LL;
            *a3 = v22;
            *a4 = v29;
            goto LABEL_15;
          }
        }
        else
        {
          v20 = 0LL;
        }
        v28 = WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
        WdLogEvent5_WdAssertion(v28);
        goto LABEL_12;
      }
      v27 = WdLogNewEntry5_WdError(v15);
      *(_QWORD *)(v27 + 24) = v6;
      WdLogEvent5_WdError(v27);
      v10 = -1071774971;
    }
    else
    {
      v25 = WdLogNewEntry5_WdError(v9);
      *(_QWORD *)(v25 + 24) = this;
      WdLogEvent5_WdError(v25);
      v10 = -1071774973;
    }
  }
  else
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdError(v9);
    v24[3] = 0LL;
    v24[4] = v6;
    v24[5] = this;
    WdLogEvent5_WdError(v24);
    v10 = -1073741811;
  }
LABEL_15:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v15, &EventProfilerExit, v16, 7048);
  return v10;
}
