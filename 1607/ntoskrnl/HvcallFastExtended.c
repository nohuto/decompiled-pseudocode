/*
 * XREFs of HvcallFastExtended @ 0x140231E68
 * Callers:
 *     HvlpReadPerfRegister @ 0x1401BBBC8 (HvlpReadPerfRegister.c)
 *     HvlpGetVpRegisterSelfFast @ 0x14023CCC4 (HvlpGetVpRegisterSelfFast.c)
 * Callees:
 *     HvcallpExtendedFastHypercall @ 0x140168B10 (HvcallpExtendedFastHypercall.c)
 *     HvcallpExtendedFastHypercallWithOutput @ 0x140168B70 (HvcallpExtendedFastHypercallWithOutput.c)
 */

__int64 __fastcall HvcallFastExtended(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v6; // [rsp+20h] [rbp-18h]

  if ( !a5 )
    return HvcallpExtendedFastHypercall(a1, a2, a3);
  LODWORD(v6) = a5 >> 4;
  return HvcallpExtendedFastHypercallWithOutput(a1, a2, (unsigned int)(a3 + 15) >> 4, a4, v6);
}
