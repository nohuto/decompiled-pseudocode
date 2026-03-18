/*
 * XREFs of UpdateGraphicsDeviceList @ 0x1C001611C
 * Callers:
 *     NtUserEnumDisplayDevices @ 0x1C0016030 (NtUserEnumDisplayDevices.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C0085090 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 * Callees:
 *     IsRemoteConnection_0 @ 0x1C0001B10 (IsRemoteConnection_0.c)
 *     xxxUserResetDisplayDevice_0 @ 0x1C0001DD8 (xxxUserResetDisplayDevice_0.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C00163D0 (DrvUpdateGraphicsDeviceList.c)
 *     SafeEnableMDEV @ 0x1C0088C00 (SafeEnableMDEV.c)
 *     SafeDisableMDEV @ 0x1C0088CA0 (SafeDisableMDEV.c)
 */

__int64 __fastcall UpdateGraphicsDeviceList(int *a1)
{
  int v2; // ebx
  __int64 result; // rax

  v2 = 0;
  result = IsRemoteConnection_0();
  if ( !(_DWORD)result )
  {
    result = DrvUpdateGraphicsDeviceList(0LL, 1LL);
    if ( !(_DWORD)result )
    {
      result = SafeDisableMDEV(1LL);
      if ( (_DWORD)result )
      {
        DrvUpdateGraphicsDeviceList(1LL, 1LL);
        SafeEnableMDEV(1LL);
        result = xxxUserResetDisplayDevice_0();
        v2 = 1;
      }
    }
  }
  *a1 = v2;
  return result;
}
