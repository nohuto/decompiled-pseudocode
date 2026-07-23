/*
 * XREFs of VfProbeAndCaptureUnicodeString @ 0x140702A08
 * Callers:
 *     NtSetSystemInformation @ 0x1403EB59C (NtSetSystemInformation.c)
 *     VfSetVerifierInformationEx @ 0x140721158 (VfSetVerifierInformationEx.c)
 * Callees:
 *     VfProbeAndCaptureUnicodeStringBuffer @ 0x140702A38 (VfProbeAndCaptureUnicodeStringBuffer.c)
 */

__int64 __fastcall VfProbeAndCaptureUnicodeString(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  if ( a2 >= 0x7FFFFFFF0000LL )
    a2 = 0x7FFFFFFF0000LL;
  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  return VfProbeAndCaptureUnicodeStringBuffer(a1, a3);
}
