/*
 * XREFs of EtwTraceConvertibleState @ 0x1C00B5060
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C0005214 (Template_q.c)
 */

NTSTATUS __fastcall EtwTraceConvertibleState(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax

  result = Microsoft_Windows_Win32kEnableBits;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x20) != 0 )
    return Template_q(a1, &SystemConvertibleState, a3, a1);
  return result;
}
