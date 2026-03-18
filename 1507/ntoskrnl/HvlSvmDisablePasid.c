/*
 * XREFs of HvlSvmDisablePasid @ 0x1401EAEAC
 * Callers:
 *     <none>
 * Callees:
 *     HvlpExtendedFastHypercall @ 0x14017ECA0 (HvlpExtendedFastHypercall.c)
 */

__int64 __fastcall HvlSvmDisablePasid(unsigned int a1, unsigned int a2)
{
  unsigned __int16 v2; // ax
  unsigned __int64 v4; // [rsp+20h] [rbp-18h] BYREF

  v4 = __PAIR64__(a2, a1);
  v2 = HvlpExtendedFastHypercall(65701LL, &v4, 8LL);
  switch ( v2 )
  {
    case 0u:
      return 0LL;
    case 0xBu:
    case 0x1Du:
      return 3221225626LL;
    case 0x59u:
      return 3473497LL;
  }
  return v2 | 0xC0350000;
}
