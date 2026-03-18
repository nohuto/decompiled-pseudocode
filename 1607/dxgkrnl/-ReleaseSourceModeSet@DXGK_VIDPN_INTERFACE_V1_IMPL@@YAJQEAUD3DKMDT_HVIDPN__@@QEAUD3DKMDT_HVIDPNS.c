/*
 * XREFs of ?ReleaseSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C007D280
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0002B04 (-ReleaseModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000C9C4 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::ReleaseSourceModeSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  DXGK_VIDPN_INTERFACE_V1_IMPL *v9; // r14
  struct D3DKMDT_HVIDPN__ *v10; // rbp
  DMMVIDPNSOURCE *v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rsi
  __int64 v23; // rax

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 7044);
  v6 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v8 = 0;
  *(_QWORD *)(v6 + 24) = a2;
  *(_QWORD *)(v6 + 32) = this;
  if ( !this || (v9 = this, *((_DWORD *)this + 16) != 1833172997) )
    v9 = 0LL;
  if ( v9 )
  {
    if ( !a2 || (v10 = a2, *((_DWORD *)a2 + 32) != 1833173004) )
      v10 = 0LL;
    if ( v10 )
    {
      v11 = (DMMVIDPNSOURCE *)*((_QWORD *)v10 + 14);
      if ( !v11 )
      {
        v18 = WdLogNewEntry5_WdAssertion(v7);
        WdLogEvent5_WdAssertion(v18);
      }
      if ( !*((_QWORD *)v11 + 5) )
      {
        v19 = WdLogNewEntry5_WdAssertion(v7);
        WdLogEvent5_WdAssertion(v19);
      }
      v12 = *((_QWORD *)v11 + 5);
      if ( !*(_QWORD *)(v12 + 72) )
      {
        v20 = WdLogNewEntry5_WdAssertion(v7);
        WdLogEvent5_WdAssertion(v20);
      }
      if ( *(DXGK_VIDPN_INTERFACE_V1_IMPL **)(v12 + 72) == v9 )
      {
        DMMVIDPNSOURCE::ReleaseModeSet(v11, (struct DMMVIDPNSOURCEMODESET *)v10);
      }
      else
      {
        v22 = (_QWORD *)WdLogNewEntry5_WdError(v7);
        if ( !*((_QWORD *)v11 + 5) )
        {
          v23 = WdLogNewEntry5_WdAssertion(v21);
          WdLogEvent5_WdAssertion(v23);
        }
        v22[3] = ContainedBy<DMMVIDPN>::GetContainer(*((_QWORD *)v11 + 5) + 64LL);
        v22[4] = v10;
        v22[5] = v9;
        WdLogEvent5_WdError(v22);
        v8 = -1071774928;
      }
    }
    else
    {
      v17 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v17 + 24) = a2;
      WdLogEvent5_WdError(v17);
      v8 = -1071774968;
    }
  }
  else
  {
    v16 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v16 + 24) = this;
    WdLogEvent5_WdError(v16);
    v8 = -1071774973;
  }
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v13, &EventProfilerExit, v14, 7044);
  return v8;
}
