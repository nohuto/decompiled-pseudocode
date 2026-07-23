/*
 * XREFs of RtlpLoadUmsDebugRegisterState @ 0x1800F3480
 * Callers:
 *     RtlpLoadPrimaryDbgRegWrap @ 0x1800A9890 (RtlpLoadPrimaryDbgRegWrap.c)
 *     RtlExecuteUmsThread @ 0x1800E37B0 (RtlExecuteUmsThread.c)
 * Callees:
 *     RtlpCopyLegacyContext @ 0x180070B5C (RtlpCopyLegacyContext.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     ZwContinue @ 0x1800A5920 (ZwContinue.c)
 */

NTSTATUS __fastcall RtlpLoadUmsDebugRegisterState(__int64 a1)
{
  struct _CONTEXT ContextRecord; // [rsp+20h] [rbp-4E8h] BYREF

  if ( !a1 )
    return -1073741811;
  RtlpCopyLegacyContext(a1, (__int64)&ContextRecord, 1048592);
  return ZwContinue(&ContextRecord, 0);
}
