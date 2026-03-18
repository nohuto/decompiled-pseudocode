/*
 * XREFs of RIMOnMonitorNotification @ 0x1C0019AE0
 * Callers:
 *     <none>
 * Callees:
 *     IsInitFakeMonitorSupported_0 @ 0x1C0002D60 (IsInitFakeMonitorSupported_0.c)
 *     InitFakeMonitor_0 @ 0x1C0002D68 (InitFakeMonitor_0.c)
 *     IsComputeVirtualHimetricSizeSupported_0 @ 0x1C0002D70 (IsComputeVirtualHimetricSizeSupported_0.c)
 *     ComputeVirtualHimetricSize_0 @ 0x1C0002D78 (ComputeVirtualHimetricSize_0.c)
 *     IsFindMonitorForDigitizerWithQDCDataSupported_0 @ 0x1C0002E00 (IsFindMonitorForDigitizerWithQDCDataSupported_0.c)
 *     FindMonitorForDigitizerWithQDCData_0 @ 0x1C0002E08 (FindMonitorForDigitizerWithQDCData_0.c)
 *     rimFreeQDCActivePathsData @ 0x1C0019054 (rimFreeQDCActivePathsData.c)
 *     RIMInitFakeMonitor @ 0x1C001936C (RIMInitFakeMonitor.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C0019D50 (rimFindMonitorForDigitizerWithQDCData.c)
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     rimGetQDCActivePathsData @ 0x1C001ACEC (rimGetQDCActivePathsData.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C004C2C0 (Win32AllocPool.c)
 *     RIMUnlockExclusive @ 0x1C00523F0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0052410 (RIMLockExclusive.c)
 *     RIMComputeVirtualHimetricSize @ 0x1C00CE0EC (RIMComputeVirtualHimetricSize.c)
 */

__int64 __fastcall RIMOnMonitorNotification(__int64 a1, int a2)
{
  __int64 *v2; // r14
  unsigned int v3; // ebx
  int v4; // edx
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *i; // rdx
  struct _LIST_ENTRY *v7; // r8
  __int64 v8; // rax
  __int64 *v9; // r15
  __int64 v10; // r12
  __int64 v11; // rsi
  int v12; // edx
  __int64 j; // rbx
  int v14; // edx
  __int64 v15; // rdi
  _QWORD v17[4]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v18; // [rsp+80h] [rbp+8h]

  v2 = 0LL;
  v18 = 0LL;
  v3 = 0;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    4,
    64,
    (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids);
  if ( (int)rimGetQDCActivePathsData(v17) >= 0 )
  {
    RIMLockExclusive(&gObListLock);
    Flink = gObRimList.Flink;
    if ( gObRimList.Flink != &gObRimList )
    {
      do
      {
        if ( (HIDWORD(Flink[3].Blink) & 0x1C) != 0 && !BYTE1(Flink[3].Blink) && !LOBYTE(Flink[3].Blink) )
          ++v3;
        Flink = Flink->Flink;
      }
      while ( Flink != &gObRimList );
      if ( v3 )
      {
        v18 = Win32AllocPool(8LL * v3, 1836086098LL);
        v2 = (__int64 *)v18;
        v3 = 0;
        if ( v18 )
        {
          for ( i = gObRimList.Flink; i != &gObRimList; i = i->Flink )
          {
            v7 = i - 1;
            if ( (HIDWORD(i[3].Blink) & 0x1C) != 0 && !BYTE1(v7[4].Blink) && !LOBYTE(v7[4].Blink) )
            {
              v8 = v3++;
              *(_QWORD *)(v18 + 8 * v8) = v7;
            }
          }
        }
      }
    }
    RIMUnlockExclusive(&gObListLock);
    if ( v3 )
    {
      v9 = v2;
      v10 = v3;
      while ( 1 )
      {
        v11 = *v9;
        RIMLockExclusive(*v9 + 96);
        if ( !*(_BYTE *)(v11 + 73) && !*(_BYTE *)(v11 + 74) )
          break;
        LOBYTE(v12) = 3;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v12,
          3,
          65,
          (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids);
LABEL_32:
        RIMUnlockExclusive(v11 + 96);
        ++v9;
        if ( !--v10 )
        {
          v2 = (__int64 *)v18;
          goto LABEL_34;
        }
      }
      RIMLockExclusive(v11 + 712);
      for ( j = *(_QWORD *)(v11 + 512); ; j = *(_QWORD *)(j + 40) )
      {
        if ( !j )
        {
          RIMUnlockExclusive(v11 + 712);
          goto LABEL_32;
        }
        if ( *(_DWORD *)(j + 316) )
          break;
LABEL_27:
        ;
      }
      v14 = *(_DWORD *)(j + 184);
      v15 = *(_QWORD *)(j + 416);
      if ( !__CFSHR__(v14, 12) )
      {
        if ( (unsigned int)(*(_DWORD *)(v15 + 24) - 7) <= 1 )
        {
LABEL_38:
          if ( (v14 & 0x200000) != 0 )
          {
            if ( (int)IsInitFakeMonitorSupported_0() >= 0 )
              InitFakeMonitor_0();
            if ( (*(_DWORD *)(j + 184) & 0x800) != 0 && (int)IsComputeVirtualHimetricSizeSupported_0() >= 0 )
              ComputeVirtualHimetricSize_0();
          }
          else
          {
            RIMInitFakeMonitor(*(_QWORD *)(j + 416));
            if ( (*(_DWORD *)(j + 184) & 0x800) != 0 )
              RIMComputeVirtualHimetricSize();
          }
          goto LABEL_27;
        }
        if ( !__CFSHR__(*(_DWORD *)(j + 184), 12) )
          goto LABEL_25;
      }
      if ( (*(_DWORD *)(v15 + 236) & 0x2000) != 0 )
      {
LABEL_25:
        if ( (v14 & 0x200000) != 0 )
        {
          if ( (int)IsFindMonitorForDigitizerWithQDCDataSupported_0() >= 0 )
            FindMonitorForDigitizerWithQDCData_0();
        }
        else
        {
          rimFindMonitorForDigitizerWithQDCData(v11, v15, 1, (unsigned int)v17, 0LL);
        }
        goto LABEL_27;
      }
      goto LABEL_38;
    }
LABEL_34:
    if ( v2 )
      Win32FreePool(v2);
    rimFreeQDCActivePathsData(v17);
  }
  LOBYTE(v4) = 3;
  return WPP_RECORDER_SF_(
           WPP_GLOBAL_Control->DeviceExtension,
           v4,
           4,
           66,
           (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids);
}
