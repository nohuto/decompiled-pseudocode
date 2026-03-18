/*
 * XREFs of bSetDeviceSessionUsage @ 0x1C0066360
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x1C0020D10 (DrvUpdateGraphicsDeviceList.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C005AC00 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0063F40 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C0066760 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     DrvCleanupOneGraphicsDevice @ 0x1C006CCB0 (DrvCleanupOneGraphicsDevice.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C006F8F0 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     DrvCloseLocalGraphicsDevices @ 0x1C007E4C0 (DrvCloseLocalGraphicsDevices.c)
 * Callees:
 *     GreDeviceIoControlEx @ 0x1C00665F0 (GreDeviceIoControlEx.c)
 */

__int64 __fastcall bSetDeviceSessionUsage(__int64 a1, int a2)
{
  struct _DEVICE_OBJECT *v4; // rcx
  unsigned int v5; // edi
  const CHAR *v7; // rcx
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  int v9; // [rsp+60h] [rbp+18h] BYREF
  unsigned int v10; // [rsp+64h] [rbp+1Ch]

  if ( a1 == -4 || (*(_DWORD *)(a1 + 160) & 0x6000008) != 0 )
  {
    return 1;
  }
  else
  {
    v4 = *(struct _DEVICE_OBJECT **)(a1 + 136);
    v10 = 0;
    v5 = 1;
    v9 = a2;
    if ( (int)GreDeviceIoControlEx(v4, 0x23202Bu, &v9, 8u, &v9, 8u, (__int64)&v8, 1u) >= 0 )
    {
      if ( v10 )
      {
        if ( a2 )
          *(_DWORD *)(a1 + 164) |= 2u;
        else
          *(_DWORD *)(a1 + 164) &= ~2u;
      }
      else
      {
        v7 = "Trying to enable physical device already in use.\n";
        if ( !a2 )
          v7 = "Trying to disable physical device not enabled in this session.\n";
        DbgPrint(v7);
      }
      return v10;
    }
  }
  return v5;
}
