/*
 * XREFs of PsReferenceEffectiveToken @ 0x140481AE0
 * Callers:
 *     RtlpQueryLowBoxId @ 0x140010304 (RtlpQueryLowBoxId.c)
 *     SepReferenceTokenByHandle @ 0x140045160 (SepReferenceTokenByHandle.c)
 *     SeCaptureAtomTableCallout @ 0x1400EFDC0 (SeCaptureAtomTableCallout.c)
 *     SeLogAccessFailure @ 0x140124240 (SeLogAccessFailure.c)
 *     RtlpAllowsLowBoxAccess @ 0x14012F0C8 (RtlpAllowsLowBoxAccess.c)
 *     CmpGetVirtualizationID @ 0x140407F88 (CmpGetVirtualizationID.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1404156FC (PspAllocateAndQueryNotificationChannel.c)
 *     ExpWnfQueryCurrentUserSID @ 0x1404376A8 (ExpWnfQueryCurrentUserSID.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x140438A58 (EtwpGetSidExtendedHeaderItem.c)
 *     SeCreateClientSecurity @ 0x1404819F0 (SeCreateClientSecurity.c)
 *     CmpIsVirtEnabled @ 0x140481D80 (CmpIsVirtEnabled.c)
 * Callees:
 *     ObFastReferenceObject @ 0x14004E430 (ObFastReferenceObject.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObFastReferenceObjectLocked @ 0x140085588 (ObFastReferenceObjectLocked.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 */

void *__fastcall PsReferenceEffectiveToken(__int64 a1, _DWORD *a2, bool *a3, int *a4, _BYTE *a5)
{
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // rbp
  ULONG_PTR v11; // rbx
  __int64 v12; // r9
  __int64 v14; // r9
  __int64 v15; // r13
  void *v16; // r13
  __int16 v17; // ax
  __int64 v18; // rbx
  __int64 v19; // r9
  __int16 v20; // ax
  signed __int64 *BugCheckParameter2; // [rsp+20h] [rbp-48h]
  struct _KTHREAD *v22; // [rsp+28h] [rbp-40h]
  __int64 v23; // [rsp+70h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  if ( (struct _KTHREAD *)a1 == CurrentThread )
    Process = CurrentThread->ApcState.Process;
  else
    Process = *(_KPROCESS **)(a1 + 544);
  if ( (*(_DWORD *)(a1 + 1724) & 8) == 0 )
    goto LABEL_4;
  v23 = *(_QWORD *)(a1 + 544);
  v22 = KeGetCurrentThread();
  --v22->KernelApcDisable;
  BugCheckParameter2 = (signed __int64 *)(a1 + 1704);
  v15 = KeAbPreAcquire(a1 + 1704, 0LL, 0LL, (__int64)a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1704), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)(a1 + 1704), v15, a1 + 1704, v14);
  if ( v15 )
    *(_BYTE *)(v15 + 26) |= 1u;
  if ( (*(_DWORD *)(a1 + 1724) & 8) != 0 )
  {
    v16 = (void *)(*(_QWORD *)(a1 + 1624) & 0xFFFFFFFFFFFFFFF8uLL);
    ObfReferenceObject(v16);
    *a4 = *(_DWORD *)(a1 + 1624) & 3;
    *a3 = (*(_BYTE *)(a1 + 1624) & 4) != 0;
    if ( a5 )
      *a5 = *(_BYTE *)(v23 + 1714);
  }
  else
  {
    v16 = 0LL;
  }
  if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  v17 = v22->KernelApcDisable + 1;
  v22->KernelApcDisable = v17;
  if ( !v17
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v22->ApcState.ApcListHead[0].Flink != &v22->152
    && !v22->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( v16 )
  {
    *a2 = 2;
    return v16;
  }
  else
  {
LABEL_4:
    v11 = ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
    if ( !v11 )
    {
      --CurrentThread->KernelApcDisable;
      v18 = KeAbPreAcquire((ULONG_PTR)&Process[1], 0LL, 0LL, v12);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].Header.Lock, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((unsigned __int64 *)&Process[1], v18, (ULONG_PTR)&Process[1], v19);
      if ( v18 )
        *(_BYTE *)(v18 + 26) |= 1u;
      v11 = ObFastReferenceObjectLocked(&Process[1].Affinity.Bitmap[5]);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].Header.Lock, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&Process[1].Header.Lock);
      KeAbPostRelease((ULONG_PTR)&Process[1]);
      v20 = CurrentThread->KernelApcDisable + 1;
      CurrentThread->KernelApcDisable = v20;
      if ( !v20
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    *a2 = 1;
    *a3 = 0;
    if ( a5 )
      *a5 = BYTE2(Process[2].ReadyListHead.Blink);
    return (void *)v11;
  }
}
