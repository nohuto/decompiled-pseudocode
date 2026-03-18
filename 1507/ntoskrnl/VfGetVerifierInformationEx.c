/*
 * XREFs of VfGetVerifierInformationEx @ 0x1407589F4
 * Callers:
 *     ExpQuerySystemInformation @ 0x14042E880 (ExpQuerySystemInformation.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 */

__int64 __fastcall VfGetVerifierInformationEx(_DWORD *a1)
{
  memset(a1, 0, 0x28uLL);
  *a1 = VfVerifyMode;
  a1[1] = dword_140331D78;
  a1[6] = 1000 * VfWdCancelTimeoutTicks;
  a1[7] = XdvEnabled;
  return 0LL;
}
