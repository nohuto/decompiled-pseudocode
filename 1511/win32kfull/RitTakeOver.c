/*
 * XREFs of RitTakeOver @ 0x1C009F9A4
 * Callers:
 *     RawInputThread @ 0x1C009B5A0 (RawInputThread.c)
 * Callees:
 *     AddAndInitRimClient @ 0x1C00A0A18 (AddAndInitRimClient.c)
 *     ?OpenDevice@@YAHPEAUDEVICEINFO@@@Z @ 0x1C01DE3E0 (-OpenDevice@@YAHPEAUDEVICEINFO@@@Z.c)
 *     ?RegisterForDeviceChangeNotifications@@YAHPEAUDEVICEINFO@@@Z @ 0x1C01DE710 (-RegisterForDeviceChangeNotifications@@YAHPEAUDEVICEINFO@@@Z.c)
 *     ?UnregisterForDeviceChangeNotifications@@YAHPEAUDEVICEINFO@@@Z @ 0x1C01DE910 (-UnregisterForDeviceChangeNotifications@@YAHPEAUDEVICEINFO@@@Z.c)
 *     StartDeviceRead @ 0x1C01E0968 (StartDeviceRead.c)
 */

__int64 RitTakeOver()
{
  unsigned int v0; // edi
  __int64 i; // rbx
  int v3; // eax

  v0 = 1;
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
    EnterDeviceInfoListCrit_();
    for ( i = gpDeviceInfoList; i; i = *(_QWORD *)(i + 56) )
    {
      if ( !*(_QWORD *)(i + 216) )
      {
        v3 = *(_DWORD *)(i + 88);
        if ( (v3 & 0x100) != 0 )
        {
          *(_DWORD *)(i + 88) = v3 & 0xFFFFFEFF;
          UnregisterForDeviceChangeNotifications((struct DEVICEINFO *)i);
          if ( (unsigned int)OpenDevice((struct DEVICEINFO *)i) )
          {
            if ( !gProtocolType )
              RegisterForDeviceChangeNotifications((PVOID)i);
            StartDeviceRead((PVOID)i);
          }
          else
          {
            v0 = 0;
          }
        }
      }
    }
    LeaveDeviceInfoListCrit_();
  }
  EtwTraceRitReEngaged();
  ZwSetEvent(ghDITRITEvent, 0LL);
  return v0;
}
