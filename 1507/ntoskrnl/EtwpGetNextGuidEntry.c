/*
 * XREFs of EtwpGetNextGuidEntry @ 0x1404D0D3C
 * Callers:
 *     EtwpDisableTraceProviders @ 0x1404D18CC (EtwpDisableTraceProviders.c)
 *     EtwpGetTraceGuidList @ 0x14054E108 (EtwpGetTraceGuidList.c)
 *     EtwpGetTraceGroupList @ 0x14055CEF4 (EtwpGetTraceGroupList.c)
 *     EtwpEnumerateTraceGuids @ 0x14055E30C (EtwpEnumerateTraceGuids.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140721358 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     EtwpUnreferenceGuidEntry @ 0x1404CE13C (EtwpUnreferenceGuidEntry.c)
 *     EtwpReferenceGuidEntry @ 0x1404CE3DC (EtwpReferenceGuidEntry.c)
 */

unsigned __int64 *__fastcall EtwpGetNextGuidEntry(__int64 *BugCheckParameter2, int a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rdi
  char v5; // r15
  unsigned __int64 *v6; // rbp
  char *v7; // rbx
  unsigned __int64 *v8; // r14
  unsigned __int64 *v9; // rbx
  __int64 i; // r12
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // rsi
  __int64 v13; // r9
  unsigned __int64 *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // r8
  struct _KTHREAD *v17; // rcx
  __int16 v18; // ax

  v4 = BugCheckParameter2;
  v5 = 0;
  v6 = 0LL;
  if ( BugCheckParameter2 )
    v7 = (char *)&EtwpGuidHashTable
       + 56
       * ((*((_DWORD *)BugCheckParameter2 + 6) ^ *((_DWORD *)BugCheckParameter2 + 7) ^ *((_DWORD *)BugCheckParameter2 + 9) ^ *((_DWORD *)BugCheckParameter2 + 8)) & 0x3F);
  else
    v7 = (char *)&EtwpGuidHashTable;
  v8 = (unsigned __int64 *)&v7[16 * a2];
  v9 = (unsigned __int64 *)(v7 + 48);
  for ( i = 2 * (a2 - 3LL); ; v8 = &v9[i] )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v12 = KeAbPreAcquire((ULONG_PTR)v9, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v9, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v9, v12, (ULONG_PTR)v9, v13);
    if ( v12 )
      *(_BYTE *)(v12 + 26) |= 1u;
    if ( v4 )
      v14 = (unsigned __int64 *)*v4;
    else
      v14 = (unsigned __int64 *)*v8;
    while ( v14 != v8 )
    {
      v6 = v14;
      if ( EtwpReferenceGuidEntry((ULONG_PTR)v14) )
      {
        v5 = 1;
        break;
      }
      v14 = (unsigned __int64 *)*v14;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v9, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v9);
    KeAbPostRelease((ULONG_PTR)v9);
    v17 = KeGetCurrentThread();
    v18 = v17->KernelApcDisable + 1;
    v17->KernelApcDisable = v18;
    if ( !v18
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v17->ApcState.ApcListHead[0].Flink != &v17->152
      && !v17->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( v4 )
      EtwpUnreferenceGuidEntry(v4, v15, v16, a4);
    if ( v5 )
      return v6;
    v9 += 7;
    if ( v9 - 6 == (unsigned __int64 *)&EtwpReplyListHead )
      break;
    v4 = 0LL;
  }
  return 0LL;
}
