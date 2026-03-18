/*
 * XREFs of DrvUpdateDisplayDriverParameters @ 0x1C0064CA0
 * Callers:
 *     ApplyPathModalityToCdsRegistryStore @ 0x1C0064B48 (ApplyPathModalityToCdsRegistryStore.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0065BC0 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     DrvDisplaySwitchHandler @ 0x1C00C8D70 (DrvDisplaySwitchHandler.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEAKPEAGKPEAJG@Z @ 0x1C0037320 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     PALLOCMEM2 @ 0x1C0037A4C (PALLOCMEM2.c)
 *     UpdateMonitorDevices @ 0x1C005F930 (UpdateMonitorDevices.c)
 *     ?DrvWriteDisplayDriverParameters@@YAJPEAUtagGRAPHICS_DEVICE@@KPEBGQEAU_devicemodeW@@HH@Z @ 0x1C0064D94 (-DrvWriteDisplayDriverParameters@@YAJPEAUtagGRAPHICS_DEVICE@@KPEBGQEAU_devicemodeW@@HH@Z.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 */

__int64 __fastcall DrvUpdateDisplayDriverParameters(
        struct tagGRAPHICS_DEVICE *a1,
        struct _devicemodeW *a2,
        int a3,
        int a4,
        int a5)
{
  unsigned __int16 v7; // cx
  int v8; // ebp
  int v10; // r15d
  const unsigned __int16 *RegistryHandleFromDeviceMap; // rax
  unsigned int v12; // edx
  unsigned __int16 *v13; // r14
  unsigned int v15; // ebp
  _OWORD *v16; // rax
  unsigned int v17; // r14d
  __int64 v18; // rdx
  const unsigned __int16 *v19; // rax
  unsigned int v20; // edx
  unsigned __int16 *v21; // r12
  int v22; // [rsp+40h] [rbp-38h]

  v7 = gProtocolType;
  v8 = -1073741823;
  v22 = -1073741823;
  v10 = 2;
  if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
  {
    *((_DWORD *)a1 + 69) = a3 == 0;
    if ( (*((_DWORD *)a1 + 40) & 8) != 0 && a2 )
    {
      v15 = a2->dmDriverExtra + a2->dmSize;
      if ( *((_QWORD *)a1 + 36) )
      {
        Win32FreePool();
        *((_QWORD *)a1 + 36) = 0LL;
      }
      v16 = PALLOCMEM2(v15, 1936876615LL, 0);
      *((_QWORD *)a1 + 36) = v16;
      if ( !v16 )
        return 3221225495LL;
      *v16 = *(_OWORD *)a2->dmDeviceName;
      v16[1] = *(_OWORD *)&a2->dmDeviceName[8];
      v16[2] = *(_OWORD *)&a2->dmDeviceName[16];
      v16[3] = *(_OWORD *)&a2->dmDeviceName[24];
      v16[4] = *(_OWORD *)&a2->dmSpecVersion;
      v16[5] = *(union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)((char *)&a2->76 + 4);
      v16[6] = *(_OWORD *)&a2->dmYResolution;
      v16[7] = *(_OWORD *)&a2->dmFormName[5];
      v16[8] = *(_OWORD *)&a2->dmFormName[13];
      v16[9] = *(_OWORD *)&a2->dmFormName[21];
      v16[10] = *(_OWORD *)&a2->dmFormName[29];
      v16[11] = *(_OWORD *)&a2->dmPelsHeight;
      v16[12] = *(_OWORD *)&a2->dmICMIntent;
      *((_QWORD *)v16 + 26) = *(_QWORD *)&a2->dmReserved2;
      *((_DWORD *)v16 + 54) = a2->dmPanningHeight;
      memmove((void *)(*((_QWORD *)a1 + 36) + 220LL), &a2[1], a2->dmDriverExtra);
    }
    return 0LL;
  }
  else
  {
    while ( 1 )
    {
      RegistryHandleFromDeviceMap = (const unsigned __int16 *)DrvGetRegistryHandleFromDeviceMap(
                                                                (unsigned __int16 *)a1,
                                                                v10,
                                                                0LL,
                                                                0LL,
                                                                0,
                                                                0LL,
                                                                v7);
      v13 = (unsigned __int16 *)RegistryHandleFromDeviceMap;
      if ( RegistryHandleFromDeviceMap )
      {
        v22 = DrvWriteDisplayDriverParameters(a1, v12, RegistryHandleFromDeviceMap, a2, a3, a5);
        v8 = v22;
        ZwClose(v13);
      }
      if ( v8 >= 0 )
        break;
      if ( v10 != 2 )
        goto LABEL_6;
      v7 = gProtocolType;
      v10 = 0;
    }
    if ( a4 )
    {
      UpdateMonitorDevices();
      v17 = 0;
      if ( *((_DWORD *)a1 + 56) )
      {
        do
        {
          v18 = *((_QWORD *)a1 + 29);
          if ( (*(_BYTE *)(v18 + 20LL * v17) & 3) == 3 )
          {
            v19 = (const unsigned __int16 *)DrvGetRegistryHandleFromDeviceMap(
                                              (unsigned __int16 *)a1,
                                              v10,
                                              (unsigned int *)(v18 + 4 * (5LL * v17 + 1)),
                                              0LL,
                                              0,
                                              0LL,
                                              gProtocolType);
            v21 = (unsigned __int16 *)v19;
            if ( v19 )
            {
              DrvWriteDisplayDriverParameters(a1, v20, v19, a2, a3, a5);
              ZwClose(v21);
            }
          }
          ++v17;
        }
        while ( v17 < *((_DWORD *)a1 + 56) );
        v8 = v22;
      }
    }
LABEL_6:
    if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
      return 0;
    return (unsigned int)v8;
  }
}
