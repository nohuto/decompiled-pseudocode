/*
 * XREFs of PopInitializePowerSettings @ 0x1407E7764
 * Callers:
 *     PoInitSystem @ 0x1407D2D24 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

PVOID *PopInitializePowerSettings()
{
  _QWORD *v0; // rax
  __int64 v1; // rcx
  PVOID *result; // rax

  v0 = &PopSessionSpecificLists;
  v1 = 2LL;
  do
  {
    v0[1] = v0;
    *v0 = v0;
    v0 += 2;
    --v1;
  }
  while ( v1 );
  LODWORD(PopSettingLock) = 1;
  qword_14032EFE8 = 0LL;
  dword_14032EFF0 = 0;
  dword_14032EFFC = 0;
  qword_14032F008 = (__int64)&qword_14032F000;
  qword_14032F000 = (__int64)&qword_14032F000;
  qword_14032E058 = (__int64)&PopRegisteredPowerSettingCallbacks;
  PopRegisteredPowerSettingCallbacks = (__int64)&PopRegisteredPowerSettingCallbacks;
  result = &PopPowerSettings;
  qword_14032E048 = (__int64)&PopPowerSettings;
  PopPowerSettings = &PopPowerSettings;
  word_14032EFF8 = 1;
  byte_14032EFFA = 6;
  return result;
}
