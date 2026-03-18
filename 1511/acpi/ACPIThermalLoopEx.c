/*
 * XREFs of ACPIThermalLoopEx @ 0x1C001A03C
 * Callers:
 *     ACPIThermalDeviceControl @ 0x1C0019E90 (ACPIThermalDeviceControl.c)
 *     ACPIThermalLoop @ 0x1C001A034 (ACPIThermalLoop.c)
 *     AcpiDiagThermalPollingTimerRoutine @ 0x1C0024BD0 (AcpiDiagThermalPollingTimerRoutine.c)
 *     ACPIThermalEvent @ 0x1C00408E0 (ACPIThermalEvent.c)
 *     ACPIThermalReadTemperatureComplete @ 0x1C0040920 (ACPIThermalReadTemperatureComplete.c)
 *     ACPIThermalStopZone @ 0x1C0040B74 (ACPIThermalStopZone.c)
 *     ACPIThermalStopZoneWorker @ 0x1C0040BB0 (ACPIThermalStopZoneWorker.c)
 *     ACPIThermalStartDevice @ 0x1C006CB30 (ACPIThermalStartDevice.c)
 * Callees:
 *     ACPIGet @ 0x1C0001B00 (ACPIGet.c)
 *     AMLIAsyncEvalObject @ 0x1C00187D8 (AMLIAsyncEvalObject.c)
 *     ACPIThermalTMPCallback @ 0x1C0019E30 (ACPIThermalTMPCallback.c)
 *     ACPIThermalLoop @ 0x1C001A034 (ACPIThermalLoop.c)
 *     ACPIThermalCompletePendingIrps @ 0x1C001A42C (ACPIThermalCompletePendingIrps.c)
 *     ACPISetDeviceWorker @ 0x1C001A624 (ACPISetDeviceWorker.c)
 *     ACPIDeviceHasFirmwareDependencies @ 0x1C001A6EC (ACPIDeviceHasFirmwareDependencies.c)
 *     AcpiDiagTraceThermalNotification @ 0x1C001A79C (AcpiDiagTraceThermalNotification.c)
 *     AcpiDiagTraceTemperatureChange @ 0x1C001A9E0 (AcpiDiagTraceTemperatureChange.c)
 *     memset @ 0x1C00251C0 (memset.c)
 */

void __fastcall ACPIThermalLoopEx(__int64 a1, int a2, int a3)
{
  __int64 v3; // rsi
  KSPIN_LOCK *v4; // r14
  KIRQL v8; // al
  __int64 v9; // rdx
  int v10; // ebp
  KIRQL v11; // r15
  char v12; // r12
  int v13; // ecx
  bool v14; // al
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  __int64 v22; // rdx
  __int64 v23; // r9
  int v24; // edx
  KIRQL v25; // al
  __int64 **v26; // rcx
  unsigned int v27; // edx
  unsigned int v28; // eax
  int v29; // ecx
  unsigned int v30; // edx
  unsigned int v31; // eax
  unsigned int v32; // ecx
  bool v33; // cc
  unsigned int v34; // eax
  unsigned int v35; // ecx
  bool v36; // cc
  unsigned int v37; // eax
  unsigned int v38; // ecx
  bool v39; // cc
  unsigned int v40; // eax
  unsigned int v41; // ecx
  bool v42; // cc
  unsigned int v43; // ecx
  unsigned int v44; // eax
  bool v45; // cc

  v3 = *(_QWORD *)(a1 + 192);
  v4 = (KSPIN_LOCK *)(a1 + 176);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 176));
  v10 = ~a2 & (*(_DWORD *)(a1 + 184) | a3);
  v11 = v8;
  *(_DWORD *)(a1 + 184) = v10;
  v12 = 1;
  if ( v10 >= 0 )
  {
    *(_DWORD *)(a1 + 184) = v10 | 0x80000000;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !v12 )
        {
          v11 = KeAcquireSpinLockRaiseToDpc(v4);
          v12 = 1;
        }
        v13 = *(_DWORD *)(a1 + 184);
        if ( (v13 & 0x40000000) != 0 )
          goto LABEL_21;
        if ( (v13 & 0x10000000) != 0 )
        {
          v14 = 0;
        }
        else
        {
          v14 = (v13 & 0x8000000) == 0;
          *(_DWORD *)(a1 + 184) = v13 | 0x8000000;
        }
        if ( v14 )
          ACPISetDeviceWorker(a1, 0x2000LL);
        v15 = *(_DWORD *)(a1 + 184);
        if ( (v15 & 0x8000000) != 0 )
        {
LABEL_21:
          *(_DWORD *)(a1 + 184) &= ~0x80000000;
          goto LABEL_22;
        }
        if ( (v15 & 0x10) == 0 )
        {
          v21 = v15 | 0x40000010;
          v22 = 17LL;
          goto LABEL_40;
        }
        if ( (v15 & 8) == 0 )
        {
          *(_DWORD *)(a1 + 184) = v15 | 0x40000008;
          KeReleaseSpinLock(v4, v11);
          v23 = *(unsigned int *)(v3 + 96);
          v24 = 1346589535;
          goto LABEL_43;
        }
        if ( (v15 & 2) != 0 && *(_QWORD *)(v3 + 120) )
          break;
