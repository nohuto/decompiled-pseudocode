/*
 * XREFs of HvlpTryToLockCpuManagementVersion @ 0x1401BFD1C
 * Callers:
 *     HvlpDetermineEnlightenments @ 0x1401BF9E0 (HvlpDetermineEnlightenments.c)
 * Callees:
 *     HvlpGetRegister64 @ 0x1401C13BC (HvlpGetRegister64.c)
 *     HvlpSetRegister64 @ 0x1401C1460 (HvlpSetRegister64.c)
 */

char HvlpTryToLockCpuManagementVersion()
{
  char v0; // bl
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 1LL;
  v0 = 0;
  HvlpSetRegister64(589831LL, 1LL);
  HvlpGetRegister64(589831LL, &v2);
  if ( (v2 & 0x4000000000000000LL) != 0 )
  {
    HvlpSetRegister64(589831LL, 0x8000000000000001uLL);
    return 1;
  }
  return v0;
}
