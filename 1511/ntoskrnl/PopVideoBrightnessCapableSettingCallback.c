/*
 * XREFs of PopVideoBrightnessCapableSettingCallback @ 0x1401E94C8
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquirePolicyLock @ 0x14039C560 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x14039CE60 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopVideoBrightnessCapableSettingCallback(_QWORD *a1, _DWORD *a2, int a3)
{
  __int64 v4; // r9
  unsigned int v5; // ebx

  v4 = *(_QWORD *)&GUID_VIDEO_BRIGHTNESS_CAPABLE.Data1 - *a1;
  if ( *(_QWORD *)&GUID_VIDEO_BRIGHTNESS_CAPABLE.Data1 == *a1 )
    v4 = *(_QWORD *)GUID_VIDEO_BRIGHTNESS_CAPABLE.Data4 - a1[1];
  v5 = 0;
  if ( !v4 && a3 == 4 && a2 )
  {
    PopAcquirePolicyLock();
    if ( *a2 )
      byte_1402DDF6A = 1;
    PopReleasePolicyLock();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
