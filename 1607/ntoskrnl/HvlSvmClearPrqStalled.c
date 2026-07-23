/*
 * XREFs of HvlSvmClearPrqStalled @ 0x1401BDEF0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpExtendedFastHypercall @ 0x140168B10 (HvcallpExtendedFastHypercall.c)
 */

__int64 __fastcall HvlSvmClearPrqStalled(unsigned int a1)
{
  unsigned __int16 v1; // ax
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF

  v3 = a1;
  v1 = HvcallpExtendedFastHypercall(65705LL, &v3, 8LL);
  return HvlpHvToNtStatus(v1);
}
