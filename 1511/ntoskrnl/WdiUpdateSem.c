/*
 * XREFs of WdiUpdateSem @ 0x14020CB58
 * Callers:
 *     NtTraceControl @ 0x140436E10 (NtTraceControl.c)
 * Callees:
 *     WdipAccessCheck @ 0x14020CB70 (WdipAccessCheck.c)
 *     WdipSemUpdate @ 0x14065C388 (WdipSemUpdate.c)
 */

__int64 WdiUpdateSem()
{
  __int64 result; // rax

  result = WdipAccessCheck();
  if ( (int)result >= 0 )
    return WdipSemUpdate();
  return result;
}
