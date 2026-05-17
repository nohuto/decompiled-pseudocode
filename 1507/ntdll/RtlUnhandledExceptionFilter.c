/*
 * XREFs of RtlUnhandledExceptionFilter @ 0x1800E3F70
 * Callers:
 *     __raise_securityfailure @ 0x1800840B4 (__raise_securityfailure.c)
 *     __report_gsfailure @ 0x1800840E0 (__report_gsfailure.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUnhandledExceptionFilter(__int64 a1)
{
  return RtlUnhandledExceptionFilter2(a1, byte_180101572);
}
