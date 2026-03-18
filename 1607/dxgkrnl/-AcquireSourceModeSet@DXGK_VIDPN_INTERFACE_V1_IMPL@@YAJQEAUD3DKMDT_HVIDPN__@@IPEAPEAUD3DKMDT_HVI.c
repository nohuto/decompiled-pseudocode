/*
 * XREFs of ?AcquireSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_DXGK_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1C00CDD50
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::AcquireSourceModeSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        _QWORD *a3,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ **a4)
{
  __int64 v6; // r12
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // ebx
  DXGK_VIDPN_INTERFACE_V1_IMPL *v12; // rsi
  DXGK_VIDPN_INTERFACE_V1_IMPL *v13; // rcx
  __int64 v14; // rdx
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rdi
  _QWORD *v23; // rax
  int v24; // eax
  __int64 v25; // rax
  DXGK_VIDPN_INTERFACE_V1_IMPL *v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v30; // [rsp+50h] [rbp+8h]

  v6 = (unsigned int)a2;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 7043);
  v8 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v11 = 0;
  v8[3] = this;
  v8[4] = v6;
  v8[5] = a3;
  v8[6] = a4;
  if ( a3 && a4 )
  {
    *a3 = 0LL;
    *a4 = 0LL;
    if ( !this || (v12 = this, *((_DWORD *)this + 16) != 1833172997) )
      v12 = 0LL;
    if ( v12 )
    {
      v13 = (DXGK_VIDPN_INTERFACE_V1_IMPL *)((char *)v12 + 120);
      if ( *(DXGK_VIDPN_INTERFACE_V1_IMPL **)v13 == v13 )
        goto LABEL_37;
      v13 = (DXGK_VIDPN_INTERFACE_V1_IMPL *)(*(_QWORD *)v13 - 8LL);
      if ( !v13 )
        goto LABEL_37;
      do
      {
        if ( *(_DWORD *)(*((_QWORD *)v13 + 11) + 24LL) == (_DWORD)v6 )
          break;
        v26 = (DXGK_VIDPN_INTERFACE_V1_IMPL *)*((_QWORD *)v13 + 1);
        v13 = v26 == (DXGK_VIDPN_INTERFACE_V1_IMPL *)((char *)v12 + 120)
            ? 0LL
            : (DXGK_VIDPN_INTERFACE_V1_IMPL *)((char *)v26 - 8);
      }
      while ( v13 );
      if ( !v13 )
      {
LABEL_37:
        v27 = WdLogNewEntry5_WdError(v13);
        *(_QWORD *)(v27 + 24) = v6;
        *(_QWORD *)(v27 + 32) = v12;
        WdLogEvent5_WdError(v27);
      }
      v14 = *((_QWORD *)v12 + 38);
      v15 = *(struct D3DKMDT_HVIDPNSOURCEMODESET__ **)(*((_QWORD *)v12 + 6) + 384LL);
      v16 = (_QWORD *)(v14 + 24);
      v30 = v15;
      if ( (_QWORD *)*v16 == v16 )
      {
        v17 = 0LL;
      }
      else
      {
        v17 = *v16 - 8LL;
        if ( !v17 )
        {
LABEL_41:
          v29 = WdLogNewEntry5_WdError(v15);
          *(_QWORD *)(v29 + 24) = v6;
          WdLogEvent5_WdError(v29);
          v24 = -1071774972;
          goto LABEL_42;
        }
        do
        {
          if ( *(_DWORD *)(v17 + 24) == (_DWORD)v6 )
            break;
          v15 = *(struct D3DKMDT_HVIDPNSOURCEMODESET__ **)(v17 + 8);
          v17 = (__int64)(v15 - 2);
          if ( v15 == (struct D3DKMDT_HVIDPNSOURCEMODESET__ *)(v14 + 24) )
            v17 = 0LL;
        }
        while ( v17 );
      }
      if ( v17 )
      {
        v18 = *(_QWORD *)(v17 + 104);
        if ( v18 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v18 + 96));
          v19 = *(_QWORD *)(v17 + 104);
          if ( v19 )
          {
LABEL_17:
            v20 = v19 + 137;
            if ( v20 )
              v21 = v20 - 137;
            else
              v21 = 0LL;
            *a3 = v21;
            *a4 = v30;
            goto LABEL_20;
          }
        }
        else
        {
          v19 = 0LL;
        }
        v28 = WdLogNewEntry5_WdAssertion(v18);
        WdLogEvent5_WdAssertion(v28);
        goto LABEL_17;
      }
      goto LABEL_41;
    }
    v25 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v25 + 24) = this;
    WdLogEvent5_WdError(v25);
    v24 = -1071774973;
  }
  else
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdError(v9);
    v23[3] = 0LL;
    v23[4] = v6;
    v23[5] = this;
    WdLogEvent5_WdError(v23);
    v24 = -1073741811;
  }
LABEL_42:
  v11 = v24;
LABEL_20:
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v18, &EventProfilerExit, v10, 7043);
  return v11;
}
