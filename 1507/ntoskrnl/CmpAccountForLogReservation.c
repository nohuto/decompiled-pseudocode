/*
 * XREFs of CmpAccountForLogReservation @ 0x1404F1D78
 * Callers:
 *     CmKtmNotification @ 0x1404EF414 (CmKtmNotification.c)
 *     CmpSearchAddTrans @ 0x1404F0F50 (CmpSearchAddTrans.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     LockRMLog @ 0x1404F2704 (LockRMLog.c)
 */

__int64 __fastcall CmpAccountForLogReservation(__int64 a1, __int64 a2, char a3)
{
  void *v5; // rcx
  unsigned int appended; // ebx
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v8; // ax
  LONGLONG rgcbReservation; // [rsp+68h] [rbp+10h] BYREF

  rgcbReservation = 48LL;
  LockRMLog(a1);
  v5 = *(void **)(a1 + 96);
  if ( !a3 )
    rgcbReservation = -rgcbReservation;
  appended = ClfsReserveAndAppendLog(v5, 0LL, 0, 0LL, 0LL, 1u, &rgcbReservation, 0, 0LL);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 128));
  CurrentThread = KeGetCurrentThread();
  v8 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v8;
  if ( !v8
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return appended;
}
