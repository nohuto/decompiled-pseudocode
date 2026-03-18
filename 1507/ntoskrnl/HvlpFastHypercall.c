/*
 * XREFs of HvlpFastHypercall @ 0x1401E5834
 * Callers:
 *     HvlpGetVpRegisterSelfFast @ 0x1401EE124 (HvlpGetVpRegisterSelfFast.c)
 * Callees:
 *     HvlpExtendedFastHypercall @ 0x14017ECA0 (HvlpExtendedFastHypercall.c)
 *     HvlpExtendedFastHypercallWithOutput @ 0x14017ED00 (HvlpExtendedFastHypercallWithOutput.c)
 */

__int64 __fastcall HvlpFastHypercall(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v6; // [rsp+20h] [rbp-18h]

  if ( !a4 || !a5 )
    return HvlpExtendedFastHypercall(a1, a2, a3);
  LODWORD(v6) = a5 >> 4;
  return HvlpExtendedFastHypercallWithOutput(a1, a2, (unsigned int)(a3 + 15) >> 4, a4, v6);
}
