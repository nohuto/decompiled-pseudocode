/*
 * XREFs of ?GetFullMDL@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAU_MDL@@PEAX@Z @ 0x1C005FC70
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C0013A2C (Template_q.c)
 *     ?GetFullMDL@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAU_MDL@@XZ @ 0x1C005EB30 (-GetFullMDL@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAU_MDL@@XZ.c)
 */

struct _MDL *__fastcall VIDMM_RECYCLE_HEAP_MGR::GetFullMDL(VIDMM_RECYCLE_HEAP_MGR *this, VIDMM_RECYCLE_MULTIRANGE *a2)
{
  int *v2; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct _MDL *result; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _MDL *v13; // rdi
  int *v14; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // rax
  __int64 v23; // rax
  int v24; // r9d
  __int64 v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rax
  struct _KTHREAD **v29; // [rsp+20h] [rbp-18h] BYREF
  char v30; // [rsp+28h] [rbp-10h]

  v2 = (int *)((char *)this + 896);
  v30 = 0;
  v29 = (struct _KTHREAD **)((char *)this + 896);
  if ( this == (VIDMM_RECYCLE_HEAP_MGR *)-896LL )
  {
    v17 = WdLogNewEntry5_WdAssertion(-896LL, a2);
    *(_QWORD *)(v17 + 24) = 428LL;
    WdLogEvent5_WdAssertion(v17);
    if ( v30 )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v18, v20, v21);
      v22[5] = &v29;
      v22[3] = 275LL;
      v22[4] = 4LL;
      v22[6] = 0LL;
      v22[7] = 0LL;
      WdLogEvent5_WdCriticalError(v22);
    }
    v2 = (int *)v29;
  }
  KeEnterCriticalRegion();
  if ( *((struct _KTHREAD **)v2 + 1) == KeGetCurrentThread() )
  {
    if ( v2[6] <= 0 )
    {
      v23 = WdLogNewEntry5_WdAssertion(v5, v4);
      *(_QWORD *)(v23 + 24) = 326LL;
      WdLogEvent5_WdAssertion(v23);
    }
    ++v2[6];
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v2 + 4, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v24 = v2[7];
        if ( v24 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v7, &EventBlockThread, v8, v24);
      }
      _InterlockedIncrement64((volatile signed __int64 *)v2);
      ExAcquirePushLockExclusiveEx(v2 + 4, 0LL);
    }
    if ( *((_QWORD *)v2 + 1) )
    {
      v25 = WdLogNewEntry5_WdAssertion(v7, v6);
      *(_QWORD *)(v25 + 24) = 350LL;
      WdLogEvent5_WdAssertion(v25);
    }
    if ( v2[6] )
    {
      v26 = WdLogNewEntry5_WdAssertion(v7, v6);
      *(_QWORD *)(v26 + 24) = 351LL;
      WdLogEvent5_WdAssertion(v26);
    }
    *((_QWORD *)v2 + 1) = KeGetCurrentThread();
    v2[6] = 1;
  }
  v30 = 1;
  result = VIDMM_RECYCLE_MULTIRANGE::GetFullMDL(a2);
  v13 = result;
  if ( v30 )
  {
    v14 = (int *)v29;
    v30 = 0;
    CurrentThread = KeGetCurrentThread();
    if ( v29[1] != CurrentThread )
    {
      v27 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v10, v11, v12);
      v27[3] = 275LL;
      v27[4] = 4LL;
      v27[5] = v14;
      v27[6] = 0LL;
      v27[7] = 0LL;
      WdLogEvent5_WdCriticalError(v27);
    }
    if ( v14[6] <= 0 )
    {
      v28 = WdLogNewEntry5_WdAssertion(CurrentThread, v10);
      *(_QWORD *)(v28 + 24) = 370LL;
      WdLogEvent5_WdAssertion(v28);
    }
    if ( v14[6]-- == 1 )
    {
      *((_QWORD *)v14 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v14 + 4, 0LL);
    }
    KeLeaveCriticalRegion();
    return v13;
  }
  return result;
}
