/*
 * XREFs of HvlSvmCreatePrQueue @ 0x1401EACA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlpExtendedFastHypercall @ 0x14017ECA0 (HvlpExtendedFastHypercall.c)
 *     memset @ 0x140195A80 (memset.c)
 *     HvlpDepositPages @ 0x1401E5ED8 (HvlpDepositPages.c)
 */

__int64 __fastcall HvlSvmCreatePrQueue(unsigned int a1, unsigned int a2, __int64 a3, int a4, int a5)
{
  int v9; // ecx
  unsigned __int16 v10; // ax
  _QWORD v12[4]; // [rsp+28h] [rbp-30h] BYREF

  memset(v12, 0, sizeof(v12));
  v12[0] = __PAIR64__(a2, a1);
  v12[1] = a3 >> 12;
  LODWORD(v12[2]) = a4;
  if ( HvlpVirtualProcessorsIdentityMapped )
    v9 = a5;
  else
    v9 = (unsigned __int8)HvlpVirtualProcessorMapping[2 * a5 + 1] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * a5] << 6);
  HIDWORD(v12[2]) = v9;
  while ( 1 )
  {
    v10 = HvlpExtendedFastHypercall(65703LL, v12, 32LL);
    if ( (HvlpFlags & 4) == 0 || v10 != 11 )
      break;
    if ( (int)HvlpDepositPages(0) < 0 )
      return 3221225626LL;
  }
  switch ( v10 )
  {
    case 0u:
      return 0LL;
    case 0xBu:
    case 0x1Du:
      return 3221225626LL;
    case 0x59u:
      return 3473497LL;
    default:
      return v10 | 0xC0350000;
  }
}
