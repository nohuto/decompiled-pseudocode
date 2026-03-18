/*
 * XREFs of ?CreateNewPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEAPEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C017BCD0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C0008434 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?AcquireRawDdiEnumeratorCachedPathInfo@DMMVIDPNTOPOLOGY@@QEAAJPEAPEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C017A2E0 (-AcquireRawDdiEnumeratorCachedPathInfo@DMMVIDPNTOPOLOGY@@QEAAJPEAPEAU_D3DKMDT_VIDPN_PRESENT_PATH.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::CreateNewPathInfo(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        struct _D3DKMDT_VIDPN_PRESENT_PATH **a3,
        __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  DMMVIDPNTOPOLOGY *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rax
  struct _D3DKMDT_VIDPN_PRESENT_PATH *v21; // [rsp+30h] [rbp+8h] BYREF

  v5 = (__int64)this;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 7040);
  v6 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = v5;
  *(_QWORD *)(v6 + 32) = a2;
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    if ( ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v5) )
    {
      v15 = DMMVIDPNTOPOLOGY::AcquireRawDdiEnumeratorCachedPathInfo(v11, &v21, v12, v13);
      v5 = v15;
      if ( v15 >= 0 )
      {
        LODWORD(v5) = 0;
        *(_QWORD *)a2 = v21;
      }
      else
      {
        if ( v15 != -1073741801 )
        {
          v18 = WdLogNewEntry5_WdAssertion(v9, v16, v10, v17);
          WdLogEvent5_WdAssertion(v18);
        }
        v19 = WdLogNewEntry5_WdError(v9);
        *(_QWORD *)(v19 + 24) = v5;
        WdLogEvent5_WdError(v19);
      }
    }
    else
    {
      v14 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v14 + 24) = v5;
      WdLogEvent5_WdError(v14);
      LODWORD(v5) = -1071774976;
    }
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v8 + 24) = 0LL;
    *(_QWORD *)(v8 + 32) = v5;
    WdLogEvent5_WdError(v8);
    LODWORD(v5) = -1073741811;
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v9, &EventProfilerExit, v10, 7040);
  return (unsigned int)v5;
}
