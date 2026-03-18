/*
 * XREFs of PopEsBrightnessSettingCallback @ 0x1405C27A0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleasePolicyLock @ 0x1403EB86C (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1403EB8DC (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopEsBrightnessSettingCallback(_QWORD *a1, int *a2, int a3)
{
  unsigned int v4; // r10d
  __int64 v5; // r9

  v4 = -1073741811;
  v5 = *(_QWORD *)&GUID_ENERGY_SAVER_BRIGHTNESS.Data1 - *a1;
  if ( *(_QWORD *)&GUID_ENERGY_SAVER_BRIGHTNESS.Data1 == *a1 )
    v5 = *(_QWORD *)GUID_ENERGY_SAVER_BRIGHTNESS.Data4 - a1[1];
  if ( !v5 && a3 == 4 && a2 )
  {
    PopAcquirePolicyLock();
    dword_14032E880 = *a2;
    PopReleasePolicyLock();
    return 0;
  }
  return v4;
}
