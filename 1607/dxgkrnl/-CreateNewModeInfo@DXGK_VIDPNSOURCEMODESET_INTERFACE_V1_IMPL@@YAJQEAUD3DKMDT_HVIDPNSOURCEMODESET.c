/*
 * XREFs of ?CreateNewModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C007DA40
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::CreateNewModeInfo(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        struct _D3DKMDT_VIDPN_SOURCE_MODE **a3,
        __int64 a4)
{
  DXGGLOBAL *v4; // rax
  unsigned int v5; // edi
  __int64 v8; // rax
  __int64 v9; // rcx
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v10; // rsi
  _QWORD *v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rbx
  _DWORD *v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax

  v4 = DXGGLOBAL::m_pGlobal;
  v5 = 0;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v18 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v18 + 24) = 982LL;
    WdLogEvent5_WdAssertion(v18);
    v4 = DXGGLOBAL::m_pGlobal;
  }
  _InterlockedIncrement((volatile signed __int32 *)v4 + 11);
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 7005);
  v8 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v8 + 24) = this;
  *(_QWORD *)(v8 + 32) = a2;
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    if ( !this || (v10 = this, *((_DWORD *)this + 32) != 1833173004) )
      v10 = 0LL;
    if ( v10 )
    {
      v11 = operator new(0x38uLL, 0x4E506456u, PagedPool);
      v13 = v11;
      if ( v11 )
      {
        *(_DWORD *)v11 = 305419896;
        v11[1] = 0LL;
        memset(v11 + 2, 0, 0x28uLL);
      }
      else
      {
        v13 = 0LL;
      }
      if ( v13 )
      {
        operator delete(0LL);
        ++*((_DWORD *)v10 + 20);
        v14 = v13 + 2;
        *v14 = *((_DWORD *)v10 + 20);
        v14[1] = 0;
        operator delete(0LL);
        *(_QWORD *)a2 = v14;
      }
      else
      {
        v21 = WdLogNewEntry5_WdLowResource(v12);
        WdLogEvent5_WdLowResource(v21);
        operator delete(0LL);
        v23 = WdLogNewEntry5_WdError(v22);
        v5 = -1073741801;
        *(_QWORD *)(v23 + 24) = -1073741801LL;
        WdLogEvent5_WdError(v23);
      }
    }
    else
    {
      v20 = WdLogNewEntry5_WdError(v9);
      *(_QWORD *)(v20 + 24) = this;
      WdLogEvent5_WdError(v20);
      v5 = -1071774968;
    }
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v19 + 24) = 0LL;
    WdLogEvent5_WdError(v19);
    v5 = -1071774960;
  }
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v15, &EventProfilerExit, v16, 7005);
  return v5;
}
