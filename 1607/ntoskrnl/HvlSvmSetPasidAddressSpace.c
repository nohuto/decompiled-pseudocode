/*
 * XREFs of HvlSvmSetPasidAddressSpace @ 0x1401BE570
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpExtendedFastHypercall @ 0x140168B10 (HvcallpExtendedFastHypercall.c)
 *     HvlpDepositPages @ 0x1401BB508 (HvlpDepositPages.c)
 */

__int64 __fastcall HvlSvmSetPasidAddressSpace(unsigned int a1, unsigned int a2, __int64 a3)
{
  unsigned __int16 v3; // ax
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v5[0] = __PAIR64__(a1, a2);
  v5[1] = a3;
  while ( 1 )
  {
    v3 = HvcallpExtendedFastHypercall(65695LL, v5, 16LL);
    if ( (HvlpFlags & 2) == 0 || v3 != 11 )
      break;
    if ( (int)HvlpDepositPages(0) < 0 )
      return 3221225626LL;
  }
  return HvlpHvToNtStatus(v3);
}
