/*
 * XREFs of EtwTraceDwmManipulationFrameStart @ 0x1C00ABAE0
 * Callers:
 *     <none>
 * Callees:
 *     Template_qq @ 0x1C00AE3A8 (Template_qq.c)
 */

__int64 __fastcall EtwTraceDwmManipulationFrameStart(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return Template_qq(a1, &DwmManipulationFrameStart, a3, (unsigned int)a1, a2);
  return result;
}
