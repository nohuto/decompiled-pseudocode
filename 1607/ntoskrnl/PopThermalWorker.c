/*
 * XREFs of PopThermalWorker @ 0x140574480
 * Callers:
 *     <none>
 * Callees:
 *     KiSetTimerEx @ 0x140006F70 (KiSetTimerEx.c)
 *     IofCallDriver @ 0x14002DBE0 (IofCallDriver.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     PopAcquireRwLockExclusive @ 0x1400F9D28 (PopAcquireRwLockExclusive.c)
 *     PopCheckAndHandleThermalConditions @ 0x140147464 (PopCheckAndHandleThermalConditions.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x1401474E0 (PopDiagTraceThermalZoneEnumeration.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     PopInternalAddToDumpFile @ 0x1401FEEA4 (PopInternalAddToDumpFile.c)
 *     PopFireThermalWmiEvent @ 0x140206F2C (PopFireThermalWmiEvent.c)
 *     PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x1402093F0 (PopDiagTraceThermalZoneThrottleDurationPerfTrack.c)
 *     PopDiagTraceThermalZoneThrottlePerfTrack @ 0x1402094F8 (PopDiagTraceThermalZoneThrottlePerfTrack.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140532D7C (PopThermalUpdatePassiveTimeTracking.c)
 *     PopPrepareIoctl @ 0x140574888 (PopPrepareIoctl.c)
 *     PopCheckThermalPolicy @ 0x1405748F0 (PopCheckThermalPolicy.c)
 *     PopDiagTraceActiveCooling @ 0x140574A20 (PopDiagTraceActiveCooling.c)
 *     PopDiagTraceThermalCoolingMode @ 0x140574A9C (PopDiagTraceThermalCoolingMode.c)
 *     PopDiagTracePassiveCooling @ 0x140671928 (PopDiagTracePassiveCooling.c)
 */

