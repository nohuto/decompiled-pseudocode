/*
 * XREFs of EtwpUnreferenceGuidEntry @ 0x140435D70
 * Callers:
 *     NtTraceEvent @ 0x1400741D0 (NtTraceEvent.c)
 *     EtwGetProviderIdFromHandle @ 0x140123884 (EtwGetProviderIdFromHandle.c)
 *     EtwpDisallowedGuidRemoval @ 0x1403B5278 (EtwpDisallowedGuidRemoval.c)
 *     EtwpRegisterUMGuid @ 0x140435640 (EtwpRegisterUMGuid.c)
 *     EtwpDeleteRegistrationObject @ 0x140435A20 (EtwpDeleteRegistrationObject.c)
 *     EtwpAddRegEntryToGroup @ 0x14046CBFC (EtwpAddRegEntryToGroup.c)
 *     EtwpGetTraceGuidInfo @ 0x1404BF9D8 (EtwpGetTraceGuidInfo.c)
 *     EtwpRegisterProvider @ 0x1404CC76C (EtwpRegisterProvider.c)
 *     EtwpNotifyGuid @ 0x1404CCB9C (EtwpNotifyGuid.c)
 *     EtwpGetNextGuidEntry @ 0x1404CCE6C (EtwpGetNextGuidEntry.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1404CCFEC (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpEnableGuid @ 0x1404CD4B0 (EtwpEnableGuid.c)
 *     EtwpUpdateGuidEnableInfo @ 0x1404CE9C4 (EtwpUpdateGuidEnableInfo.c)
 *     EtwpDisallowedGuidAddition @ 0x1404CFA30 (EtwpDisallowedGuidAddition.c)
 *     EtwUnregister @ 0x1404D02C4 (EtwUnregister.c)
 *     EtwpGetTraceGroupInfo @ 0x1406602C4 (EtwpGetTraceGroupInfo.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     EtwpGetSiloDriverState @ 0x140077640 (EtwpGetSiloDriverState.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     EtwpFreeGuidEntry @ 0x1404B68D8 (EtwpFreeGuidEntry.c)
 */

__int64 __fastcall EtwpUnreferenceGuidEntry(__int64 *BugCheckParameter2)
{
  __int64 v2; // rsi
  int v4; // ebp
  __int64 SiloDriverState; // rax
  __int64 v6; // r14
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v8; // rbp
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 *v11; // rcx
  __int64 **v12; // rax

  v2 = _InterlockedDecrement64(BugCheckParameter2 + 2);
  if ( v2 )
  {
    if ( v2 < 0 )
      KeBugCheckEx(0x11Du, 9uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  }
  else
  {
    v4 = *((_DWORD *)BugCheckParameter2 + 6) ^ *((_DWORD *)BugCheckParameter2 + 7) ^ *((_DWORD *)BugCheckParameter2 + 8) ^ *((_DWORD *)BugCheckParameter2 + 9);
    SiloDriverState = EtwpGetSiloDriverState((PVOID)0xFFFFFFFFFFFFFFFFLL);
    v6 = SiloDriverState + 1472;
    if ( SiloDriverState )
      PsDereferenceMonitorContextServerSilo(SiloDriverState);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v8 = (unsigned __int64 *)(v6 + 56LL * (v4 & 0x3F));
    v9 = KeAbPreAcquire((ULONG_PTR)v8, 0LL, 0LL);
    v10 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
      ExfAcquirePushLockExclusiveEx(v8, v9, (ULONG_PTR)v8);
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
    v11 = (__int64 *)*BugCheckParameter2;
    v12 = (__int64 **)BugCheckParameter2[1];
    if ( *(__int64 **)(*BugCheckParameter2 + 8) != BugCheckParameter2 || *v12 != BugCheckParameter2 )
      __fastfail(3u);
    *v12 = v11;
    v11[1] = (__int64)v12;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v8);
    KeAbPostRelease((ULONG_PTR)v8);
    KeLeaveCriticalRegion();
    EtwpFreeGuidEntry(BugCheckParameter2);
  }
  return v2;
}
