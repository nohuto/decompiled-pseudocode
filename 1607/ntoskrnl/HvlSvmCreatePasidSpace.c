/*
 * XREFs of HvlSvmCreatePasidSpace @ 0x1401BDF44
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpExtendedFastHypercall @ 0x140168B10 (HvcallpExtendedFastHypercall.c)
 *     HvlpDepositPages @ 0x1401BB508 (HvlpDepositPages.c)
 */

__int64 __fastcall HvlSvmCreatePasidSpace(unsigned int a1, unsigned int a2)
{
  unsigned __int16 v2; // ax
  unsigned __int64 v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[0] = __PAIR64__(a2, a1);
  while ( 1 )
  {
    v2 = HvcallpExtendedFastHypercall(65693LL, v4, 8LL);
    if ( (HvlpFlags & 2) == 0 || v2 != 11 )
      break;
    if ( (int)HvlpDepositPages(0) < 0 )
      return 3221225626LL;
  }
  return HvlpHvToNtStatus(v2);
}
