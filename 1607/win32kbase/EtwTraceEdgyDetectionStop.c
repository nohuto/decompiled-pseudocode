/*
 * XREFs of EtwTraceEdgyDetectionStop @ 0x1C00B5240
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C0005214 (Template_q.c)
 */

NTSTATUS __fastcall EtwTraceEdgyDetectionStop(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    return Template_q(a1, &EdgyDetectionStop, a3, a1);
  return result;
}
