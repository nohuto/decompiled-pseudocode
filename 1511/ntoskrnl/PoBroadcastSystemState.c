/*
 * XREFs of PoBroadcastSystemState @ 0x1403A49B4
 * Callers:
 *     PopSetDevicesSystemState @ 0x1403A492C (PopSetDevicesSystemState.c)
 *     PnprQuiesceDevices @ 0x1403B02B8 (PnprQuiesceDevices.c)
 *     PnprWakeDevices @ 0x1403B0D18 (PnprWakeDevices.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     EtwTraceKernelEvent @ 0x140037C30 (EtwTraceKernelEvent.c)
 *     DbgPrint @ 0x1400E696C (DbgPrint.c)
 *     PopDiagTraceEventNoPayload @ 0x1400F07C8 (PopDiagTraceEventNoPayload.c)
 *     PopMapInternalActionToIrpAction @ 0x14011A360 (PopMapInternalActionToIrpAction.c)
 *     PopFxIdleDevicesFromSx @ 0x14011A82C (PopFxIdleDevicesFromSx.c)
 *     PopFxActivateDevicesForSx @ 0x14011A918 (PopFxActivateDevicesForSx.c)
 *     IoConfigureCrashDump @ 0x14013A5A8 (IoConfigureCrashDump.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     PopDiagTraceDevicesLevel @ 0x1403A4DF0 (PopDiagTraceDevicesLevel.c)
 *     PopWakeDeviceList @ 0x1403A4EC8 (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x1403A503C (PopSleepDeviceList.c)
 *     PopSetupSleepNotifies @ 0x1403A5334 (PopSetupSleepNotifies.c)
 *     PopHandleWakeSources @ 0x1403A5A04 (PopHandleWakeSources.c)
 *     PopBootLoaderSiData @ 0x1403A5C58 (PopBootLoaderSiData.c)
 *     MmShutdownSystem @ 0x1403B1F2C (MmShutdownSystem.c)
 *     ExAcquireTimeRefreshLock @ 0x1404713F0 (ExAcquireTimeRefreshLock.c)
 *     ExReleaseTimeRefreshLock @ 0x1404C48E4 (ExReleaseTimeRefreshLock.c)
 *     EmPowerPagingEnabled @ 0x1404F7D3C (EmPowerPagingEnabled.c)
 *     PopDiagTraceDevicesSuspend @ 0x1404F7DF4 (PopDiagTraceDevicesSuspend.c)
 *     PopDiagTraceDevicesWakeEnd @ 0x1404F8CA4 (PopDiagTraceDevicesWakeEnd.c)
 *     IoNotifyPowerOperationVetoed @ 0x140601A58 (IoNotifyPowerOperationVetoed.c)
 *     ObShutdownSystem @ 0x14062D4D0 (ObShutdownSystem.c)
 *     BgDisplayFade @ 0x1406D97F4 (BgDisplayFade.c)
 */

