/*
 * XREFs of ?GetPathImportance@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIQEAW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@QEAG@Z @ 0x1C00E9DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004E38 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C0008180 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::GetPathImportance(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        __int64 a3,
        _DWORD *a4,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE *const a5)
{
  __int64 v6; // rbp
  __int64 v8; // r14
  unsigned int v9; // ebx
  DMMVIDPNTOPOLOGY *v10; // rax
  __int64 v11; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _WORD *v16; // r10
  __int64 v18; // rax
  int v19; // eax
  _QWORD *v20; // rax
  __int64 v21; // rax

  v6 = (unsigned int)a3;
  v8 = (unsigned int)a2;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 6059);
  v9 = 0;
  if ( !a4 || !a5 )
  {
    v21 = WdLogNewEntry5_WdError(this);
    WdLogEvent5_WdError(v21);
    v19 = -1073741811;
    goto LABEL_14;
  }
  v10 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
  if ( !v10 )
  {
    v18 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v18 + 24) = this;
    WdLogEvent5_WdError(v18);
    v19 = -1071774976;
LABEL_14:
    v9 = v19;
    goto LABEL_7;
  }
  Path = DMMVIDPNTOPOLOGY::FindPath(v10, v8, v6);
  if ( !Path )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, 0LL, v14, v15);
    v20[3] = v8;
    v20[4] = v6;
    v20[5] = this;
    WdLogEvent5_WdWarning(v20);
    v19 = -1071774937;
    goto LABEL_14;
  }
  *a4 = *((_DWORD *)Path + 26);
  *v16 = *((_WORD *)Path + 54);
LABEL_7:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v13, &EventProfilerExit, v14, 6059);
  return v9;
}
