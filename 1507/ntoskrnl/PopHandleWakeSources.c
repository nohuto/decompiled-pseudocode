/*
 * XREFs of PopHandleWakeSources @ 0x1403EF1DC
 * Callers:
 *     PoBroadcastSystemState @ 0x1403EE2D4 (PoBroadcastSystemState.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x140021284 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1400212A4 (KeInitializeDpc.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KiSetTimerEx @ 0x140068414 (KiSetTimerEx.c)
 *     PopWakeInfoReference @ 0x140131CFC (PopWakeInfoReference.c)
 *     PopReleaseWakeSourceSpinLock @ 0x140148FA8 (PopReleaseWakeSourceSpinLock.c)
 *     PopAcquireWakeSourceSpinLock @ 0x1401491E4 (PopAcquireWakeSourceSpinLock.c)
 *     ExCopyWakeTimerInfo @ 0x14026448C (ExCopyWakeTimerInfo.c)
 *     PopValidateRTCWake @ 0x1403EF394 (PopValidateRTCWake.c)
 *     PopFinalizeWakeInfo @ 0x140567934 (PopFinalizeWakeInfo.c)
 *     PopNewWakeSource @ 0x1406B5770 (PopNewWakeSource.c)
 *     PopUnlinkWakeSources @ 0x1406B5928 (PopUnlinkWakeSources.c)
 */

char PopHandleWakeSources()
{
  int v0; // esi
  __int64 v1; // rbx
  SIZE_T *v3; // rbp
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 *v6; // rcx
  __int64 **v7; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF
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
    if ( (unsigned __int64)dword_14032E698 >= 3 )
      v3 = 0LL;
    else
      v3 = (SIZE_T *)qword_14032E6B0[3 * dword_14032E698];
    if ( v0 != 4 || v3 == (SIZE_T *)-1LL )
    {
      v4 = 1LL;
    }
    else if ( v9 )
    {
      v4 = 3LL;
    }
    else
    {
      v4 = 2LL;
    }
    v5 = PopNewWakeSource(v4);
    PopAcquireWakeSourceSpinLock(&LockHandle);
    PopCurrentWakeInfo = 0LL;
    PopReleaseWakeSourceSpinLock(&LockHandle);
    PopUnlinkWakeSources(v1);
    if ( v5 )
    {
      if ( (unsigned int)(*(_DWORD *)(v5 + 16) - 2) <= 1 )
        ExCopyWakeTimerInfo(v3, (_QWORD *)(v5 + 24));
      else
        *(_DWORD *)(v5 + 24) = v0;
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
    v7 = (__int64 **)qword_14032EF38;
    *(_QWORD *)v1 = &PopWakeInfoList;
    *(_QWORD *)(v1 + 8) = v7;
    if ( *v7 != &PopWakeInfoList )
      __fastfail(3u);
    ++PopWakeInfoCount;
    *v7 = (__int64 *)v1;
    qword_14032EF38 = v1;
    PopReleaseWakeSourceSpinLock(&LockHandle);
    return PopFinalizeWakeInfo(v1);
  }
  else
  {
    KeInitializeDpc((PRKDPC)(v1 + 48), (PKDEFERRED_ROUTINE)PopWakeSourceTimeoutDpc, 0LL);
    KeInitializeTimerEx((PKTIMER)(v1 + 112), NotificationTimer);
    return KiSetTimerEx(v1 + 112, -20000000LL, 0, 0, v1 + 48);
  }
}
