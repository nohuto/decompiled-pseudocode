/*
 * XREFs of RtlpLoadUmsDebugRegisterState @ 0x1800F2F80
 * Callers:
 *     RtlpLoadPrimaryDbgRegWrap @ 0x1800964B0 (RtlpLoadPrimaryDbgRegWrap.c)
 *     RtlExecuteUmsThread @ 0x1800DE000 (RtlExecuteUmsThread.c)
 * Callees:
 *     RtlpCopyLegacyContext @ 0x180067818 (RtlpCopyLegacyContext.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     ZwContinue @ 0x180093D30 (ZwContinue.c)
 */

NTSTATUS __fastcall RtlpLoadUmsDebugRegisterState(__int64 a1)
{
  struct _CONTEXT ContextRecord; // [rsp+20h] [rbp-4E8h] BYREF

  if ( !a1 )
    return -1073741811;
  RtlpCopyLegacyContext(a1, (__int64)&ContextRecord, 1048592);
  return ZwContinue(&ContextRecord, 0);
}
