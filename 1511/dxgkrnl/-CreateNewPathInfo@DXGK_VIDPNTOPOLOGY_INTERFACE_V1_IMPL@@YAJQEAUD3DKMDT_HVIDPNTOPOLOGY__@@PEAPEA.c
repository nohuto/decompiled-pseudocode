/*
 * XREFs of ?CreateNewPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEAPEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C017FA10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C0008180 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?AcquireRawDdiEnumeratorCachedPathInfo@DMMVIDPNTOPOLOGY@@QEAAJPEAPEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C017E740 (-AcquireRawDdiEnumeratorCachedPathInfo@DMMVIDPNTOPOLOGY@@QEAAJPEAPEAU_D3DKMDT_VIDPN_PRESENT_PATH.c)
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
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rax
  struct _D3DKMDT_VIDPN_PRESENT_PATH *v17; // [rsp+30h] [rbp+8h] BYREF

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
      v13 = DMMVIDPNTOPOLOGY::AcquireRawDdiEnumeratorCachedPathInfo(v11, &v17);
      v5 = v13;
      if ( v13 >= 0 )
      {
        LODWORD(v5) = 0;
        *(_QWORD *)a2 = v17;
      }
      else
      {
        if ( v13 != -1073741801 )
        {
          v14 = WdLogNewEntry5_WdAssertion(v9);
          WdLogEvent5_WdAssertion(v14);
        }
        v15 = WdLogNewEntry5_WdError(v9);
        *(_QWORD *)(v15 + 24) = v5;
        WdLogEvent5_WdError(v15);
      }
    }
    else
    {
      v12 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v12 + 24) = v5;
      WdLogEvent5_WdError(v12);
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
