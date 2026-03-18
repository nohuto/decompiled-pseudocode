/*
 * XREFs of ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0077B20
 * Callers:
 *     _lambda_ff7a16898af2bbd6d44a19d2984ad8b1_::_lambda_invoker_cdecl_ @ 0x1C0076D10 (_lambda_ff7a16898af2bbd6d44a19d2984ad8b1_--_lambda_invoker_cdecl_.c)
 *     _lambda_66b8a9031714805b7c929fd6741fe715_::_lambda_invoker_cdecl_ @ 0x1C00778F0 (_lambda_66b8a9031714805b7c929fd6741fe715_--_lambda_invoker_cdecl_.c)
 *     ?GetSessionData@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C0077A44 (-GetSessionData@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     DxgkGetPresentHistory @ 0x1C00CA740 (DxgkGetPresentHistory.c)
 *     ?IsTdrAdapterUsedInSessionCallback@CTDR_GDI_RESET_THREAD@@KAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z @ 0x1C0165BD0 (-IsTdrAdapterUsedInSessionCallback@CTDR_GDI_RESET_THREAD@@KAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z.c)
 *     ?MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ @ 0x1C018184C (-MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ.c)
 * Callees:
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 */

struct DXGSESSIONDATA *__fastcall DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
        DXGSESSIONMGR *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  int *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdi
  int *v11; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rax
  int v18; // r9d
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rax
  struct _KTHREAD **v23; // [rsp+20h] [rbp-18h] BYREF
  char v24; // [rsp+28h] [rbp-10h]

  v3 = (unsigned int)a2;
  v23 = (struct _KTHREAD **)((char *)this + 80);
  v24 = 0;
  if ( this == (DXGSESSIONMGR *)-80LL )
  {
    v14 = WdLogNewEntry5_WdAssertion(-80LL);
    *(_QWORD *)(v14 + 24) = 428LL;
    WdLogEvent5_WdAssertion(v14);
  }
  CurrentThread = KeGetCurrentThread();
  if ( v23[1] == CurrentThread )
  {
    v15 = WdLogNewEntry5_WdAssertion(CurrentThread);
    *(_QWORD *)(v15 + 24) = 435LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( v24 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, a2, a3);
    v16[5] = &v23;
    v16[3] = 275LL;
    v16[4] = 4LL;
    v16[6] = 0LL;
    v16[7] = 0LL;
    WdLogEvent5_WdCriticalError(v16);
  }
  v6 = (int *)v23;
  KeEnterCriticalRegion();
  if ( *((struct _KTHREAD **)v6 + 1) == KeGetCurrentThread() )
  {
    if ( v6[6] <= 0 )
    {
      v17 = WdLogNewEntry5_WdAssertion(v8);
      *(_QWORD *)(v17 + 24) = 326LL;
      WdLogEvent5_WdAssertion(v17);
    }
    ++v6[6];
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v6 + 4, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v18 = v6[7];
        if ( v18 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v8, &EventBlockThread, v9, v18);
      }
      _InterlockedIncrement64((volatile signed __int64 *)v6);
      ExAcquirePushLockExclusiveEx(v6 + 4, 0LL);
    }
    if ( *((_QWORD *)v6 + 1) )
    {
      v19 = WdLogNewEntry5_WdAssertion(v8);
      *(_QWORD *)(v19 + 24) = 350LL;
      WdLogEvent5_WdAssertion(v19);
    }
    if ( v6[6] )
    {
      v20 = WdLogNewEntry5_WdAssertion(v8);
      *(_QWORD *)(v20 + 24) = 351LL;
      WdLogEvent5_WdAssertion(v20);
    }
    *((_QWORD *)v6 + 1) = KeGetCurrentThread();
    v6[6] = 1;
  }
  v24 = 1;
  if ( (unsigned int)v3 >= *((_DWORD *)this + 18) )
    v10 = 0LL;
  else
    v10 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v3);
  v11 = (int *)v23;
  v24 = 0;
  if ( v23[1] != KeGetCurrentThread() )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v8, v7, v9);
    v21[3] = 275LL;
    v21[4] = 4LL;
    v21[5] = v11;
    v21[6] = 0LL;
    v21[7] = 0LL;
    WdLogEvent5_WdCriticalError(v21);
  }
  if ( v11[6] <= 0 )
  {
    v22 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v22 + 24) = 370LL;
    WdLogEvent5_WdAssertion(v22);
  }
  if ( v11[6]-- == 1 )
  {
    *((_QWORD *)v11 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v11 + 4, 0LL);
  }
  KeLeaveCriticalRegion();
  return (struct DXGSESSIONDATA *)v10;
}
