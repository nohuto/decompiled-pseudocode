/*
 * XREFs of SepAdtOpenRegAndSetupNotification @ 0x14052EE38
 * Callers:
 *     SepAdtInitializeAuditingOptions @ 0x140762BBC (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     SepRegOpenKey @ 0x1403BED14 (SepRegOpenKey.c)
 *     NtNotifyChangeKey @ 0x140499C68 (NtNotifyChangeKey.c)
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
    qword_14031A770 = (__int64)SepAdtRegNotificationCallback;
    qword_14031A778 = 0LL;
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
