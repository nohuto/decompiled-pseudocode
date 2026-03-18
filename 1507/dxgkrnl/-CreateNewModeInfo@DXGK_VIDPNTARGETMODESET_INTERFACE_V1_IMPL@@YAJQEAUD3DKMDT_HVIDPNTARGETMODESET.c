/*
 * XREFs of ?CreateNewModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C0097960
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C0007FC4 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireRawDdiEnumeratorCachedModeInfo@DMMVIDPNTARGETMODESET@@QEAAJPEAPEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C008836C (-AcquireRawDdiEnumeratorCachedModeInfo@DMMVIDPNTARGETMODESET@@QEAAJPEAPEAU_D3DKMDT_VIDPN_TARGET_.c)
 */

__int64 __fastcall DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::CreateNewModeInfo(
        DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        struct _D3DKMDT_VIDPN_TARGET_MODE **a3,
        __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rcx
  DMMVIDPNTARGETMODESET *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  struct _D3DKMDT_VIDPN_TARGET_MODE *v26; // [rsp+30h] [rbp+8h] BYREF

  v5 = (__int64)this;
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2, (__int64)a3, a4) + 15);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v7, &EventProfilerEnter, v8, 7013);
  v10 = WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
  *(_QWORD *)(v10 + 24) = v5;
  *(_QWORD *)(v10 + 32) = a2;
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    v12 = (DMMVIDPNTARGETMODESET *)ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle(v5);
    if ( v12 )
    {
      v16 = DMMVIDPNTARGETMODESET::AcquireRawDdiEnumeratorCachedModeInfo(v12, &v26, v14, v15);
      v5 = v16;
      if ( v16 < 0 )
      {
        if ( v16 != -1073741801 )
        {
          v24 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
          WdLogEvent5_WdAssertion(v24);
        }
        v25 = WdLogNewEntry5_WdError(v18);
        *(_QWORD *)(v25 + 24) = v5;
        WdLogEvent5_WdError(v25);
      }
      else
      {
        LODWORD(v5) = 0;
        *(_QWORD *)a2 = v26;
      }
    }
    else
    {
      v23 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v23 + 24) = v5;
      WdLogEvent5_WdError(v23);
      LODWORD(v5) = -1071774967;
    }
  }
  else
  {
    v22 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v22 + 24) = 0LL;
    WdLogEvent5_WdError(v22);
    LODWORD(v5) = -1071774959;
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v18, &EventProfilerExit, v19, 7013);
  return (unsigned int)v5;
}
