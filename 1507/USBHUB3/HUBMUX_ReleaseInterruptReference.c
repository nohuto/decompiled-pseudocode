/*
 * XREFs of HUBMUX_ReleaseInterruptReference @ 0x1C000C808
 * Callers:
 *     HUBPSM30_CancellingResetOnSurpriseRemove @ 0x1C000D390 (HUBPSM30_CancellingResetOnSurpriseRemove.c)
 *     HUBPSM20_DetachingDeviceFromPortOnDisconnectWithTimer @ 0x1C000D440 (HUBPSM20_DetachingDeviceFromPortOnDisconnectWithTimer.c)
 *     HUBPSM20_DetachingDeviceFromPortOnOverCurrentClearWithTimer @ 0x1C000D470 (HUBPSM20_DetachingDeviceFromPortOnOverCurrentClearWithTimer.c)
 *     HUBPSM20_IssuingResumedToDeviceSM @ 0x1C000D820 (HUBPSM20_IssuingResumedToDeviceSM.c)
 *     HUBPSM20_QueueingPortResumeTimedOut @ 0x1C000D950 (HUBPSM20_QueueingPortResumeTimedOut.c)
 *     HUBPSM20_ReleasingInterruptReferenceAndIssuingPortResetTimedOutToDSM @ 0x1C000DA20 (HUBPSM20_ReleasingInterruptReferenceAndIssuingPortResetTimedOutToDSM.c)
 *     HUBPSM20_ReleasingInterruptReferenceAndStoppingTimer @ 0x1C000DA60 (HUBPSM20_ReleasingInterruptReferenceAndStoppingTimer.c)
 *     HUBPSM20_ReleasingInterruptReferenceOnResetTransferFailure @ 0x1C000DAB0 (HUBPSM20_ReleasingInterruptReferenceOnResetTransferFailure.c)
 *     HUBPSM20_ReleasingInterruptReferenceOnSuccessfulReset @ 0x1C000DAF0 (HUBPSM20_ReleasingInterruptReferenceOnSuccessfulReset.c)
 *     HUBPSM30_IssuingHubResetOnTimedOut @ 0x1C000E530 (HUBPSM30_IssuingHubResetOnTimedOut.c)
 *     HUBPSM30_QueueingPortResumeFailedDueToPendingSuspend @ 0x1C000E6B0 (HUBPSM30_QueueingPortResumeFailedDueToPendingSuspend.c)
 *     HUBPSM30_QueueingPortResumeTimedOut @ 0x1C000E6F0 (HUBPSM30_QueueingPortResumeTimedOut.c)
 *     HUBPSM30_ReleasingInterruptReferenceOnTransferFailureInResuming @ 0x1C000E760 (HUBPSM30_ReleasingInterruptReferenceOnTransferFailureInResuming.c)
 *     HUBPSM30_ReleasingInterruptReferenceOnResetTransferFailure @ 0x1C000E780 (HUBPSM30_ReleasingInterruptReferenceOnResetTransferFailure.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001974 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x1C00091B0 (HUBSM_AddEvent.c)
 *     HUBMISC_DbgBreak @ 0x1C00268F4 (HUBMISC_DbgBreak.c)
 */

void __fastcall HUBMUX_ReleaseInterruptReference(volatile signed __int32 *a1)
{
  __int64 v1; // rbp
  char v3; // si
  __int64 v4; // rbx
  KIRQL v5; // r14
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rdx

  v1 = *(_QWORD *)a1;
  v3 = 0;
  v4 = *(_QWORD *)a1 + 2240LL;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v4);
  if ( (a1[66] & 2) == 0 )
  {
    WPP_RECORDER_SF_(*((_QWORD *)a1 + 179), 2u, 4u, 0x10u, (__int64)&WPP_be32aff92db2d8ba6a94dba8682f4b77_Traceguids);
    HUBMISC_DbgBreak("Port is releasing interrupt reference when it is not holding it", v6);
  }
  _InterlockedAnd(a1 + 66, 0xFFFFFFFD);
  v7 = *(_DWORD *)(v4 + 20);
  if ( v7 )
  {
    *(_DWORD *)(v4 + 20) = v7 - 1;
  }
  else
  {
    WPP_RECORDER_SF_(*((_QWORD *)a1 + 179), 2u, 4u, 0x11u, (__int64)&WPP_be32aff92db2d8ba6a94dba8682f4b77_Traceguids);
    HUBMISC_DbgBreak("Hub interrupt reference is being released too many times", v8);
  }
  if ( !*(_DWORD *)(v4 + 20) && (*(_DWORD *)(v4 + 32) & 1) != 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(v4 + 32), 0xFFFFFFFE);
    v3 = 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)v4, v5);
  if ( v3 )
    HUBSM_AddEvent(v1 + 1184, 0x802u);
}
