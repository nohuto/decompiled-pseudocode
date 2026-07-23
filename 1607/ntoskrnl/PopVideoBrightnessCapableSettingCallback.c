/*
 * XREFs of PopVideoBrightnessCapableSettingCallback @ 0x140201EA8
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopVideoBrightnessCapableSettingCallback(_QWORD *a1, _DWORD *a2, __int64 a3)
{
  __int64 v4; // r9
  unsigned int v5; // ebx

  v4 = *(_QWORD *)&GUID_VIDEO_BRIGHTNESS_CAPABLE.Data1 - *a1;
  if ( *(_QWORD *)&GUID_VIDEO_BRIGHTNESS_CAPABLE.Data1 == *a1 )
    v4 = *(_QWORD *)GUID_VIDEO_BRIGHTNESS_CAPABLE.Data4 - a1[1];
  v5 = 0;
  if ( !v4 && (_DWORD)a3 == 4 && a2 )
  {
    PopAcquirePolicyLock(a1, a2, a3, 0LL);
    if ( *a2 )
      byte_140303EAA = 1;
    PopReleasePolicyLock();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
