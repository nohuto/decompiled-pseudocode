/*
 * XREFs of RIMOnMonitorNotification @ 0x1C0007D20
 * Callers:
 *     <none>
 * Callees:
 *     IsInitFakeMonitorSupported_0 @ 0x1C0002D70 (IsInitFakeMonitorSupported_0.c)
 *     InitFakeMonitor_0 @ 0x1C0002D78 (InitFakeMonitor_0.c)
 *     IsComputeVirtualHimetricSizeSupported_0 @ 0x1C0002D80 (IsComputeVirtualHimetricSizeSupported_0.c)
 *     ComputeVirtualHimetricSize_0 @ 0x1C0002D88 (ComputeVirtualHimetricSize_0.c)
 *     IsFindMonitorForDigitizerWithQDCDataSupported_0 @ 0x1C0002E10 (IsFindMonitorForDigitizerWithQDCDataSupported_0.c)
 *     FindMonitorForDigitizerWithQDCData_0 @ 0x1C0002E18 (FindMonitorForDigitizerWithQDCData_0.c)
 *     RIMInitFakeMonitor @ 0x1C0005C08 (RIMInitFakeMonitor.c)
 *     RIMComputeVirtualHimetricSize @ 0x1C0005C6C (RIMComputeVirtualHimetricSize.c)
 *     rimGetQDCActivePathsData @ 0x1C00065F8 (rimGetQDCActivePathsData.c)
 *     rimFreeQDCActivePathsData @ 0x1C0006728 (rimFreeQDCActivePathsData.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C0007F84 (rimFindMonitorForDigitizerWithQDCData.c)
 *     RIMUnlockExclusive @ 0x1C0012A60 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     Win32AllocPool @ 0x1C0034690 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

__int64 __fastcall RIMOnMonitorNotification(__int64 a1, int a2)
{
  __int64 v2; // r14
  unsigned int v3; // ebx
  int v4; // edx
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *i; // rdx
  struct _LIST_ENTRY *v7; // r8
  __int64 *v8; // r15
  __int64 v9; // r12
  __int64 v10; // rsi
  int v11; // edx
  __int64 j; // rdi
  int v13; // edx
  __int64 v14; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  _QWORD v18[4]; // [rsp+30h] [rbp-48h] BYREF

  v2 = 0LL;
  v3 = 0;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    4,
    68,
    (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
  if ( (int)rimGetQDCActivePathsData(v18) >= 0 )
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
        v2 = Win32AllocPool(8LL * v3, 1836086098LL);
        v3 = 0;
        if ( v2 )
        {
          for ( i = gObRimList.Flink; i != &gObRimList; i = i->Flink )
          {
            v7 = i - 1;
            if ( (HIDWORD(i[3].Blink) & 0x1C) != 0 && !BYTE1(v7[4].Blink) && !LOBYTE(v7[4].Blink) )
            {
              v16 = v3++;
              *(_QWORD *)(v2 + 8 * v16) = v7;
            }
          }
        }
      }
    }
    RIMUnlockExclusive(&gObListLock);
    if ( v3 )
    {
      v8 = (__int64 *)v2;
      v9 = v3;
      while ( 1 )
      {
        v10 = *v8;
        RIMLockExclusive(*v8 + 96);
        if ( !*(_BYTE *)(v10 + 73) && !*(_BYTE *)(v10 + 74) )
          break;
        LOBYTE(v11) = 3;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v11,
          3,
          69,
          (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
LABEL_26:
        RIMUnlockExclusive(v10 + 96);
        ++v8;
        if ( !--v9 )
          goto LABEL_27;
      }
      RIMLockExclusive(v10 + 696);
      for ( j = *(_QWORD *)(v10 + 552); ; j = *(_QWORD *)(j + 40) )
      {
        if ( !j )
        {
          RIMUnlockExclusive(v10 + 696);
          goto LABEL_26;
        }
        if ( *(_DWORD *)(j + 316) )
          break;
LABEL_21:
        ;
      }
      v13 = *(_DWORD *)(j + 184);
      v14 = *(_QWORD *)(j + 480);
      if ( !__CFSHR__(v13, 12) )
      {
        if ( (unsigned int)(*(_DWORD *)(v14 + 24) - 6) <= 1 )
        {
LABEL_37:
          if ( (v13 & 0x200000) != 0 )
          {
            if ( (int)IsInitFakeMonitorSupported_0() >= 0 )
              InitFakeMonitor_0();
            if ( (int)IsComputeVirtualHimetricSizeSupported_0() >= 0 )
              ComputeVirtualHimetricSize_0();
          }
          else
          {
            RIMInitFakeMonitor(*(_QWORD *)(j + 480));
            RIMComputeVirtualHimetricSize(v17, 0);
          }
          goto LABEL_21;
        }
        if ( !__CFSHR__(*(_DWORD *)(j + 184), 12) )
          goto LABEL_19;
      }
      if ( (*(_DWORD *)(v14 + 252) & 0x8000) != 0 )
      {
LABEL_19:
        if ( (v13 & 0x200000) != 0 )
        {
          if ( (int)IsFindMonitorForDigitizerWithQDCDataSupported_0() >= 0 )
            FindMonitorForDigitizerWithQDCData_0();
        }
        else
        {
          rimFindMonitorForDigitizerWithQDCData(v10, v14, 1, (unsigned int)v18, 0LL);
        }
        goto LABEL_21;
      }
      goto LABEL_37;
    }
LABEL_27:
    if ( v2 )
      Win32FreePool(v2);
    rimFreeQDCActivePathsData(v18);
  }
  LOBYTE(v4) = 3;
  return WPP_RECORDER_SF_(
           WPP_GLOBAL_Control->DeviceExtension,
           v4,
           4,
           70,
           (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
}
