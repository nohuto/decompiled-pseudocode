/*
 * XREFs of ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z @ 0x1C00780F0
 * Callers:
 *     _lambda_ff7a16898af2bbd6d44a19d2984ad8b1_::_lambda_invoker_cdecl_ @ 0x1C0076D10 (_lambda_ff7a16898af2bbd6d44a19d2984ad8b1_--_lambda_invoker_cdecl_.c)
 *     _lambda_66b8a9031714805b7c929fd6741fe715_::_lambda_invoker_cdecl_ @ 0x1C00778F0 (_lambda_66b8a9031714805b7c929fd6741fe715_--_lambda_invoker_cdecl_.c)
 *     ?ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C0078090 (-ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     ?ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0078248 (-ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01449E0 (-CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     _lambda_090d52b4b377212e5b096f8abab319d1_::_lambda_invoker_cdecl_ @ 0x1C017AED0 (_lambda_090d52b4b377212e5b096f8abab319d1_--_lambda_invoker_cdecl_.c)
 *     ?UpdateRenderAdapterLuid@OUTPUTDUPL_MGR_INDIRECT@@QEAAJU_LUID@@@Z @ 0x1C017E6EC (-UpdateRenderAdapterLuid@OUTPUTDUPL_MGR_INDIRECT@@QEAAJU_LUID@@@Z.c)
 * Callees:
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ??_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z @ 0x1C0027454 (--_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z.c)
 *     ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C017B4D0 (-CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?GetProducerDevice@OUTPUTDUPL_CONTEXT@@QEAAPEAVDXGDEVICE@@XZ @ 0x1C0181404 (-GetProducerDevice@OUTPUTDUPL_CONTEXT@@QEAAPEAVDXGDEVICE@@XZ.c)
 */

void __fastcall OUTPUTDUPL_MGR::ProcessPendingDestroy(OUTPUTDUPL_MGR *this, struct DXGDEVICE *a2, int a3)
{
  __int64 v5; // rcx
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD **v10; // rdi
  _QWORD *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // r9d
  _QWORD *v15; // r15
  __int64 i; // r12
  __int64 v17; // rcx
  _QWORD *v18; // rax

  v5 = *(_QWORD *)this;
  if ( v5 )
  {
    v5 = *(_QWORD *)(v5 + 16);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v5 + 160)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v5 + 144)) )
    {
      v12 = WdLogNewEntry5_WdAssertion(v5);
      *(_QWORD *)(v12 + 24) = 2175LL;
      WdLogEvent5_WdAssertion(v12);
    }
  }
  v7 = *((_QWORD *)this + 3);
  if ( v7 && *(struct _KTHREAD **)(v7 + 8) == KeGetCurrentThread() )
  {
    v13 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v13 + 24) = 1142LL;
    WdLogEvent5_WdAssertion(v13);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v7, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v14 = *(_DWORD *)(v7 + 16);
      if ( v14 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v8, &EventBlockThread, v9, v14);
    }
    ExAcquirePushLockExclusiveEx(v7, 0LL);
  }
  v10 = (_QWORD **)((char *)this + 32);
  *(_QWORD *)(v7 + 8) = KeGetCurrentThread();
  v11 = *v10;
  while ( v11 != v10 )
  {
    v15 = v11;
    v11 = (_QWORD *)*v11;
    if ( a2 )
    {
      if ( a2 == OUTPUTDUPL_CONTEXT::GetProducerDevice((OUTPUTDUPL_CONTEXT *)v15) )
      {
        for ( i = 0LL; (unsigned int)i < *((_DWORD *)v15 + 10); i = (unsigned int)(i + 1) )
          DXGDXGIKEYEDMUTEX::CloseFromDevice((DXGDXGIKEYEDMUTEX *)v15[i + 6]);
      }
    }
    if ( a3 || !OUTPUTDUPL_CONTEXT::GetProducerDevice((OUTPUTDUPL_CONTEXT *)v15) )
    {
      v17 = *v15;
      v18 = (_QWORD *)v15[1];
      if ( *(_QWORD **)(*v15 + 8LL) != v15 || (_QWORD *)*v18 != v15 )
        __fastfail(3u);
      *v18 = v17;
      *(_QWORD *)(v17 + 8) = v18;
      OUTPUTDUPL_CONTEXT::`scalar deleting destructor'((OUTPUTDUPL_CONTEXT *)v15);
    }
  }
  *(_QWORD *)(v7 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v7, 0LL);
  KeLeaveCriticalRegion();
}
