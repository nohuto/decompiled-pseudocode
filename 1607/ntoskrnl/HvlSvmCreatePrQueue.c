/*
 * XREFs of HvlSvmCreatePrQueue @ 0x1401BDFB0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercall @ 0x140168B10 (HvcallpExtendedFastHypercall.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     HvlpDepositPages @ 0x1401BB508 (HvlpDepositPages.c)
 *     HvlpHvToNtStatus @ 0x1401BFEA4 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlSvmCreatePrQueue(unsigned int a1, unsigned int a2, unsigned __int64 a3, int a4, unsigned int a5)
{
  int v9; // ecx
  unsigned __int16 v10; // ax
  _QWORD v12[4]; // [rsp+30h] [rbp-38h] BYREF

  memset(v12, 0, sizeof(v12));
  v12[0] = __PAIR64__(a2, a1);
  v12[1] = a3 >> 12;
  LODWORD(v12[2]) = a4;
  if ( HvlpVirtualProcessorsIdentityMapped )
    v9 = a5;
  else
    v9 = *((unsigned __int8 *)&HvlpVirtualProcessorMapping + 2 * a5 + 1) | (*((unsigned __int8 *)&HvlpVirtualProcessorMapping
                                                                            + 2 * a5) << 6);
  HIDWORD(v12[2]) = v9;
  while ( 1 )
  {
    v10 = HvcallpExtendedFastHypercall(65703LL, v12, 32LL);
    if ( (HvlpFlags & 2) == 0 || v10 != 11 )
      break;
    if ( (int)HvlpDepositPages(0) < 0 )
      return 3221225626LL;
  }
  return HvlpHvToNtStatus(v10);
}
