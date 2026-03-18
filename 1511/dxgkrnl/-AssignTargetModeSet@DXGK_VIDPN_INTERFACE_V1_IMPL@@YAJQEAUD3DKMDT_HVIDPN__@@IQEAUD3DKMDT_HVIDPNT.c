/*
 * XREFs of ?AssignTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IQEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C00BF8D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0004C24 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0004F44 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C0004F58 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0004FA8 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJV?$auto_rc@VDMMVIDPNTARGETMODESET@@@@@Z @ 0x1C000635C (-SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJV-$auto_rc@VDMMVIDPNTARGETMODESET@@@@@Z.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::AssignTargetModeSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        __int64 a3,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a4)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  _QWORD *v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // [rsp+40h] [rbp+8h] BYREF
  __int64 v25; // [rsp+50h] [rbp+18h] BYREF

  v4 = a3;
  v5 = (unsigned int)a2;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 7051);
  v7 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v8 = v5;
  v7[3] = v4;
  v7[4] = v5;
  v7[5] = this;
  if ( ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this) )
  {
    v11 = ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle(v4);
    if ( v11 )
    {
      v13 = IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(v12 + 312), v5);
      v15 = v13;
      if ( v13 )
      {
        v25 = 0LL;
        v24 = v11;
        v4 = (int)DMMVIDPNTARGET::SetCofuncModeSet(v13, &v24);
        auto_rc<DMMVIDPNTARGETMODESET>::reset(&v25, 0LL);
        if ( (int)v4 < 0 )
        {
          if ( (_DWORD)v4 != -1071774958 )
          {
            v22 = WdLogNewEntry5_WdAssertion(v16);
            WdLogEvent5_WdAssertion(v22);
          }
          v23 = (_QWORD *)WdLogNewEntry5_WdError(v16);
          v23[3] = v11;
          v23[4] = *(unsigned int *)(v15 + 24);
          v23[5] = v4;
          WdLogEvent5_WdError(v23);
        }
        else
        {
          LODWORD(v4) = 0;
        }
      }
      else
      {
        v21 = WdLogNewEntry5_WdError(v14);
        *(_QWORD *)(v21 + 24) = v8;
        WdLogEvent5_WdError(v21);
        LODWORD(v4) = -1071774971;
      }
    }
    else
    {
      v20 = WdLogNewEntry5_WdError(v10);
      *(_QWORD *)(v20 + 24) = v4;
      WdLogEvent5_WdError(v20);
      LODWORD(v4) = -1071774967;
    }
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v19 + 24) = this;
    WdLogEvent5_WdError(v19);
    LODWORD(v4) = -1071774973;
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v16, &EventProfilerExit, v17, 7051);
  return (unsigned int)v4;
}
