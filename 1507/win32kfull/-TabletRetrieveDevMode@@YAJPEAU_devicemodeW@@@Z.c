/*
 * XREFs of ?TabletRetrieveDevMode@@YAJPEAU_devicemodeW@@@Z @ 0x1C01D8D88
 * Callers:
 *     ?TabletButtonHandler@@YAXPEAUDEVICEINFO@@@Z @ 0x1C01D8B10 (-TabletButtonHandler@@YAXPEAUDEVICEINFO@@@Z.c)
 *     ?xxxTabletSetDisplayOrientation@@YAXJPEAU_devicemodeW@@@Z @ 0x1C01D9990 (-xxxTabletSetDisplayOrientation@@YAXJPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall TabletRetrieveDevMode(struct _devicemodeW *a1)
{
  NTSTATUS v2; // ebx
  _OWORD *v3; // rcx
  WCHAR *v4; // rdi
  PVOID BaseAddress; // [rsp+68h] [rbp+10h] BYREF
  ULONG_PTR RegionSize; // [rsp+70h] [rbp+18h] BYREF

  BaseAddress = 0LL;
  RegionSize = 220LL;
  memset(a1, 0, sizeof(struct _devicemodeW));
  a1->dmSize = 220;
  v2 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
  if ( v2 >= 0 )
  {
    memset(BaseAddress, 0, 0xDCuLL);
    *((_WORD *)BaseAddress + 34) = 220;
    v2 = DrvEnumDisplaySettings(0LL, *(_QWORD *)(*(_QWORD *)(gpDispInfo + 88LL) + 160LL), 0xFFFFFFFFLL, BaseAddress, 6);
    if ( v2 >= 0 )
    {
      v3 = BaseAddress;
      *(_OWORD *)a1->dmDeviceName = *(_OWORD *)BaseAddress;
      *(_OWORD *)&a1->dmDeviceName[8] = v3[1];
      *(_OWORD *)&a1->dmDeviceName[16] = v3[2];
      *(_OWORD *)&a1->dmDeviceName[24] = v3[3];
      *(_OWORD *)&a1->dmSpecVersion = v3[4];
      *(union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)((char *)&a1->76 + 4) = (union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C)v3[5];
      *(_OWORD *)&a1->dmYResolution = v3[6];
      v4 = &a1->dmFormName[13];
      *((_OWORD *)v4 - 1) = v3[7];
      v3 += 8;
      *(_OWORD *)v4 = *v3;
      *((_OWORD *)v4 + 1) = v3[1];
      *((_OWORD *)v4 + 2) = v3[2];
      *((_OWORD *)v4 + 3) = v3[3];
      *((_OWORD *)v4 + 4) = v3[4];
      *((_QWORD *)v4 + 10) = *((_QWORD *)v3 + 10);
      *((_DWORD *)v4 + 22) = *((_DWORD *)v3 + 22);
    }
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  }
  return (unsigned int)v2;
}
