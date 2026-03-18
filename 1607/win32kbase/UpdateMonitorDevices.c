/*
 * XREFs of UpdateMonitorDevices @ 0x1C005F930
 * Callers:
 *     DrvEnumDisplayDevices @ 0x1C00399E0 (DrvEnumDisplayDevices.c)
 *     GetMonitorPhysicalDimensions @ 0x1C005DB60 (GetMonitorPhysicalDimensions.c)
 *     DrvSetMonitorBrightness @ 0x1C005DCC0 (DrvSetMonitorBrightness.c)
 *     ?DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C005DF50 (-DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?PruneModesByDisplayDeviceCaps@@YAKPEAUtagGRAPHICS_DEVICE@@KPEAUtagDEVMODEMARK@@@Z @ 0x1C005E9D8 (-PruneModesByDisplayDeviceCaps@@YAKPEAUtagGRAPHICS_DEVICE@@KPEAUtagDEVMODEMARK@@@Z.c)
 *     DrvGetDisplayDriverParameters @ 0x1C0061030 (DrvGetDisplayDriverParameters.c)
 *     DrvUpdateDisplayDriverParameters @ 0x1C0064CA0 (DrvUpdateDisplayDriverParameters.c)
 *     DrvCreatePhysicalMonitorObjects @ 0x1C0083F00 (DrvCreatePhysicalMonitorObjects.c)
 *     DrvGetSuggestedPhysicalMonitorArraySize @ 0x1C0085130 (DrvGetSuggestedPhysicalMonitorArraySize.c)
 *     DrvDisplaySwitchHandler @ 0x1C00C8D70 (DrvDisplaySwitchHandler.c)
 *     DrvPVPGetFirstActiveMonitor @ 0x1C00C933C (DrvPVPGetFirstActiveMonitor.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0037A4C (PALLOCMEM2.c)
 *     GreDeviceIoControlEx @ 0x1C005FB00 (GreDeviceIoControlEx.c)
 */

void UpdateMonitorDevices()
{
  wchar_t *i; // rbx
  int v1; // esi
  struct _DEVICE_OBJECT *v2; // rcx
  PVOID v3; // r8
  __int64 v4; // rdi
  __int64 v5; // r9
  __int64 v6; // r8
  PVOID v7; // rdx
  void *v8; // rax
  __int64 v9; // [rsp+60h] [rbp+20h] BYREF
  PVOID P; // [rsp+68h] [rbp+28h] BYREF

  for ( i = gpGraphicsDeviceList; i; i = (wchar_t *)*((_QWORD *)i + 16) )
  {
    P = 0LL;
    v1 = 1;
    v2 = (struct _DEVICE_OBJECT *)*((_QWORD *)i + 17);
    if ( !v2 )
      goto LABEL_35;
    if ( (int)GreDeviceIoControlEx(v2, 0x23201Bu, 0LL, 0, &P, 8u, (__int64)&v9, 1u) < 0 )
      goto LABEL_35;
    v3 = P;
    if ( !P )
      goto LABEL_35;
    LODWORD(v4) = 0;
    if ( (*(_DWORD *)P & 0x20000000) != 0 )
    {
      do
        v4 = (unsigned int)(v4 + 1);
      while ( (*((_DWORD *)P + 5 * v4) & 0x20000000) != 0 );
    }
    if ( *((_DWORD *)i + 56) < (unsigned int)v4 )
    {
      if ( *((_QWORD *)i + 29) )
        Win32FreePool();
      v8 = PALLOCMEM2((unsigned int)(20 * v4), 1986291527LL, 1);
      *((_QWORD *)i + 29) = v8;
      if ( !v8 )
      {
        *((_DWORD *)i + 56) = 0;
        ExFreePoolWithTag(P, 0);
        return;
      }
      v3 = P;
    }
    *((_DWORD *)i + 56) = v4;
    if ( (_DWORD)v4 )
    {
      v1 = 0;
      v5 = (unsigned int)v4;
      v6 = 0LL;
      do
      {
        *(_DWORD *)(v6 + *((_QWORD *)i + 29)) = 0;
        v7 = P;
        if ( (*(_DWORD *)((_BYTE *)P + v6) & 1) != 0 )
        {
          *(_DWORD *)(v6 + *((_QWORD *)i + 29)) |= 1u;
          v7 = P;
        }
        if ( (*(_DWORD *)((_BYTE *)v7 + v6) & 2) == 0 )
        {
          *(_DWORD *)(v6 + *((_QWORD *)i + 29)) |= 2u;
          v7 = P;
        }
        if ( *(int *)((char *)v7 + v6) >= 0 )
        {
          *(_DWORD *)(v6 + *((_QWORD *)i + 29)) |= 0x80000000;
          v7 = P;
        }
        if ( (*(_DWORD *)((_BYTE *)v7 + v6) & 0x40000000) == 0 )
        {
          *(_DWORD *)(v6 + *((_QWORD *)i + 29)) |= 0x40000000u;
          v7 = P;
        }
        *(_DWORD *)(v6 + *((_QWORD *)i + 29) + 4) = *(_DWORD *)((char *)v7 + v6 + 4);
        *(_QWORD *)(v6 + *((_QWORD *)i + 29) + 8) = *(_QWORD *)((char *)P + v6 + 8);
        *(_BYTE *)(v6 + *((_QWORD *)i + 29) + 16) = *((_BYTE *)P + v6 + 16);
        v6 += 20LL;
        --v5;
      }
      while ( v5 );
      v3 = P;
    }
    ExFreePoolWithTag(v3, 0);
    if ( v1 )
    {
LABEL_35:
      if ( *((_QWORD *)i + 29) )
        Win32FreePool();
      *((_DWORD *)i + 56) = 0;
      *((_QWORD *)i + 29) = 0LL;
    }
  }
}
