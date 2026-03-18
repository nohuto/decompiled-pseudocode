/*
 * XREFs of EtwTraceTouchHWTimeStamp @ 0x1C00AC410
 * Callers:
 *     RIMExtractDeviceUsages @ 0x1C00CB374 (RIMExtractDeviceUsages.c)
 * Callees:
 *     Template_ddxdddd @ 0x1C00AD9FC (Template_ddxdddd.c)
 */

__int64 __fastcall EtwTraceTouchHWTimeStamp(int a1, int a2, int a3, char a4, char a5, char a6, char a7)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return Template_ddxdddd(a1, a2, a3, a1, a2, a3, a4, a5, a6, a7);
  return result;
}