void __fastcall PopThermalWorker(__int64 a1)
{
  signed __int64 *v1; // rdi
  __int64 v3; // rbx
  IRP *v4; // r13
  struct _DEVICE_OBJECT *BugCheckParameter4; // rbp
  __int64 v6; // r8
  int Status; // eax
  char v8; // al
  char v9; // dl
  char v10; // cl
  char v11; // al
  int v12; // eax
  int v13; // r9d
  int v14; // edx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  char v16; // al
  bool v17; // r15
  unsigned int v18; // r12d
  unsigned int v19; // ecx
  bool v20; // r14
  char v21; // al
  char v22; // al
  int v23; // ecx
  int v24; // edx
  char v25; // al
  __int64 v26; // r8
  unsigned int v27; // ecx
  char v28; // al
  int v29; // eax
  int v30; // ecx
  char v31; // r11
  __int64 v32; // r8
  char v33; // al
  __int64 v34; // rax
  __int64 v35; // rax
  char v36; // [rsp+80h] [rbp+8h]
  bool v37; // [rsp+88h] [rbp+10h] BYREF
  char v38; // [rsp+90h] [rbp+18h]
  unsigned int v39; // [rsp+98h] [rbp+20h] BYREF

  v1 = (signed __int64 *)(a1 + 416);
  v36 = 0;
  v38 = 0;
  v3 = MEMORY[0xFFFFF78000000008];
  v4 = *(IRP **)(a1 + 56);
  BugCheckParameter4 = *(struct _DEVICE_OBJECT **)(a1 + 48);
  v37 = 0;
  v39 = 0;
  PopAcquireRwLockExclusive((unsigned __int64 *)(a1 + 416));
  if ( *(_BYTE *)(a1 + 66) )
  {
    *(_BYTE *)(a1 + 64) = 0;
    goto LABEL_64;
  }
  Status = v4->IoStatus.Status;
  if ( Status < 0 )
  {
    if ( Status == -1073741667 || Status == -1073741536 )
      goto LABEL_8;
    if ( *(_BYTE *)(a1 + 64) == 7 )
    {
      *(_BYTE *)(a1 + 64) = 1;
      goto LABEL_8;
    }
    *(_BYTE *)(a1 + 64) = 5;
LABEL_64:
    KeSetEvent((PRKEVENT)(a1 + 432), 0, 0);
    goto LABEL_24;
  }
  if ( *(_BYTE *)(a1 + 64) == 1 )
  {
    *(_QWORD *)(a1 + 328) = MEMORY[0xFFFFF78000000014];
    v16 = *(_BYTE *)(a1 + 65);
    if ( (v16 & 2) == 0 )
    {
      *(_BYTE *)(a1 + 65) = v16 | 2;
      PopDiagTraceThermalZoneEnumeration((char *)(a1 + 240), (unsigned __int16 *)(a1 + 840), BugCheckParameter4);
    }
    PopCheckThermalPolicy(a1, v3, &v37, &v39);
    KeSetEvent((PRKEVENT)(a1 + 456), 0, 0);
    v17 = v37;
    v18 = v39;
    goto LABEL_31;
  }
  if ( *(_BYTE *)(a1 + 64) != 2 )
  {
    switch ( *(_BYTE *)(a1 + 64) )
    {
      case 3:
        *(_BYTE *)(a1 + 69) = *(_BYTE *)(a1 + 70);
LABEL_7:
        v1 = (signed __int64 *)(a1 + 416);
LABEL_8:
        v8 = 0;
        goto LABEL_9;
      case 4:
        *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 84);
        goto LABEL_7;
      case 6:
        *(_BYTE *)(a1 + 64) = 10;
        goto LABEL_7;
      case 7:
        *(_BYTE *)(a1 + 360) = 1;
        *(_BYTE *)(a1 + 64) = 8;
        break;
      case 8:
        break;
      case 0xA:
        *(_BYTE *)(a1 + 64) = 7;
        goto LABEL_7;
      default:
        PopInternalAddToDumpFile((__int64)v4, 0xD0u, (__int64)BugCheckParameter4);
        KeBugCheckEx(0xA0u, 0x500uLL, 5uLL, (ULONG_PTR)v4, (ULONG_PTR)BugCheckParameter4);
    }
    v27 = *(_DWORD *)(a1 + 348);
    v17 = v27 < 0x64;
    v28 = *(_BYTE *)(a1 + 65);
    v18 = 10 * (*(_DWORD *)(a1 + 80) - v27);
    if ( (v28 & 2) == 0 )
    {
      *(_BYTE *)(a1 + 65) = v28 | 2;
      PopDiagTraceThermalZoneEnumeration((char *)(a1 + 240), (unsigned __int16 *)(a1 + 840), BugCheckParameter4);
    }
LABEL_31:
    v19 = *(_DWORD *)(a1 + 352);
    v20 = v19 < *(unsigned __int8 *)(a1 + 272);
    if ( v19 == *(unsigned __int8 *)(a1 + 69) )
    {
      v22 = *(_BYTE *)(a1 + 65);
      if ( v19 < *(unsigned __int8 *)(a1 + 272) )
      {
        if ( (v22 & 4) != 0 )
          goto LABEL_49;
      }
      else if ( (v22 & 4) == 0 )
      {
        goto LABEL_49;
      }
    }
    *(_BYTE *)(a1 + 70) = *(_BYTE *)(a1 + 352);
    v21 = *(_BYTE *)(a1 + 65);
    v36 = 1;
    if ( v20 )
    {
      if ( (v21 & 4) != 0 )
        goto LABEL_61;
      LOBYTE(v6) = 1;
      PopDiagTraceActiveCooling(a1 + 240, BugCheckParameter4, v6, 0LL);
      LOBYTE(v26) = 1;
      PopDiagTraceActiveCooling(a1 + 240, BugCheckParameter4, v26, 1LL);
      *(_QWORD *)(a1 + 368) = v3;
    }
    else
    {
      if ( (v21 & 4) == 0 )
      {
LABEL_34:
        *(_BYTE *)(a1 + 65) &= ~4u;
LABEL_49:
        v23 = *(_DWORD *)(a1 + 348);
        v24 = *(_DWORD *)(a1 + 80);
        if ( v23 != v24 )
          goto LABEL_73;
        v25 = *(_BYTE *)(a1 + 65);
        if ( v17 )
        {
          if ( (v25 & 1) != 0 )
            goto LABEL_52;
        }
        else if ( (v25 & 1) == 0 )
        {
LABEL_52:
          PopCheckAndHandleThermalConditions(a1);
          v8 = v36;
          v1 = (signed __int64 *)(a1 + 416);
          goto LABEL_9;
        }
        if ( v23 != v24 )
        {
LABEL_73:
          PopThermalUpdatePassiveTimeTracking(a1 + 488, *(_BYTE *)(a1 + 80));
          v29 = *(_DWORD *)(a1 + 348);
          v30 = *(_DWORD *)(a1 + 256);
          v38 = v31;
          *(_DWORD *)(a1 + 84) = v29;
          PopDiagTraceThermalZoneThrottlePerfTrack(v30, 100 - v29, BugCheckParameter4);
        }
        LOBYTE(v6) = v17;
        PopDiagTracePassiveCooling(a1 + 240, BugCheckParameter4, v6, v18, 0);
        v33 = *(_BYTE *)(a1 + 65);
        if ( v17 )
        {
          if ( (v33 & 1) != 0 )
          {
LABEL_80:
            *(_BYTE *)(a1 + 65) |= 1u;
            goto LABEL_52;
          }
          LOBYTE(v32) = 1;
          PopDiagTracePassiveCooling(a1 + 240, BugCheckParameter4, v32, v18, 1);
          *(_QWORD *)(a1 + 376) = v3;
        }
        else
        {
          if ( (v33 & 1) == 0 )
            goto LABEL_81;
          PopDiagTracePassiveCooling(a1 + 240, BugCheckParameter4, 0LL, v18, 1);
          PopDiagTraceThermalZoneThrottleDurationPerfTrack((v3 - *(_QWORD *)(a1 + 376)) / 0x2710uLL, BugCheckParameter4);
        }
        if ( v17 )
          goto LABEL_80;
LABEL_81:
        *(_BYTE *)(a1 + 65) &= ~1u;
        goto LABEL_52;
      }
      PopDiagTraceActiveCooling(a1 + 240, BugCheckParameter4, 0LL, 0LL);
      PopDiagTraceActiveCooling(a1 + 240, BugCheckParameter4, 0LL, 1LL);
    }
    if ( !v20 )
      goto LABEL_34;
LABEL_61:
    *(_BYTE *)(a1 + 65) |= 4u;
    goto LABEL_49;
  }
  *(_BYTE *)(a1 + 67) = *(_BYTE *)(a1 + 68);
  PopDiagTraceThermalCoolingMode(BugCheckParameter4);
  if ( WmiThermalPolicyEventEnabled )
    PopFireThermalWmiEvent(*(_BYTE *)(a1 + 67));
  v1 = (signed __int64 *)(a1 + 416);
  v8 = 1;
