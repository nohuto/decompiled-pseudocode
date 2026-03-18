/*
 * XREFs of DrvBuildDevmodeList @ 0x1C0060CC0
 * Callers:
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHHH3@Z @ 0x1C00601F0 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHHH3@Z.c)
 *     DrvEnumDisplaySettings @ 0x1C0062AF0 (DrvEnumDisplaySettings.c)
 *     ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1C0066F10 (-CheckAndNotifyDualView@@YA-AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z.c)
 *     DrvDisplaySwitchHandler @ 0x1C00C8D70 (DrvDisplaySwitchHandler.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0037A4C (PALLOCMEM2.c)
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x1C005D5CC (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     ?PruneModesByDisplayDeviceCaps@@YAKPEAUtagGRAPHICS_DEVICE@@KPEAUtagDEVMODEMARK@@@Z @ 0x1C005E9D8 (-PruneModesByDisplayDeviceCaps@@YAKPEAUtagGRAPHICS_DEVICE@@KPEAUtagDEVMODEMARK@@@Z.c)
 *     DrvGetDisplayDriverNames @ 0x1C00691C0 (DrvGetDisplayDriverNames.c)
 *     ?ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z @ 0x1C0069B4C (-ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 */

void __fastcall DrvBuildDevmodeList(struct tagGRAPHICS_DEVICE *a1, int a2, int a3)
{
  int v3; // eax
  unsigned int v4; // edi
  unsigned int *DisplayDriverNames; // rax
  unsigned int *v7; // rsi
  unsigned int v8; // ebp
  unsigned int DriverModes; // eax
  size_t v10; // r15
  char *v11; // r14
  unsigned int v12; // edx
  int v13; // esi
  unsigned int i; // r8d
  void *v15; // rax
  unsigned int v16; // r8d
  unsigned int j; // r14d
  __int64 v18; // rdx
  int v19; // eax
  int v20; // ecx
  __int64 v21; // rcx
  unsigned int v22; // edx
  unsigned int v23; // esi
  unsigned int v24; // ebp
  __int64 v25; // r11
  __int64 v26; // r8
  __int64 v27; // rcx
  int v28; // r10d
  __int64 v29; // r9
  __int64 v30; // rdx
  void *Src; // [rsp+50h] [rbp+8h] BYREF

  v3 = *((_DWORD *)a1 + 40);
  v4 = 0;
  if ( (v3 & 0x4000000) == 0 )
  {
    if ( (v3 & 0x800000) != 0 && *((_DWORD *)a1 + 44) && *((_QWORD *)a1 + 23) )
    {
      if ( a3 && !a2 )
        goto LABEL_8;
      if ( (int)((__int64 (__fastcall *)(char *, _QWORD, void **))qword_1C011B528)(
                  (char *)a1 + 264,
                  *((unsigned int *)a1 + 68),
                  &Src) >= 0 )
      {
        if ( *((void **)a1 + 21) == Src )
          goto LABEL_8;
        *((_QWORD *)a1 + 21) = Src;
        goto LABEL_48;
      }
      a2 = 1;
    }
    if ( !a2 )
      goto LABEL_8;
  }
LABEL_48:
  if ( !*((_DWORD *)a1 + 44) )
    goto LABEL_9;
  if ( *((_QWORD *)a1 + 23) )
  {
    Win32FreePool();
    v27 = *((_QWORD *)a1 + 25);
    *((_QWORD *)a1 + 23) = 0LL;
    *((_DWORD *)a1 + 44) = 0;
    if ( v27 )
    {
      Win32FreePool();
      *((_QWORD *)a1 + 25) = 0LL;
    }
  }
LABEL_8:
  if ( *((_DWORD *)a1 + 44) )
    return;
LABEL_9:
  if ( *((_QWORD *)a1 + 23) )
    return;
  *((_DWORD *)a1 + 48) = 0;
  DisplayDriverNames = (unsigned int *)DrvGetDisplayDriverNames(a1);
  v7 = DisplayDriverNames;
  if ( DisplayDriverNames )
  {
    v8 = 0;
    if ( *DisplayDriverNames )
    {
      do
      {
        DriverModes = ldevGetDriverModes(
                        a1,
                        *(const unsigned __int16 **)&v7[4 * v8 + 4],
                        *(void **)&v7[4 * v8 + 2],
                        (struct _devicemodeW **)&Src);
        v10 = DriverModes;
        if ( DriverModes )
        {
          v11 = (char *)PALLOCMEM2(DriverModes + *((_DWORD *)a1 + 44), 1936876615LL, 0);
          if ( v11 )
          {
            if ( *((_DWORD *)a1 + 44) )
            {
              memmove(v11, *((const void **)a1 + 23), *((unsigned int *)a1 + 44));
              Win32FreePool();
            }
            memmove(&v11[*((unsigned int *)a1 + 44)], Src, v10);
            *((_DWORD *)a1 + 44) += v10;
            *((_QWORD *)a1 + 23) = v11;
          }
        }
        if ( Src )
          Win32FreePool();
        ++v8;
      }
      while ( v8 < *v7 );
    }
    Win32FreePool();
  }
  v12 = *((_DWORD *)a1 + 44);
  if ( !v12 && !*((_QWORD *)a1 + 23) )
  {
LABEL_58:
    DrvLogDisplayDriverEvent(2);
    return;
  }
  v13 = 0;
  for ( i = 0;
        i < v12;
        i += *(unsigned __int16 *)(i + *((_QWORD *)a1 + 23) + 70LL)
           + *(unsigned __int16 *)(i + *((_QWORD *)a1 + 23) + 68LL) )
  {
    ++v13;
  }
  v15 = PALLOCMEM2((unsigned int)(16 * v13), 1936876615LL, 1);
  *((_QWORD *)a1 + 25) = v15;
  if ( !v15 )
  {
    *((_DWORD *)a1 + 44) = 0;
    Win32FreePool();
    *((_QWORD *)a1 + 23) = 0LL;
    goto LABEL_58;
  }
  v16 = 0;
  *((_DWORD *)a1 + 48) = v13;
  for ( j = 0; j < *((_DWORD *)a1 + 44); j += *(unsigned __int16 *)(v18 + 70) + *(unsigned __int16 *)(v18 + 68) )
  {
    v18 = *((_QWORD *)a1 + 23) + j;
    v19 = *(_DWORD *)(v18 + 72);
    if ( (v19 & 0x80u) == 0 )
    {
      *(_DWORD *)(v18 + 72) = v19 | 0x80;
    }
    else if ( *(_DWORD *)(v18 + 84) <= 3u )
    {
      goto LABEL_28;
    }
    *(_DWORD *)(v18 + 84) = 0;
LABEL_28:
    v20 = *(_DWORD *)(v18 + 72);
    if ( (v20 & 0x20000000) != 0 )
    {
      if ( (unsigned int)(*(_DWORD *)(v18 + 88) - 1) <= 1 )
        goto LABEL_30;
      *(_DWORD *)(v18 + 72) = v20 & 0xDFFFFFFF;
    }
    *(_DWORD *)(v18 + 88) = 0;
LABEL_30:
    v21 = v16++;
    v21 *= 2LL;
    *(_DWORD *)(*((_QWORD *)a1 + 25) + 8 * v21) = 0;
    *(_QWORD *)(*((_QWORD *)a1 + 25) + 8 * v21 + 8) = v18;
  }
  v22 = *((_DWORD *)a1 + 48);
  v23 = 1;
  if ( v22 )
  {
    v24 = 0;
    do
    {
      v25 = *((_QWORD *)a1 + 25);
      v26 = *(_QWORD *)(v25 + 16LL * v24 + 8);
      if ( *(_DWORD *)(v26 + 184) == 1 )
      {
        v28 = 1;
        if ( v22 )
        {
          while ( 1 )
          {
            if ( v28 != v23 )
            {
              v29 = *(_QWORD *)(v25 + 16LL * (unsigned int)(v28 - 1) + 8);
              if ( *(_DWORD *)(v26 + 168) == *(_DWORD *)(v29 + 168)
                && *(_DWORD *)(v26 + 172) == *(_DWORD *)(v29 + 172)
                && *(_DWORD *)(v26 + 176) == *(_DWORD *)(v29 + 176)
                && ((*(_BYTE *)(v26 + 180) ^ *(_BYTE *)(v29 + 180)) & 4) == 0
                && *(_DWORD *)(v26 + 84) == *(_DWORD *)(v29 + 84)
                && *(_DWORD *)(v26 + 88) == *(_DWORD *)(v29 + 88) )
              {
                break;
              }
            }
            if ( ++v28 > v22 )
              goto LABEL_34;
          }
          if ( v22 > v23 )
            memmove((void *)(v25 + 16LL * v24), (const void *)(v25 + 16LL * v23), 16LL * (v22 - v23));
          --*((_DWORD *)a1 + 48);
          --v23;
          --v24;
        }
      }
LABEL_34:
      v22 = *((_DWORD *)a1 + 48);
      ++v23;
      ++v24;
    }
    while ( v23 <= v22 );
  }
  if ( (*((_DWORD *)a1 + 40) & 0x6000008) == 0 )
    j = PruneModesByDisplayDeviceCaps(a1, *((_DWORD *)a1 + 48), *((struct tagDEVMODEMARK **)a1 + 25));
  if ( !j )
    DrvLogDisplayDriverEvent(2);
  if ( WPP_MAIN_CB.DeviceLock.Header.SignalState && *((_DWORD *)a1 + 44) )
  {
    do
    {
      v30 = *((_QWORD *)a1 + 23) + v4;
      if ( *(_DWORD *)(v30 + 168) == 32 )
      {
        *(_DWORD *)(v30 + 172) *= 2;
        *(_DWORD *)(v30 + 176) *= 2;
      }
      v4 += *(unsigned __int16 *)(v30 + 70) + *(unsigned __int16 *)(v30 + 68);
    }
    while ( v4 < *((_DWORD *)a1 + 44) );
  }
}
