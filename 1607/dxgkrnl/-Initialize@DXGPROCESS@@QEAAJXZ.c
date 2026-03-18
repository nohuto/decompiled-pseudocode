/*
 * XREFs of ?Initialize@DXGPROCESS@@QEAAJXZ @ 0x1C00A26A8
 * Callers:
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@@Z @ 0x1C00CE5F4 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0DXGPROCESS_NONPAGED@@QEAA@XZ @ 0x1C000CB50 (--0DXGPROCESS_NONPAGED@@QEAA@XZ.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?DeferredInitialize@DXGPROCESS@@QEAAJI@Z @ 0x1C00A2D64 (-DeferredInitialize@DXGPROCESS@@QEAAJI@Z.c)
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C00A3884 (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00B4048 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGPROCESS::Initialize(DXGPROCESS *this)
{
  _QWORD *PoolWithTag; // rax
  void *v3; // rcx
  _QWORD *v4; // rax
  DXGPROCESS_NONPAGED *v5; // rax
  DXGPROCESS_NONPAGED *v6; // rax
  _QWORD *v7; // rax
  __int64 ProcessImageFileName; // rax
  const void *v9; // rsi
  size_t v10; // rdi
  DXGGLOBAL *Global; // rax
  unsigned int MaximumAdapterCount; // eax
  __int64 v13; // rcx
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rax
  void *v16; // rax
  __int64 v17; // rcx
  unsigned int v18; // edi
  _QWORD *i; // rsi
  __int64 result; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax

  if ( *((_DWORD *)this + 8) )
    return 3221225485LL;
  if ( *((_QWORD *)this + 10) )
  {
    v21 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v21 + 24) = 921LL;
    WdLogEvent5_WdAssertion(v21);
  }
  if ( *((_QWORD *)this + 35) )
  {
    v22 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v22 + 24) = 922LL;
    WdLogEvent5_WdAssertion(v22);
  }
  *((_BYTE *)this + 289) = *((_QWORD *)this + 6) == (_QWORD)PsInitialSystemProcess;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x28uLL, 0x4B677844u);
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    *((_DWORD *)PoolWithTag + 6) = 0;
    *((_DWORD *)PoolWithTag + 7) = 4;
    *((_DWORD *)PoolWithTag + 8) = 30;
    PoolWithTag[2] = 0LL;
  }
  else
  {
    PoolWithTag = 0LL;
  }
  *((_QWORD *)this + 10) = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_35;
  v4 = ExAllocatePoolWithTag((POOL_TYPE)512, 0x28uLL, 0x4B677844u);
  if ( v4 )
  {
    *v4 = 0LL;
    v4[1] = 0LL;
    *((_DWORD *)v4 + 6) = 0;
    *((_DWORD *)v4 + 7) = 6;
    *((_DWORD *)v4 + 8) = 22;
    v4[2] = 0LL;
  }
  else
  {
    v4 = 0LL;
  }
  *((_QWORD *)this + 35) = v4;
  if ( !v4 )
    goto LABEL_35;
  v5 = (DXGPROCESS_NONPAGED *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x70uLL, 0x4B677844u);
  v6 = v5 ? DXGPROCESS_NONPAGED::DXGPROCESS_NONPAGED(v5) : 0LL;
  *((_QWORD *)this + 8) = v6;
  if ( !v6 )
    goto LABEL_35;
  *((_QWORD *)v6 + 4) = this;
  *(_QWORD *)(*((_QWORD *)this + 8) + 72LL) = *((_QWORD *)this + 7);
  v7 = (_QWORD *)*((_QWORD *)this + 8);
  v7[7] = DxgkpProcessStatusChangeWork;
  v7[8] = this;
  v7[5] = 0LL;
  ProcessImageFileName = PsGetProcessImageFileName(*((_QWORD *)this + 6));
  v9 = (const void *)ProcessImageFileName;
  v10 = -1LL;
  do
    ++v10;
  while ( *(_BYTE *)(ProcessImageFileName + v10) );
  *(_QWORD *)(*((_QWORD *)this + 8) + 80LL) = operator new[](v10 + 1, 0x4B677844u, (enum _POOL_TYPE)512);
  v3 = *(void **)(*((_QWORD *)this + 8) + 80LL);
  if ( !v3 )
    goto LABEL_35;
  memmove(v3, v9, v10);
  *(_BYTE *)(v10 + *(_QWORD *)(*((_QWORD *)this + 8) + 80LL)) = 0;
  Global = DXGGLOBAL::GetGlobal();
  MaximumAdapterCount = DXGGLOBAL::GetMaximumAdapterCount(Global);
  v14 = MaximumAdapterCount;
  if ( !MaximumAdapterCount )
  {
    v24 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v24 + 24) = 972LL;
    WdLogEvent5_WdAssertion(v24);
  }
  v15 = 8 * v14;
  if ( !is_mul_ok(v14, 8uLL) )
    v15 = -1LL;
  v16 = operator new[](v15, 0x4B677844u, PagedPool);
  *((_QWORD *)this + 5) = v16;
  if ( v16 )
  {
    memset(v16, 0, 8 * v14);
    v18 = 0;
    for ( i = &DXGGLOBAL::m_pDxgmmsExport; ; ++i )
    {
      if ( !DXGGLOBAL::m_pGlobal )
      {
        v25 = WdLogNewEntry5_WdAssertion(v17);
        *(_QWORD *)(v25 + 24) = 982LL;
        WdLogEvent5_WdAssertion(v25);
      }
      if ( *i )
      {
        result = DXGPROCESS::DeferredInitialize(this, v18);
        if ( (int)result < 0 )
          break;
      }
      if ( ++v18 >= 2 )
      {
        if ( (__int64)++*((_QWORD *)this + 3) <= 0 )
        {
          v26 = WdLogNewEntry5_WdAssertion(v17);
          *(_QWORD *)(v26 + 24) = 859LL;
          WdLogEvent5_WdAssertion(v26);
        }
        *((_DWORD *)this + 8) = 1;
        return 0LL;
      }
    }
  }
  else
  {
LABEL_35:
    v23 = WdLogNewEntry5_WdLowResource(v3);
    *(_QWORD *)(v23 + 24) = this;
    WdLogEvent5_WdLowResource(v23);
    return 3221225495LL;
  }
  return result;
}