LABEL_9:
  v9 = v38;
  v10 = v8;
  if ( *(_BYTE *)(a1 + 69) != *(_BYTE *)(a1 + 70) )
    v10 = 1;
  v11 = *(_BYTE *)(a1 + 64);
  if ( *(_DWORD *)(a1 + 80) != *(_DWORD *)(a1 + 84) )
    v9 = 1;
  switch ( v11 )
  {
    case 6:
      goto LABEL_21;
    case 10:
      v13 = a1 + 840;
      v12 = 16;
      LODWORD(v6) = 0;
      v14 = 2703512;
      goto LABEL_22;
    case 7:
LABEL_54:
      v13 = a1 + 336;
      v12 = 24;
      *(_DWORD *)(a1 + 336) = 1;
      LODWORD(v6) = 0;
      v14 = 2703508;
      goto LABEL_22;
  }
  if ( v10 )
  {
    LOBYTE(v6) = 1;
    *(_BYTE *)(a1 + 64) = 3;
    PopPrepareIoctl(*(_QWORD *)(a1 + 56), 2719880, v6, a1 + 70, 4, 0);
    goto LABEL_23;
  }
  if ( v9 )
  {
    LOBYTE(v6) = 1;
    *(_BYTE *)(a1 + 64) = 4;
    PopPrepareIoctl(*(_QWORD *)(a1 + 56), 2719884, v6, a1 + 84, 4, 0);
    goto LABEL_23;
  }
  if ( *(unsigned __int8 *)(a1 + 67) != PopCoolingMode )
  {
    *(_BYTE *)(a1 + 68) = PopCoolingMode;
    LOBYTE(v6) = 1;
    *(_BYTE *)(a1 + 64) = 2;
    PopPrepareIoctl(*(_QWORD *)(a1 + 56), 2719876, v6, a1 + 68, 1, 0);
    goto LABEL_23;
  }
  if ( *(_BYTE *)(a1 + 360) )
  {
    *(_BYTE *)(a1 + 64) = 8;
    *(_BYTE *)(a1 + 340) = 1;
    goto LABEL_54;
  }
  *(_BYTE *)(a1 + 64) = 1;
  if ( (*(_BYTE *)(a1 + 65) & 1) != 0 )
  {
    v34 = *(unsigned int *)(a1 + 104);
    if ( (_DWORD)v34 )
    {
      v35 = *(_QWORD *)(a1 + 96) + v34;
      if ( v35 <= v3 )
        *(_DWORD *)(a1 + 240) = 0;
      else
        KiSetTimerEx(a1 + 112, v3 - v35, 0, 0, a1 + 176);
    }
  }
LABEL_21:
  v12 = 88;
  v13 = a1 + 240;
  LOBYTE(v6) = 1;
  v14 = 2703488;
LABEL_22:
  PopPrepareIoctl(*(_QWORD *)(a1 + 56), v14, v6, v13, v12, v12);
LABEL_23:
  CurrentStackLocation = v4->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)PopThermalIrpComplete;
  CurrentStackLocation[-1].Context = (PVOID)a1;
  CurrentStackLocation[-1].Control = -32;
  IofCallDriver(BugCheckParameter4, v4);
LABEL_24:
  PopReleaseRwLock(v1);
}
