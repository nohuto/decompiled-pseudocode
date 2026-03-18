/*
 * XREFs of ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C008DAD0
 * Callers:
 *     _lambda_8b89794ce108b1133e9a3853d0f5c408_::_helper_func_cdecl_ @ 0x1C008D8B0 (_lambda_8b89794ce108b1133e9a3853d0f5c408_--_helper_func_cdecl_.c)
 *     _lambda_01e55edfa3d0a32d4fa785aa2dca734f_::_helper_func_cdecl_ @ 0x1C008D970 (_lambda_01e55edfa3d0a32d4fa785aa2dca734f_--_helper_func_cdecl_.c)
 *     DxgkGetPresentHistory @ 0x1C00A3390 (DxgkGetPresentHistory.c)
 *     ?IsTdrAdapterUsedInSessionCallback@CTDR_GDI_RESET_THREAD@@KAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z @ 0x1C013CAE0 (-IsTdrAdapterUsedInSessionCallback@CTDR_GDI_RESET_THREAD@@KAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z.c)
 *     ?MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ @ 0x1C0157BF8 (-MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ.c)
 * Callees:
 *     Template_q @ 0x1C00102BC (Template_q.c)
 */

struct DXGSESSIONDATA *__fastcall DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
        DXGSESSIONMGR *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rsi
  __int64 v6; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v8; // rax
  _QWORD *v9; // rax
  int *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  int v16; // r9d
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdi
  int *v20; // rbx
  _QWORD *v21; // rax
  __int64 v22; // rax
  struct _KTHREAD **v25; // [rsp+20h] [rbp-18h] BYREF
  char v26; // [rsp+28h] [rbp-10h]

  v4 = (unsigned int)a2;
  v25 = (struct _KTHREAD **)((char *)this + 80);
  v26 = 0;
  if ( this == (DXGSESSIONMGR *)-80LL )
  {
    v6 = WdLogNewEntry5_WdAssertion(-80LL, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 421LL;
    WdLogEvent5_WdAssertion(v6);
  }
  CurrentThread = KeGetCurrentThread();
  if ( v25[1] == CurrentThread )
  {
    v8 = WdLogNewEntry5_WdAssertion(CurrentThread, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = 428LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( v26 )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, a2, a3);
    v9[5] = &v25;
    v9[3] = 275LL;
    v9[4] = 4LL;
    v9[6] = 0LL;
    v9[7] = 0LL;
    WdLogEvent5_WdCriticalError(v9);
  }
  v10 = (int *)v25;
  KeEnterCriticalRegion();
  if ( *((struct _KTHREAD **)v10 + 1) == KeGetCurrentThread() )
  {
    if ( v10[6] <= 0 )
    {
      v15 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
      *(_QWORD *)(v15 + 24) = 319LL;
      WdLogEvent5_WdAssertion(v15);
    }
    ++v10[6];
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v10 + 4, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v16 = v10[7];
        if ( v16 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_q(v12, &EventBlockThread, v13, v16);
      }
      _InterlockedIncrement64((volatile signed __int64 *)v10);
      ExAcquirePushLockExclusiveEx(v10 + 4, 0LL);
    }
    if ( *((_QWORD *)v10 + 1) )
    {
      v17 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
      *(_QWORD *)(v17 + 24) = 343LL;
      WdLogEvent5_WdAssertion(v17);
    }
    if ( v10[6] )
    {
      v18 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
      *(_QWORD *)(v18 + 24) = 344LL;
      WdLogEvent5_WdAssertion(v18);
    }
    *((_QWORD *)v10 + 1) = KeGetCurrentThread();
    v10[6] = 1;
  }
  v26 = 1;
  if ( (unsigned int)v4 < *((_DWORD *)this + 18) )
    v19 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v4);
  else
    v19 = 0LL;
  v20 = (int *)v25;
  v26 = 0;
  if ( v25[1] != KeGetCurrentThread() )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v12, v11, v13);
    v21[3] = 275LL;
    v21[4] = 4LL;
    v21[5] = v20;
    v21[6] = 0LL;
    v21[7] = 0LL;
    WdLogEvent5_WdCriticalError(v21);
  }
  if ( v20[6] <= 0 )
  {
    v22 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    *(_QWORD *)(v22 + 24) = 363LL;
    WdLogEvent5_WdAssertion(v22);
  }
  if ( v20[6]-- == 1 )
  {
    *((_QWORD *)v20 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v20 + 4, 0LL);
  }
  KeLeaveCriticalRegion();
  return (struct DXGSESSIONDATA *)v19;
}
