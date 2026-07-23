/*
 * XREFs of PopCalculateIdleInformation @ 0x140207780
 * Callers:
 *     PopCalculateCsSummary @ 0x14020740C (PopCalculateCsSummary.c)
 *     PopDripsWatchdogTimerCallbackRoutine @ 0x14020D500 (PopDripsWatchdogTimerCallbackRoutine.c)
 *     PopConnectedStandbySettingCallback @ 0x14054849C (PopConnectedStandbySettingCallback.c)
 *     PopSetDripsWatchdog @ 0x1406757A8 (PopSetDripsWatchdog.c)
 * Callees:
 *     PpmConvertTime @ 0x14000DBE4 (PpmConvertTime.c)
 */

unsigned __int64 __fastcall PopCalculateIdleInformation(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  unsigned __int64 result; // rax
  unsigned int v4; // ebp
  int v5; // r15d
  unsigned __int64 v6; // r12
  int v7; // r13d
  unsigned int v8; // esi
  unsigned __int64 v9; // r15
  unsigned __int64 *v10; // r14
  int v11; // edi
  int v13; // [rsp+68h] [rbp+10h]

  v1 = 0LL;
  v2 = a1;
  if ( PpmPlatformStates )
  {
    result = *(_QWORD *)(PpmPlatformStates + 48);
    v4 = *(_DWORD *)(result + 4);
    v5 = *(_DWORD *)(result + 8);
  }
  else
  {
    result = 0LL;
    v4 = 0;
    v5 = 0;
  }
  v6 = 0LL;
  v13 = v5;
  v7 = 0;
  v8 = 0;
  if ( v4 )
  {
    v9 = PopQpcFrequency;
    v10 = (unsigned __int64 *)(result + 56);
    v11 = dword_140328980;
    do
    {
      result = PpmConvertTime(*v10, v9, 0xF4240uLL);
      v1 += result;
      if ( v11 != -1 && v8 == v11 )
      {
        result = PpmConvertTime(*v10, v9, 0xF4240uLL);
        v7 = *((_DWORD *)v10 - 6);
        v6 = result;
      }
      ++v8;
      v10 += 125;
    }
    while ( v8 < v4 );
    v2 = a1;
    v5 = v13;
  }
  *(_QWORD *)v2 = v1;
  *(_QWORD *)(v2 + 8) = v6;
  *(_DWORD *)(v2 + 16) = v7;
  *(_DWORD *)(v2 + 20) = v5;
  return result;
}
