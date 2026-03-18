/*
 * XREFs of ?CreateNewModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00887E0
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::CreateNewModeInfo(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        struct _D3DKMDT_VIDPN_SOURCE_MODE **a3,
        __int64 a4)
{
  struct DXGGLOBAL *v4; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v9; // rdi
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  __int64 v12; // rcx
  _QWORD *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // ebx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax

  v4 = DXGGLOBAL::m_pGlobal;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v18 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v18 + 24) = 1038LL;
    WdLogEvent5_WdAssertion(v18);
    v4 = DXGGLOBAL::m_pGlobal;
  }
  _InterlockedIncrement((volatile signed __int32 *)v4 + 11);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 7005);
  v7 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v7 + 24) = this;
  *(_QWORD *)(v7 + 32) = a2;
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    if ( this && *((_DWORD *)this + 32) == 1833173004 )
      v9 = this;
    else
      v9 = 0LL;
    if ( v9 )
    {
      v10 = operator new[](0x38uLL, 0x4E506456u, PagedPool);
      v11 = v10;
      if ( v10 )
      {
        v10[1] = 0LL;
        *(_DWORD *)v10 = 305419896;
        memset(v10 + 2, 0, 0x28uLL);
      }
      else
      {
        v11 = 0LL;
      }
      operator delete(0LL);
      if ( v11 )
        operator delete(0LL);
      operator delete(0LL);
      if ( v11 )
      {
        ++*((_DWORD *)v9 + 20);
        v13 = v11 + 2;
        *v13 = *((unsigned int *)v9 + 20);
        operator delete(0LL);
        *(_QWORD *)a2 = v13;
        v16 = 0;
      }
      else
      {
        v21 = WdLogNewEntry5_WdLowResource(v12);
        WdLogEvent5_WdLowResource(v21);
        operator delete(0LL);
        v23 = WdLogNewEntry5_WdError(v22);
        v16 = -1073741801;
        *(_QWORD *)(v23 + 24) = -1073741801LL;
        WdLogEvent5_WdError(v23);
      }
    }
    else
    {
      v20 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v20 + 24) = this;
      WdLogEvent5_WdError(v20);
      v16 = -1071774968;
    }
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v19 + 24) = 0LL;
    WdLogEvent5_WdError(v19);
    v16 = -1071774960;
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v14, &EventProfilerExit, v15, 7005);
  return v16;
}
