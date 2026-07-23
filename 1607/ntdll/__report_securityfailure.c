/*
 * XREFs of __report_securityfailure @ 0x180096DEC
 * Callers:
 *     __report_rangecheckfailure @ 0x180096DD0 (__report_rangecheckfailure.c)
 * Callees:
 *     __raise_securityfailure @ 0x180096C54 (__raise_securityfailure.c)
 *     RtlCaptureContext @ 0x1800AA150 (RtlCaptureContext.c)
 */

void __fastcall __noreturn _report_securityfailure(unsigned int a1)
{
  DWORD64 retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  RtlCaptureContext(&ContextRecord);
  ContextRecord.Rip = retaddr;
  ContextRecord.Rsp = (DWORD64)&v2;
  qword_18014FE30 = retaddr;
  dword_18014FE20 = -1073740791;
  dword_18014FE24 = 1;
  dword_18014FE38 = 1;
  unk_18014FE40 = v2;
  _raise_securityfailure((_EXCEPTION_POINTERS *)&ExceptionPointers);
}
