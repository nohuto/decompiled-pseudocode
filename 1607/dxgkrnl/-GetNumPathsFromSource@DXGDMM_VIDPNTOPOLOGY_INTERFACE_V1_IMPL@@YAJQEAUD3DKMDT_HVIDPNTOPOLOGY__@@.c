/*
 * XREFs of ?GetNumPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IPEA_K@Z @ 0x1C00BB970
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000ACE8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C0080A8C (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::GetNumPathsFromSource(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  __int64 v5; // rbp
  __int64 v6; // rbx
  DMMVIDPNTOPOLOGY *v7; // rax
  __int64 v8; // rcx
  DMMVIDPNTOPOLOGY *v9; // rsi
  int NumPathsFromSource; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rax
  unsigned __int64 v19; // [rsp+40h] [rbp+18h] BYREF

  v5 = (unsigned int)a2;
  v6 = (__int64)this;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 6018);
  if ( a3 )
  {
    *a3 = 0LL;
    v7 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v6);
    v9 = v7;
    if ( v7 )
    {
      v19 = 0LL;
      NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v7, v5, &v19);
      v6 = NumPathsFromSource;
      if ( NumPathsFromSource < 0 )
      {
        v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, v11, v13, v14);
        v18[3] = v5;
        v18[4] = v9;
        v18[5] = v6;
      }
      else
      {
        LODWORD(v6) = 0;
        *a3 = v19;
      }
    }
    else
    {
      v17 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v17 + 24) = v6;
      WdLogEvent5_WdError(v17);
      LODWORD(v6) = -1071774976;
    }
  }
  else
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(this);
    v16[3] = 0LL;
    v16[4] = v5;
    v16[5] = v6;
    WdLogEvent5_WdError(v16);
    LODWORD(v6) = -1073741811;
  }
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v12, &EventProfilerExit, v13, 6018);
  return (unsigned int)v6;
}
