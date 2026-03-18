/*
 * XREFs of ?ReleaseSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C00A1900
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0004F44 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?ReleaseModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0009E28 (-ReleaseModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C0009EC4 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000C1AC (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::ReleaseSourceModeSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a3,
        __int64 a4)
{
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rcx
  struct DMMVIDPNSOURCEMODESET *v12; // rsi
  DMMVIDPNSOURCE *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rbp
  __int64 v24; // rax

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 7044);
  v6 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = a2;
  *(_QWORD *)(v6 + 32) = this;
  v7 = 0;
  v9 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this);
  if ( v9 )
  {
    v10 = ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle((__int64)a2);
    v12 = (struct DMMVIDPNSOURCEMODESET *)v10;
    if ( v10 )
    {
      v13 = *(DMMVIDPNSOURCE **)(v10 + 112);
      if ( !v13 )
      {
        v20 = WdLogNewEntry5_WdAssertion(v11);
        WdLogEvent5_WdAssertion(v20);
      }
      if ( !*((_QWORD *)v13 + 5) )
      {
        v21 = WdLogNewEntry5_WdAssertion(v11);
        WdLogEvent5_WdAssertion(v21);
      }
      if ( ContainedBy<DMMVIDPN>::GetContainer(*((_QWORD *)v13 + 5) + 64LL) == v9 )
      {
        DMMVIDPNSOURCE::ReleaseModeSet(v13, v12);
      }
      else
      {
        v23 = (_QWORD *)WdLogNewEntry5_WdError(v14);
        if ( !*((_QWORD *)v13 + 5) )
        {
          v24 = WdLogNewEntry5_WdAssertion(v22);
          WdLogEvent5_WdAssertion(v24);
        }
        v23[3] = ContainedBy<DMMVIDPN>::GetContainer(*((_QWORD *)v13 + 5) + 64LL);
        v23[4] = v12;
        v23[5] = v9;
        WdLogEvent5_WdError(v23);
        v7 = -1071774928;
      }
    }
    else
    {
      v19 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v19 + 24) = a2;
      WdLogEvent5_WdError(v19);
      v7 = -1071774968;
    }
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v18 + 24) = this;
    WdLogEvent5_WdError(v18);
    v7 = -1071774973;
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v15, &EventProfilerExit, v16, 7044);
  return v7;
}
