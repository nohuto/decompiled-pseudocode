/*
 * XREFs of ?GetNumPathsFromSource@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IPEA_K@Z @ 0x1C017FD60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C0008180 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C0091398 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::GetNumPathsFromSource(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  __int64 v5; // r14
  __int64 v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  DMMVIDPNTOPOLOGY *v12; // rax
  __int64 v13; // rcx
  DMMVIDPNTOPOLOGY *v14; // rbp
  __int64 v15; // rax
  int NumPathsFromSource; // eax
  __int64 v17; // rdx
  __int64 v18; // r9
  _QWORD *v19; // rax
  unsigned __int64 v21; // [rsp+40h] [rbp+8h] BYREF

  v5 = (unsigned int)a2;
  v6 = (__int64)this;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 7032);
  v7 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v7[3] = v5;
  v7[4] = v6;
  v7[5] = a3;
  if ( a3 )
  {
    *a3 = 0LL;
    v12 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v6);
    v14 = v12;
    if ( v12 )
    {
      v21 = 0LL;
      NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v12, v5, &v21);
      v6 = NumPathsFromSource;
      if ( NumPathsFromSource >= 0 )
      {
        LODWORD(v6) = 0;
        *a3 = v21;
      }
      else
      {
        v19 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v17, v11, v18);
        v19[3] = v5;
        v19[4] = v14;
        v19[5] = v6;
      }
    }
    else
    {
      v15 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v15 + 24) = v6;
      WdLogEvent5_WdError(v15);
      LODWORD(v6) = -1071774976;
    }
  }
  else
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v9[3] = 0LL;
    v9[4] = v5;
    v9[5] = v6;
    WdLogEvent5_WdError(v9);
    LODWORD(v6) = -1073741811;
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v10, &EventProfilerExit, v11, 7032);
  return (unsigned int)v6;
}
