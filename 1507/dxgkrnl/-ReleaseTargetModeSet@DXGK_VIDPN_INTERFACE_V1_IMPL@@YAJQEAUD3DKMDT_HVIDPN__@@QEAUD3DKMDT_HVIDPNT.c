/*
 * XREFs of ?ReleaseTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C008D7A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseModeSet@DMMVIDPNTARGET@@QEAAJPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0003E38 (-ReleaseModeSet@DMMVIDPNTARGET@@QEAAJPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0009804 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::ReleaseTargetModeSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ebx
  DXGK_VIDPN_INTERFACE_V1_IMPL *v12; // r14
  struct D3DKMDT_HVIDPN__ *v13; // rbp
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  _QWORD *v26; // rsi
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 7049);
  v6 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v11 = 0;
  *(_QWORD *)(v6 + 24) = a2;
  *(_QWORD *)(v6 + 32) = this;
  if ( !this || (v12 = this, *((_DWORD *)this + 16) != 1833172997) )
    v12 = 0LL;
  if ( v12 )
  {
    if ( !a2 || (v13 = a2, *((_DWORD *)a2 + 32) != 1833173005) )
      v13 = 0LL;
    if ( v13 )
    {
      v14 = *((_QWORD *)v13 + 14);
      if ( !v14 )
      {
        v21 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
        WdLogEvent5_WdAssertion(v21);
      }
      if ( !*(_QWORD *)(v14 + 40) )
      {
        v22 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
        WdLogEvent5_WdAssertion(v22);
      }
      v15 = *(_QWORD *)(v14 + 40);
      if ( !*(_QWORD *)(v15 + 72) )
      {
        v23 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
        WdLogEvent5_WdAssertion(v23);
      }
      if ( *(DXGK_VIDPN_INTERFACE_V1_IMPL **)(v15 + 72) == v12 )
      {
        DMMVIDPNTARGET::ReleaseModeSet((struct DMMVIDPNTARGETMODESET **)v14, (struct DMMVIDPNTARGETMODESET *)v13);
      }
      else
      {
        v26 = (_QWORD *)WdLogNewEntry5_WdError(v8);
        if ( !*(_QWORD *)(v14 + 40) )
        {
          v29 = WdLogNewEntry5_WdAssertion(v25, v24, v27, v28);
          WdLogEvent5_WdAssertion(v29);
        }
        v26[3] = ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v14 + 40) + 64LL);
        v26[4] = v13;
        v26[5] = v12;
        WdLogEvent5_WdError(v26);
        v11 = -1071774928;
      }
    }
    else
    {
      v20 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v20 + 24) = a2;
      WdLogEvent5_WdError(v20);
      v11 = -1071774967;
    }
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v19 + 24) = this;
    WdLogEvent5_WdError(v19);
    v11 = -1071774973;
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v16, &EventProfilerExit, v17, 7049);
  return v11;
}
