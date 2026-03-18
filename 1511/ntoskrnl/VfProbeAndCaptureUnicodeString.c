/*
 * XREFs of VfProbeAndCaptureUnicodeString @ 0x1406B71F0
 * Callers:
 *     NtSetSystemInformation @ 0x1404D4654 (NtSetSystemInformation.c)
 *     VfSetVerifierInformationEx @ 0x1406D4F60 (VfSetVerifierInformationEx.c)
 * Callees:
 *     VfProbeAndCaptureUnicodeStringBuffer @ 0x1406B7220 (VfProbeAndCaptureUnicodeStringBuffer.c)
 */

__int64 __fastcall VfProbeAndCaptureUnicodeString(__int64 a1, ULONG64 a2, unsigned int a3)
{
  if ( a2 >= MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  return VfProbeAndCaptureUnicodeStringBuffer(a1, a3);
}
