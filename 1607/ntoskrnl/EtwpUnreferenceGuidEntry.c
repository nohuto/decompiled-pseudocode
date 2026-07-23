/*
 * XREFs of EtwpUnreferenceGuidEntry @ 0x14040DC0C
 * Callers:
 *     EtwGetProviderIdFromHandle @ 0x1400AE054 (EtwGetProviderIdFromHandle.c)
 *     NtTraceEvent @ 0x1400D3400 (NtTraceEvent.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140409D90 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpGetNextGuidEntry @ 0x14040B164 (EtwpGetNextGuidEntry.c)
 *     EtwpAddRegEntryToGroup @ 0x14040B73C (EtwpAddRegEntryToGroup.c)
 *     EtwpRegisterUMGuid @ 0x14040D4A0 (EtwpRegisterUMGuid.c)
 *     EtwpDeleteRegistrationObject @ 0x14040D8A0 (EtwpDeleteRegistrationObject.c)
 *     EtwpNotifyGuid @ 0x14048E9C8 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x14048EE64 (EtwpEnableGuid.c)
 *     EtwpUpdateGuidEnableInfo @ 0x1404924A0 (EtwpUpdateGuidEnableInfo.c)
 *     EtwpRegisterProvider @ 0x140492AB4 (EtwpRegisterProvider.c)
 *     EtwpGetTraceGuidInfo @ 0x1404CC1F8 (EtwpGetTraceGuidInfo.c)
 *     EtwUnregister @ 0x140548DF0 (EtwUnregister.c)
 *     EtwpDisallowedGuidAddition @ 0x140572F94 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x14069FC4C (EtwpDisallowedGuidRemoval.c)
 *     EtwpGetTraceGroupInfo @ 0x1406A02C8 (EtwpGetTraceGroupInfo.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     EtwpFreeGuidEntry @ 0x1404C281C (EtwpFreeGuidEntry.c)
 */

__int64 __fastcall EtwpUnreferenceGuidEntry(__int64 *BugCheckParameter2)
{
  __int64 v2; // rsi
  __int64 v4; // rbp
  __int64 v5; // rdx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v7; // rbp
  _BYTE *v8; // rax
  _BYTE *v9; // r14
  __int64 *v10; // rcx
  __int64 **v11; // rax

  v2 = _InterlockedDecrement64(BugCheckParameter2 + 2);
  if ( v2 )
  {
    if ( v2 < 0 )
      KeBugCheckEx(0x11Du, 9uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  }
  else
  {
    v4 = BugCheckParameter2[47];
    v5 = 56LL
       * ((*((_DWORD *)BugCheckParameter2 + 6) ^ *((_DWORD *)BugCheckParameter2 + 7) ^ *((_DWORD *)BugCheckParameter2 + 9) ^ *((_DWORD *)BugCheckParameter2 + 8)) & 0x3F);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v7 = (unsigned __int64 *)(v5 + v4 + 1472);
    v8 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v7, 0LL, 0);
    v9 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
      ExfAcquirePushLockExclusiveEx(v7, v8, (ULONG_PTR)v7);
    if ( v9 )
      v9[26] |= 1u;
    v10 = (__int64 *)*BugCheckParameter2;
    v11 = (__int64 **)BugCheckParameter2[1];
    if ( *(__int64 **)(*BugCheckParameter2 + 8) != BugCheckParameter2 || *v11 != BugCheckParameter2 )
      __fastfail(3u);
    *v11 = v10;
    v10[1] = (__int64)v11;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v7);
    KeAbPostRelease((ULONG_PTR)v7);
    KeLeaveCriticalRegion();
    EtwpFreeGuidEntry(BugCheckParameter2);
  }
  return v2;
}
