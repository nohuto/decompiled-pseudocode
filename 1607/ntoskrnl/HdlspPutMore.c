/*
 * XREFs of HdlspPutMore @ 0x140723BF0
 * Callers:
 *     HdlspProcessDumpCommand @ 0x140723978 (HdlspProcessDumpCommand.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     HdlspGetLine @ 0x140723450 (HdlspGetLine.c)
 *     HdlspPutString @ 0x140723C8C (HdlspPutString.c)
 */

char __fastcall HdlspPutMore(bool *a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  char result; // al
  LARGE_INTEGER Interval; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v6[16]; // [rsp+28h] [rbp-20h] BYREF

  Interval.QuadPart = -100000LL;
  HdlspPutString("----Press <Enter> for more----");
  while ( !HdlspGetLine(v6, 10LL, v2, v3) )
  {
    if ( (HeadlessGlobals[6] & 2) == 0 )
      KeDelayExecutionThread(0, 0, &Interval);
  }
  *a1 = v6[0] == 3;
  do
    result = HdlspGetLine(v6, 10LL, v2, v3);
  while ( result );
  return result;
}
