/*
 * XREFs of __report_securityfailure @ 0x180084248
 * Callers:
 *     __report_rangecheckfailure @ 0x180084230 (__report_rangecheckfailure.c)
 * Callees:
 *     __raise_securityfailure @ 0x1800840B4 (__raise_securityfailure.c)
 *     RtlCaptureContext @ 0x180095980 (RtlCaptureContext.c)
 */

void __fastcall __noreturn _report_securityfailure(unsigned int a1)
{
  DWORD64 retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  RtlCaptureContext(&ContextRecord);
  ContextRecord.Rip = retaddr;
  ContextRecord.Rsp = (DWORD64)&v2;
  qword_180143DB0 = retaddr;
  dword_180143DA0 = -1073740791;
  dword_180143DA4 = 1;
  dword_180143DB8 = 1;
  unk_180143DC0 = v2;
  _raise_securityfailure((_EXCEPTION_POINTERS *)&ExceptionPointers);
}
