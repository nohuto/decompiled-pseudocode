/*
 * XREFs of EtwTraceContactVisualizationInfo @ 0x1C00AB8D0
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00AE174 (Template_q.c)
 */

__int64 __fastcall EtwTraceContactVisualizationInfo(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x20000) != 0 )
    return Template_q(a1, &ContactVisualizationInfo, a3, (unsigned int)a1);
  return result;
}
