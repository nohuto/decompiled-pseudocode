/*
 * XREFs of ?CreateNewModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C007CFE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C0001D70 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?AcquireRawDdiEnumeratorCachedModeInfo@DMMVIDPNTARGETMODESET@@QEAAJPEAPEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C007E738 (-AcquireRawDdiEnumeratorCachedModeInfo@DMMVIDPNTARGETMODESET@@QEAAJPEAPEAU_D3DKMDT_VIDPN_TARGET_.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::CreateNewModeInfo(
        __int64 this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        struct _D3DKMDT_VIDPN_TARGET_MODE **a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rcx
  DMMVIDPNTARGETMODESET *v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  struct _D3DKMDT_VIDPN_TARGET_MODE *v21; // [rsp+30h] [rbp+8h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal() + 15);
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v6, &EventProfilerEnter, v7, 7013);
  v9 = WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
  *(_QWORD *)(v9 + 24) = this;
  *(_QWORD *)(v9 + 32) = a2;
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    v11 = (DMMVIDPNTARGETMODESET *)ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle(this);
    if ( v11 )
    {
      v13 = DMMVIDPNTARGETMODESET::AcquireRawDdiEnumeratorCachedModeInfo(v11, &v21);
      this = v13;
      if ( v13 < 0 )
      {
        if ( v13 != -1073741801 )
        {
          v19 = WdLogNewEntry5_WdAssertion(v14);
          WdLogEvent5_WdAssertion(v19);
        }
        v20 = WdLogNewEntry5_WdError(v14);
        *(_QWORD *)(v20 + 24) = this;
        WdLogEvent5_WdError(v20);
      }
      else
      {
        LODWORD(this) = 0;
        *(_QWORD *)a2 = v21;
      }
    }
    else
    {
      v18 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v18 + 24) = this;
      WdLogEvent5_WdError(v18);
      LODWORD(this) = -1071774967;
    }
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v17 + 24) = 0LL;
    WdLogEvent5_WdError(v17);
    LODWORD(this) = -1071774959;
  }
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v14, &EventProfilerExit, v15, 7013);
  return (unsigned int)this;
}
