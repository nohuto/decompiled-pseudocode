/*
 * XREFs of VfGetVerifierInformationEx @ 0x140721000
 * Callers:
 *     ExpQuerySystemInformation @ 0x140415620 (ExpQuerySystemInformation.c)
 * Callees:
 *     memset @ 0x1401715C0 (memset.c)
 */

__int64 __fastcall VfGetVerifierInformationEx(_DWORD *a1)
{
  memset(a1, 0, 0x28uLL);
  *a1 = VfVerifyMode;
  a1[1] = dword_140307278;
  a1[6] = 1000 * VfWdCancelTimeoutTicks;
  a1[7] = XdvEnabled;
  return 0LL;
}
