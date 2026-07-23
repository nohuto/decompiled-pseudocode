/*
 * XREFs of PpmSnapDripsAccountingSnapshot @ 0x140200F94
 * Callers:
 *     PopForceCompleteCsSleepStudySession @ 0x140127178 (PopForceCompleteCsSleepStudySession.c)
 *     PopConnectedStandbySettingCallback @ 0x14054849C (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     PpmConvertTime @ 0x14000DBE4 (PpmConvertTime.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PopDiagTraceDripsHistogram @ 0x1402081A0 (PopDiagTraceDripsHistogram.c)
 *     PpmEventTraceDripsAccountingSnapshot @ 0x140673EFC (PpmEventTraceDripsAccountingSnapshot.c)
 */

__int64 __fastcall PpmSnapDripsAccountingSnapshot(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v6; // rbp
  unsigned __int64 v7; // r15
  _QWORD *v8; // r14
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD v11[26]; // [rsp+20h] [rbp-108h] BYREF

  result = (unsigned int)dword_140328980;
  v4 = 0LL;
  if ( PpmPlatformStates && dword_140328980 != -1 )
  {
    v6 = 26LL;
    v7 = PopQpcFrequency;
    v8 = (_QWORD *)(1000LL * (unsigned int)dword_140328980 + *(_QWORD *)(PpmPlatformStates + 48) + 192LL);
    do
    {
      v11[v4] = PpmConvertTime(*v8 - *(_QWORD *)((char *)&PpmDripsAccountingSnapshot + v4 * 8), v7, 0x989680uLL);
      ++v4;
      v8 += 4;
      --v6;
    }
    while ( v6 );
    PpmEventTraceDripsAccountingSnapshot(v9, v11);
    return PopDiagTraceDripsHistogram(a1, a2, v10, v11);
  }
  return result;
}
