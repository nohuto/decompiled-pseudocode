/*
 * XREFs of EtwTraceBeginPointerFrameCreation @ 0x1C00AB730
 * Callers:
 *     RIMStoreFrameNodes @ 0x1C00C9870 (RIMStoreFrameNodes.c)
 * Callees:
 *     Template_ddd @ 0x1C00AD7BC (Template_ddd.c)
 */

__int64 __fastcall EtwTraceBeginPointerFrameCreation(int a1, char a2, int a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x80000) != 0 )
    return Template_ddd(a1, (unsigned int)&BeginPointerFrameCreation, a3, a1, a2, a3);
  return result;
}
