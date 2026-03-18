/*
 * XREFs of ?EnumPaths@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@_KPEAI2@Z @ 0x1C017CE10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C0008180 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::EnumPaths(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        _DWORD *a3,
        unsigned int *a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // eax
  _QWORD *v15; // rdx
  _QWORD *v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rax

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 6061);
  v8 = 0;
  if ( !a4 || !a3 )
  {
    v18 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v18 + 24) = a2;
    *(_QWORD *)(v18 + 32) = this;
    WdLogEvent5_WdError(v18);
    v14 = -1073741811;
    goto LABEL_21;
  }
  *a4 = -1;
  *a3 = -1;
  v9 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
  v11 = v9;
  if ( !v9 )
  {
    v12 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v12 + 24) = this;
    WdLogEvent5_WdError(v12);
    v14 = -1071774976;
LABEL_21:
    v8 = v14;
    goto LABEL_22;
  }
  v15 = (_QWORD *)(v9 + 24);
  v13 = 0LL;
  if ( (_QWORD *)*v15 == v15 )
    v16 = 0LL;
  else
    v16 = (_QWORD *)(*v15 - 8LL);
  if ( a2 )
  {
    while ( v16 )
    {
      v17 = v16[1];
      if ( v17 == v9 + 24 )
        v16 = 0LL;
      else
        v16 = (_QWORD *)(v17 - 8);
      v13 = (unsigned int)(v13 + 1);
      if ( (struct D3DKMDT_HVIDPNTOPOLOGY__ *const)(unsigned int)v13 == a2 )
        goto LABEL_17;
    }
    goto LABEL_18;
  }
LABEL_17:
  if ( !v16 )
  {
LABEL_18:
    v14 = 1075708748;
    goto LABEL_21;
  }
  *a4 = *(_DWORD *)(v16[12] + 24LL);
  v13 = *(unsigned int *)(v16[11] + 24LL);
  *a3 = v13;
LABEL_22:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v13, &EventProfilerExit, v11, 6061);
  return v8;
}
