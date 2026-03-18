/*
 * XREFs of DrvBuildDevmodeList @ 0x1C005FCF0
 * Callers:
 *     DrvEnumDisplaySettings @ 0x1C0022200 (DrvEnumDisplaySettings.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHHH3@Z @ 0x1C005F214 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHHH3@Z.c)
 *     ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1C00627D8 (-CheckAndNotifyDualView@@YA-AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z.c)
 *     DrvDisplaySwitchHandler @ 0x1C00BB850 (DrvDisplaySwitchHandler.c)
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C004C24C (PALLOCMEM2.c)
 *     ?ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z @ 0x1C005E7E0 (-ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z.c)
 *     DrvGetDisplayDriverNames @ 0x1C0064AB0 (DrvGetDisplayDriverNames.c)
 *     ?PruneModesByDisplayDeviceCaps@@YAKPEAUtagGRAPHICS_DEVICE@@KPEAUtagDEVMODEMARK@@@Z @ 0x1C0065940 (-PruneModesByDisplayDeviceCaps@@YAKPEAUtagGRAPHICS_DEVICE@@KPEAUtagDEVMODEMARK@@@Z.c)
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x1C008487C (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 */

int __fastcall DrvBuildDevmodeList(struct tagGRAPHICS_DEVICE *a1, int a2, int a3)
{
  void *v3; // rax
  unsigned int v4; // edi
  __int64 v6; // rcx
  unsigned int *DisplayDriverNames; // rax
  unsigned int *v8; // rsi
  unsigned int v9; // ebp
  unsigned int DriverModes; // eax
  size_t v11; // r15
  char *v12; // r14
  unsigned int v13; // edx
  int v14; // esi
  unsigned int i; // r8d
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
  int v27; // r10d
  __int64 v28; // r9
  __int64 v29; // rdx
  void *Src; // [rsp+50h] [rbp+8h] BYREF

  LODWORD(v3) = *((_DWORD *)a1 + 40);
  v4 = 0;
  if ( ((unsigned int)v3 & 0x4000000) == 0 )
  {
    if ( ((unsigned int)v3 & 0x800000) != 0 && *((_DWORD *)a1 + 44) && *((_QWORD *)a1 + 23) )
    {
      if ( a3 && !a2 )
        goto LABEL_14;
      LODWORD(v3) = ((__int64 (__fastcall *)(char *, _QWORD, void **))qword_1C01013D0)(
                      (char *)a1 + 264,
                      *((unsigned int *)a1 + 68),
                      &Src);
      if ( (int)v3 >= 0 )
      {
        LODWORD(v3) = (_DWORD)Src;
        if ( *((void **)a1 + 21) == Src )
          goto LABEL_14;
        *((_QWORD *)a1 + 21) = Src;
        goto LABEL_9;
      }
      a2 = 1;
    }
    if ( !a2 )
      goto LABEL_14;
  }
LABEL_9:
  if ( !*((_DWORD *)a1 + 44) )
    goto LABEL_15;
  if ( *((_QWORD *)a1 + 23) )
  {
    LODWORD(v3) = Win32FreePool();
    v6 = *((_QWORD *)a1 + 25);
    *((_QWORD *)a1 + 23) = 0LL;
    *((_DWORD *)a1 + 44) = 0;
    if ( v6 )
    {
      LODWORD(v3) = Win32FreePool();
      *((_QWORD *)a1 + 25) = 0LL;
    }
  }
LABEL_14:
  if ( *((_DWORD *)a1 + 44) )
    return (int)v3;
LABEL_15:
  if ( *((_QWORD *)a1 + 23) )
    return (int)v3;
  *((_DWORD *)a1 + 48) = 0;
  DisplayDriverNames = (unsigned int *)DrvGetDisplayDriverNames(a1);
  v8 = DisplayDriverNames;
  if ( DisplayDriverNames )
  {
    v9 = 0;
    if ( *DisplayDriverNames )
    {
      do
      {
        DriverModes = ldevGetDriverModes(
                        a1,
                        *(const unsigned __int16 **)&v8[4 * v9 + 4],
                        *(void **)&v8[4 * v9 + 2],
                        (struct _devicemodeW **)&Src);
        v11 = DriverModes;
        if ( DriverModes )
        {
          v12 = (char *)PALLOCMEM2(DriverModes + *((_DWORD *)a1 + 44), 1936876615LL, 0);
          if ( v12 )
          {
            if ( *((_DWORD *)a1 + 44) )
            {
              memmove(v12, *((const void **)a1 + 23), *((unsigned int *)a1 + 44));
              Win32FreePool();
            }
            memmove(&v12[*((unsigned int *)a1 + 44)], Src, v11);
            *((_DWORD *)a1 + 44) += v11;
            *((_QWORD *)a1 + 23) = v12;
          }
        }
        if ( Src )
          Win32FreePool();
        ++v9;
      }
      while ( v9 < *v8 );
    }
    Win32FreePool();
  }
  v13 = *((_DWORD *)a1 + 44);
  if ( !v13 && !*((_QWORD *)a1 + 23) )
    goto LABEL_57;
  v14 = 0;
  for ( i = 0;
        i < v13;
        i += *(unsigned __int16 *)(i + *((_QWORD *)a1 + 23) + 70LL)
           + *(unsigned __int16 *)(i + *((_QWORD *)a1 + 23) + 68LL) )
  {
    ++v14;
  }
  v3 = PALLOCMEM2((unsigned int)(16 * v14), 1936876615LL, 1);
  *((_QWORD *)a1 + 25) = v3;
  if ( !v3 )
  {
    *((_DWORD *)a1 + 44) = 0;
    Win32FreePool();
    *((_QWORD *)a1 + 23) = 0LL;
LABEL_57:
    LODWORD(v3) = DrvLogDisplayDriverEvent(2LL);
    return (int)v3;
  }
  v16 = 0;
  *((_DWORD *)a1 + 48) = v14;
  for ( j = 0; j < *((_DWORD *)a1 + 44); j += *(unsigned __int16 *)(v18 + 70) + (_DWORD)v3 )
  {
    v18 = *((_QWORD *)a1 + 23) + j;
    v19 = *(_DWORD *)(v18 + 72);
    if ( (v19 & 0x80u) == 0 )
    {
      *(_DWORD *)(v18 + 72) = v19 | 0x80;
    }
    else if ( *(_DWORD *)(v18 + 84) <= 3u )
    {
      goto LABEL_34;
    }
    *(_DWORD *)(v18 + 84) = 0;
LABEL_34:
    v20 = *(_DWORD *)(v18 + 72);
    if ( (v20 & 0x20000000) != 0 )
    {
      if ( (unsigned int)(*(_DWORD *)(v18 + 88) - 1) <= 1 )
        goto LABEL_36;
      *(_DWORD *)(v18 + 72) = v20 & 0xDFFFFFFF;
    }
    *(_DWORD *)(v18 + 88) = 0;
LABEL_36:
    v21 = v16++;
    v21 *= 2LL;
    *(_DWORD *)(*((_QWORD *)a1 + 25) + 8 * v21) = 0;
    *(_QWORD *)(*((_QWORD *)a1 + 25) + 8 * v21 + 8) = v18;
    LODWORD(v3) = *(unsigned __int16 *)(v18 + 68);
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
        v27 = 1;
        if ( v22 )
        {
          while ( 1 )
          {
            if ( v27 != v23 )
            {
              v28 = *(_QWORD *)(v25 + 16LL * (unsigned int)(v27 - 1) + 8);
              LODWORD(v3) = *(_DWORD *)(v28 + 168);
              if ( *(_DWORD *)(v26 + 168) == (_DWORD)v3 )
              {
                LODWORD(v3) = *(_DWORD *)(v28 + 172);
                if ( *(_DWORD *)(v26 + 172) == (_DWORD)v3 )
                {
                  LODWORD(v3) = *(_DWORD *)(v28 + 176);
                  if ( *(_DWORD *)(v26 + 176) == (_DWORD)v3
                    && ((*(_BYTE *)(v26 + 180) ^ *(_BYTE *)(v28 + 180)) & 4) == 0 )
                  {
                    LODWORD(v3) = *(_DWORD *)(v28 + 84);
                    if ( *(_DWORD *)(v26 + 84) == (_DWORD)v3 )
                    {
                      LODWORD(v3) = *(_DWORD *)(v28 + 88);
                      if ( *(_DWORD *)(v26 + 88) == (_DWORD)v3 )
                        break;
                    }
                  }
                }
              }
            }
            if ( ++v27 > v22 )
              goto LABEL_40;
          }
          if ( v22 > v23 )
            LODWORD(v3) = (unsigned int)memmove(
                                          (void *)(v25 + 16LL * v24),
                                          (const void *)(v25 + 16LL * v23),
                                          16LL * (v22 - v23));
          --*((_DWORD *)a1 + 48);
          --v23;
          --v24;
        }
      }
LABEL_40:
      v22 = *((_DWORD *)a1 + 48);
      ++v23;
      ++v24;
    }
    while ( v23 <= v22 );
  }
  if ( (*((_DWORD *)a1 + 40) & 0x6000008) == 0 )
  {
    LODWORD(v3) = PruneModesByDisplayDeviceCaps(a1, *((_DWORD *)a1 + 48), *((struct tagDEVMODEMARK **)a1 + 25));
    j = (unsigned int)v3;
  }
  if ( !j )
    LODWORD(v3) = DrvLogDisplayDriverEvent(2LL);
  if ( HIDWORD(WPP_MAIN_CB.DeviceQueue.Lock) && *((_DWORD *)a1 + 44) )
  {
    do
    {
      v29 = *((_QWORD *)a1 + 23) + v4;
      if ( *(_DWORD *)(v29 + 168) == 32 )
      {
        *(_DWORD *)(v29 + 172) *= 2;
        *(_DWORD *)(v29 + 176) *= 2;
      }
      LODWORD(v3) = *(unsigned __int16 *)(v29 + 68);
      v4 += *(unsigned __int16 *)(v29 + 70) + (_DWORD)v3;
    }
    while ( v4 < *((_DWORD *)a1 + 44) );
  }
  return (int)v3;
}
