/*
 * XREFs of DxgkReleaseSessionModeChangeLock @ 0x1C00979E0
 * Callers:
 *     ?ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ @ 0x1C0007070 (-ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ.c)
 *     DpiGdoDispatchInternalIoctl @ 0x1C00A9560 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006D20 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0006F38 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall DxgkReleaseSessionModeChangeLock(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 CurrentProcessSessionId; // rdi
  __int64 v5; // r8
  __int64 v6; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  DXGFASTMUTEX *v13; // [rsp+20h] [rbp-18h] BYREF
  char v14; // [rsp+28h] [rbp-10h]

  v2 = *((_QWORD *)DXGGLOBAL::GetGlobal(a1) + 88);
  if ( !v2 )
    goto LABEL_10;
  v14 = 0;
  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId();
  v13 = (DXGFASTMUTEX *)(v2 + 104);
  if ( v2 == -104 )
  {
    v6 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v6 + 24) = 451LL;
    WdLogEvent5_WdAssertion(v6);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)v13 == CurrentThread )
  {
    v8 = WdLogNewEntry5_WdAssertion(CurrentThread);
    *(_QWORD *)(v8 + 24) = 458LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( v14 )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v3, v5);
    v9[5] = &v13;
    v9[3] = 275LL;
    v9[4] = 4LL;
    v9[6] = 0LL;
    v9[7] = 0LL;
    WdLogEvent5_WdCriticalError(v9);
  }
  DXGFASTMUTEX::Acquire((union _LARGE_INTEGER *)v13);
  v14 = 1;
  if ( (unsigned int)CurrentProcessSessionId >= *(_DWORD *)(v2 + 96) )
  {
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v13);
LABEL_10:
    v10 = 0LL;
    goto LABEL_11;
  }
  _mm_lfence();
  v10 = *(_QWORD *)(*(_QWORD *)(v2 + 64) + 8 * CurrentProcessSessionId);
  v14 = 0;
  DXGFASTMUTEX::Release(v13);
LABEL_11:
  if ( v10 )
  {
    v12 = v10 + 18536;
    if ( *(struct _KTHREAD **)(v10 + 18544) == KeGetCurrentThread() )
    {
      *(_QWORD *)(v10 + 18544) = 0LL;
      ExReleasePushLockExclusiveEx(v12, 0LL);
    }
    else
    {
      ExReleasePushLockSharedEx(v12, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  else
  {
    v11 = WdLogNewEntry5_WdAssertion(v1);
    *(_QWORD *)(v11 + 24) = 198LL;
    WdLogEvent5_WdAssertion(v11);
  }
}
