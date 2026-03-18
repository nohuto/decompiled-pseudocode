/*
 * XREFs of ?Initialize@DXGPROCESS@@QEAAJXZ @ 0x1C00854A0
 * Callers:
 *     ?DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE@@E@Z @ 0x1C00A8050 (-DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE@@E@Z.c)
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C00C33D4 (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 *     ?ForceCreation@DXGPROCESS@@SAJQEBU_DXGKWIN32KENG_INTERFACE@@@Z @ 0x1C0149D0C (-ForceCreation@DXGPROCESS@@SAJQEBU_DXGKWIN32KENG_INTERFACE@@@Z.c)
 * Callees:
 *     ??0DXGPROCESS_NONPAGED@@QEAA@XZ @ 0x1C000993C (--0DXGPROCESS_NONPAGED@@QEAA@XZ.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DeferredInitialize@DXGPROCESS@@QEAAJI@Z @ 0x1C00857B8 (-DeferredInitialize@DXGPROCESS@@QEAAJI@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C008AB14 (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 */

__int64 __fastcall DXGPROCESS::Initialize(DXGPROCESS *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  _QWORD *PoolWithTag; // rax
  void *v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rax
  KSPIN_LOCK *v12; // rax
  KSPIN_LOCK *v13; // rdi
  DXGPROCESS_NONPAGED *v14; // rax
  DXGPROCESS_NONPAGED *v15; // rax
  _QWORD *v16; // rax
  __int64 ProcessImageFileName; // rax
  const void *v18; // rsi
  size_t v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  DXGGLOBAL *Global; // rax
  unsigned int MaximumAdapterCount; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned __int64 v30; // rdi
  __int64 v31; // rax
  unsigned __int64 v32; // rax
  void *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned int v38; // edi
  _QWORD *i; // rsi
  __int64 v40; // rax

  if ( *((_DWORD *)this + 10) )
    return 3221225485LL;
  if ( *((_QWORD *)this + 11) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 622LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( *((_QWORD *)this + 36) )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = 623LL;
    WdLogEvent5_WdAssertion(v7);
  }
  *((_BYTE *)this + 313) = *((_QWORD *)this + 7) == (_QWORD)PsInitialSystemProcess;
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
  *((_QWORD *)this + 11) = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_11;
  v11 = ExAllocatePoolWithTag((POOL_TYPE)512, 0x28uLL, 0x4B677844u);
  if ( v11 )
  {
    *v11 = 0LL;
    v11[1] = 0LL;
    *((_DWORD *)v11 + 6) = 0;
    *((_DWORD *)v11 + 7) = 6;
    *((_DWORD *)v11 + 8) = 22;
    v11[2] = 0LL;
  }
  else
  {
    v11 = 0LL;
  }
  *((_QWORD *)this + 36) = v11;
  if ( !v11 )
    goto LABEL_11;
  v12 = (KSPIN_LOCK *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x30uLL, 0x4B677844u);
  v13 = v12;
  if ( v12 )
    memset(v12, 0, 0x30uLL);
  else
    v13 = 0LL;
  *((_QWORD *)this + 3) = v13;
  if ( !v13 )
    goto LABEL_11;
  KeInitializeSpinLock(v13 + 4);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 3) + 40LL));
  v14 = (DXGPROCESS_NONPAGED *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x70uLL, 0x4B677844u);
  v15 = v14 ? DXGPROCESS_NONPAGED::DXGPROCESS_NONPAGED(v14) : 0LL;
  *((_QWORD *)this + 9) = v15;
  if ( !v15 )
    goto LABEL_11;
  *((_QWORD *)v15 + 4) = this;
  *(_QWORD *)(*((_QWORD *)this + 9) + 72LL) = *((_QWORD *)this + 8);
  v16 = (_QWORD *)*((_QWORD *)this + 9);
  v16[7] = DxgkpProcessStatusChangeWork;
  v16[8] = this;
  v16[5] = 0LL;
  ProcessImageFileName = PsGetProcessImageFileName(*((_QWORD *)this + 7));
  v18 = (const void *)ProcessImageFileName;
  v19 = -1LL;
  do
    ++v19;
  while ( *(_BYTE *)(ProcessImageFileName + v19) );
  *(_QWORD *)(*((_QWORD *)this + 9) + 80LL) = operator new[](v19 + 1, 0x4B677844u, (enum _POOL_TYPE)512);
  v9 = *(void **)(*((_QWORD *)this + 9) + 80LL);
  if ( !v9 )
    goto LABEL_11;
  memmove(v9, v18, v19);
  v20 = *(_QWORD *)(*((_QWORD *)this + 9) + 80LL);
  *(_BYTE *)(v19 + v20) = 0;
  Global = DXGGLOBAL::GetGlobal(v20, v21, v22, v23);
  MaximumAdapterCount = DXGGLOBAL::GetMaximumAdapterCount(Global);
  v30 = MaximumAdapterCount;
  if ( !MaximumAdapterCount )
  {
    v31 = WdLogNewEntry5_WdAssertion(v27, v26, v28, v29);
    *(_QWORD *)(v31 + 24) = 683LL;
    WdLogEvent5_WdAssertion(v31);
  }
  v32 = 8 * v30;
  if ( !is_mul_ok(v30, 8uLL) )
    v32 = -1LL;
  v33 = operator new[](v32, 0x4B677844u, PagedPool);
  *((_QWORD *)this + 6) = v33;
  if ( v33 )
  {
    memset(v33, 0, 8 * v30);
    v38 = 0;
    for ( i = &DXGGLOBAL::m_pDxgmmsExport; ; ++i )
    {
      DXGGLOBAL::GetGlobal(v35, v34, v36, v37);
      if ( *i )
      {
        result = DXGPROCESS::DeferredInitialize(this, v38);
        if ( (int)result < 0 )
          break;
      }
      if ( ++v38 >= 2 )
      {
        if ( (__int64)++*((_QWORD *)this + 4) <= 0 )
        {
          v40 = WdLogNewEntry5_WdAssertion(v35, v34, v36, v37);
          *(_QWORD *)(v40 + 24) = 878LL;
          WdLogEvent5_WdAssertion(v40);
        }
        *((_DWORD *)this + 10) = 1;
        return 0LL;
      }
    }
  }
  else
  {
LABEL_11:
    v10 = WdLogNewEntry5_WdLowResource(v9);
    *(_QWORD *)(v10 + 24) = this;
    WdLogEvent5_WdLowResource(v10);
    return 3221225495LL;
  }
  return result;
}
