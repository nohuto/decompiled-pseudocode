/*
 * XREFs of TlgUnregisterAggregateProvider @ 0x1C006F4E4
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C006EFD0 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     DestroyAggregateSession @ 0x1C006F5B4 (DestroyAggregateSession.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1C006F5E4 (CancelTimerCallbacksAndDeleteTimer.c)
 *     LookUpTableFlushComplete @ 0x1C006F6EC (LookUpTableFlushComplete.c)
 */

NTSTATUS TlgUnregisterAggregateProvider()
{
  void *v0; // rdi
  __int64 *v1; // rcx
  __int64 v2; // rax
  NTSTATUS result; // eax

  if ( (ETWENABLECALLBACK *)qword_1C0118778 == RegisteredProviderEtwCallback )
  {
    v0 = 0LL;
    ExAcquirePushLockExclusiveEx(&unk_1C011E660, 0LL);
    v1 = &qword_1C011E668;
    if ( qword_1C011E668 )
    {
      while ( 1 )
      {
        v2 = *v1;
        if ( *(int **)(*v1 + 400) == &dword_1C0118750 )
          break;
        v1 = (__int64 *)(v2 + 408);
        if ( !*(_QWORD *)(v2 + 408) )
          goto LABEL_6;
      }
      v0 = (void *)*v1;
      *v1 = *(_QWORD *)(v2 + 408);
      LookUpTableFlushComplete(v2);
      if ( !qword_1C011E668 )
      {
        EtwUnregister(qword_1C0118A20);
        qword_1C0118A20 = 0LL;
        dword_1C0118A00 = 0;
      }
    }
LABEL_6:
    ExReleasePushLockExclusiveEx(&unk_1C011E660, 0LL);
    CancelTimerCallbacksAndDeleteTimer(v0);
    EtwUnregister(qword_1C0118770);
    qword_1C0118770 = 0LL;
    dword_1C0118750 = 0;
    return DestroyAggregateSession(v0);
  }
  else
  {
    result = EtwUnregister(qword_1C0118770);
    qword_1C0118770 = 0LL;
    dword_1C0118750 = 0;
  }
  return result;
}
