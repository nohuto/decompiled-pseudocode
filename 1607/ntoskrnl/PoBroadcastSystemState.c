/*
 * XREFs of PoBroadcastSystemState @ 0x1403CEBF8
 * Callers:
 *     PopSetDevicesSystemState @ 0x1403CF5D0 (PopSetDevicesSystemState.c)
 *     PnprQuiesceDevices @ 0x1403DC3D4 (PnprQuiesceDevices.c)
 *     PnprWakeDevices @ 0x1403DCE3C (PnprWakeDevices.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     DbgPrint @ 0x140084CC8 (DbgPrint.c)
 *     PopDiagTraceEventNoPayload @ 0x1400AE73C (PopDiagTraceEventNoPayload.c)
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
 *     PopMapInternalActionToIrpAction @ 0x140114A60 (PopMapInternalActionToIrpAction.c)
 *     PopFxIdleDevicesFromSx @ 0x1401253F4 (PopFxIdleDevicesFromSx.c)
 *     PopFxActivateDevicesForSx @ 0x1401254E0 (PopFxActivateDevicesForSx.c)
 *     IoConfigureCrashDump @ 0x140143410 (IoConfigureCrashDump.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     PopCheckpointSystemSleep @ 0x1403CEBA4 (PopCheckpointSystemSleep.c)
 *     PopDiagTraceDevicesLevel @ 0x1403CF0BC (PopDiagTraceDevicesLevel.c)
 *     PopWakeDeviceList @ 0x1403CF194 (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x1403CF2F0 (PopSleepDeviceList.c)
 *     PopSetupSleepNotifies @ 0x1403D01CC (PopSetupSleepNotifies.c)
 *     PopHandleWakeSources @ 0x1403D0AEC (PopHandleWakeSources.c)
 *     PopBootLoaderSiData @ 0x1403D2484 (PopBootLoaderSiData.c)
 *     MmShutdownSystem @ 0x1403DEC00 (MmShutdownSystem.c)
 *     ExAcquireTimeRefreshLock @ 0x1403EBEE0 (ExAcquireTimeRefreshLock.c)
 *     ExReleaseTimeRefreshLock @ 0x1404B4394 (ExReleaseTimeRefreshLock.c)
 *     EmPowerPagingEnabled @ 0x140530930 (EmPowerPagingEnabled.c)
 *     PopDiagTraceDevicesSuspend @ 0x1405309E8 (PopDiagTraceDevicesSuspend.c)
 *     WmiAcquireSmbiosLockExclusive @ 0x140534DCC (WmiAcquireSmbiosLockExclusive.c)
 *     WmiReleaseSmbiosLockExclusive @ 0x140534DEC (WmiReleaseSmbiosLockExclusive.c)
 *     PopUpdateSmbiosData @ 0x140534E10 (PopUpdateSmbiosData.c)
 *     PopDiagTraceDevicesWakeEnd @ 0x140534F00 (PopDiagTraceDevicesWakeEnd.c)
 *     IoNotifyPowerOperationVetoed @ 0x14062BB58 (IoNotifyPowerOperationVetoed.c)
 *     ObShutdownSystem @ 0x1406656C0 (ObShutdownSystem.c)
 *     BgDisplayFade @ 0x140725814 (BgDisplayFade.c)
 */

