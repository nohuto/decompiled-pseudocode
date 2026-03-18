/*
 * XREFs of EtwTracePointerDeviceTransformationStart @ 0x1C00B5800
 * Callers:
 *     RIMApplyTransforms @ 0x1C00D33A8 (RIMApplyTransforms.c)
 * Callees:
 *     Template_q @ 0x1C0005214 (Template_q.c)
 */

NTSTATUS __fastcall EtwTracePointerDeviceTransformationStart(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return Template_q(a1, &PointerDeviceTransformationStart, a3, a1);
  return result;
}
