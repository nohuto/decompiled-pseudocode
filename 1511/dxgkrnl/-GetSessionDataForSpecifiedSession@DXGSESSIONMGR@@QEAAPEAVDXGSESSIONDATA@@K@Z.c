/*
 * XREFs of ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C009E150
 * Callers:
 *     DxgkGetPresentHistory @ 0x1C00956B0 (DxgkGetPresentHistory.c)
 *     ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C009DC20 (-EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     sub_1C009DF90 @ 0x1C009DF90 (sub_1C009DF90.c)
 *     ?IsTdrAdapterUsedInSessionCallback@CTDR_GDI_RESET_THREAD@@KAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z @ 0x1C0142F10 (-IsTdrAdapterUsedInSessionCallback@CTDR_GDI_RESET_THREAD@@KAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z.c)
 *     ?MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ @ 0x1C015BF10 (-MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ.c)
 * Callees:
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 */

struct DXGSESSIONDATA *__fastcall DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
        DXGSESSIONMGR *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rsi
  __int64 v5; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v7; // rax
  _QWORD *v8; // rax
  struct _KTHREAD **v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  int v14; // r9d
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdi
  struct _KTHREAD **v18; // rbx
  struct _KTHREAD *v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rax
  struct _KTHREAD **v24; // [rsp+30h] [rbp-18h] BYREF
  char v25; // [rsp+38h] [rbp-10h]

  v3 = (unsigned int)a2;
  v24 = (struct _KTHREAD **)((char *)this + 104);
  v25 = 0;
  if ( this == (DXGSESSIONMGR *)-104LL )
  {
    v5 = WdLogNewEntry5_WdAssertion(-104LL);
    *(_QWORD *)(v5 + 24) = 451LL;
    WdLogEvent5_WdAssertion(v5);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *v24 == CurrentThread )
  {
    v7 = WdLogNewEntry5_WdAssertion(CurrentThread);
    *(_QWORD *)(v7 + 24) = 458LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( v25 )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, a2, a3);
    v8[5] = &v24;
    v8[3] = 275LL;
    v8[4] = 4LL;
    v8[6] = 0LL;
    v8[7] = 0LL;
    WdLogEvent5_WdCriticalError(v8);
  }
  v9 = v24;
  KeEnterCriticalRegion();
  if ( _InterlockedIncrement((volatile signed __int32 *)v9 + 2) > 1 )
  {
    if ( *v9 == KeGetCurrentThread() )
    {
      if ( *((int *)v9 + 3) <= 0 )
      {
        v13 = WdLogNewEntry5_WdAssertion(v11);
        *(_QWORD *)(v13 + 24) = 328LL;
        WdLogEvent5_WdAssertion(v13);
      }
      ++*((_DWORD *)v9 + 3);
      goto LABEL_22;
    }
    if ( bTracingEnabled )
    {
      v14 = *((_DWORD *)v9 + 14);
      if ( v14 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v11, &EventBlockThread, v12, v14);
    }
    ExInterlockedAddLargeInteger((PLARGE_INTEGER)v9 + 2, (LARGE_INTEGER)1LL, (PKSPIN_LOCK)v9 + 6);
    KeWaitForSingleObject(v9 + 3, Executive, 0, 0, 0LL);
  }
  if ( *v9 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v15 + 24) = 354LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( *((_DWORD *)v9 + 3) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v16 + 24) = 355LL;
    WdLogEvent5_WdAssertion(v16);
  }
  *v9 = KeGetCurrentThread();
  *((_DWORD *)v9 + 3) = 1;
LABEL_22:
  v25 = 1;
  if ( (unsigned int)v3 < *((_DWORD *)this + 24) )
    v17 = *(_QWORD *)(*((_QWORD *)this + 8) + 8 * v3);
  else
    v17 = 0LL;
  v18 = v24;
  v25 = 0;
  v19 = KeGetCurrentThread();
  if ( *v24 != v19 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v10, v12);
    v20[3] = 275LL;
    v20[4] = 4LL;
    v20[5] = v18;
    v20[6] = 0LL;
    v20[7] = 0LL;
    WdLogEvent5_WdCriticalError(v20);
  }
  if ( *((int *)v18 + 3) <= 0 )
  {
    v21 = WdLogNewEntry5_WdAssertion(v19);
    *(_QWORD *)(v21 + 24) = 374LL;
    WdLogEvent5_WdAssertion(v21);
  }
  if ( (*((_DWORD *)v18 + 3))-- == 1 )
  {
    *v18 = 0LL;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v18 + 2, 0xFFFFFFFF) != 1 )
      KeSetEvent((PRKEVENT)v18 + 1, 0, 0);
  }
  else
  {
    _InterlockedDecrement((volatile signed __int32 *)v18 + 2);
  }
  KeLeaveCriticalRegion();
  return (struct DXGSESSIONDATA *)v17;
}
