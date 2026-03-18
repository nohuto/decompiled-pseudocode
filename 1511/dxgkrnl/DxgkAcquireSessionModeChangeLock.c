/*
 * XREFs of DxgkAcquireSessionModeChangeLock @ 0x1C0097B30
 * Callers:
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007098 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     DpiGdoDispatchInternalIoctl @ 0x1C00A9560 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001BC8 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006D20 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0006F38 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkAcquireSessionModeChangeLock(__int64 a1)
{
  char v1; // si
  __int64 v2; // rcx
  __int64 v3; // rbx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rbx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // r9d
  DXGFASTMUTEX *v19; // [rsp+20h] [rbp-18h] BYREF
  char v20; // [rsp+28h] [rbp-10h]

  v1 = a1;
  v3 = *((_QWORD *)DXGGLOBAL::GetGlobal(a1) + 88);
  if ( !v3 )
    goto LABEL_10;
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  v7 = v3 + 104;
  v20 = 0;
  v8 = CurrentProcessSessionId;
  v19 = (DXGFASTMUTEX *)(v3 + 104);
  if ( v3 == -104 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v9 + 24) = 451LL;
    WdLogEvent5_WdAssertion(v9);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)v19 == CurrentThread )
  {
    v11 = WdLogNewEntry5_WdAssertion(CurrentThread);
    *(_QWORD *)(v11 + 24) = 458LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( v20 )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v7, v6);
    v12[5] = &v19;
    v12[3] = 275LL;
    v12[4] = 4LL;
    v12[6] = 0LL;
    v12[7] = 0LL;
    WdLogEvent5_WdCriticalError(v12);
  }
  DXGFASTMUTEX::Acquire((union _LARGE_INTEGER *)v19);
  v20 = 1;
  if ( (unsigned int)v8 >= *(_DWORD *)(v3 + 96) )
  {
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v19);
LABEL_10:
    v13 = 0LL;
    goto LABEL_11;
  }
  _mm_lfence();
  v13 = *(_QWORD *)(*(_QWORD *)(v3 + 64) + 8 * v8);
  v20 = 0;
  DXGFASTMUTEX::Release(v19);
LABEL_11:
  if ( v13 )
  {
    if ( v1 )
    {
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v13 + 18536));
    }
    else
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v13 + 18536, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v18 = *(_DWORD *)(v13 + 18552);
          if ( v18 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
            Template_q(v16, &EventBlockThread, v17, v18);
        }
        ExAcquirePushLockSharedEx(v13 + 18536, 0LL);
      }
    }
    return 0LL;
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v2);
    *(_QWORD *)(v14 + 24) = (unsigned int)PsGetCurrentProcessSessionId();
    *(_QWORD *)(v14 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v14);
    return 3221225485LL;
  }
}
