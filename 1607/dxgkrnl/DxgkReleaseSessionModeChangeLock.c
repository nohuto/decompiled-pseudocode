/*
 * XREFs of DxgkReleaseSessionModeChangeLock @ 0x1C0079D88
 * Callers:
 *     ?ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ @ 0x1C00017E4 (-ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ.c)
 *     ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C0079520 (-DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     DpiGdoDispatchInternalIoctl @ 0x1C00C1860 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006D20 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void DxgkReleaseSessionModeChangeLock()
{
  __int64 v0; // rcx
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 CurrentProcessSessionId; // rdi
  __int64 v4; // r8
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rax
  DXGFASTMUTEX *v12; // [rsp+20h] [rbp-18h] BYREF
  char v13; // [rsp+28h] [rbp-10h]

  v1 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 69);
  if ( v1 )
  {
    v13 = 0;
    CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId();
    v12 = (DXGFASTMUTEX *)(v1 + 80);
    if ( v1 == -80 )
    {
      v8 = WdLogNewEntry5_WdAssertion(0LL);
      *(_QWORD *)(v8 + 24) = 428LL;
      WdLogEvent5_WdAssertion(v8);
    }
    CurrentThread = KeGetCurrentThread();
    if ( *((struct _KTHREAD **)v12 + 1) == CurrentThread )
    {
      v9 = WdLogNewEntry5_WdAssertion(CurrentThread);
      *(_QWORD *)(v9 + 24) = 435LL;
      WdLogEvent5_WdAssertion(v9);
    }
    if ( v13 )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v2, v4);
      v10[5] = &v12;
      v10[3] = 275LL;
      v10[4] = 4LL;
      v10[6] = 0LL;
      v10[7] = 0LL;
      WdLogEvent5_WdCriticalError(v10);
    }
    DXGFASTMUTEX::Acquire(v12);
    v13 = 1;
    if ( (unsigned int)CurrentProcessSessionId < *(_DWORD *)(v1 + 72) )
    {
      _mm_lfence();
      v6 = *(_QWORD *)(*(_QWORD *)(v1 + 40) + 8 * CurrentProcessSessionId);
      v13 = 0;
      DXGFASTMUTEX::Release((struct _KTHREAD **)v12);
      goto LABEL_10;
    }
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v12);
  }
  v6 = 0LL;
LABEL_10:
  if ( v6 )
  {
    v7 = v6 + 18512;
    if ( *(struct _KTHREAD **)(v6 + 18520) == KeGetCurrentThread() )
    {
      *(_QWORD *)(v6 + 18520) = 0LL;
      ExReleasePushLockExclusiveEx(v7, 0LL);
    }
    else
    {
      ExReleasePushLockSharedEx(v7, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  else
  {
    v11 = WdLogNewEntry5_WdAssertion(v0);
    *(_QWORD *)(v11 + 24) = 198LL;
    WdLogEvent5_WdAssertion(v11);
  }
}