LABEL_15:
        if ( (v15 & 4) == 0 )
        {
          v21 = v15 | 0x40000004;
          v22 = 4LL;
          goto LABEL_40;
        }
        if ( (v15 & 1) == 0 )
        {
          v21 = v15 | 0x40000001;
          v22 = 1LL;
LABEL_40:
          *(_DWORD *)(a1 + 184) = v21;
          goto LABEL_41;
        }
        if ( (v15 & 0x100) == 0 )
        {
          v21 = v15 | 0x40000100;
          v22 = 256LL;
          goto LABEL_40;
        }
        LOBYTE(v9) = *(_BYTE *)(*(_QWORD *)(a1 + 192) + 274LL) != 0;
        if ( (v15 & 0x202) == 2 && *(_BYTE *)(*(_QWORD *)(a1 + 192) + 274LL) )
        {
          v21 = v15 | 0x40000200;
          v22 = 512LL;
          goto LABEL_40;
        }
        if ( (v15 & 0x20000002) == 0x20000002 )
          goto LABEL_21;
        if ( *(_BYTE *)(v3 + 273) || (v15 & 2) != 0 )
        {
          if ( (v15 & 0x40) == 0 )
          {
            *(_DWORD *)(a1 + 184) = v15 | 0x40;
            AcpiDiagTraceThermalNotification(v3, a1, 128LL);
          }
          v16 = *(_DWORD *)(a1 + 184);
          if ( (v16 & 0x80u) == 0 )
          {
            *(_DWORD *)(a1 + 184) = v16 | 0x80;
            AcpiDiagTraceThermalNotification(v3, a1, 129LL);
          }
          v17 = *(_DWORD *)(a1 + 184);
          if ( (v17 & 0x800) == 0 )
          {
            *(_DWORD *)(a1 + 184) = v17 | 0x800;
            AcpiDiagTraceTemperatureChange(v3, a1);
          }
          v18 = *(_DWORD *)(a1 + 184);
          if ( (v18 & 0x1000) != 0 )
          {
            if ( !(unsigned __int8)ACPIThermalCompletePendingIrps(a1, v9) )
              goto LABEL_21;
          }
          else
          {
            *(_DWORD *)(a1 + 184) = v18 | 0x1000;
            KeReleaseSpinLock(v4, v11);
            v12 = 0;
            v25 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
            v26 = (__int64 **)qword_1C0059528;
            v11 = v25;
            *(_QWORD *)(a1 + 200) = &AcpiThermalZoneList;
            *(_QWORD *)(a1 + 208) = v26;
            if ( *v26 != &AcpiThermalZoneList )
              __fastfail(3u);
            *v26 = (__int64 *)(a1 + 200);
            qword_1C0059528 = a1 + 200;
            KeReleaseSpinLock(&AcpiThermalConstraintLock, v25);
          }
        }
        else
        {
          ++*(_DWORD *)v3;
          *(_DWORD *)(a1 + 184) |= 2u;
          v19 = *(_DWORD *)(a1 + 184);
          if ( (_BYTE)v9 )
          {
            v22 = 514LL;
            *(_DWORD *)(a1 + 184) = v19 | 0x40000200;
LABEL_41:
            ACPISetDeviceWorker(a1, v22);
          }
          else if ( *(_QWORD *)(v3 + 112) )
          {
            *(_DWORD *)(a1 + 184) = v19 | 0x40000000;
            KeReleaseSpinLock(v4, v11);
            v12 = 0;
            memset((void *)(v3 + 136), 0, 0x28uLL);
            *(_WORD *)(v3 + 138) = 0;
            if ( !(unsigned __int8)ACPIDeviceHasFirmwareDependencies(a1) || *(_DWORD *)(a1 + 492) == 1 )
            {
              v20 = AMLIAsyncEvalObject(
                      *(__int64 **)(v3 + 112),
                      (_SLIST_ENTRY *)(v3 + 136),
                      0,
                      0LL,
                      ACPIThermalTMPCallback,
                      a1);
              if ( v20 != 259 )
                goto LABEL_38;
            }
            else
            {
              v20 = -1073741661;
LABEL_38:
              ACPIThermalTMPCallback(*(_QWORD *)(v3 + 112), v20, v3 + 136, a1);
            }
          }
          else
          {
            *(_DWORD *)(a1 + 184) = v19 & 0xEFFFFFFF;
          }
        }
      }
      v27 = *(_DWORD *)(v3 + 100);
      if ( v27 )
      {
        v28 = *(_DWORD *)(v3 + 104);
        if ( v28 > v27 && *(_DWORD *)(v3 + 16) <= v28 - v27 )
          *(_DWORD *)(a1 + 184) = v15 & 0xFFFFFBFF;
        v29 = *(_DWORD *)(v3 + 104);
        v30 = *(_DWORD *)(v3 + 100);
        if ( -1 - v29 > v30 && *(_DWORD *)(v3 + 16) >= v29 + v30 )
          *(_DWORD *)(a1 + 184) &= ~0x400u;
      }
      v31 = *(_DWORD *)(v3 + 20);
      if ( v31 )
      {
        v32 = *(_DWORD *)(v3 + 104);
        v33 = v32 <= v31;
        if ( v32 < v31 )
        {
          if ( *(_DWORD *)(v3 + 16) >= v31 )
            goto LABEL_64;
          v33 = v32 <= v31;
        }
        if ( !v33 && *(_DWORD *)(v3 + 16) <= v31 )
LABEL_64:
          *(_DWORD *)(a1 + 184) &= ~0x400u;
      }
      v34 = *(_DWORD *)(v3 + 28);
      if ( !v34 )
        goto LABEL_72;
      v35 = *(_DWORD *)(v3 + 104);
      v36 = v35 <= v34;
      if ( v35 < v34 )
      {
        if ( *(_DWORD *)(v3 + 16) >= v34 )
          goto LABEL_71;
        v36 = v35 <= v34;
      }
      if ( !v36 && *(_DWORD *)(v3 + 16) <= v34 )
