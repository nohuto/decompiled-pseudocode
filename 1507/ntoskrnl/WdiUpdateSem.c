/*
 * XREFs of WdiUpdateSem @ 0x14025BE1C
 * Callers:
 *     NtTraceControl @ 0x1404CE420 (NtTraceControl.c)
 * Callees:
 *     WdipAccessCheck @ 0x14025BE34 (WdipAccessCheck.c)
 *     WdipSemUpdate @ 0x1406DEBD4 (WdipSemUpdate.c)
 */

__int64 WdiUpdateSem()
{
  __int64 result; // rax

  result = WdipAccessCheck();
  if ( (int)result >= 0 )
    return WdipSemUpdate();
  return result;
}
