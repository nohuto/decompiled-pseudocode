/*
 * XREFs of ?ReleasePathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00CD790
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::ReleasePathInfo(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *const a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v9; // rbp
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v10; // rdi
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  __int64 v13; // rax
  void *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rax

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 7039);
  v6 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v8 = 0;
  *(_QWORD *)(v6 + 24) = a2;
  *(_QWORD *)(v6 + 32) = this;
  if ( !a2 )
  {
    v18 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v18 + 24) = 0LL;
LABEL_23:
    WdLogEvent5_WdError(v18);
    v8 = -1071774951;
    goto LABEL_15;
  }
  if ( !this || (v9 = this, *((_DWORD *)this + 46) != 1833173002) )
    v9 = 0LL;
  if ( !v9 )
  {
    v19 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v19 + 24) = this;
    WdLogEvent5_WdError(v19);
    v8 = -1071774976;
    goto LABEL_15;
  }
  v10 = a2 - 4;
  if ( *((_DWORD *)a2 - 4) != 305419896 )
  {
    v18 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v18 + 24) = v10;
    goto LABEL_23;
  }
  v11 = *((_QWORD *)v10 + 1);
  if ( !v11 )
    goto LABEL_12;
  v12 = (_QWORD *)((char *)v9 + 24);
  if ( (_QWORD *)*v12 == v12 )
    goto LABEL_29;
  v13 = *v12 - 8LL;
  if ( *v12 == 8LL )
    goto LABEL_29;
  do
  {
    if ( v13 == v11 )
      break;
    v20 = *(_QWORD **)(v13 + 8);
    v13 = v20 == v12 ? 0LL : (__int64)(v20 - 1);
  }
  while ( v13 );
  if ( !v13 )
  {
LABEL_29:
    v21 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v21 + 24) = v10;
    *(_QWORD *)(v21 + 32) = v9;
    WdLogEvent5_WdError(v21);
    v8 = -1071774928;
  }
  else
  {
LABEL_12:
    v14 = (void *)*((_QWORD *)v10 + 46);
    if ( v14 )
      ExFreePoolWithTag(v14, 0);
    ExFreePoolWithTag(a2 - 4, 0);
  }
LABEL_15:
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v15, &EventProfilerExit, v16, 7039);
  return v8;
}