LABEL_71:
        *(_DWORD *)(a1 + 184) &= ~0x400u;
LABEL_72:
      v37 = *(_DWORD *)(v3 + 76);
      if ( !v37 )
        goto LABEL_79;
      v38 = *(_DWORD *)(v3 + 104);
      v39 = v38 <= v37;
      if ( v38 < v37 )
      {
        if ( *(_DWORD *)(v3 + 16) >= v37 )
          goto LABEL_78;
        v39 = v38 <= v37;
      }
      if ( !v39 && *(_DWORD *)(v3 + 16) <= v37 )
LABEL_78:
        *(_DWORD *)(a1 + 184) &= ~0x400u;
LABEL_79:
      v40 = *(_DWORD *)(v3 + 24);
      if ( v40 )
      {
        v41 = *(_DWORD *)(v3 + 104);
        v42 = v41 <= v40;
        if ( v41 >= v40 )
          goto LABEL_83;
        if ( *(_DWORD *)(v3 + 16) < v40 )
        {
          v42 = v41 <= v40;
LABEL_83:
          if ( v42 || *(_DWORD *)(v3 + 16) > v40 )
            goto LABEL_86;
        }
        *(_DWORD *)(a1 + 184) &= ~0x400u;
      }
LABEL_86:
      v9 = 0LL;
      if ( *(_BYTE *)(v3 + 32) )
      {
        while ( 1 )
        {
          v43 = *(_DWORD *)(v3 + 4LL * (unsigned int)v9 + 36);
          if ( v43 )
            break;
LABEL_94:
          v9 = (unsigned int)(v9 + 1);
          if ( (unsigned int)v9 >= *(unsigned __int8 *)(v3 + 32) )
            goto LABEL_95;
        }
        v44 = *(_DWORD *)(v3 + 104);
        v45 = v44 <= v43;
        if ( v44 >= v43 )
        {
LABEL_91:
          if ( v45 || *(_DWORD *)(v3 + 16) > v43 )
            goto LABEL_94;
        }
        else if ( *(_DWORD *)(v3 + 16) < v43 )
        {
          v45 = v44 <= v43;
          goto LABEL_91;
        }
        *(_DWORD *)(a1 + 184) &= ~0x400u;
        goto LABEL_94;
      }
LABEL_95:
      v15 = *(_DWORD *)(a1 + 184);
      if ( (v15 & 0x400) != 0 )
        goto LABEL_15;
      *(_DWORD *)(a1 + 184) = v15 & 0xBFFFF9FF | 0x40000400;
      *(_DWORD *)(v3 + 104) = *(_DWORD *)(v3 + 16);
      KeReleaseSpinLock(v4, v11);
      v23 = *(unsigned int *)(v3 + 104);
      v24 = 1230259295;
LABEL_43:
      v12 = 0;
      if ( (unsigned int)ACPIGet((_QWORD *)a1, v24, 546308096, v23, 4, (__int64)ACPIThermalComplete, a1, 0LL, 0LL) != 259 )
        ACPIThermalLoop(a1, 0x40000000LL);
    }
  }
LABEL_22:
  KeReleaseSpinLock(v4, v11);
}
