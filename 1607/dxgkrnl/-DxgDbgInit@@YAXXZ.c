/*
 * XREFs of ?DxgDbgInit@@YAXXZ @ 0x1C00F95E0
 * Callers:
 *     DriverEntry @ 0x1C01B7018 (DriverEntry.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgDbgInit(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax
  __int64 v3; // rax

  if ( byte_1C0057305 )
  {
    v2 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v2 + 24) = 132LL;
    WdLogEvent5_WdAssertion(v2);
  }
  CallbackRecord.State = 0;
  xmmword_1C0057318 = WdDxgkSecondaryDataGUID;
  strcpy((char *)&Component, "\\Device\\DxgKrnl");
  byte_1C0057305 = KeRegisterBugCheckReasonCallback(
                     &CallbackRecord,
                     (PKBUGCHECK_REASON_CALLBACK_ROUTINE)DxgDbgBugcheckCallback,
                     KbCallbackSecondaryDumpData,
                     &Component);
  if ( !byte_1C0057305 )
  {
    v3 = WdLogNewEntry5_WdAssertion(v1);
    *(_QWORD *)(v3 + 24) = 149LL;
    WdLogEvent5_WdAssertion(v3);
  }
}
