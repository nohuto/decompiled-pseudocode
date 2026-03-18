/*
 * XREFs of ?DxgDbgInit@@YAXXZ @ 0x1C00CD7E4
 * Callers:
 *     DriverEntry @ 0x1C018D79C (DriverEntry.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgDbgInit(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax
  __int64 v3; // rax

  if ( byte_1C0047101 )
  {
    v2 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v2 + 24) = 129LL;
    WdLogEvent5_WdAssertion(v2);
  }
  CallbackRecord.State = 0;
  xmmword_1C0047118 = WdDxgkSecondaryDataGUID;
  strcpy((char *)&Component, "\\Device\\DxgKrnl");
  byte_1C0047101 = KeRegisterBugCheckReasonCallback(
                     &CallbackRecord,
                     (PKBUGCHECK_REASON_CALLBACK_ROUTINE)CallbackRoutine,
                     KbCallbackSecondaryDumpData,
                     &Component);
  if ( !byte_1C0047101 )
  {
    v3 = WdLogNewEntry5_WdAssertion(v1);
    *(_QWORD *)(v3 + 24) = 146LL;
    WdLogEvent5_WdAssertion(v3);
  }
}
