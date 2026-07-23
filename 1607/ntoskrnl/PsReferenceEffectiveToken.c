/*
 * XREFs of PsReferenceEffectiveToken @ 0x140411380
 * Callers:
 *     SepReferenceTokenByHandle @ 0x14000E3F0 (SepReferenceTokenByHandle.c)
 *     RtlpQueryLowBoxId @ 0x14000EE48 (RtlpQueryLowBoxId.c)
 *     SeLogAccessFailure @ 0x140061150 (SeLogAccessFailure.c)
 *     SeCaptureAtomTableCallout @ 0x140074C74 (SeCaptureAtomTableCallout.c)
 *     SepReferenceTokenUsingPseudoHandle @ 0x1400A3100 (SepReferenceTokenUsingPseudoHandle.c)
 *     RtlpAllowsLowBoxAccess @ 0x1400ADCD4 (RtlpAllowsLowBoxAccess.c)
 *     CmpGetVirtualizationID @ 0x1403E1B4C (CmpGetVirtualizationID.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x1403FE9D4 (EtwpGetSidExtendedHeaderItem.c)
 *     SeCreateClientSecurity @ 0x14040DF28 (SeCreateClientSecurity.c)
 *     CmpIsVirtEnabled @ 0x14040E088 (CmpIsVirtEnabled.c)
 *     SeSubProcessToken @ 0x14046D918 (SeSubProcessToken.c)
 *     ExpWnfQueryCurrentUserSID @ 0x1404C560C (ExpWnfQueryCurrentUserSID.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1404D4B6C (PspAllocateAndQueryNotificationChannel.c)
 * Callees:
 *     ObFastReferenceObject @ 0x14000F2E0 (ObFastReferenceObject.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x140069C20 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     PspUnlockProcessShared @ 0x1400C7AE4 (PspUnlockProcessShared.c)
 *     PspLockProcessShared @ 0x1400C7B28 (PspLockProcessShared.c)
 *     ObFastReferenceObjectLocked @ 0x1400CF3D4 (ObFastReferenceObjectLocked.c)
 */

void *__fastcall PsReferenceEffectiveToken(__int64 a1, _DWORD *a2, bool *a3, int *a4, _BYTE *a5)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 Process; // rbp
  ULONG_PTR v11; // rbx
  __int64 v13; // r13
  void *v14; // r13
  signed __int64 *BugCheckParameter2; // [rsp+20h] [rbp-48h]
  struct _KTHREAD *v16; // [rsp+28h] [rbp-40h]
  __int64 v17; // [rsp+70h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  if ( (struct _KTHREAD *)a1 == CurrentThread )
    Process = (__int64)CurrentThread->ApcState.Process;
  else
    Process = *(_QWORD *)(a1 + 544);
  if ( (*(_DWORD *)(a1 + 1728) & 8) == 0 )
    goto LABEL_4;
  v17 = *(_QWORD *)(a1 + 544);
  v16 = KeGetCurrentThread();
  --v16->KernelApcDisable;
  BugCheckParameter2 = (signed __int64 *)(a1 + 1712);
  v13 = KeAbPreAcquire(a1 + 1712, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1712), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)(a1 + 1712), v13, a1 + 1712);
  if ( v13 )
    *(_BYTE *)(v13 + 26) |= 1u;
  v14 = 0LL;
  if ( (*(_DWORD *)(a1 + 1728) & 8) != 0 )
  {
    v14 = (void *)(*(_QWORD *)(a1 + 1632) & 0xFFFFFFFFFFFFFFF8uLL);
    ObfReferenceObject(v14);
    *a4 = *(_DWORD *)(a1 + 1632) & 3;
    *a3 = (*(_BYTE *)(a1 + 1632) & 4) != 0;
    if ( a5 )
      *a5 = *(_BYTE *)(v17 + 1738);
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
      *a5 = *(_BYTE *)(Process + 1738);
    return (void *)v11;
  }
}
