/*
 * XREFs of EtwTraceDITSpeedHitTestFailedRevalidation @ 0x1C00B5150
 * Callers:
 *     <none>
 * Callees:
 *     Template_p @ 0x1C00B7364 (Template_p.c)
 */

__int64 __fastcall EtwTraceDITSpeedHitTestFailedRevalidation(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x10000000) != 0 )
    return Template_p(a1, &DITSpeedHitTestFailedRevalidation, &W32kControlGuid, a1);
  return result;
}
