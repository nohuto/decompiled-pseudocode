/*
 * XREFs of ?Initialize@DXGPROCESS@@QEAAJXZ @ 0x1C00682E4
 * Callers:
 *     ?DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE@@E@Z @ 0x1C00B3C50 (-DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE@@E@Z.c)
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C00D4630 (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 *     ?ForceCreation@DXGPROCESS@@SAJQEBU_DXGKWIN32KENG_INTERFACE@@@Z @ 0x1C014DB34 (-ForceCreation@DXGPROCESS@@SAJQEBU_DXGKWIN32KENG_INTERFACE@@@Z.c)
 * Callees:
 *     ??0DXGFASTMUTEX@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z @ 0x1C0006DD4 (--0DXGFASTMUTEX@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z.c)
 *     ??0DXGPROCESS_NONPAGED@@QEAA@XZ @ 0x1C000C330 (--0DXGPROCESS_NONPAGED@@QEAA@XZ.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DeferredInitialize@DXGPROCESS@@QEAAJI@Z @ 0x1C0068570 (-DeferredInitialize@DXGPROCESS@@QEAAJI@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C0096990 (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 */

__int64 __fastcall DXGPROCESS::Initialize(DXGPROCESS *this)
{
  __int64 PoolWithTag; // rax
  __int64 v3; // rdx
  void *v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  KSPIN_LOCK *v8; // rax
  KSPIN_LOCK *v9; // rdi
  DXGPROCESS_NONPAGED *v10; // rax
  _QWORD *v11; // rax
  __int64 ProcessImageFileName; // rax
  const void *v13; // rsi
  size_t v14; // rdi
  DXGGLOBAL *Global; // rax
  unsigned int MaximumAdapterCount; // eax
  __int64 v17; // rcx
  unsigned __int64 v18; // rdi
  SIZE_T v19; // rax
  PVOID v20; // rax
  unsigned int v21; // edi
  _QWORD *i; // rsi
  __int64 v23; // rcx
  __int64 result; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax

  if ( *((_DWORD *)this + 10) )
    return 3221225485LL;
  if ( *((_QWORD *)this + 11) )
  {
    v25 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v25 + 24) = 622LL;
    WdLogEvent5_WdAssertion(v25);
  }
  if ( *((_QWORD *)this + 36) )
  {
    v26 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v26 + 24) = 623LL;
    WdLogEvent5_WdAssertion(v26);
  }
  *((_BYTE *)this + 313) = *((_QWORD *)this + 7) == (_QWORD)PsInitialSystemProcess;
  PoolWithTag = (__int64)ExAllocatePoolWithTag((POOL_TYPE)512, 0x40uLL, 0x4B677844u);
  if ( PoolWithTag )
    PoolWithTag = DXGFASTMUTEX::DXGFASTMUTEX(PoolWithTag, 4, 30);
  *((_QWORD *)this + 11) = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_36;
  v7 = (__int64)ExAllocatePoolWithTag((POOL_TYPE)512, 0x40uLL, 0x4B677844u);
  if ( v7 )
    v7 = DXGFASTMUTEX::DXGFASTMUTEX(v7, 6, 22);
  *((_QWORD *)this + 36) = v7;
  if ( !v7 )
    goto LABEL_36;
  v8 = (KSPIN_LOCK *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x30uLL, 0x4B677844u);
  v9 = v8;
  if ( v8 )
    memset(v8, 0, 0x30uLL);
  else
    v9 = 0LL;
  *((_QWORD *)this + 3) = v9;
  if ( !v9 )
    goto LABEL_36;
  KeInitializeSpinLock(v9 + 4);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 3) + 40LL));
  v10 = (DXGPROCESS_NONPAGED *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x70uLL, 0x4B677844u);
  if ( v10 )
    v10 = DXGPROCESS_NONPAGED::DXGPROCESS_NONPAGED(v10);
  *((_QWORD *)this + 9) = v10;
  if ( !v10 )
    goto LABEL_36;
  *((_QWORD *)v10 + 4) = this;
  *(_QWORD *)(*((_QWORD *)this + 9) + 72LL) = *((_QWORD *)this + 8);
  v11 = (_QWORD *)*((_QWORD *)this + 9);
  v11[5] = 0LL;
  v11[7] = DxgkpProcessStatusChangeWork;
  v11[8] = this;
  ProcessImageFileName = PsGetProcessImageFileName(*((_QWORD *)this + 7));
  v13 = (const void *)ProcessImageFileName;
  v14 = -1LL;
  do
    ++v14;
  while ( *(_BYTE *)(ProcessImageFileName + v14) );
  *(_QWORD *)(*((_QWORD *)this + 9) + 80LL) = operator new[](v14 + 1, 0x4B677844u, (POOL_TYPE)512);
  v4 = *(void **)(*((_QWORD *)this + 9) + 80LL);
  if ( !v4 )
    goto LABEL_36;
  memmove(v4, v13, v14);
  *(_BYTE *)(v14 + *(_QWORD *)(*((_QWORD *)this + 9) + 80LL)) = 0;
  Global = DXGGLOBAL::GetGlobal();
  MaximumAdapterCount = DXGGLOBAL::GetMaximumAdapterCount(Global);
  v18 = MaximumAdapterCount;
  if ( !MaximumAdapterCount )
  {
    v28 = WdLogNewEntry5_WdAssertion(v17);
    *(_QWORD *)(v28 + 24) = 683LL;
    WdLogEvent5_WdAssertion(v28);
  }
  v19 = 8 * v18;
  if ( !is_mul_ok(v18, 8uLL) )
    v19 = -1LL;
  v20 = operator new[](v19, 0x4B677844u, PagedPool);
  *((_QWORD *)this + 6) = v20;
  if ( v20 )
  {
    memset(v20, 0, 8 * v18);
    v21 = 0;
    for ( i = &DXGGLOBAL::m_pDxgmmsExport; ; ++i )
    {
      DXGGLOBAL::GetGlobal();
      if ( *i )
      {
        result = DXGPROCESS::DeferredInitialize(this, v21);
        if ( (int)result < 0 )
          break;
      }
      if ( ++v21 >= 2 )
      {
        if ( (__int64)++*((_QWORD *)this + 4) <= 0 )
        {
          v29 = WdLogNewEntry5_WdAssertion(v23);
          *(_QWORD *)(v29 + 24) = 730LL;
          WdLogEvent5_WdAssertion(v29);
        }
        *((_DWORD *)this + 10) = 1;
        return 0LL;
      }
    }
  }
  else
  {
LABEL_36:
    v27 = WdLogNewEntry5_WdLowResource(v4, v3, v5, v6);
    *(_QWORD *)(v27 + 24) = this;
    WdLogEvent5_WdLowResource(v27);
    return 3221225495LL;
  }
  return result;
}
