/*
 * XREFs of ?GetNumModes@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEA_K@Z @ 0x1C00BE2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C000ADB8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 */

__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::GetNumModes(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v13; // rax
  __int64 v14; // rax

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 7000);
  v6 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v8 = 0;
  *(_QWORD *)(v6 + 24) = this;
  *(_QWORD *)(v6 + 32) = a2;
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    v9 = ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle((__int64)this);
    if ( v9 )
    {
      *(_QWORD *)a2 = *(_QWORD *)(v9 + 64);
    }
    else
    {
      v14 = WdLogNewEntry5_WdError(v10);
      *(_QWORD *)(v14 + 24) = this;
      WdLogEvent5_WdError(v14);
      v8 = -1071774968;
    }
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v13 + 24) = 0LL;
    *(_QWORD *)(v13 + 32) = this;
    WdLogEvent5_WdError(v13);
    v8 = -1073741811;
  }
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v10, &EventProfilerExit, v11, 7000);
  return v8;
}