__int64 __fastcall PoBroadcastSystemState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r14
  char *v6; // rbx
  int v7; // ecx
  __int64 v8; // rcx
  int v9; // r15d
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  int v14; // esi
  __int64 v15; // r13
  __int64 v16; // r12
  _DWORD *v17; // r15
  __int64 v18; // r8
  __int64 v20; // rcx
  int v21; // esi
  _DWORD *v22; // r14
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r10
  unsigned int v26; // r11d
  int v27; // [rsp+30h] [rbp-40h] BYREF
  char v28; // [rsp+34h] [rbp-3Ch]
  char v29; // [rsp+35h] [rbp-3Bh]
  char v30; // [rsp+36h] [rbp-3Ah]
  LARGE_INTEGER Interval; // [rsp+38h] [rbp-38h] BYREF
  int v32; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v33[2]; // [rsp+48h] [rbp-28h] BYREF
  _QWORD v34[2]; // [rsp+58h] [rbp-18h] BYREF

  v4 = *(_BYTE *)(a1 + 25);
  v6 = (char *)qword_1402DDC10;
  *(_BYTE *)qword_1402DDC10 = *(_BYTE *)(a1 + 26);
  *((_DWORD *)v6 + 1) = *(_DWORD *)(a1 + 4);
  *((_DWORD *)v6 + 110) = 0;
  *((_QWORD *)v6 + 56) = 0LL;
  *(_WORD *)(v6 + 457) = 0;
  v6[459] = 0;
  v6[456] = v4;
  HIDWORD(PopCurrentBroadcast) = 0;
  v7 = (*(_DWORD *)a1 & 0xF) << 16;
  HIDWORD(PopCurrentBroadcast) = v7;
  if ( v4 )
  {
    v8 = v7 & 0xFFFF00FF | 0x1100;
  }
  else
  {
    HIDWORD(PopCurrentBroadcast) = ((unsigned __int16)v7 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(a1 + 8) << 8)) & 0xF00 ^ v7;
    v8 = (WORD2(PopCurrentBroadcast) ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(a1 + 4) << 12)) & 0xF000u ^ HIDWORD(PopCurrentBroadcast);
  }
  HIDWORD(PopCurrentBroadcast) = v8;
  LODWORD(qword_1402DDC08) = *(_DWORD *)(a1 + 16);
  LOBYTE(PopCurrentBroadcast) = 1;
  if ( (xmmword_140382290 & 0x8000) != 0 )
  {
    v27 = *((_DWORD *)v6 + 1);
    v30 = *(_BYTE *)(a1 + 26);
    v29 = *(_BYTE *)(a1 + 24);
    v33[0] = &v27;
    v28 = v4;
    v33[1] = 8LL;
    EtwTraceKernelEvent((int)v33, 1, 0x80008000, 0x1224u, 4200450);
    v8 = HIDWORD(PopCurrentBroadcast);
  }
  if ( *(_BYTE *)(a1 + 26) == 2 )
  {
    v6[458] = 1;
    v8 = HIDWORD(PopCurrentBroadcast);
  }
  v9 = 3;
  if ( *(_BYTE *)(a1 + 24) && *(_BYTE *)(a1 + 26) == 3 )
  {
    v6[459] = 1;
    v8 = HIDWORD(PopCurrentBroadcast);
  }
  if ( (*(_DWORD *)(a1 + 20) & 0x8000000) != 0 )
  {
    LODWORD(v8) = v8 | 0x200000;
    HIDWORD(PopCurrentBroadcast) = v8;
  }
  if ( !v4 )
  {
    if ( *((int *)v6 + 110) < 0 )
    {
LABEL_27:
      if ( (PopSimulate & 0x20000) != 0 && *(_BYTE *)(a1 + 26) == 2 )
      {
        DbgPrint("po: POP_WAKE_DEVICE_AFTER_SLEEP enabled.\n");
        v4 = 1;
        *((_DWORD *)v6 + 110) = -1073741823;
      }
      goto LABEL_28;
    }
    PopSetupSleepNotifies(v6);
    LOBYTE(v10) = *(_BYTE *)(a1 + 26) == 3;
    PopDiagTraceDevicesSuspend(v10, (HIDWORD(PopCurrentBroadcast) >> 8) & 0xF, WORD2(PopCurrentBroadcast) >> 12);
    v13 = *(_DWORD *)(a1 + 16);
    if ( v13 != 4 || !PopShutdownPowerOffPolicy && !qword_1402DE0B0 )
      v9 = 0;
    if ( (unsigned int)(v13 - 2) <= 1 && *v6 == 2 )
      PopFxActivateDevicesForSx(1u);
    v14 = 4;
    v15 = v9;
    v16 = 4LL;
    if ( v9 <= 4LL )
    {
      v17 = v6 + 352;
      while ( 1 )
      {
        if ( v14 == 1 && *(_BYTE *)(a1 + 26) == 2 )
        {
          EmPowerPagingEnabled(0LL);
          if ( *(_BYTE *)(a1 + 24) )
          {
            IoConfigureCrashDump(0, 1);
            if ( (PopShutdownCleanly & 0x10) != 0 )
              ObShutdownSystem(1LL);
            MmShutdownSystem(1LL);
          }
          else
          {
            LOBYTE(v20) = 1;
            ExAcquireTimeRefreshLock(v20);
            v6[460] = 1;
          }
        }
        LOBYTE(v11) = *v6;
        LOBYTE(v12) = 1;
        PopDiagTraceDevicesLevel((unsigned int)v14, 0LL, v11, v12);
        if ( *v17 )
        {
          if ( *(int *)(a1 + 20) < 0 )
            **((_QWORD **)v6 + 7) = 0LL;
          PopCurrentLevel = v14;
          PopSleepDeviceList(v6, &v6[64 * v14 + 64 + 8 * v14]);
        }
        LOBYTE(v18) = *v6;
        PopDiagTraceDevicesLevel((unsigned int)v14, 0LL, v18, 0LL);
        if ( *((int *)v6 + 110) < 0 )
          break;
        --v14;
        --v16;
        v17 -= 18;
        if ( v16 < v15 )
          goto LABEL_26;
      }
      v4 = 1;
      if ( *((_QWORD *)v6 + 56) )
      {
        if ( *(_DWORD *)(a1 + 12) == 1 )
        {
          v26 = PopMapInternalActionToIrpAction(*(_DWORD *)(a1 + 16), *((_DWORD *)v6 + 1), 0);
          if ( v26 == 7 )
          {
            v24 = **((_QWORD **)v6 + 7);
LABEL_74:
            IoNotifyPowerOperationVetoed(v26, v24, v25);
            goto LABEL_26;
          }
          if ( *(int *)(a1 + 20) >= 0 )
            goto LABEL_74;
        }
      }
    }
LABEL_26:
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICESSUSPEND_END);
    goto LABEL_27;
  }
