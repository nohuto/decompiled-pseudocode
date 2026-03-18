/*
 * XREFs of DxgkAcquireSessionModeChangeLock @ 0x1C008C260
 * Callers:
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0004D38 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     DpiGdoDispatchInternalIoctl @ 0x1C00613E0 (DpiGdoDispatchInternalIoctl.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C008B8C0 (DxgkGetAdapterDeviceDesc.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002E50 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0004A54 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 */

__int64 __fastcall DxgkAcquireSessionModeChangeLock(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct DXGGLOBAL *v4; // rax
  char v5; // si
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 CurrentProcessSessionId; // rdi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdi
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v27; // rax
  DXGFASTMUTEX *v28; // rbx
  _QWORD *v29; // rax
  __int64 v30; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  int v34; // r9d
  DXGFASTMUTEX *v35; // [rsp+20h] [rbp-18h] BYREF
  char v36; // [rsp+28h] [rbp-10h]

  v4 = DXGGLOBAL::m_pGlobal;
  v5 = a1;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 1038LL;
    WdLogEvent5_WdAssertion(v6);
    v4 = DXGGLOBAL::m_pGlobal;
  }
  v7 = *((_QWORD *)v4 + 70);
  if ( !v7 )
    goto LABEL_12;
  v36 = 0;
  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(a1, a2, a3, a4);
  v35 = (DXGFASTMUTEX *)(v7 + 80);
  if ( v7 == -80 )
  {
    v12 = WdLogNewEntry5_WdAssertion(0LL, v8, v10, v11);
    *(_QWORD *)(v12 + 24) = 421LL;
    WdLogEvent5_WdAssertion(v12);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *((struct _KTHREAD **)v35 + 1) == CurrentThread )
  {
    v14 = WdLogNewEntry5_WdAssertion(CurrentThread, v8, v10, v11);
    *(_QWORD *)(v14 + 24) = 428LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( v36 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v8, v10);
    v15[5] = &v35;
    v15[3] = 275LL;
    v15[4] = 4LL;
    v15[6] = 0LL;
    v15[7] = 0LL;
    WdLogEvent5_WdCriticalError(v15);
  }
  DXGFASTMUTEX::Acquire(v35);
  v36 = 1;
  if ( (unsigned int)CurrentProcessSessionId >= *(_DWORD *)(v7 + 72) )
  {
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v35);
LABEL_12:
    v20 = 0LL;
    goto LABEL_13;
  }
  _mm_lfence();
  v27 = *(_QWORD *)(v7 + 40);
  v28 = v35;
  v20 = *(_QWORD *)(v27 + 8 * CurrentProcessSessionId);
  v36 = 0;
  if ( *((struct _KTHREAD **)v35 + 1) != KeGetCurrentThread() )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v16, v18);
    v29[3] = 275LL;
    v29[4] = 4LL;
    v29[5] = v28;
    v29[6] = 0LL;
    v29[7] = 0LL;
    WdLogEvent5_WdCriticalError(v29);
  }
  if ( *((int *)v28 + 6) <= 0 )
  {
    v30 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
    *(_QWORD *)(v30 + 24) = 363LL;
    WdLogEvent5_WdAssertion(v30);
  }
  if ( (*((_DWORD *)v28 + 6))-- == 1 )
  {
    *((_QWORD *)v28 + 1) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v28 + 16, 0LL);
  }
  KeLeaveCriticalRegion();
LABEL_13:
  if ( v20 )
  {
    if ( v5 )
    {
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v20 + 18512));
    }
    else
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v20 + 18512, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v34 = *(_DWORD *)(v20 + 18528);
          if ( v34 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
            Template_q(v32, &EventBlockThread, v33, v34);
        }
        ExAcquirePushLockSharedEx(v20 + 18512, 0LL);
      }
    }
    return 0LL;
  }
  else
  {
    v21 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v21 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v23, v22, v24, v25);
    *(_QWORD *)(v21 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v21);
    return 3221225485LL;
  }
}
