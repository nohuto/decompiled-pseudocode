/*
 * XREFs of PpmSnapDripsAccountingSnapshot @ 0x1401E8758
 * Callers:
 *     PopForceCompleteSleepStudySession @ 0x14011A0AC (PopForceCompleteSleepStudySession.c)
 *     PopConnectedStandbySettingCallback @ 0x14050C7FC (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     PpmConvertTime @ 0x14009DB08 (PpmConvertTime.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     PpmEventTraceDripsAccountingSnapshot @ 0x14063AF80 (PpmEventTraceDripsAccountingSnapshot.c)
 */

__int64 PpmSnapDripsAccountingSnapshot()
{
  __int64 result; // rax
  __int64 v1; // rbx
  __int64 v2; // rsi
  unsigned __int64 v3; // rbp
  _QWORD *v4; // rdi
  __int64 v5; // rcx
  _QWORD v6[26]; // [rsp+20h] [rbp-E8h] BYREF

  result = (unsigned int)dword_140305B00;
  v1 = 0LL;
  if ( PpmPlatformStates && dword_140305B00 != -1 )
  {
    v2 = 26LL;
    v3 = PopQpcFrequency;
    v4 = (_QWORD *)(1000LL * (unsigned int)dword_140305B00 + *(_QWORD *)(PpmPlatformStates + 48) + 192LL);
    do
    {
      v6[v1] = PpmConvertTime(*v4 - *(_QWORD *)((char *)&PpmDripsAccountingSnapshot + v1 * 8), v3, 0x989680uLL);
      ++v1;
      v4 += 4;
      --v2;
    }
    while ( v2 );
    return PpmEventTraceDripsAccountingSnapshot(v5, v6);
  }
  return result;
}
