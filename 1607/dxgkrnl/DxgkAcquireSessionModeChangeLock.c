/*
 * XREFs of DxgkAcquireSessionModeChangeLock @ 0x1C0079E68
 * Callers:
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C00017FC (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C0079520 (-DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     DpiGdoDispatchInternalIoctl @ 0x1C00C1860 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006D20 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009830 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkAcquireSessionModeChangeLock(char a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rbx
  int v18; // r9d
  DXGFASTMUTEX *v19; // [rsp+20h] [rbp-18h] BYREF
  char v20; // [rsp+28h] [rbp-10h]

  v3 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 69);
  if ( v3 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    v7 = v3 + 80;
    v20 = 0;
    v8 = CurrentProcessSessionId;
    v19 = (DXGFASTMUTEX *)(v3 + 80);
    if ( v3 == -80 )
    {
      v14 = WdLogNewEntry5_WdAssertion(v5);
      *(_QWORD *)(v14 + 24) = 428LL;
      WdLogEvent5_WdAssertion(v14);
    }
    CurrentThread = KeGetCurrentThread();
    if ( *((struct _KTHREAD **)v19 + 1) == CurrentThread )
    {
      v15 = WdLogNewEntry5_WdAssertion(CurrentThread);
      *(_QWORD *)(v15 + 24) = 435LL;
      WdLogEvent5_WdAssertion(v15);
    }
    if ( v20 )
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v7, v6);
      v16[5] = &v19;
      v16[3] = 275LL;
      v16[4] = 4LL;
      v16[6] = 0LL;
      v16[7] = 0LL;
      WdLogEvent5_WdCriticalError(v16);
    }
    DXGFASTMUTEX::Acquire(v19);
    v20 = 1;
    if ( (unsigned int)v8 < *(_DWORD *)(v3 + 72) )
    {
      _mm_lfence();
      v10 = *(_QWORD *)(*(_QWORD *)(v3 + 40) + 8 * v8);
      v20 = 0;
      DXGFASTMUTEX::Release((struct _KTHREAD **)v19);
      goto LABEL_10;
    }
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v19);
  }
  v10 = 0LL;
LABEL_10:
  if ( v10 )
  {
    if ( a1 )
    {
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v10 + 18512));
    }
    else
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v10 + 18512, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v18 = *(_DWORD *)(v10 + 18528);
          if ( v18 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            Template_q(v11, &EventBlockThread, v12, v18);
        }
        ExAcquirePushLockSharedEx(v10 + 18512, 0LL);
      }
    }
    return 0LL;
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(v2);
    *(_QWORD *)(v17 + 24) = (unsigned int)PsGetCurrentProcessSessionId();
    *(_QWORD *)(v17 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v17);
    return 3221225485LL;
  }
}
