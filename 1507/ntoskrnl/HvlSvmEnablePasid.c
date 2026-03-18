/*
 * XREFs of HvlSvmEnablePasid @ 0x1401EAF14
 * Callers:
 *     <none>
 * Callees:
 *     HvlpExtendedFastHypercall @ 0x14017ECA0 (HvlpExtendedFastHypercall.c)
 *     HvlpDepositPages @ 0x1401E5ED8 (HvlpDepositPages.c)
 */

__int64 __fastcall HvlSvmEnablePasid(unsigned int a1, unsigned int a2)
{
  unsigned __int16 v2; // ax
  unsigned __int64 v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[0] = __PAIR64__(a2, a1);
  while ( 1 )
  {
    v2 = HvlpExtendedFastHypercall(65700LL, v4, 8LL);
    if ( (HvlpFlags & 4) == 0 || v2 != 11 )
      break;
    if ( (int)HvlpDepositPages(0) < 0 )
      return 3221225626LL;
  }
  switch ( v2 )
  {
    case 0u:
      return 0LL;
    case 0xBu:
    case 0x1Du:
      return 3221225626LL;
    case 0x59u:
      return 3473497LL;
    default:
      return v2 | 0xC0350000;
  }
}
