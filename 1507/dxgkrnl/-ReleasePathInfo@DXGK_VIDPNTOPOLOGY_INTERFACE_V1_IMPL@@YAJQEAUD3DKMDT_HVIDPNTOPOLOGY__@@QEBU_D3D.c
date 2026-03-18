/*
 * XREFs of ?ReleasePathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0089720
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?ReleaseDdiEnumerator@DMMVIDPNTOPOLOGY@@QEAAJPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0089E48 (-ReleaseDdiEnumerator@DMMVIDPNTOPOLOGY@@QEAAJPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::ReleasePathInfo(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *a2,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *const a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  DMMVIDPNTOPOLOGY *v8; // rcx
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // r8
  __int64 v13; // rax
  __int64 v14; // rax

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 7039);
  v6 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = a2;
  *(_QWORD *)(v6 + 32) = this;
  if ( a2 )
  {
    if ( this && *((_DWORD *)this + 46) == 1833173002 )
      v8 = this;
    else
      v8 = 0LL;
    if ( v8 )
    {
      v10 = DMMVIDPNTOPOLOGY::ReleaseDdiEnumerator(v8, a2);
    }
    else
    {
      v14 = WdLogNewEntry5_WdError(0LL);
      *(_QWORD *)(v14 + 24) = this;
      WdLogEvent5_WdError(v14);
      v10 = -1071774976;
    }
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v13 + 24) = 0LL;
    WdLogEvent5_WdError(v13);
    v10 = -1071774951;
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v9, &EventProfilerExit, v11, 7039);
  return v10;
}
