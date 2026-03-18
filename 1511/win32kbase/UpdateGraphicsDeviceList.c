/*
 * XREFs of UpdateGraphicsDeviceList @ 0x1C0021358
 * Callers:
 *     NtUserEnumDisplayDevices @ 0x1C001F170 (NtUserEnumDisplayDevices.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C0083730 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 * Callees:
 *     IsRemoteConnection_0 @ 0x1C0001B40 (IsRemoteConnection_0.c)
 *     xxxUserResetDisplayDevice_0 @ 0x1C0002278 (xxxUserResetDisplayDevice_0.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C001E650 (DrvUpdateGraphicsDeviceList.c)
 *     SafeEnableMDEV @ 0x1C0087B60 (SafeEnableMDEV.c)
 *     SafeDisableMDEV @ 0x1C0087C00 (SafeDisableMDEV.c)
 */

__int64 __fastcall UpdateGraphicsDeviceList(int *a1)
{
  int v2; // ebx
  __int64 result; // rax

  v2 = 0;
  result = IsRemoteConnection_0();
  if ( !(_DWORD)result )
  {
    result = DrvUpdateGraphicsDeviceList(0, 1);
    if ( !(_DWORD)result )
    {
      result = SafeDisableMDEV(1LL);
      if ( (_DWORD)result )
      {
        DrvUpdateGraphicsDeviceList(1, 1);
        SafeEnableMDEV(1LL);
        result = xxxUserResetDisplayDevice_0();
        v2 = 1;
      }
    }
  }
  *a1 = v2;
  return result;
}
