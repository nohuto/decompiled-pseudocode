/*
 * XREFs of ndisTraceRundownStopTraceWorkItem @ 0x1C00B1E70
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C00228A0 (WPP_SF_.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_d @ 0x1C003DCF4 (WPP_SF_d.c)
 */

void __fastcall ndisTraceRundownStopTraceWorkItem(PVOID IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  int v4; // eax
  NTSTATUS v5; // eax
  ULONG ReturnLength[4]; // [rsp+30h] [rbp-D8h] BYREF
  _UNICODE_STRING InputBuffer[11]; // [rsp+40h] [rbp-C8h] BYREF

  memset(InputBuffer, 0, sizeof(InputBuffer));
  ExAcquirePushLockExclusiveEx(&qword_1C00859C8, 0LL);
  v4 = dword_1C0100000;
  if ( (dword_1C0100000 & 1) != 0 )
  {
    if ( (unsigned __int8)byte_1C0085322 >= 5u )
    {
      WPP_SF_(0x1Cu, &WPP_98be5e8eac0fef6790683cac5c76438b_Traceguids);
      v4 = dword_1C0100000;
    }
    HIDWORD(InputBuffer[2].Buffer) = 0x20000;
    dword_1C0100000 = v4 & 0xFFFFFFFE;
    *(_DWORD *)&InputBuffer[0].Length = 176;
    RtlInitUnicodeString(&InputBuffer[9], L"NetCfgTrace");
    v5 = NtTraceControl(EtwStopLoggerCode, InputBuffer, 0xB0u, InputBuffer, 0xB0u, ReturnLength);
    if ( (int)(v5 + 0x80000000) >= 0 && v5 != -1073741162 && (unsigned __int8)byte_1C0085322 >= 2u )
      WPP_SF_d(0x1Du, &WPP_98be5e8eac0fef6790683cac5c76438b_Traceguids, v5);
  }
  ExReleasePushLockExclusiveEx(&qword_1C00859C8, 0LL);
  IoFreeWorkItem(IoWorkItem);
}
