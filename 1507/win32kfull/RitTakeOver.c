/*
 * XREFs of RitTakeOver @ 0x1C01323F8
 * Callers:
 *     RawInputThread @ 0x1C0143560 (RawInputThread.c)
 * Callees:
 *     AddAndInitRimClient @ 0x1C01503F4 (AddAndInitRimClient.c)
 *     ?OpenDevice@@YAHPEAUDEVICEINFO@@@Z @ 0x1C01DDDDC (-OpenDevice@@YAHPEAUDEVICEINFO@@@Z.c)
 *     ?RegisterForDeviceChangeNotifications@@YAHPEAUDEVICEINFO@@@Z @ 0x1C01DE10C (-RegisterForDeviceChangeNotifications@@YAHPEAUDEVICEINFO@@@Z.c)
 *     ?UnregisterForDeviceChangeNotifications@@YAHPEAUDEVICEINFO@@@Z @ 0x1C01DE308 (-UnregisterForDeviceChangeNotifications@@YAHPEAUDEVICEINFO@@@Z.c)
 *     StartDeviceRead @ 0x1C01E0354 (StartDeviceRead.c)
 */

__int64 __fastcall RitTakeOver(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v3; // rcx
  __int64 i; // rbx
  int v5; // eax

  v1 = 1;
  if ( LODWORD(aDeviceTemplate[154]) )
  {
    if ( (int)AddAndInitRimClient() >= 0 )
    {
      HIDWORD(aDeviceTemplate[198]) = 64;
      RIMReadInput(
        aDeviceTemplate[155],
        &aDeviceTemplate[204],
        HIDWORD(aDeviceTemplate[198]),
        aDeviceTemplate[162],
        0,
        &aDeviceTemplate[201],
        &aDeviceTemplate[198],
        &aDeviceTemplate[199]);
    }
  }
  else
  {
    EnterDeviceInfoListCrit_(a1);
    for ( i = gpDeviceInfoList; i; i = *(_QWORD *)(i + 56) )
    {
      if ( !*(_QWORD *)(i + 224) )
      {
        v5 = *(_DWORD *)(i + 96);
        if ( (v5 & 0x100) != 0 )
        {
          *(_DWORD *)(i + 96) = v5 & 0xFFFFFEFF;
          UnregisterForDeviceChangeNotifications((struct DEVICEINFO *)i);
          if ( (unsigned int)OpenDevice((struct DEVICEINFO *)i) )
          {
            if ( !gProtocolType )
              RegisterForDeviceChangeNotifications((PVOID)i);
            StartDeviceRead((PVOID)i);
          }
          else
          {
            v1 = 0;
          }
        }
      }
    }
    LeaveDeviceInfoListCrit_(v3);
  }
  EtwTraceRitReEngaged();
  ZwSetEvent(ghDITRITEvent, 0LL);
  return v1;
}
