/*
 * XREFs of HvlSvmSetPasidAddressSpace @ 0x1401EB83C
 * Callers:
 *     <none>
 * Callees:
 *     HvlpExtendedFastHypercall @ 0x14017ECA0 (HvlpExtendedFastHypercall.c)
 *     HvlpDepositPages @ 0x1401E5ED8 (HvlpDepositPages.c)
 */

__int64 __fastcall HvlSvmSetPasidAddressSpace(unsigned int a1, unsigned int a2, __int64 a3)
{
  unsigned __int16 v3; // ax
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v5[1] = a3;
  v5[0] = __PAIR64__(a1, a2);
  while ( 1 )
  {
    v3 = HvlpExtendedFastHypercall(65695LL, v5, 16LL);
    if ( (HvlpFlags & 4) == 0 || v3 != 11 )
      break;
    if ( (int)HvlpDepositPages(0) < 0 )
      return 3221225626LL;
  }
  switch ( v3 )
  {
    case 0u:
      return 0LL;
    case 0xBu:
    case 0x1Du:
      return 3221225626LL;
    case 0x59u:
      return 3473497LL;
    default:
      return v3 | 0xC0350000;
  }
}
