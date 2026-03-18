/*
 * XREFs of PopCalculateIdleInformation @ 0x14023D4A8
 * Callers:
 *     PopCalculateCsSummary @ 0x14023D18C (PopCalculateCsSummary.c)
 *     PopDripsWatchdogTimerCallbackRoutine @ 0x140241CCC (PopDripsWatchdogTimerCallbackRoutine.c)
 *     PopConnectedStandbySettingCallback @ 0x140583AF8 (PopConnectedStandbySettingCallback.c)
 *     PopSetDripsWatchdog @ 0x1406BD4C4 (PopSetDripsWatchdog.c)
 * Callees:
 *     PpmConvertTime @ 0x140014C30 (PpmConvertTime.c)
 */

unsigned __int64 __fastcall PopCalculateIdleInformation(__int64 a1)
{
  __int64 v1; // r11
  unsigned __int64 result; // rax
  unsigned int v4; // esi
  int v5; // r12d
  unsigned __int64 v6; // rbp
  int v7; // r15d
  unsigned int v8; // edi
  unsigned __int64 v9; // r13
  unsigned __int64 *v10; // r14
  __int64 v11; // r11

  v1 = 0LL;
  if ( PpmPlatformStates )
  {
    result = *(_QWORD *)(PpmPlatformStates + 48);
    v4 = *(_DWORD *)(result + 4);
  }
  else
  {
    result = 0LL;
    v4 = 0;
  }
  v5 = dword_140353880;
  v6 = 0LL;
  v7 = 0;
  v8 = 0;
  if ( v4 )
  {
    v9 = PopQpcFrequency;
    v10 = (unsigned __int64 *)(result + 56);
    do
    {
      result = PpmConvertTime(*v10, v9, 0xF4240uLL);
      v1 = result + v11;
      if ( v5 != -1 && v8 == v5 )
      {
        result = PpmConvertTime(*v10, v9, 0xF4240uLL);
        v7 = *((_DWORD *)v10 - 6);
        v6 = result;
      }
      ++v8;
      v10 += 124;
    }
    while ( v8 < v4 );
  }
  *(_QWORD *)(a1 + 8) = v6;
  *(_QWORD *)a1 = v1;
  *(_DWORD *)(a1 + 16) = v7;
  return result;
}
