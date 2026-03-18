/*
 * XREFs of DxgkReleaseSessionModeChangeLock @ 0x1C008C4A4
 * Callers:
 *     ?ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ @ 0x1C0004D18 (-ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ.c)
 *     DpiGdoDispatchInternalIoctl @ 0x1C00613E0 (DpiGdoDispatchInternalIoctl.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C008B8C0 (DxgkGetAdapterDeviceDesc.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0004A54 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 */

void __fastcall DxgkReleaseSessionModeChangeLock(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct DXGGLOBAL *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 CurrentProcessSessionId; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbx
  __int64 v20; // rax
  DXGFASTMUTEX *v21; // rdi
  _QWORD *v22; // rax
  __int64 v23; // rax
  __int64 v25; // rcx
  DXGFASTMUTEX *v26; // [rsp+20h] [rbp-18h] BYREF
  char v27; // [rsp+28h] [rbp-10h]

  v4 = DXGGLOBAL::m_pGlobal;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v5 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v5 + 24) = 1038LL;
    WdLogEvent5_WdAssertion(v5);
    v4 = DXGGLOBAL::m_pGlobal;
  }
  v6 = *((_QWORD *)v4 + 70);
  if ( !v6 )
    goto LABEL_12;
  v27 = 0;
  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(a1, a2, a3, a4);
  v26 = (DXGFASTMUTEX *)(v6 + 80);
  if ( v6 == -80 )
  {
    v11 = WdLogNewEntry5_WdAssertion(0LL, v7, v9, v10);
    *(_QWORD *)(v11 + 24) = 421LL;
    WdLogEvent5_WdAssertion(v11);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *((struct _KTHREAD **)v26 + 1) == CurrentThread )
  {
    v13 = WdLogNewEntry5_WdAssertion(CurrentThread, v7, v9, v10);
    *(_QWORD *)(v13 + 24) = 428LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( v27 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v7, v9);
    v14[5] = &v26;
    v14[3] = 275LL;
    v14[4] = 4LL;
    v14[6] = 0LL;
    v14[7] = 0LL;
    WdLogEvent5_WdCriticalError(v14);
  }
  DXGFASTMUTEX::Acquire(v26);
  v27 = 1;
  if ( (unsigned int)CurrentProcessSessionId >= *(_DWORD *)(v6 + 72) )
  {
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v26);
LABEL_12:
    v19 = 0LL;
    goto LABEL_13;
  }
  _mm_lfence();
  v19 = *(_QWORD *)(*(_QWORD *)(v6 + 40) + 8 * CurrentProcessSessionId);
  v21 = v26;
  v27 = 0;
  if ( *((struct _KTHREAD **)v26 + 1) != KeGetCurrentThread() )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16, v15, v17);
    v22[3] = 275LL;
    v22[4] = 4LL;
    v22[5] = v21;
    v22[6] = 0LL;
    v22[7] = 0LL;
    WdLogEvent5_WdCriticalError(v22);
  }
  if ( *((int *)v21 + 6) <= 0 )
  {
    v23 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
    *(_QWORD *)(v23 + 24) = 363LL;
    WdLogEvent5_WdAssertion(v23);
  }
  if ( (*((_DWORD *)v21 + 6))-- == 1 )
  {
    *((_QWORD *)v21 + 1) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v21 + 16, 0LL);
  }
  KeLeaveCriticalRegion();
LABEL_13:
  if ( v19 )
  {
    v25 = v19 + 18512;
    if ( *(struct _KTHREAD **)(v19 + 18520) == KeGetCurrentThread() )
    {
      *(_QWORD *)(v19 + 18520) = 0LL;
      ExReleasePushLockExclusiveEx(v25, 0LL);
    }
    else
    {
      ExReleasePushLockSharedEx(v25, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  else
  {
    v20 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v20 + 24) = 198LL;
    WdLogEvent5_WdAssertion(v20);
  }
}
