/*
 * XREFs of PopRtcWakeSettingCallback @ 0x14054D654
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopRtcWakeSettingCallback(_QWORD *a1, _DWORD *a2, int a3)
{
  unsigned int v4; // r10d
  __int64 v5; // r9

  v4 = -1073741811;
  v5 = *(_QWORD *)&GUID_ALLOW_RTC_WAKE.Data1 - *a1;
  if ( *(_QWORD *)&GUID_ALLOW_RTC_WAKE.Data1 == *a1 )
    v5 = *(_QWORD *)GUID_ALLOW_RTC_WAKE.Data4 - a1[1];
  if ( !v5 && a3 == 4 && a2 )
  {
    PopAcquirePolicyLock();
    PoRtcWakeAllowed = *a2 != 0;
    PopReleasePolicyLock();
    return 0;
  }
  return v4;
}
