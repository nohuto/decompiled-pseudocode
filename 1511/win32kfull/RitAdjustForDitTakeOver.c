/*
 * XREFs of RitAdjustForDitTakeOver @ 0x1C009E150
 * Callers:
 *     RawInputThread @ 0x1C009B5A0 (RawInputThread.c)
 * Callees:
 *     ?RegisterForDeviceChangeNotifications@@YAHPEAUDEVICEINFO@@@Z @ 0x1C01DE710 (-RegisterForDeviceChangeNotifications@@YAHPEAUDEVICEINFO@@@Z.c)
 */

__int64 RitAdjustForDitTakeOver()
{
  unsigned int v0; // edi
  __int64 i; // rbx

  v0 = 1;
  if ( !LODWORD(aDeviceTemplate[154]) && !gProtocolType )
  {
    EnterDeviceInfoListCrit_();
    for ( i = gpDeviceInfoList; i; i = *(_QWORD *)(i + 56) )
    {
      if ( (*(_DWORD *)(i + 88) & 4) != 0 )
      {
        if ( !v0 || (v0 = 1, !(unsigned int)RegisterForDeviceChangeNotifications((PVOID)i)) )
          v0 = 0;
      }
    }
    LeaveDeviceInfoListCrit_();
  }
  ZwSetEvent(ghDITRITEvent, 0LL);
  return v0;
}
