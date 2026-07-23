/*
 * XREFs of HvlSvmDisablePasid @ 0x1401BE154
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpExtendedFastHypercall @ 0x140168B10 (HvcallpExtendedFastHypercall.c)
 */

__int64 __fastcall HvlSvmDisablePasid(unsigned int a1, unsigned int a2)
{
  unsigned __int16 v2; // ax
  unsigned __int64 v4; // [rsp+20h] [rbp-18h] BYREF

  v4 = __PAIR64__(a2, a1);
  v2 = HvcallpExtendedFastHypercall(65701LL, &v4, 8LL);
  return HvlpHvToNtStatus(v2);
}
