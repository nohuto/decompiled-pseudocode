/*
 * XREFs of WdiUpdateSem @ 0x1402244F4
 * Callers:
 *     NtTraceControl @ 0x14040CC00 (NtTraceControl.c)
 * Callees:
 *     WdipAccessCheck @ 0x14022450C (WdipAccessCheck.c)
 *     WdipSemUpdate @ 0x14069B934 (WdipSemUpdate.c)
 */

__int64 WdiUpdateSem()
{
  __int64 result; // rax

  result = WdipAccessCheck();
  if ( (int)result >= 0 )
    return WdipSemUpdate();
  return result;
}
