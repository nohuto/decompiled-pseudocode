/*
 * XREFs of WdiUpdateSem @ 0x1402246C8
 * Callers:
 *     NtTraceControl @ 0x14040DD40 (NtTraceControl.c)
 * Callees:
 *     WdipAccessCheck @ 0x1402246E0 (WdipAccessCheck.c)
 *     WdipSemUpdate @ 0x14069B850 (WdipSemUpdate.c)
 */

__int64 WdiUpdateSem()
{
  __int64 result; // rax

  result = WdipAccessCheck();
  if ( (int)result >= 0 )
    return WdipSemUpdate();
  return result;
}
