/*
 * XREFs of PopHandleWakeSources @ 0x1403A5A04
 * Callers:
 *     PoBroadcastSystemState @ 0x1403A49B4 (PoBroadcastSystemState.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x14002C018 (KeInitializeTimerEx.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KeSetTimer @ 0x140091530 (KeSetTimer.c)
 *     KeInitializeDpc @ 0x140093330 (KeInitializeDpc.c)
 *     PopWakeInfoReference @ 0x1400F4714 (PopWakeInfoReference.c)
 *     PopReleaseWakeSourceSpinLock @ 0x14011A5C4 (PopReleaseWakeSourceSpinLock.c)
 *     PopAcquireWakeSourceSpinLock @ 0x14011A800 (PopAcquireWakeSourceSpinLock.c)
 *     ExCopyWakeTimerInfo @ 0x1402144A8 (ExCopyWakeTimerInfo.c)
 *     PopValidateRTCWake @ 0x1403A5BB4 (PopValidateRTCWake.c)
 *     PopFinalizeWakeInfo @ 0x1404F8C68 (PopFinalizeWakeInfo.c)
 *     PopNewWakeSource @ 0x140635E8C (PopNewWakeSource.c)
 *     PopUnlinkWakeSources @ 0x140636044 (PopUnlinkWakeSources.c)
 */

BOOLEAN PopHandleWakeSources()
{
  int v0; // edi
  __int64 v1; // rsi
  SIZE_T *v3; // rbp
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 *v6; // rdx
  __int64 **v7; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  char v9; // [rsp+60h] [rbp+8h] BYREF

  v0 = 0;
  v9 = 0;
  if ( (PopSimulate & 0x200000) == 0 && (PopFixedWakeSourceMask & 1) == 0 )
  {
    if ( (PopSimulate & 0x400000) == 0 && (PopFixedWakeSourceMask & 2) == 0 )
    {
      if ( (unsigned __int8)PopValidateRTCWake(&v9) && (PopSimulate & 0x100000) == 0 )
        v0 = 4;
    }
    else
    {
      v0 = 2;
    }
  }
  else
  {
    v0 = 1;
  }
  PopAcquireWakeSourceSpinLock(&LockHandle);
  v1 = PopCurrentWakeInfo;
  if ( PopCurrentWakeInfo && !v0 )
    PopWakeInfoReference(PopCurrentWakeInfo);
  PopReleaseWakeSourceSpinLock(&LockHandle);
  if ( !v1 )
    return KeSetEvent(&PopWakeSourceAvailable, 0, 0);
  if ( v0 )
  {
    if ( (unsigned __int64)dword_1402DE0E0 >= 3 )
      v3 = 0LL;
    else
      v3 = (SIZE_T *)qword_1402DE0F8[3 * dword_1402DE0E0];
    if ( v0 == 4 )
    {
      if ( (unsigned __int64)v3 > 0xFFFFFFFFFFFFFFFDuLL )
      {
        v4 = 4LL;
      }
      else if ( v9 )
      {
        v4 = 3LL;
      }
      else
      {
        v4 = 2LL;
      }
    }
    else
    {
      v4 = 1LL;
    }
    v5 = PopNewWakeSource(v4);
    PopAcquireWakeSourceSpinLock(&LockHandle);
    PopCurrentWakeInfo = 0LL;
    PopReleaseWakeSourceSpinLock(&LockHandle);
    PopUnlinkWakeSources(v1);
    if ( v5 )
    {
      if ( (unsigned int)(*(_DWORD *)(v5 + 16) - 2) <= 1 )
      {
        ExCopyWakeTimerInfo(v3, (_QWORD *)(v5 + 24));
      }
      else if ( v3 == (SIZE_T *)-1LL )
      {
        *(_DWORD *)(v5 + 24) = 0;
      }
      else
      {
        if ( v3 == (SIZE_T *)-2LL )
          v0 = 1;
        *(_DWORD *)(v5 + 24) = v0;
      }
      v6 = *(__int64 **)(v1 + 32);
      *(_QWORD *)v5 = v1 + 24;
      *(_QWORD *)(v5 + 8) = v6;
      if ( *v6 != v1 + 24 )
        __fastfail(3u);
      *v6 = v5;
      *(_QWORD *)(v1 + 32) = v5;
      *(_DWORD *)(v1 + 40) = 1;
    }
    PopAcquireWakeSourceSpinLock(&LockHandle);
    v7 = (__int64 **)qword_1402DEC88;
    *(_QWORD *)v1 = &PopWakeInfoList;
    *(_QWORD *)(v1 + 8) = v7;
    if ( *v7 != &PopWakeInfoList )
      __fastfail(3u);
    ++PopWakeInfoCount;
    *v7 = (__int64 *)v1;
    qword_1402DEC88 = v1;
    PopReleaseWakeSourceSpinLock(&LockHandle);
    return PopFinalizeWakeInfo(v1);
  }
  else
  {
    KeInitializeDpc((PRKDPC)(v1 + 48), (PKDEFERRED_ROUTINE)PopWakeSourceTimeoutDpc, 0LL);
    KeInitializeTimerEx((PKTIMER)(v1 + 112), NotificationTimer);
    return KeSetTimer((PKTIMER)(v1 + 112), (LARGE_INTEGER)-20000000LL, (PKDPC)(v1 + 48));
  }
}
