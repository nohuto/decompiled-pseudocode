/*
 * XREFs of VfProbeAndCaptureUnicodeString @ 0x140737558
 * Callers:
 *     NtSetSystemInformation @ 0x140453DF8 (NtSetSystemInformation.c)
 *     VfSetVerifierInformationEx @ 0x140758B4C (VfSetVerifierInformationEx.c)
 * Callees:
 *     VfProbeAndCaptureUnicodeStringBuffer @ 0x140737588 (VfProbeAndCaptureUnicodeStringBuffer.c)
 */

__int64 __fastcall VfProbeAndCaptureUnicodeString(__int64 a1, ULONG64 a2, unsigned int a3)
{
  if ( a2 >= MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  return VfProbeAndCaptureUnicodeStringBuffer(a1, a3);
}
