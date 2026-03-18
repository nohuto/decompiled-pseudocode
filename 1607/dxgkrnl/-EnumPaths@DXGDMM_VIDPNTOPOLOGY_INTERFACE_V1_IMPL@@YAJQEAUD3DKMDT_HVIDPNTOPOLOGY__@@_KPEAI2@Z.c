/*
 * XREFs of ?EnumPaths@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@_KPEAI2@Z @ 0x1C00E1470
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000ACE8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
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
  _QWORD *v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rdx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rax

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 6061);
  v8 = 0;
  if ( !a4 || !a3 )
  {
    v19 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v19 + 24) = a2;
    *(_QWORD *)(v19 + 32) = this;
    WdLogEvent5_WdError(v19);
    v17 = -1073741811;
    goto LABEL_24;
  }
  *a4 = -1;
  *a3 = -1;
  v9 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
  v11 = v9;
  if ( !v9 )
  {
    v16 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v16 + 24) = this;
    WdLogEvent5_WdError(v16);
    v17 = -1071774976;
LABEL_24:
    v8 = v17;
    goto LABEL_10;
  }
  v12 = (_QWORD *)(v9 + 24);
  v13 = 0LL;
  if ( (_QWORD *)*v12 == v12 )
    v14 = 0LL;
  else
    v14 = (_QWORD *)(*v12 - 8LL);
  if ( a2 )
  {
    while ( v14 )
    {
      v18 = v14[1];
      if ( v18 == v9 + 24 )
        v14 = 0LL;
      else
        v14 = (_QWORD *)(v18 - 8);
      v13 = (unsigned int)(v13 + 1);
      if ( (struct D3DKMDT_HVIDPNTOPOLOGY__ *const)(unsigned int)v13 == a2 )
        goto LABEL_8;
    }
    goto LABEL_22;
  }
LABEL_8:
  if ( !v14 )
  {
LABEL_22:
    v17 = 1075708748;
    goto LABEL_24;
  }
  *a4 = *(_DWORD *)(v14[12] + 24LL);
  v13 = *(unsigned int *)(v14[11] + 24LL);
  *a3 = v13;
LABEL_10:
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v13, &EventProfilerExit, v11, 6061);
  return v8;
}
