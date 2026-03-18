/*
 * XREFs of ACPIThermalLoopEx @ 0x1C0008DA4
 * Callers:
 *     ACPIThermalDeviceControl @ 0x1C0008940 (ACPIThermalDeviceControl.c)
 *     ACPIThermalLoop @ 0x1C0008D9C (ACPIThermalLoop.c)
 *     ACPIThermalEvent @ 0x1C0057060 (ACPIThermalEvent.c)
 *     ACPIThermalReadTemperatureComplete @ 0x1C00571B0 (ACPIThermalReadTemperatureComplete.c)
 *     ACPIThermalRereadTemperature @ 0x1C005723C (ACPIThermalRereadTemperature.c)
 *     ACPIThermalStopZone @ 0x1C0057348 (ACPIThermalStopZone.c)
 *     ACPIThermalStopZoneWorker @ 0x1C0057384 (ACPIThermalStopZoneWorker.c)
 *     ACPIThermalStartDevice @ 0x1C0081910 (ACPIThermalStartDevice.c)
 * Callees:
 *     ACPIGet @ 0x1C00015D0 (ACPIGet.c)
 *     ACPIThermalTMPCallback @ 0x1C0008540 (ACPIThermalTMPCallback.c)
 *     ACPIThermalLoop @ 0x1C0008D9C (ACPIThermalLoop.c)
 *     ACPIThermalCompletePendingIrps @ 0x1C0009194 (ACPIThermalCompletePendingIrps.c)
 *     ACPISetDeviceWorker @ 0x1C0009460 (ACPISetDeviceWorker.c)
 *     ACPIDeviceHasFirmwareDependencies @ 0x1C00097B4 (ACPIDeviceHasFirmwareDependencies.c)
 *     AcpiDiagTraceThermalNotification @ 0x1C0009E70 (AcpiDiagTraceThermalNotification.c)
 *     AcpiDiagTraceTemperatureChange @ 0x1C0009F48 (AcpiDiagTraceTemperatureChange.c)
 *     AMLIAsyncEvalObject @ 0x1C0020244 (AMLIAsyncEvalObject.c)
 *     memset @ 0x1C002C1C0 (memset.c)
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
  _QWORD *v26; // rcx
  _QWORD *v27; // rax
  unsigned int v28; // edx
  unsigned int v29; // eax
  int v30; // ecx
  unsigned int v31; // edx
  unsigned int v32; // eax
  unsigned int v33; // ecx
  bool v34; // cc
  unsigned int v35; // eax
  unsigned int v36; // ecx
  bool v37; // cc
  unsigned int v38; // eax
  unsigned int v39; // ecx
  bool v40; // cc
  unsigned int v41; // eax
  unsigned int v42; // ecx
  bool v43; // cc
  unsigned int v44; // ecx
  unsigned int v45; // eax
  bool v46; // cc

  v3 = *(_QWORD *)(a1 + 200);
  v4 = (KSPIN_LOCK *)(a1 + 184);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
  v10 = ~a2 & (*(_DWORD *)(a1 + 192) | a3);
  v11 = v8;
  *(_DWORD *)(a1 + 192) = v10;
  v12 = 1;
  if ( v10 >= 0 )
  {
    *(_DWORD *)(a1 + 192) = v10 | 0x80000000;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !v12 )
        {
          v11 = KeAcquireSpinLockRaiseToDpc(v4);
          v12 = 1;
        }
        v13 = *(_DWORD *)(a1 + 192);
        if ( (v13 & 0x40000000) != 0 )
          goto LABEL_21;
        if ( (v13 & 0x10000000) != 0 )
        {
          v14 = 0;
        }
        else
        {
          v14 = (v13 & 0x8000000) == 0;
          *(_DWORD *)(a1 + 192) = v13 | 0x8000000;
        }
        if ( v14 )
          ACPISetDeviceWorker(a1, 0x2000LL);
        v15 = *(_DWORD *)(a1 + 192);
        if ( (v15 & 0x8000000) != 0 )
        {
LABEL_21:
          *(_DWORD *)(a1 + 192) &= ~0x80000000;
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
          *(_DWORD *)(a1 + 192) = v15 | 0x40000008;
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
          *(_DWORD *)(a1 + 192) = v21;
          goto LABEL_41;
        }
        if ( (v15 & 0x100) == 0 )
        {
          v21 = v15 | 0x40000100;
          v22 = 256LL;
          goto LABEL_40;
        }
        LOBYTE(v9) = *(_BYTE *)(*(_QWORD *)(a1 + 200) + 274LL) != 0;
        if ( (v15 & 0x202) == 2 && *(_BYTE *)(*(_QWORD *)(a1 + 200) + 274LL) )
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
            *(_DWORD *)(a1 + 192) = v15 | 0x40;
            AcpiDiagTraceThermalNotification(v3, a1, 128LL);
          }
          v16 = *(_DWORD *)(a1 + 192);
          if ( (v16 & 0x80u) == 0 )
          {
            *(_DWORD *)(a1 + 192) = v16 | 0x80;
            AcpiDiagTraceThermalNotification(v3, a1, 129LL);
          }
          v17 = *(_DWORD *)(a1 + 192);
          if ( (v17 & 0x800) == 0 )
          {
            *(_DWORD *)(a1 + 192) = v17 | 0x800;
            AcpiDiagTraceTemperatureChange(v3, a1);
          }
          v18 = *(_DWORD *)(a1 + 192);
          if ( (v18 & 0x1000) != 0 )
          {
            if ( !(unsigned __int8)ACPIThermalCompletePendingIrps(a1, v9) )
              goto LABEL_21;
          }
          else
          {
            *(_DWORD *)(a1 + 192) = v18 | 0x1000;
            KeReleaseSpinLock(v4, v11);
            v12 = 0;
            v25 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
            v26 = (_QWORD *)qword_1C0073908;
            v11 = v25;
            v27 = (_QWORD *)(a1 + 208);
            if ( *(__int64 **)qword_1C0073908 != &AcpiThermalZoneList )
              __fastfail(3u);
            *v27 = &AcpiThermalZoneList;
            *(_QWORD *)(a1 + 216) = v26;
            *v26 = v27;
            qword_1C0073908 = a1 + 208;
            KeReleaseSpinLock(&AcpiThermalConstraintLock, v11);
          }
        }
        else
        {
          ++*(_DWORD *)v3;
          *(_DWORD *)(a1 + 192) |= 2u;
          v19 = *(_DWORD *)(a1 + 192);
          if ( (_BYTE)v9 )
          {
            v22 = 514LL;
            *(_DWORD *)(a1 + 192) = v19 | 0x40000200;
LABEL_41:
            ACPISetDeviceWorker(a1, v22);
          }
          else if ( *(_QWORD *)(v3 + 112) )
          {
            *(_DWORD *)(a1 + 192) = v19 | 0x40000000;
            KeReleaseSpinLock(v4, v11);
            v12 = 0;
            memset((void *)(v3 + 136), 0, 0x28uLL);
            *(_WORD *)(v3 + 138) = 0;
            if ( !(unsigned __int8)ACPIDeviceHasFirmwareDependencies(a1) || *(_DWORD *)(a1 + 500) == 1 )
            {
              v20 = AMLIAsyncEvalObject(*(_QWORD *)(v3 + 112), v3 + 136, 0LL, 0LL, ACPIThermalTMPCallback, a1);
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
            *(_DWORD *)(a1 + 192) = v19 & 0xEFFFFFFF;
          }
        }
      }
      v28 = *(_DWORD *)(v3 + 100);
      if ( v28 )
      {
        v29 = *(_DWORD *)(v3 + 104);
        if ( v29 > v28 && *(_DWORD *)(v3 + 16) <= v29 - v28 )
          *(_DWORD *)(a1 + 192) = v15 & 0xFFFFFBFF;
        v30 = *(_DWORD *)(v3 + 104);
        v31 = *(_DWORD *)(v3 + 100);
        if ( -1 - v30 > v31 && *(_DWORD *)(v3 + 16) >= v30 + v31 )
          *(_DWORD *)(a1 + 192) &= ~0x400u;
      }
      v32 = *(_DWORD *)(v3 + 20);
      if ( v32 )
      {
        v33 = *(_DWORD *)(v3 + 104);
        v34 = v33 <= v32;
        if ( v33 < v32 )
        {
          if ( *(_DWORD *)(v3 + 16) >= v32 )
            goto LABEL_64;
          v34 = v33 <= v32;
        }
        if ( !v34 && *(_DWORD *)(v3 + 16) <= v32 )
LABEL_64:
          *(_DWORD *)(a1 + 192) &= ~0x400u;
      }
      v35 = *(_DWORD *)(v3 + 28);
      if ( !v35 )
        goto LABEL_72;
      v36 = *(_DWORD *)(v3 + 104);
      v37 = v36 <= v35;
      if ( v36 < v35 )
      {
        if ( *(_DWORD *)(v3 + 16) >= v35 )
          goto LABEL_71;
        v37 = v36 <= v35;
      }
      if ( !v37 && *(_DWORD *)(v3 + 16) <= v35 )
LABEL_71:
        *(_DWORD *)(a1 + 192) &= ~0x400u;
LABEL_72:
      v38 = *(_DWORD *)(v3 + 76);
      if ( !v38 )
        goto LABEL_79;
      v39 = *(_DWORD *)(v3 + 104);
      v40 = v39 <= v38;
      if ( v39 < v38 )
      {
        if ( *(_DWORD *)(v3 + 16) >= v38 )
          goto LABEL_78;
        v40 = v39 <= v38;
      }
      if ( !v40 && *(_DWORD *)(v3 + 16) <= v38 )
LABEL_78:
        *(_DWORD *)(a1 + 192) &= ~0x400u;
LABEL_79:
      v41 = *(_DWORD *)(v3 + 24);
      if ( v41 )
      {
        v42 = *(_DWORD *)(v3 + 104);
        v43 = v42 <= v41;
        if ( v42 >= v41 )
          goto LABEL_83;
        if ( *(_DWORD *)(v3 + 16) < v41 )
        {
          v43 = v42 <= v41;
LABEL_83:
          if ( v43 || *(_DWORD *)(v3 + 16) > v41 )
            goto LABEL_86;
        }
        *(_DWORD *)(a1 + 192) &= ~0x400u;
      }
LABEL_86:
      v9 = 0LL;
      if ( *(_BYTE *)(v3 + 32) )
      {
        while ( 1 )
        {
          v44 = *(_DWORD *)(v3 + 4LL * (unsigned int)v9 + 36);
          if ( v44 )
            break;
LABEL_94:
          v9 = (unsigned int)(v9 + 1);
          if ( (unsigned int)v9 >= *(unsigned __int8 *)(v3 + 32) )
            goto LABEL_95;
        }
        v45 = *(_DWORD *)(v3 + 104);
        v46 = v45 <= v44;
        if ( v45 >= v44 )
        {
LABEL_91:
          if ( v46 || *(_DWORD *)(v3 + 16) > v44 )
            goto LABEL_94;
        }
        else if ( *(_DWORD *)(v3 + 16) < v44 )
        {
          v46 = v45 <= v44;
          goto LABEL_91;
        }
        *(_DWORD *)(a1 + 192) &= ~0x400u;
        goto LABEL_94;
      }
LABEL_95:
      v15 = *(_DWORD *)(a1 + 192);
      if ( (v15 & 0x400) != 0 )
        goto LABEL_15;
      *(_DWORD *)(a1 + 192) = v15 & 0xBFFFF9FF | 0x40000400;
      *(_DWORD *)(v3 + 104) = *(_DWORD *)(v3 + 16);
      KeReleaseSpinLock(v4, v11);
      v23 = *(unsigned int *)(v3 + 104);
      v24 = 1230259295;
LABEL_43:
      v12 = 0;
      if ( (unsigned int)ACPIGet((__int64 *)a1, v24, 546308096, v23, 4, (__int64)ACPIThermalComplete, a1, 0LL, 0LL) != 259 )
        ACPIThermalLoop(a1, 0x40000000LL);
    }
  }
LABEL_22:
  KeReleaseSpinLock(v4, v11);
}
