/*
 * XREFs of PopThermalWorker @ 0x1405C3BD8
 * Callers:
 *     <none>
 * Callees:
 *     IofCallDriver @ 0x140048540 (IofCallDriver.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiSetTimerEx @ 0x140068414 (KiSetTimerEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 *     PopCheckAndHandleThermalConditions @ 0x140170C90 (PopCheckAndHandleThermalConditions.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x140170D0C (PopDiagTraceThermalZoneEnumeration.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     PopInternalAddToDumpFile @ 0x140233810 (PopInternalAddToDumpFile.c)
 *     PopFireThermalWmiEvent @ 0x14023C9B4 (PopFireThermalWmiEvent.c)
 *     PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x14023ED18 (PopDiagTraceThermalZoneThrottleDurationPerfTrack.c)
 *     PopDiagTraceThermalZoneThrottlePerfTrack @ 0x14023EE20 (PopDiagTraceThermalZoneThrottlePerfTrack.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140565CEC (PopThermalUpdatePassiveTimeTracking.c)
 *     PopPrepareIoctl @ 0x1405C41B0 (PopPrepareIoctl.c)
 *     PopCheckThermalPolicy @ 0x1405C4218 (PopCheckThermalPolicy.c)
 *     PopDiagTraceActiveCooling @ 0x1405C4314 (PopDiagTraceActiveCooling.c)
 *     PopDiagTraceThermalCoolingMode @ 0x1405C4390 (PopDiagTraceThermalCoolingMode.c)
 *     PopDiagTracePassiveCooling @ 0x1406B9968 (PopDiagTracePassiveCooling.c)
 */

