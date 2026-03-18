/*
 * XREFs of HvlpAttachRootSvmDevice @ 0x1401EBAA4
 * Callers:
 *     HvlSvmAttachPasidSpace @ 0x1401EAA9C (HvlSvmAttachPasidSpace.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlpExtendedFastHypercall @ 0x14017ECA0 (HvlpExtendedFastHypercall.c)
 *     memset @ 0x140195A80 (memset.c)
 *     HvlpDepositPages @ 0x1401E5ED8 (HvlpDepositPages.c)
 */

__int64 __fastcall HvlpAttachRootSvmDevice(int a1, int a2)
{
  unsigned __int16 v4; // ax
  _QWORD v6[4]; // [rsp+28h] [rbp-28h] BYREF

  memset(v6, 0, sizeof(v6));
  v6[0] = -1LL;
  LODWORD(v6[2]) |= 7u;
  v6[1] = (unsigned __int16)a1;
  HIDWORD(v6[2]) = a1;
  WORD1(v6[1]) = HIWORD(a1);
  BYTE4(v6[1]) = 1;
  LODWORD(v6[3]) = a2;
  while ( 1 )
  {
    v4 = HvlpExtendedFastHypercall(65666LL, v6, 32LL);
    if ( v4 != 11 )
      break;
    if ( (int)HvlpDepositPages(0) < 0 )
      return 3221225626LL;
  }
  switch ( v4 )
  {
    case 0u:
      return 0LL;
    case 0xBu:
    case 0x1Du:
      return 3221225626LL;
    case 0x59u:
      return 3473497LL;
    default:
      return v4 | 0xC0350000;
  }
}
