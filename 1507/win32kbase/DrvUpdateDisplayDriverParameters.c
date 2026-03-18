/*
 * XREFs of DrvUpdateDisplayDriverParameters @ 0x1C0060740
 * Callers:
 *     ApplyPathModalityToCdsRegistryStore @ 0x1C00605EC (ApplyPathModalityToCdsRegistryStore.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0061490 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     DrvDisplaySwitchHandler @ 0x1C00BB850 (DrvDisplaySwitchHandler.c)
 * Callees:
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEAKPEAGKPEAJG@Z @ 0x1C00328A8 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C004C24C (PALLOCMEM2.c)
 *     ?DrvWriteDisplayDriverParameters@@YAJPEAUtagGRAPHICS_DEVICE@@KPEBGQEAU_devicemodeW@@HH@Z @ 0x1C0060834 (-DrvWriteDisplayDriverParameters@@YAJPEAUtagGRAPHICS_DEVICE@@KPEBGQEAU_devicemodeW@@HH@Z.c)
 *     UpdateMonitorDevices @ 0x1C0066420 (UpdateMonitorDevices.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
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
  unsigned int v10; // r15d
  const unsigned __int16 *RegistryHandleFromDeviceMap; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int16 *v14; // r14
  unsigned int v16; // ebp
  _OWORD *v17; // rax
  unsigned int v18; // r14d
  __int64 v19; // rdx
  const unsigned __int16 *v20; // rax
  unsigned int v21; // edx
  unsigned __int16 *v22; // r12
  int v23; // [rsp+40h] [rbp-38h]

  v7 = gProtocolType;
  v8 = -1073741823;
  v23 = -1073741823;
  v10 = 2;
  if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
  {
    *((_DWORD *)a1 + 69) = a3 == 0;
    if ( (*((_DWORD *)a1 + 40) & 8) != 0 && a2 )
    {
      v16 = a2->dmDriverExtra + a2->dmSize;
      if ( *((_QWORD *)a1 + 36) )
      {
        Win32FreePool();
        *((_QWORD *)a1 + 36) = 0LL;
      }
      v17 = PALLOCMEM2(v16, 1936876615LL, 0);
      *((_QWORD *)a1 + 36) = v17;
      if ( !v17 )
        return 3221225495LL;
      *v17 = *(_OWORD *)a2->dmDeviceName;
      v17[1] = *(_OWORD *)&a2->dmDeviceName[8];
      v17[2] = *(_OWORD *)&a2->dmDeviceName[16];
      v17[3] = *(_OWORD *)&a2->dmDeviceName[24];
      v17[4] = *(_OWORD *)&a2->dmSpecVersion;
      v17[5] = *(union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)((char *)&a2->76 + 4);
      v17[6] = *(_OWORD *)&a2->dmYResolution;
      v17[7] = *(_OWORD *)&a2->dmFormName[5];
      v17[8] = *(_OWORD *)&a2->dmFormName[13];
      v17[9] = *(_OWORD *)&a2->dmFormName[21];
      v17[10] = *(_OWORD *)&a2->dmFormName[29];
      v17[11] = *(_OWORD *)&a2->dmPelsHeight;
      v17[12] = *(_OWORD *)&a2->dmICMIntent;
      *((_QWORD *)v17 + 26) = *(_QWORD *)&a2->dmReserved2;
      *((_DWORD *)v17 + 54) = a2->dmPanningHeight;
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
      v14 = (unsigned __int16 *)RegistryHandleFromDeviceMap;
      if ( RegistryHandleFromDeviceMap )
      {
        v23 = DrvWriteDisplayDriverParameters(a1, v12, RegistryHandleFromDeviceMap, a2, a3, a5);
        v8 = v23;
        ZwClose(v14);
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
      UpdateMonitorDevices(v13, v12);
      v18 = 0;
      if ( *((_DWORD *)a1 + 56) )
      {
        do
        {
          v19 = *((_QWORD *)a1 + 29);
          if ( (*(_BYTE *)(v19 + 20LL * v18) & 3) == 3 )
          {
            v20 = (const unsigned __int16 *)DrvGetRegistryHandleFromDeviceMap(
                                              (unsigned __int16 *)a1,
                                              v10,
                                              (unsigned int *)(v19 + 4 * (5LL * v18 + 1)),
                                              0LL,
                                              0,
                                              0LL,
                                              gProtocolType);
            v22 = (unsigned __int16 *)v20;
            if ( v20 )
            {
              DrvWriteDisplayDriverParameters(a1, v21, v20, a2, a3, a5);
              ZwClose(v22);
            }
          }
          ++v18;
        }
        while ( v18 < *((_DWORD *)a1 + 56) );
        v8 = v23;
      }
    }
LABEL_6:
    if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
      return 0;
    return (unsigned int)v8;
  }
}