void __fastcall PopThermalWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 *v4; // r15
  __int64 v6; // rdi
  IRP *v7; // r14
  struct _DEVICE_OBJECT *BugCheckParameter4; // r12
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // r8
  int Status; // eax
  char v16; // al
  char v17; // dl
  char v18; // cl
  char v19; // al
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v21; // rdx
  signed __int64 v22; // rax
  signed __int64 v23; // rcx
  unsigned __int64 v24; // rtt
  struct _KTHREAD *v25; // rcx
  __int16 v26; // ax
  __int64 i; // rbx
  char v28; // al
  unsigned int v29; // ecx
  bool v30; // r14
  char v31; // al
  __int64 v32; // rcx
  char v33; // al
  int v34; // ecx
  int v35; // edx
  char v36; // al
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // r8
  unsigned int v40; // ecx
  int v41; // eax
  char v42; // al
  int v43; // eax
  int v44; // ecx
  bool v45; // bl
  __int64 v46; // r8
  char v47; // al
  __int64 v48; // rcx
  unsigned int v49; // eax
  __int64 v50; // rbx
  IRP *v51; // [rsp+30h] [rbp-58h]
  char v52; // [rsp+90h] [rbp+8h]
  bool v53; // [rsp+98h] [rbp+10h] BYREF
  char v54; // [rsp+A0h] [rbp+18h]
  unsigned int v55; // [rsp+A8h] [rbp+20h] BYREF

  v4 = (unsigned __int64 *)(a1 + 416);
  v52 = 0;
  v54 = 0;
  v6 = MEMORY[0xFFFFF78000000008];
  v7 = *(IRP **)(a1 + 56);
  BugCheckParameter4 = *(struct _DEVICE_OBJECT **)(a1 + 48);
  v53 = 0;
  v55 = 0;
  CurrentThread = KeGetCurrentThread();
  v51 = v7;
  --CurrentThread->KernelApcDisable;
  v10 = KeAbPreAcquire(a1 + 416, 0LL, 0LL, a4);
  v13 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v10, (ULONG_PTR)v4, v12);
  v14 = 1LL;
  if ( v13 )
    *(_BYTE *)(v13 + 26) |= 1u;
  v4[1] = (unsigned __int64)KeGetCurrentThread();
  if ( *(_BYTE *)(a1 + 66) )
  {
    *(_BYTE *)(a1 + 64) = 0;
    if ( (PoDebug & 0x20) != 0 )
      DbgPrint("Thermal Zone %p is being removed\n", (const void *)a1);
  }
  else
  {
    Status = v7->IoStatus.Status;
    if ( Status >= 0 )
    {
      if ( *(_BYTE *)(a1 + 64) == 1 )
      {
        if ( (PoDebug & 0x20) != 0 )
          DbgPrint("\n", v11, 1LL);
        if ( (PoDebug & 0x20) != 0 )
          DbgPrint("Thermal Zone %p (READ_STATE):\n", (const void *)a1);
        if ( (PoDebug & 0x20) != 0 )
          DbgPrint("  Current Temp:   0x%x\n", *(_DWORD *)(a1 + 256));
        if ( (PoDebug & 0x20) != 0 )
          DbgPrint("  Critical Trip:  0x%x\n", *(_DWORD *)(a1 + 268));
        if ( (PoDebug & 0x20) != 0 )
          DbgPrint("  Passive Trip:   0x%x\n", *(_DWORD *)(a1 + 260));
        for ( i = 0LL; (unsigned int)i < *(unsigned __int8 *)(a1 + 272); i = (unsigned int)(i + 1) )
        {
          if ( (PoDebug & 0x20) != 0 )
            DbgPrint("  Active Trip %u: 0x%x\n", i, *(_DWORD *)(a1 + 4 * i + 276));
        }
        *(_QWORD *)(a1 + 328) = MEMORY[0xFFFFF78000000014];
        v28 = *(_BYTE *)(a1 + 65);
        if ( (v28 & 2) == 0 )
        {
          *(_BYTE *)(a1 + 65) = v28 | 2;
          PopDiagTraceThermalZoneEnumeration((char *)(a1 + 240), BugCheckParameter4);
        }
        PopCheckThermalPolicy(a1, v6, &v53, &v55);
        KeSetEvent((PRKEVENT)(a1 + 456), 0, 0);
        goto LABEL_58;
      }
      if ( *(_BYTE *)(a1 + 64) != 2 )
      {
        switch ( *(_BYTE *)(a1 + 64) )
        {
          case 3:
            *(_BYTE *)(a1 + 69) = *(_BYTE *)(a1 + 70);
            if ( (PoDebug & 0x20) != 0 )
              DbgPrint("\n", v11, 1LL);
            if ( (PoDebug & 0x20) != 0 )
              DbgPrint("Thermal Zone %p (SET_ACTIVE):\n", (const void *)a1);
            if ( (PoDebug & 0x20) != 0 )
              DbgPrint("  New Active cooling point: 0x%x\n", *(unsigned __int8 *)(a1 + 69), v14);
LABEL_16:
            LODWORD(v14) = 1;
LABEL_17:
            v16 = v52;
            goto LABEL_18;
          case 4:
            *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 84);
            if ( (PoDebug & 0x20) != 0 )
              DbgPrint("\n", v11, 1LL);
            if ( (PoDebug & 0x20) != 0 )
              DbgPrint("Thermal Zone %p (SET_PASSIVE):\n", (const void *)a1);
            if ( (PoDebug & 0x20) != 0 )
              DbgPrint("  New throttle: %d%%\n", *(unsigned int *)(a1 + 80), v14);
            goto LABEL_16;
          case 6:
            *(_BYTE *)(a1 + 64) = 7;
            goto LABEL_17;
          case 7:
            *(_BYTE *)(a1 + 360) = 1;
            if ( (PoDebug & 0x20) != 0 )
              DbgPrint("Thermal Zone %p: Using policy driver interface.\n", (const void *)a1);
            *(_BYTE *)(a1 + 64) = 8;
            break;
          case 8:
            break;
          default:
            PopInternalAddToDumpFile((__int64)v7, 0xD0u, (__int64)BugCheckParameter4);
            KeBugCheckEx(0xA0u, 0x500uLL, 5uLL, (ULONG_PTR)v7, (ULONG_PTR)BugCheckParameter4);
        }
        if ( (PoDebug & 0x20) != 0 )
          DbgPrint("\n", v11, v14);
        if ( (PoDebug & 0x20) != 0 )
          DbgPrint("Thermal Zone %p (READ_POLICY):\n", (const void *)a1);
        if ( (PoDebug & 0x20) != 0 )
          DbgPrint("  Activation Reasons: 0x%x\n", *(_DWORD *)(a1 + 344));
        if ( (PoDebug & 0x20) != 0 )
          DbgPrint("  Passive Limit:      %d\n", *(_DWORD *)(a1 + 348));
        if ( (PoDebug & 0x20) != 0 )
          DbgPrint("  Active Level:       %d\n", *(_DWORD *)(a1 + 352));
        if ( (PoDebug & 0x20) != 0 )
          DbgPrint("  Critical:           %x\n", *(unsigned __int8 *)(a1 + 342));
        v40 = *(_DWORD *)(a1 + 348);
        v41 = *(_DWORD *)(a1 + 80);
        v53 = v40 < 0x64;
        v55 = 10 * (v41 - v40);
        v42 = *(_BYTE *)(a1 + 65);
        if ( (v42 & 2) == 0 )
        {
          *(_BYTE *)(a1 + 65) = v42 | 2;
          PopDiagTraceThermalZoneEnumeration((char *)(a1 + 240), BugCheckParameter4);
        }
LABEL_58:
        v29 = *(_DWORD *)(a1 + 352);
        v30 = v29 < *(unsigned __int8 *)(a1 + 272);
        if ( v29 == *(unsigned __int8 *)(a1 + 69) )
        {
          v33 = *(_BYTE *)(a1 + 65);
          if ( v29 < *(unsigned __int8 *)(a1 + 272) )
          {
            if ( (v33 & 4) != 0 )
              goto LABEL_87;
          }
          else if ( (v33 & 4) == 0 )
          {
            goto LABEL_87;
          }
        }
        if ( (PoDebug & 0x20) != 0 )
          DbgPrint("Thermal Zone %p: Pending Coooling Point is 0x%x\n", (const void *)a1, *(_DWORD *)(a1 + 352));
        *(_BYTE *)(a1 + 70) = *(_BYTE *)(a1 + 352);
        v31 = *(_BYTE *)(a1 + 65);
        v52 = 1;
        if ( v30 )
        {
          if ( (v31 & 4) != 0 )
            goto LABEL_101;
          LOBYTE(v14) = 1;
          PopDiagTraceActiveCooling(a1 + 240, BugCheckParameter4, v14, 0LL);
          LOBYTE(v39) = 1;
          PopDiagTraceActiveCooling(a1 + 240, BugCheckParameter4, v39, 1LL);
          *(_QWORD *)(a1 + 368) = v6;
        }
        else
        {
          if ( (v31 & 4) == 0 )
          {
LABEL_63:
            *(_BYTE *)(a1 + 65) &= ~4u;
LABEL_87:
            v34 = *(_DWORD *)(a1 + 348);
            v35 = *(_DWORD *)(a1 + 80);
            if ( v34 != v35 )
              goto LABEL_137;
            v36 = *(_BYTE *)(a1 + 65);
            if ( v53 )
            {
              if ( (v36 & 1) != 0 )
                goto LABEL_90;
            }
            else if ( (v36 & 1) == 0 )
            {
LABEL_90:
              PopCheckAndHandleThermalConditions(a1);
              v7 = v51;
              LODWORD(v14) = 1;
              goto LABEL_17;
            }
            if ( v34 != v35 )
            {
LABEL_137:
              if ( (PoDebug & 0x20) != 0 )
                DbgPrint("Thermal Zone %p: Thermal constraint updated to %d\n", (const void *)a1, *(_DWORD *)(a1 + 348));
              PopThermalUpdatePassiveTimeTracking(a1 + 488, *(_BYTE *)(a1 + 80));
              v43 = *(_DWORD *)(a1 + 348);
              v44 = *(_DWORD *)(a1 + 256);
              v54 = 1;
              *(_DWORD *)(a1 + 84) = v43;
              PopDiagTraceThermalZoneThrottlePerfTrack(v44, 100 - v43, BugCheckParameter4);
            }
            v45 = v53;
            LOBYTE(v14) = v53;
            PopDiagTracePassiveCooling(a1 + 240, BugCheckParameter4, v14, v55, 0);
            v47 = *(_BYTE *)(a1 + 65);
            if ( v45 )
            {
              if ( (v47 & 1) != 0 )
              {
LABEL_148:
                *(_BYTE *)(a1 + 65) |= 1u;
                goto LABEL_90;
              }
              LOBYTE(v46) = 1;
              PopDiagTracePassiveCooling(a1 + 240, BugCheckParameter4, v46, v55, 1);
              *(_QWORD *)(a1 + 376) = v6;
              if ( (PoDebug & 0x20) != 0 )
                DbgPrint("Thermal Zone %p: Starting to throttle\n", a1);
            }
            else
            {
              if ( (v47 & 1) == 0 )
                goto LABEL_149;
              PopDiagTracePassiveCooling(a1 + 240, BugCheckParameter4, 0LL, v55, 1);
              PopDiagTraceThermalZoneThrottleDurationPerfTrack(
                (v6 - *(_QWORD *)(a1 + 376)) / 0x2710uLL,
                BugCheckParameter4);
              if ( (PoDebug & 0x20) == 0 )
                goto LABEL_149;
              DbgPrint("Thermal Zone %p: Ending throttle\n", a1);
            }
            if ( v53 )
              goto LABEL_148;
LABEL_149:
            *(_BYTE *)(a1 + 65) &= ~1u;
            goto LABEL_90;
          }
          PopDiagTraceActiveCooling(a1 + 240, BugCheckParameter4, 0LL, 0LL);
          PopDiagTraceActiveCooling(a1 + 240, BugCheckParameter4, 0LL, 1LL);
        }
        if ( !v30 )
          goto LABEL_63;
LABEL_101:
        *(_BYTE *)(a1 + 65) |= 4u;
        goto LABEL_87;
      }
      *(_BYTE *)(a1 + 67) = *(_BYTE *)(a1 + 68);
      if ( (PoDebug & 0x20) != 0 )
        DbgPrint("\n", v11, 1LL);
      if ( (PoDebug & 0x20) != 0 )
        DbgPrint("Thermal Zone %p (SET_MODE):\n", (const void *)a1);
      if ( (PoDebug & 0x20) != 0 )
        DbgPrint("  Cooling mode set to 0x%x\n", *(unsigned __int8 *)(a1 + 67));
      PopDiagTraceThermalCoolingMode(BugCheckParameter4);
      if ( WmiThermalPolicyEventEnabled )
        PopFireThermalWmiEvent(*(_BYTE *)(a1 + 67));
      LODWORD(v14) = 1;
      v16 = 1;
LABEL_18:
      v17 = v54;
      v18 = v16;
      if ( *(_BYTE *)(a1 + 69) != *(_BYTE *)(a1 + 70) )
        v18 = 1;
      v19 = *(_BYTE *)(a1 + 64);
      if ( *(_DWORD *)(a1 + 80) != *(_DWORD *)(a1 + 84) )
        v17 = 1;
      if ( v19 != 6 )
      {
        if ( v19 != 7 )
        {
          if ( v18 )
          {
            v32 = *(_QWORD *)(a1 + 56);
            *(_BYTE *)(a1 + 64) = 3;
            PopPrepareIoctl(v32, 2719880, v14, a1 + 70, 4, 0);
            if ( (PoDebug & 0x20) != 0 )
              DbgPrint("Thermal Zone %p: Sending Run Cooling Method: 0x%x\n", a1, *(unsigned __int8 *)(a1 + 70));
            goto LABEL_31;
          }
          if ( v17 )
          {
            v48 = *(_QWORD *)(a1 + 56);
            *(_BYTE *)(a1 + 64) = 4;
            PopPrepareIoctl(v48, 2719884, v14, a1 + 84, 4, 0);
            if ( (PoDebug & 0x20) != 0 )
              DbgPrint("Thermal Zone %p: Sending Set Passive Limit: 0x%x\n", a1, *(unsigned int *)(a1 + 80));
            goto LABEL_31;
          }
          if ( *(unsigned __int8 *)(a1 + 67) != PopCoolingMode )
          {
            *(_BYTE *)(a1 + 68) = PopCoolingMode;
            v37 = *(_QWORD *)(a1 + 56);
            *(_BYTE *)(a1 + 64) = 2;
            PopPrepareIoctl(v37, 2719876, v14, a1 + 68, 1, 0);
            if ( (PoDebug & 0x20) != 0 )
              DbgPrint("Thermal Zone %p: Sending Set Cooling Policy: 0x%x\n", a1, *(unsigned __int8 *)(a1 + 68));
            goto LABEL_31;
          }
          if ( !*(_BYTE *)(a1 + 360) )
          {
            *(_BYTE *)(a1 + 64) = 1;
            if ( (*(_BYTE *)(a1 + 65) & 1) != 0 )
            {
              v49 = *(_DWORD *)(a1 + 104);
              if ( v49 )
              {
                v50 = *(_QWORD *)(a1 + 96) + v49;
                if ( v50 <= v6 )
                {
                  *(_DWORD *)(a1 + 240) = 0;
                }
                else
                {
                  if ( (PoDebug & 0x20) != 0 )
                    DbgPrint(
                      "Thermal Zone %p: Next read in %d sec\n",
                      (const void *)a1,
                      *(_DWORD *)(a1 + 104) / 0x989680u);
                  KiSetTimerEx(a1 + 112, v6 - v50, 0, 0, a1 + 176);
                  LODWORD(v14) = 1;
                }
              }
            }
            PopPrepareIoctl(*(_QWORD *)(a1 + 56), 2703488, v14, a1 + 240, 88, 88);
            if ( (PoDebug & 0x20) != 0 )
              DbgPrint("Thermal Zone %p: Sending Query Temp - ThermalStamp = 0x%x\n", a1, *(unsigned int *)(a1 + 240));
            goto LABEL_31;
          }
          *(_BYTE *)(a1 + 64) = 8;
          *(_BYTE *)(a1 + 340) = 1;
        }
        v38 = *(_QWORD *)(a1 + 56);
        *(_DWORD *)(a1 + 336) = 1;
        PopPrepareIoctl(v38, 2703508, 0, a1 + 336, 24, 24);
        if ( (PoDebug & 0x20) != 0 )
          DbgPrint("Thermal Zone %p: Sending Query Policy\n", (const void *)a1);
        goto LABEL_31;
      }
      PopPrepareIoctl(*(_QWORD *)(a1 + 56), 2703488, v14, a1 + 240, 88, 88);
LABEL_31:
      CurrentStackLocation = v7->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)PopThermalIrpComplete;
      CurrentStackLocation[-1].Context = (PVOID)a1;
      CurrentStackLocation[-1].Control = -32;
      IofCallDriver(BugCheckParameter4, v7);
      goto LABEL_32;
    }
    if ( Status == -1073741667 || Status == -1073741536 )
    {
LABEL_70:
      v16 = 0;
      goto LABEL_18;
    }
    if ( *(_BYTE *)(a1 + 64) == 7 )
    {
      if ( (PoDebug & 0x20) != 0 )
      {
        DbgPrint("Thermal Zone %p: Using ACPI interface.\n", (const void *)a1);
        LODWORD(v14) = 1;
      }
      *(_BYTE *)(a1 + 64) = 1;
      goto LABEL_70;
    }
    if ( (PoDebug & 1) != 0 )
      DbgPrint("Thermal Zone %p: unexpected error %x\n", (const void *)a1, v7->IoStatus.Status);
    *(_BYTE *)(a1 + 64) = 5;
  }
  KeSetEvent((PRKEVENT)(a1 + 432), 0, 0);
LABEL_32:
  if ( v4[1] )
    v4[1] = 0LL;
  _m_prefetchw(v4);
  v22 = *v4;
  v23 = *v4 - 16;
  if ( (*v4 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v23 = 0LL;
  if ( (v22 & 2) != 0 || (v24 = *v4, v24 != _InterlockedCompareExchange64((volatile signed __int64 *)v4, v23, v22)) )
    ExfReleasePushLock(v4, v21);
  KeAbPostRelease((ULONG_PTR)v4);
  v25 = KeGetCurrentThread();
  v26 = v25->KernelApcDisable + 1;
  v25->KernelApcDisable = v26;
  if ( !v26
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v25->ApcState.ApcListHead[0].Flink != &v25->152
    && !v25->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
