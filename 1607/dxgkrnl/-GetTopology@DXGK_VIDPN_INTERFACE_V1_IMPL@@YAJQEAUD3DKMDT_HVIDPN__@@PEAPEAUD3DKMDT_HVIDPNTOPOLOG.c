/*
 * XREFs of ?GetTopology@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@PEAPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEAPEBU_DXGK_VIDPNTOPOLOGY_INTERFACE@@@Z @ 0x1C00CEA60
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::GetTopology(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        struct D3DKMDT_HVIDPNTOPOLOGY__ **a3,
        const struct _DXGK_VIDPNTOPOLOGY_INTERFACE **a4)
{
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // ebx
  DXGK_VIDPN_INTERFACE_V1_IMPL *v11; // rcx
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v12; // rdx
  char *v13; // rax
  __int64 v15; // rax
  __int64 v16; // rax

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 7042);
  v7 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v10 = 0;
  v7[3] = this;
  v7[4] = a2;
  v7[5] = a3;
  if ( a2 && a3 )
  {
    *(_QWORD *)a2 = 0LL;
    *a3 = 0LL;
    if ( !this || (v11 = this, *((_DWORD *)this + 16) != 1833172997) )
      v11 = 0LL;
    if ( v11 )
    {
      v12 = *(struct D3DKMDT_HVIDPNTOPOLOGY__ **)(*((_QWORD *)v11 + 6) + 376LL);
      if ( v11 == (DXGK_VIDPN_INTERFACE_V1_IMPL *)-289LL )
        v13 = 0LL;
      else
        v13 = (char *)v11 + 96;
      *(_QWORD *)a2 = v13;
      *a3 = v12;
    }
    else
    {
      v16 = WdLogNewEntry5_WdError(0LL);
      *(_QWORD *)(v16 + 24) = this;
      WdLogEvent5_WdError(v16);
      v10 = -1071774973;
    }
  }
  else
  {
    v15 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v15 + 24) = 0LL;
    *(_QWORD *)(v15 + 32) = this;
    WdLogEvent5_WdError(v15);
    v10 = -1073741811;
  }
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)v11, &EventProfilerExit, v9, 7042);
  return v10;
}
