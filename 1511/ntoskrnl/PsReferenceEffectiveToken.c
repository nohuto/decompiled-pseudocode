/*
 * XREFs of PsReferenceEffectiveToken @ 0x1404340D0
 * Callers:
 *     RtlpQueryLowBoxId @ 0x140038774 (RtlpQueryLowBoxId.c)
 *     SepReferenceTokenByHandle @ 0x14008A010 (SepReferenceTokenByHandle.c)
 *     SeCaptureAtomTableCallout @ 0x140091E20 (SeCaptureAtomTableCallout.c)
 *     RtlpAllowsLowBoxAccess @ 0x14009A1E4 (RtlpAllowsLowBoxAccess.c)
 *     SepReferenceTokenUsingPseudoHandle @ 0x1400E6284 (SepReferenceTokenUsingPseudoHandle.c)
 *     SeLogAccessFailure @ 0x1400E6334 (SeLogAccessFailure.c)
 *     CmpGetVirtualizationID @ 0x1403BD028 (CmpGetVirtualizationID.c)
 *     ExpWnfQueryCurrentUserSID @ 0x1403E5EDC (ExpWnfQueryCurrentUserSID.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1403ECA98 (PspAllocateAndQueryNotificationChannel.c)
 *     SeCreateClientSecurity @ 0x14042CA10 (SeCreateClientSecurity.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x1404795EC (EtwpGetSidExtendedHeaderItem.c)
 *     SeCreateClientSecurityEx @ 0x1404A629C (SeCreateClientSecurityEx.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x14000D5AC (ObFastReferenceObjectLocked.c)
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     PspUnlockProcessShared @ 0x14002E340 (PspUnlockProcessShared.c)
 *     PspLockProcessShared @ 0x14002E384 (PspLockProcessShared.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140042380 (KeLeaveCriticalRegionThread.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ObFastReferenceObject @ 0x140043350 (ObFastReferenceObject.c)
 */

void *__fastcall PsReferenceEffectiveToken(__int64 a1, _DWORD *a2, bool *a3, int *a4, _BYTE *a5)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 Process; // r13
  ULONG_PTR v11; // rbx
  __int64 v13; // r12
  void *v14; // r12
  signed __int64 *BugCheckParameter2; // [rsp+20h] [rbp-48h]
  struct _KTHREAD *v16; // [rsp+28h] [rbp-40h]
  __int64 v17; // [rsp+70h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  if ( (struct _KTHREAD *)a1 == CurrentThread )
    Process = (__int64)CurrentThread->ApcState.Process;
  else
    Process = *(_QWORD *)(a1 + 544);
  if ( (*(_DWORD *)(a1 + 1724) & 8) == 0 )
    goto LABEL_4;
  v17 = *(_QWORD *)(a1 + 544);
  v16 = KeGetCurrentThread();
  --v16->KernelApcDisable;
  BugCheckParameter2 = (signed __int64 *)(a1 + 1704);
  v13 = KeAbPreAcquire(a1 + 1704, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1704), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)(a1 + 1704), v13, a1 + 1704);
  if ( v13 )
    *(_BYTE *)(v13 + 26) |= 1u;
  v14 = 0LL;
  if ( (*(_DWORD *)(a1 + 1724) & 8) != 0 )
  {
    v14 = (void *)(*(_QWORD *)(a1 + 1624) & 0xFFFFFFFFFFFFFFF8uLL);
    ObfReferenceObject(v14);
    *a4 = *(_DWORD *)(a1 + 1624) & 3;
    *a3 = (*(_BYTE *)(a1 + 1624) & 4) != 0;
    if ( a5 )
      *a5 = *(_BYTE *)(v17 + 1722);
  }
  if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  KeLeaveCriticalRegionThread((__int64)v16);
  if ( v14 )
  {
    *a2 = 2;
    return v14;
  }
  else
  {
LABEL_4:
    v11 = ObFastReferenceObject((signed __int64 *)(Process + 856));
    if ( !v11 )
    {
      PspLockProcessShared(Process, (__int64)CurrentThread);
      v11 = ObFastReferenceObjectLocked((_QWORD *)(Process + 856));
      PspUnlockProcessShared(Process, (__int64)CurrentThread);
    }
    *a2 = 1;
    *a3 = 0;
    if ( a5 )
      *a5 = *(_BYTE *)(Process + 1722);
    return (void *)v11;
  }
}
