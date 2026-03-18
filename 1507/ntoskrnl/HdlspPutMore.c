/*
 * XREFs of HdlspPutMore @ 0x14075ADD4
 * Callers:
 *     HdlspProcessDumpCommand @ 0x14075AAA0 (HdlspProcessDumpCommand.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HdlspGetLine @ 0x14075A4F4 (HdlspGetLine.c)
 *     HdlspPutString @ 0x14075AE70 (HdlspPutString.c)
 */

char __fastcall HdlspPutMore(bool *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  __int64 v5; // r9
  char result; // al
  LARGE_INTEGER Interval; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v8[16]; // [rsp+28h] [rbp-20h] BYREF

  Interval.QuadPart = -100000LL;
  HdlspPutString("----Press <Enter> for more----", a2, a3);
  while ( !HdlspGetLine(v8, 10LL, v4, v5) )
  {
    if ( (*(_DWORD *)(HeadlessGlobals + 48) & 2) == 0 )
      KeDelayExecutionThread(0, 0, &Interval);
  }
  *a1 = v8[0] == 3;
  do
    result = HdlspGetLine(v8, 10LL, v4, v5);
  while ( result );
  return result;
}