__int64 __fastcall PoBroadcastSystemState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r15
  char *v6; // rbx
  int v7; // ecx
  __int64 v8; // rcx
  int v9; // esi
  __int64 v10; // rcx
  int v11; // ecx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  int v15; // r14d
  __int64 v16; // r13
  __int64 v17; // r12
  _DWORD *v18; // rsi
  __int64 v19; // r8
  __int64 v21; // rcx
  int v22; // esi
  _DWORD *v23; // r14
  __int64 v24; // r8
  __int64 v25; // rdx
  ULONG_PTR v26; // rax
  __int64 v27; // rax
  __int64 v28; // r9
  __int64 v29; // r10
  unsigned int v30; // r11d
  int v31; // [rsp+30h] [rbp-40h] BYREF
  char v32; // [rsp+34h] [rbp-3Ch]
  char v33; // [rsp+35h] [rbp-3Bh]
  char v34; // [rsp+36h] [rbp-3Ah]
  int v35; // [rsp+38h] [rbp-38h] BYREF
  LARGE_INTEGER Interval; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v37[2]; // [rsp+48h] [rbp-28h] BYREF
  _QWORD v38[2]; // [rsp+58h] [rbp-18h] BYREF

  v4 = *(_BYTE *)(a1 + 25);
  v6 = (char *)qword_140303330;
  *(_BYTE *)qword_140303330 = *(_BYTE *)(a1 + 26);
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
  LODWORD(qword_140303328) = *(_DWORD *)(a1 + 16);
  LOBYTE(PopCurrentBroadcast) = 1;
  if ( (xmmword_1403AA2D0 & 0x8000) != 0 )
  {
    v31 = *((_DWORD *)v6 + 1);
    v34 = *(_BYTE *)(a1 + 26);
    v33 = *(_BYTE *)(a1 + 24);
    v37[0] = &v31;
    v32 = v4;
    v37[1] = 8LL;
    EtwTraceKernelEvent((int)v37, 1, 0x80008000, 4644, 4200450);
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
LABEL_30:
      if ( (PopSimulate & 0x20000) != 0 && *(_BYTE *)(a1 + 26) == 2 )
      {
        DbgPrint("po: POP_WAKE_DEVICE_AFTER_SLEEP enabled.\n");
        v4 = 1;
        *((_DWORD *)v6 + 110) = -1073741823;
      }
      goto LABEL_31;
    }
    PopSetupSleepNotifies(v6);
    LOBYTE(v10) = *(_BYTE *)(a1 + 26) == 3;
    PopDiagTraceDevicesSuspend(v10, (HIDWORD(PopCurrentBroadcast) >> 8) & 0xF, WORD2(PopCurrentBroadcast) >> 12);
    v11 = 11;
    if ( *(_BYTE *)(a1 + 26) != 3 )
      v11 = 14;
    PopCheckpointSystemSleep(v11);
    v14 = *(_DWORD *)(a1 + 16);
    if ( v14 != 4 || !PopShutdownPowerOffPolicy && !qword_1403033D0 )
      v9 = 0;
    if ( (unsigned int)(v14 - 2) <= 1 && *v6 == 2 )
      PopFxActivateDevicesForSx(1u);
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
          if ( dword_1403033C8 == 5 )
            WmiAcquireSmbiosLockExclusive();
          EmPowerPagingEnabled(0LL);
          _InterlockedExchange(&PopPagingEnabled, 0);
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
          goto LABEL_28;
      }
      v4 = 1;
      if ( *((_QWORD *)v6 + 56) )
      {
        if ( *(_DWORD *)(a1 + 12) == 1 )
        {
          v30 = PopMapInternalActionToIrpAction(*(_DWORD *)(a1 + 16), *((_DWORD *)v6 + 1), 0);
          if ( v30 == 7 )
          {
            v28 = **((_QWORD **)v6 + 7);
          }
          else if ( *(int *)(a1 + 20) < 0 )
          {
            goto LABEL_28;
          }
          IoNotifyPowerOperationVetoed(v30, v28, v29);
        }
      }
    }
LABEL_28:
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICESSUSPEND_END);
    if ( *(_BYTE *)(a1 + 26) == 3 )
      PopCheckpointSystemSleep(12);
    goto LABEL_30;
  }
LABEL_31:
  v6[456] = v4;
  if ( v4 )
  {
    v6[458] = 1;
    *v6 = 2;
    *((_DWORD *)v6 + 1) = 1;
    if ( *(_BYTE *)(a1 + 26) == 2 )
    {
      PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICESWAKE);
      qword_1403037B8 = KeQueryPerformanceCounter(0LL).QuadPart;
    }
    v22 = 0;
    v23 = v6 + 64;
    do
    {
      if ( PoResumeFromHibernate && !v22 )
      {
        if ( byte_140303500 )
          qword_140303970 = KeQueryPerformanceCounter(0LL).QuadPart;
        if ( byte_1403289E0 )
        {
          BgDisplayFade(v8);
          byte_140328D12 = 0;
          byte_140328D10 = 0;
        }
      }
      LOBYTE(a3) = *v6;
      LOBYTE(a4) = 1;
      PopDiagTraceDevicesLevel((unsigned int)v22, 1LL, a3, a4);
      if ( v23[1] < *v23 )
        PopWakeDeviceList(v6, &v6[64 * v22 + 64 + 8 * v22]);
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
          v26 = qword_1403033E0;
          if ( qword_1403033E0 )
          {
            v8 = *(_QWORD *)(qword_1403033E0 + 216);
            if ( v8 )
            {
              PopBootLoaderSiData(v8, *(unsigned int *)(qword_1403033E0 + 224));
              v26 = qword_1403033E0;
            }
          }
          v27 = *(_QWORD *)(v26 + 200);
          LOBYTE(v25) = *(_BYTE *)(v27 + 965);
          LOBYTE(v8) = *(_BYTE *)(v27 + 964);
          PopUpdateSmbiosData(v8, v25, *(unsigned int *)(v27 + 960), *(_QWORD *)(v27 + 952));
        }
        if ( dword_1403033C8 == 5 )
          WmiReleaseSmbiosLockExclusive();
        LOBYTE(v8) = 1;
        EmPowerPagingEnabled(v8);
        _InterlockedExchange(&PopPagingEnabled, 1);
        v8 = (unsigned int)PopDebugFlags;
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
      PopFxIdleDevicesFromSx();
      qword_1403037C0 = KeQueryPerformanceCounter(0LL).QuadPart;
      PopDiagTraceDevicesWakeEnd();
      PopCheckpointSystemSleep(36);
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
  if ( (xmmword_1403AA2D0 & 0x8000) != 0 )
  {
    v35 = *((_DWORD *)v6 + 110);
    v38[1] = 4LL;
    v38[0] = &v35;
    EtwTraceKernelEvent((int)v38, 1, 0x80008000, 4645, 4200450);
  }
  LOBYTE(PopCurrentBroadcast) = 0;
  return *((unsigned int *)v6 + 110);
}
