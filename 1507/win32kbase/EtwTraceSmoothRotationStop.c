/*
 * XREFs of EtwTraceSmoothRotationStop @ 0x1C00A7D50
 * Callers:
 *     <none>
 * Callees:
 *     Template_qt @ 0x1C00AAF8C (Template_qt.c)
 */

__int64 __fastcall EtwTraceSmoothRotationStop(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x200000) != 0 )
    return Template_qt(a1, a2, a3, (unsigned int)a1, a2);
  return result;
}
