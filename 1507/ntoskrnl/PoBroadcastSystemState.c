/*
 * XREFs of PoBroadcastSystemState @ 0x1403EE2D4
 * Callers:
 *     PopSetDevicesSystemState @ 0x1403EE24C (PopSetDevicesSystemState.c)
 *     PnprQuiesceDevices @ 0x1404008A4 (PnprQuiesceDevices.c)
 *     PnprWakeDevices @ 0x1404013F4 (PnprWakeDevices.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     PopDiagTraceEventNoPayload @ 0x14012DD44 (PopDiagTraceEventNoPayload.c)
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 *     PopMapInternalActionToIrpAction @ 0x1401489BC (PopMapInternalActionToIrpAction.c)
 *     PopFxIdleDevicesFromSx @ 0x140149210 (PopFxIdleDevicesFromSx.c)
 *     PopFxActivateDevicesForSx @ 0x140149310 (PopFxActivateDevicesForSx.c)
 *     IoConfigureCrashDump @ 0x14016BF80 (IoConfigureCrashDump.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     PopDiagTraceDevicesLevel @ 0x1403EE710 (PopDiagTraceDevicesLevel.c)
 *     PopWakeDeviceList @ 0x1403EE7E8 (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x1403EE95C (PopSleepDeviceList.c)
 *     PopSetupSleepNotifies @ 0x1403EEC54 (PopSetupSleepNotifies.c)
 *     PopHandleWakeSources @ 0x1403EF1DC (PopHandleWakeSources.c)
 *     PopBootLoaderSiData @ 0x1403EF438 (PopBootLoaderSiData.c)
 *     MmShutdownSystem @ 0x140402FFC (MmShutdownSystem.c)
 *     ExAcquireTimeRefreshLock @ 0x14042DB58 (ExAcquireTimeRefreshLock.c)
 *     ExReleaseTimeRefreshLock @ 0x140559DEC (ExReleaseTimeRefreshLock.c)
 *     EmPowerPagingEnabled @ 0x140566A18 (EmPowerPagingEnabled.c)
 *     PopDiagTraceDevicesSuspend @ 0x140566AD0 (PopDiagTraceDevicesSuspend.c)
 *     PopDiagTraceDevicesWakeEnd @ 0x140567970 (PopDiagTraceDevicesWakeEnd.c)
 *     IoNotifyPowerOperationVetoed @ 0x14067C694 (IoNotifyPowerOperationVetoed.c)
 *     ObShutdownSystem @ 0x1406AAF80 (ObShutdownSystem.c)
 *     BgDisplayFade @ 0x14075C83C (BgDisplayFade.c)
 */

