/*
 * XREFs of ?GetNumPaths@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEA_K@Z @ 0x1C00E1540
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000ACE8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::GetNumPaths(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        unsigned __int64 *a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v10; // rax
  __int64 v11; // rax

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 6060);
  v5 = 0;
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    v6 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
    if ( v6 )
    {
      *(_QWORD *)a2 = *(_QWORD *)(v6 + 40);
    }
    else
    {
      v11 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v11 + 24) = this;
      WdLogEvent5_WdError(v11);
      v5 = -1071774976;
    }
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v10 + 24) = 0LL;
    *(_QWORD *)(v10 + 32) = this;
    WdLogEvent5_WdError(v10);
    v5 = -1073741811;
  }
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v7, &EventProfilerExit, v8, 6060);
  return v5;
}
