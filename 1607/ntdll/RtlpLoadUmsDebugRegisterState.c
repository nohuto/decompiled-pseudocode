/*
 * XREFs of RtlpLoadUmsDebugRegisterState @ 0x1800FCB40
 * Callers:
 *     RtlpLoadPrimaryDbgRegWrap @ 0x1800AAC50 (RtlpLoadPrimaryDbgRegWrap.c)
 *     RtlExecuteUmsThread @ 0x1800EC910 (RtlExecuteUmsThread.c)
 * Callees:
 *     RtlpCopyLegacyContext @ 0x18008BC08 (RtlpCopyLegacyContext.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     ZwContinue @ 0x1800A6C80 (ZwContinue.c)
 */

NTSTATUS __fastcall RtlpLoadUmsDebugRegisterState(__int64 a1)
{
  struct _CONTEXT ContextRecord; // [rsp+20h] [rbp-4E8h] BYREF

  if ( !a1 )
    return -1073741811;
  RtlpCopyLegacyContext(a1, (__int64)&ContextRecord, 1048592);
  return ZwContinue(&ContextRecord, 0);
}
