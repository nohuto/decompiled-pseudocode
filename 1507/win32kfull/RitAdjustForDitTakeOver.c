/*
 * XREFs of RitAdjustForDitTakeOver @ 0x1C0146338
 * Callers:
 *     RawInputThread @ 0x1C0143560 (RawInputThread.c)
 * Callees:
 *     ?RegisterForDeviceChangeNotifications@@YAHPEAUDEVICEINFO@@@Z @ 0x1C01DE10C (-RegisterForDeviceChangeNotifications@@YAHPEAUDEVICEINFO@@@Z.c)
 */

__int64 __fastcall RitAdjustForDitTakeOver(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v3; // rcx
  __int64 i; // rbx

  v1 = 1;
  if ( !LODWORD(aDeviceTemplate[154]) && !gProtocolType )
  {
    EnterDeviceInfoListCrit_(a1);
    for ( i = gpDeviceInfoList; i; i = *(_QWORD *)(i + 56) )
    {
      if ( (*(_DWORD *)(i + 96) & 4) != 0 )
      {
        if ( !v1 || (v1 = 1, !(unsigned int)RegisterForDeviceChangeNotifications((PVOID)i)) )
          v1 = 0;
      }
    }
    LeaveDeviceInfoListCrit_(v3);
  }
  ZwSetEvent(ghDITRITEvent, 0LL);
  return v1;
}
