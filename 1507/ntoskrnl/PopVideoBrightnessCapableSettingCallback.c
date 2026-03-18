/*
 * XREFs of PopVideoBrightnessCapableSettingCallback @ 0x140236E98
 * Callers:
 *     <none>
 * Callees:
 *     PopReleasePolicyLock @ 0x1403EB86C (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1403EB8DC (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopVideoBrightnessCapableSettingCallback(_QWORD *a1, _DWORD *a2, int a3)
{
  __int64 v4; // r9
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8

  v4 = *(_QWORD *)&GUID_VIDEO_BRIGHTNESS_CAPABLE.Data1 - *a1;
  if ( *(_QWORD *)&GUID_VIDEO_BRIGHTNESS_CAPABLE.Data1 == *a1 )
    v4 = *(_QWORD *)GUID_VIDEO_BRIGHTNESS_CAPABLE.Data4 - a1[1];
  v5 = 0;
  if ( !v4 && a3 == 4 && a2 )
  {
    PopAcquirePolicyLock();
    if ( *a2 )
      byte_14032E52A = 1;
    PopReleasePolicyLock(v7, v6, v8);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
