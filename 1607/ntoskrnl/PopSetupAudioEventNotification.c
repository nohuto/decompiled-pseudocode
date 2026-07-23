/*
 * XREFs of PopSetupAudioEventNotification @ 0x1405803D0
 * Callers:
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 * Callees:
 *     ExSubscribeWnfStateChange @ 0x1404D1B24 (ExSubscribeWnfStateChange.c)
 */

__int64 PopSetupAudioEventNotification()
{
  __int64 *v0; // rbx
  int *v1; // rdi
  __int64 v2; // rsi
  __int64 result; // rax
  _QWORD v4[3]; // [rsp+30h] [rbp-18h] BYREF
  int v5; // [rsp+50h] [rbp+8h] BYREF
  int v6; // [rsp+54h] [rbp+Ch]
  char v7; // [rsp+58h] [rbp+10h] BYREF

  v5 = 301;
  v4[0] = &WNF_SEB_OFFLOADED_AUDIO;
  v0 = v4;
  v6 = 302;
  v4[1] = &WNF_SEB_NON_OFFLOADED_AUDIO;
  v1 = &v5;
  v2 = 2LL;
  do
  {
    result = ExSubscribeWnfStateChange(
               (__int64)&v7,
               *v0++,
               1,
               0,
               (__int64)PopWnfAudioCallback,
               (__int64)&PopPowerSettingValues + (unsigned int)*v1++);
    --v2;
  }
  while ( v2 );
  return result;
}
