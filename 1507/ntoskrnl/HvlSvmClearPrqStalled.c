/*
 * XREFs of HvlSvmClearPrqStalled @ 0x1401EAB98
 * Callers:
 *     <none>
 * Callees:
 *     HvlpExtendedFastHypercall @ 0x14017ECA0 (HvlpExtendedFastHypercall.c)
 */

__int64 __fastcall HvlSvmClearPrqStalled(unsigned int a1)
{
  unsigned __int16 v1; // ax
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF

  v3 = a1;
  v1 = HvlpExtendedFastHypercall(65705LL, &v3, 8LL);
  switch ( v1 )
  {
    case 0u:
      return 0LL;
    case 0xBu:
    case 0x1Du:
      return 3221225626LL;
    case 0x59u:
      return 3473497LL;
  }
  return v1 | 0xC0350000;
}
