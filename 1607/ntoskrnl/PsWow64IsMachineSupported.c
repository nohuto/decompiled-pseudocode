/*
 * XREFs of PsWow64IsMachineSupported @ 0x14051AC70
 * Callers:
 *     PsWow64GetSupportedArchitectures @ 0x1400F7170 (PsWow64GetSupportedArchitectures.c)
 *     BuildKnownDlls @ 0x1407A34E0 (BuildKnownDlls.c)
 * Callees:
 *     PspWow64GetSharedInformation @ 0x14051AC8C (PspWow64GetSharedInformation.c)
 */

_BOOL8 __fastcall PsWow64IsMachineSupported(__int64 a1)
{
  return (unsigned int)PspWow64GetSharedInformation(a1, 6LL) != 0;
}