__int64 __fastcall PoBroadcastSystemState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r14
  char *v6; // rbx
  int v7; // ecx
  __int64 v8; // rcx
  int v9; // r15d
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  int v15; // esi
  __int64 v16; // r13
  __int64 v17; // r12
  _DWORD *v18; // r15
  __int64 v19; // r8
  __int64 v21; // rcx
  int v22; // esi
  _DWORD *v23; // r14
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // r9
  __int64 v27; // r10
  unsigned int v28; // r11d
  int v29; // [rsp+30h] [rbp-40h] BYREF
  char v30; // [rsp+34h] [rbp-3Ch]
  char v31; // [rsp+35h] [rbp-3Bh]
  char v32; // [rsp+36h] [rbp-3Ah]
  LARGE_INTEGER Interval; // [rsp+38h] [rbp-38h] BYREF
  int v34; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v35[2]; // [rsp+48h] [rbp-28h] BYREF
  _QWORD v36[2]; // [rsp+58h] [rbp-18h] BYREF

  v4 = *(_BYTE *)(a1 + 25);
  v6 = (char *)qword_14032E1F0;
  *(_BYTE *)qword_14032E1F0 = *(_BYTE *)(a1 + 26);
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
  LODWORD(qword_14032E1E8) = *(_DWORD *)(a1 + 16);
  LOBYTE(PopCurrentBroadcast) = 1;
  if ( (xmmword_1403D1290 & 0x8000) != 0 )
  {
    v29 = *((_DWORD *)v6 + 1);
    v32 = *(_BYTE *)(a1 + 26);
    v31 = *(_BYTE *)(a1 + 24);
    v35[0] = &v29;
    v30 = v4;
    v35[1] = 8LL;
    EtwTraceKernelEvent((int)v35, 1, 0x80008000, 0x1224u, 4200450);
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
    v14 = *(_DWORD *)(a1 + 16);
    if ( v14 != 4 || !PopShutdownPowerOffPolicy && !qword_14032E670 )
      v9 = 0;
    if ( (unsigned int)(v14 - 2) <= 1 && *v6 == 2 )
      PopFxActivateDevicesForSx(1u, v11, v12, v13);
    v15 = 4;
    v16 = v9;
    v17 = 4LL;
    if ( v9 <= 4LL )
    {
      v18 = v6 + 352;
      while ( 1 )
      {
        if ( v15 == 1 && *(_BYTE *)(a1 + 26) == 2 )
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
            LOBYTE(v21) = 1;
            ExAcquireTimeRefreshLock(v21);
            v6[460] = 1;
          }
        }
        LOBYTE(v12) = *v6;
        LOBYTE(v13) = 1;
        PopDiagTraceDevicesLevel((unsigned int)v15, 0LL, v12, v13);
        if ( *v18 )
        {
          if ( *(int *)(a1 + 20) < 0 )
            **((_QWORD **)v6 + 7) = 0LL;
          PopCurrentLevel = v15;
          PopSleepDeviceList(v6, &v6[64 * v15 + 64 + 8 * v15]);
        }
        LOBYTE(v19) = *v6;
        PopDiagTraceDevicesLevel((unsigned int)v15, 0LL, v19, 0LL);
        if ( *((int *)v6 + 110) < 0 )
          break;
        --v15;
        --v17;
        v18 -= 18;
        if ( v17 < v16 )
          goto LABEL_26;
      }
      v4 = 1;
      if ( *((_QWORD *)v6 + 56) )
      {
        if ( *(_DWORD *)(a1 + 12) == 1 )
        {
          v28 = PopMapInternalActionToIrpAction(*(_DWORD *)(a1 + 16), *((_DWORD *)v6 + 1), 0);
          if ( v28 == 7 )
          {
            v26 = **((_QWORD **)v6 + 7);
LABEL_74:
            IoNotifyPowerOperationVetoed(v28, v26, v27);
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
      qword_14032EBA8 = KeQueryPerformanceCounter(0LL).QuadPart;
    }
    v22 = 0;
    v23 = v6 + 64;
    do
    {
      if ( PoResumeFromHibernate && !v22 )
      {
        if ( byte_14032E8E0 )
          qword_14032ED50 = KeQueryPerformanceCounter(0LL).QuadPart;
        if ( byte_1403538D0 )
        {
          BgDisplayFade(v8);
          byte_1403539A0 = 0;
          byte_1403539A1 = 0;
        }
      }
      LOBYTE(a3) = *v6;
      LOBYTE(a4) = 1;
      PopDiagTraceDevicesLevel((unsigned int)v22, 1LL, a3, a4);
      if ( v23[1] < *v23 )
      {
        PopCurrentLevel = v22;
        PopWakeDeviceList(v6, &v6[64 * v22 + 64 + 8 * v22]);
      }
      LOBYTE(v24) = *v6;
      PopDiagTraceDevicesLevel((unsigned int)v22, 1LL, v24, 0LL);
      if ( v22 == 1 && *(_BYTE *)(a1 + 26) == 2 )
      {
        if ( v6[460] )
        {
          v6[460] = 0;
          ExReleaseTimeRefreshLock();
        }
        if ( PoResumeFromHibernate )
        {
          if ( qword_14032E680 )
          {
            v8 = *(_QWORD *)(qword_14032E680 + 216);
            if ( v8 )
              PopBootLoaderSiData(v8, *(unsigned int *)(qword_14032E680 + 224));
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
      ++v22;
      v23 += 18;
    }
    while ( v22 <= 4 );
    if ( *(_BYTE *)(a1 + 26) == 2 )
    {
      PopFxIdleDevicesFromSx(v8, v25, a3, a4);
      qword_14032EBB0 = KeQueryPerformanceCounter(0LL).QuadPart;
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
  if ( (xmmword_1403D1290 & 0x8000) != 0 )
  {
    v34 = *((_DWORD *)v6 + 110);
    v36[1] = 4LL;
    v36[0] = &v34;
    EtwTraceKernelEvent((int)v36, 1, 0x80008000, 0x1225u, 4200450);
  }
  LOBYTE(PopCurrentBroadcast) = 0;
  return *((unsigned int *)v6 + 110);
}
