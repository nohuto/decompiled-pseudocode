/*
 * XREFs of UsbhDisarmHubForWakeDetect @ 0x1C00227B4
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C000120C (UsbhFdoSetPowerDx_Action.c)
 *     UsbhFdoD0Worker_Action @ 0x1C0002BA0 (UsbhFdoD0Worker_Action.c)
 *     UsbhArmHubForWakeDetect @ 0x1C0018E40 (UsbhArmHubForWakeDetect.c)
 *     Usbh_SSH_HubPendingResume @ 0x1C001B050 (Usbh_SSH_HubPendingResume.c)
 *     UsbhDisarmHubWakeOnConnect @ 0x1C0022768 (UsbhDisarmHubWakeOnConnect.c)
 *     UsbhUninitialize @ 0x1C003D1C0 (UsbhUninitialize.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x1C0045ED8 (UsbhFdoPower_PowerFailureEntry.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 */

void __fastcall UsbhDisarmHubForWakeDetect(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // r10
  _DWORD *v5; // rax
  _DWORD *v6; // rbx
  signed __int32 v7; // eax
  signed __int32 v8; // ett

  Log(a1, 16, 1750554413, 0LL, 0LL);
  v5 = FdoExt(v4, v1, v2, v3);
  v6 = v5;
  if ( v5[1221] )
  {
    _m_prefetchw(v5 + 1221);
    v7 = v5[1221];
    do
    {
      v8 = v7;
      v7 = _InterlockedCompareExchange(v6 + 1221, v7 | 1, v7);
    }
    while ( v8 != v7 );
    if ( v7 == 4 )
    {
      IoCancelIrp(*((PIRP *)v6 + 611));
      if ( _InterlockedCompareExchange(v6 + 1221, 4, 5) == 7 )
        IofCompleteRequest(*((PIRP *)v6 + 611), 0);
    }
  }
}
