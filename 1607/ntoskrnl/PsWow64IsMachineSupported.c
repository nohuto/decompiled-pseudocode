/*
 * XREFs of PsWow64IsMachineSupported @ 0x1404FE060
 * Callers:
 *     PsWow64GetSupportedArchitectures @ 0x1400F4FB0 (PsWow64GetSupportedArchitectures.c)
 *     BuildKnownDlls @ 0x1407A34E0 (BuildKnownDlls.c)
 * Callees:
 *     PspWow64GetSharedInformation @ 0x1404FE07C (PspWow64GetSharedInformation.c)
 */

_BOOL8 __fastcall PsWow64IsMachineSupported(__int64 a1)
{
  return (unsigned int)PspWow64GetSharedInformation(a1, 6LL) != 0;
}
