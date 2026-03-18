/*
 * XREFs of PpmSnapDripsAccountingSnapshot @ 0x140235A1C
 * Callers:
 *     PopForceCompleteSleepStudySession @ 0x1401481F8 (PopForceCompleteSleepStudySession.c)
 *     PopConnectedStandbySettingCallback @ 0x140583AF8 (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     PpmConvertTime @ 0x140014C30 (PpmConvertTime.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     PpmEventTraceDripsAccountingSnapshot @ 0x1406BBF88 (PpmEventTraceDripsAccountingSnapshot.c)
 */

__int64 PpmSnapDripsAccountingSnapshot()
{
  __int64 result; // rax
  __int64 v1; // r11
  __int64 v2; // rdi
  unsigned __int64 v3; // rsi
  _QWORD *v4; // rbx
  unsigned __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r11
  _QWORD v8[26]; // [rsp+20h] [rbp-E8h] BYREF

  result = (unsigned int)dword_140353880;
  v1 = 0LL;
  if ( PpmPlatformStates && dword_140353880 != -1 )
  {
    v2 = 26LL;
    v3 = PopQpcFrequency;
    v4 = (_QWORD *)(992LL * (unsigned int)dword_140353880 + *(_QWORD *)(PpmPlatformStates + 48) + 184LL);
    do
    {
      v5 = PpmConvertTime(*v4 - *(_QWORD *)((char *)&PpmDripsAccountingSnapshot + v1), v3, 0x989680uLL);
      *(_QWORD *)((char *)v8 + v7) = v5;
      v1 = v7 + 8;
      v4 += 4;
      --v2;
    }
    while ( v2 );
    return PpmEventTraceDripsAccountingSnapshot(v6, v8);
  }
  return result;
}