LABEL_28:
  v6[456] = v4;
  if ( v4 )
  {
    v6[458] = 1;
    *v6 = 2;
    *((_DWORD *)v6 + 1) = 1;
    if ( *(_BYTE *)(a1 + 26) == 2 )
    {
      PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICESWAKE);
      qword_1402DE5E8 = KeQueryPerformanceCounter(0LL).QuadPart;
    }
    v21 = 0;
    v22 = v6 + 64;
    do
    {
      if ( PoResumeFromHibernate && !v21 )
      {
        if ( byte_1402DE320 )
          qword_1402DE790 = KeQueryPerformanceCounter(0LL).QuadPart;
        if ( byte_140305B50 )
        {
          BgDisplayFade(v8);
          byte_140305C20 = 0;
          byte_140305C21 = 0;
        }
      }
      LOBYTE(a3) = *v6;
      LOBYTE(a4) = 1;
      PopDiagTraceDevicesLevel((unsigned int)v21, 1LL, a3, a4);
      if ( v22[1] < *v22 )
      {
        PopCurrentLevel = v21;
        PopWakeDeviceList(v6, &v6[64 * v21 + 64 + 8 * v21]);
      }
      LOBYTE(v23) = *v6;
      PopDiagTraceDevicesLevel((unsigned int)v21, 1LL, v23, 0LL);
      if ( v21 == 1 && *(_BYTE *)(a1 + 26) == 2 )
      {
        if ( v6[460] )
        {
          v6[460] = 0;
          ExReleaseTimeRefreshLock();
        }
        if ( PoResumeFromHibernate )
        {
          if ( qword_1402DE0C0 )
          {
            v8 = *(_QWORD *)(qword_1402DE0C0 + 216);
            if ( v8 )
              PopBootLoaderSiData(v8, *(unsigned int *)(qword_1402DE0C0 + 224));
          }
        }
        LOBYTE(v8) = 1;
        EmPowerPagingEnabled(v8);
        if ( (PopDebugFlags & 4) != 0 )
        {
          Interval.QuadPart = -50000000LL;
          KeDelayExecutionThread(0, 0, &Interval);
          KeBugCheckEx(0xA0u, 0xAuLL, 1uLL, 0LL, 0LL);
        }
      }
      ++v21;
      v22 += 18;
    }
    while ( v21 <= 4 );
    if ( *(_BYTE *)(a1 + 26) == 2 )
    {
      PopFxIdleDevicesFromSx();
      qword_1402DE5F0 = KeQueryPerformanceCounter(0LL).QuadPart;
      PopDiagTraceDevicesWakeEnd();
      PopHandleWakeSources();
      if ( (PopDebugFlags & 8) != 0 )
      {
        Interval.QuadPart = -50000000LL;
        KeDelayExecutionThread(0, 0, &Interval);
        KeBugCheckEx(0xA0u, 0xAuLL, 2uLL, 0LL, 0LL);
      }
    }
    *v6 = *(_BYTE *)(a1 + 26);
    *((_DWORD *)v6 + 1) = *(_DWORD *)(a1 + 4);
  }
  if ( (xmmword_140382290 & 0x8000) != 0 )
  {
    v32 = *((_DWORD *)v6 + 110);
    v34[1] = 4LL;
    v34[0] = &v32;
    EtwTraceKernelEvent((int)v34, 1, 0x80008000, 0x1225u, 4200450);
  }
  LOBYTE(PopCurrentBroadcast) = 0;
  return *((unsigned int *)v6 + 110);
}
