/*
 * XREFs of SepAdtOpenRegAndSetupNotification @ 0x14056FABC
 * Callers:
 *     SepAdtInitializeAuditingOptions @ 0x1407B2FB4 (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     NtNotifyChangeKey @ 0x14040095C (NtNotifyChangeKey.c)
 *     SepRegOpenKey @ 0x140476484 (SepRegOpenKey.c)
 */

int SepAdtOpenRegAndSetupNotification()
{
  int result; // eax

  result = SepRegOpenKey(
             L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Lsa",
             0x211u,
             &SepAdtRegNotifyHandle);
  if ( result >= 0 )
  {
    qword_140341580 = (__int64)SepAdtRegNotificationCallback;
    qword_140341588 = 0LL;
    *(_QWORD *)SepAdtLsaRegWatchWorkItem = 0LL;
    return NtNotifyChangeKey(
             SepAdtRegNotifyHandle,
             0LL,
             SepAdtLsaRegWatchWorkItem,
             (PVOID)1,
             &SepAdtIoStatusBlock,
             5u,
             0,
             0LL,
             0,
             1u);
  }
  return result;
}
