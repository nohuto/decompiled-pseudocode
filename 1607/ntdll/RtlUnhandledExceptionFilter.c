/*
 * XREFs of RtlUnhandledExceptionFilter @ 0x1800F1DD0
 * Callers:
 *     __raise_securityfailure @ 0x180096C64 (__raise_securityfailure.c)
 *     __report_gsfailure @ 0x180096C90 (__report_gsfailure.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUnhandledExceptionFilter(__int64 a1)
{
  return RtlUnhandledExceptionFilter2(a1, byte_18010C822);
}
