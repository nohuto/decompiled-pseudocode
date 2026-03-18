/*
 * XREFs of EtwTraceAuditApiRegisterRawInputDevices @ 0x1C0080520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall EtwTraceAuditApiRegisterRawInputDevices(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax

  result = HIDWORD(Microsoft_Windows_Win32kEnableBits);
  if ( (Microsoft_Windows_Win32kEnableBits & 0x400000000LL) != 0 )
    return Template_q(a1, &AuditApiRegisterRawInputDevices, a3, a1);
  return result;
}
