/*
 * XREFs of EtwpUnreferenceGuidEntry @ 0x1404CE13C
 * Callers:
 *     NtTraceEvent @ 0x140016980 (NtTraceEvent.c)
 *     EtwGetProviderIdFromHandle @ 0x14012C584 (EtwGetProviderIdFromHandle.c)
 *     EtwpRegisterUMGuid @ 0x1404CDCF0 (EtwpRegisterUMGuid.c)
 *     EtwpDeleteRegistrationObject @ 0x1404CDFEC (EtwpDeleteRegistrationObject.c)
 *     EtwpGetNextGuidEntry @ 0x1404D0D3C (EtwpGetNextGuidEntry.c)
 *     EtwpAddRegEntryToGroup @ 0x1404D1618 (EtwpAddRegEntryToGroup.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1404D196C (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpEnableGuid @ 0x1404D4AD0 (EtwpEnableGuid.c)
 *     EtwpUpdateGuidEnableInfo @ 0x1404D5F80 (EtwpUpdateGuidEnableInfo.c)
 *     EtwpNotifyGuid @ 0x1404D8804 (EtwpNotifyGuid.c)
 *     EtwpGetTraceGuidInfo @ 0x14053DADC (EtwpGetTraceGuidInfo.c)
 *     EtwpRegisterProvider @ 0x14054C6A8 (EtwpRegisterProvider.c)
 *     EtwpGetTraceGroupInfo @ 0x14054EAA8 (EtwpGetTraceGroupInfo.c)
 *     EtwUnregister @ 0x140558318 (EtwUnregister.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     EtwpFreeGuidEntry @ 0x14054F670 (EtwpFreeGuidEntry.c)
 */

__int64 __fastcall EtwpUnreferenceGuidEntry(__int64 *BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  char *v7; // r14
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v9; // r14
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // r15
  __int64 *v13; // rcx
  __int64 **v14; // rax
  struct _KTHREAD *v15; // rcx
  __int16 v16; // ax

  v5 = _InterlockedDecrement64(BugCheckParameter2 + 2);
  if ( v5 )
  {
    if ( v5 < 0 )
      KeBugCheckEx(0x11Du, 9uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  }
  else
  {
    v7 = (char *)&EtwpGuidHashTable
       + 56
       * ((*((_DWORD *)BugCheckParameter2 + 6) ^ *((_DWORD *)BugCheckParameter2 + 7) ^ *((_DWORD *)BugCheckParameter2 + 9) ^ *((_DWORD *)BugCheckParameter2 + 8)) & 0x3F);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v9 = (unsigned __int64 *)(v7 + 48);
    v10 = KeAbPreAcquire((ULONG_PTR)v9, 0LL, 0LL, a4);
    v12 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      ExfAcquirePushLockExclusiveEx(v9, v10, (ULONG_PTR)v9, v11);
    if ( v12 )
      *(_BYTE *)(v12 + 26) |= 1u;
    v13 = (__int64 *)*BugCheckParameter2;
    v14 = (__int64 **)BugCheckParameter2[1];
    if ( *(__int64 **)(*BugCheckParameter2 + 8) != BugCheckParameter2 || *v14 != BugCheckParameter2 )
      __fastfail(3u);
    *v14 = v13;
    v13[1] = (__int64)v14;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v9);
    KeAbPostRelease((ULONG_PTR)v9);
    v15 = KeGetCurrentThread();
    v16 = v15->KernelApcDisable + 1;
    v15->KernelApcDisable = v16;
    if ( !v16
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v15->ApcState.ApcListHead[0].Flink != &v15->152
      && !v15->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    EtwpFreeGuidEntry(BugCheckParameter2);
  }
  return v5;
}
