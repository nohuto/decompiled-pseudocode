/*
 * XREFs of NVMeHwAdapterControl @ 0x1C0001BB0
 * Callers:
 *     <none>
 * Callees:
 *     ControllerReset @ 0x1C0001000 (ControllerReset.c)
 *     NVMeControllerStartFailureEventLog @ 0x1C00010CC (NVMeControllerStartFailureEventLog.c)
 *     NVMeQueuesReInit @ 0x1C0004134 (NVMeQueuesReInit.c)
 *     NVMeControllerInitPart1 @ 0x1C000436C (NVMeControllerInitPart1.c)
 *     NVMeControllerInitPart2 @ 0x1C00044F0 (NVMeControllerInitPart2.c)
 *     NVMeControllerFilterResouceRequirements @ 0x1C0004698 (NVMeControllerFilterResouceRequirements.c)
 *     NVMeControllerStop @ 0x1C0004994 (NVMeControllerStop.c)
 *     NVMeControllerRemove @ 0x1C0004AA4 (NVMeControllerRemove.c)
 *     NVMeControllerPowerDown @ 0x1C0004C08 (NVMeControllerPowerDown.c)
 *     NVMeControllerCompleteAllIORequests @ 0x1C0004DC4 (NVMeControllerCompleteAllIORequests.c)
 *     NVMePowerActive @ 0x1C00058BC (NVMePowerActive.c)
 *     NVMePowerSetFState @ 0x1C0005A94 (NVMePowerSetFState.c)
 *     NVMeSystemPowerHint @ 0x1C0005BAC (NVMeSystemPowerHint.c)
 *     NVMeMaxOperationalPower @ 0x1C0005C68 (NVMeMaxOperationalPower.c)
 *     NVMePowerSetPerfState @ 0x1C0005D9C (NVMePowerSetPerfState.c)
 */

__int64 __fastcall NVMeHwAdapterControl(_DWORD *a1, int a2, __int64 a3)
{
  unsigned int v3; // edi
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // eax
  char inited; // al
  int v11; // ecx
  bool v12; // zf
  int v13; // ecx
  int v14; // eax
  int v15; // edx
  int v16; // edx
  int v17; // edx
  __int64 v18; // rdx

  v3 = 0;
  if ( a2 > 9 )
  {
    v15 = a2 - 12;
    if ( !v15 )
    {
      NVMeSystemPowerHint(a1, a3);
      return v3;
    }
    v16 = v15 - 1;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( !v17 )
      {
        NVMeMaxOperationalPower(a1, a3);
        return v3;
      }
      v18 = (unsigned int)(v17 - 1);
      if ( !(_DWORD)v18 )
      {
        NVMePowerSetPerfState(a1, a3);
        return v3;
      }
      if ( (_DWORD)v18 == 1 )
      {
        LOBYTE(v18) = 17;
        a1[5] = a1[5] & 0xFFFFFFF6 | 8;
        NVMeControllerCompleteAllIORequests(a1, v18);
        a1[5] &= ~0x10u;
        return v3;
      }
    }
    else if ( *(_DWORD *)a3 )
    {
      NVMeControllerFilterResouceRequirements(a1, a3);
      return v3;
    }
    return 1;
  }
  if ( a2 == 9 )
  {
    NVMePowerSetFState(a1, a3);
    return v3;
  }
  if ( a2 )
  {
    v5 = a2 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 3;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            if ( v8 == 2 )
            {
              NVMePowerActive(a1, a3);
              return v3;
            }
            return 1;
          }
          v9 = *(_DWORD *)(a3 + 20);
          if ( v9 == 1 )
          {
            a1[5] &= ~4u;
            StorPortDebugPrint(3LL, "StorNVMe - POWER: Controller D0\n");
            NVMeQueuesReInit(a1);
            inited = ControllerReset((__int64)a1);
            if ( inited == 1 )
            {
              inited = NVMeControllerInitPart1(a1, 0LL);
              if ( inited == 1 )
                inited = NVMeControllerInitPart2(a1, 0LL);
            }
            if ( !inited )
              NVMeControllerStartFailureEventLog((__int64)a1);
            StorPortDebugPrint(3LL, "StorNVMe - POWER: Controller D0\n");
          }
          else if ( v9 == 4 )
          {
            v11 = *(_DWORD *)(a3 + 16);
            if ( v11 != 5 && ((a1[5] & 0x40) == 0 || v11 != 3) )
              NVMeControllerPowerDown(a1);
          }
        }
        else if ( (a1[278] & 1) != 0 )
        {
          if ( *(_QWORD *)a3 == *(_QWORD *)&GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE.Data1
            && *(_QWORD *)(a3 + 8) == *(_QWORD *)GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE.Data4
            && *(_DWORD *)(a3 + 24) == 4 )
          {
            v12 = a1[281] == 1;
            v13 = **(_DWORD **)(a3 + 16);
            a1[283] = v13;
            if ( !v12 && a1[20] == -1 )
              a1[282] = v13;
          }
          else if ( *(_QWORD *)a3 == *(_QWORD *)&GUID_NVME_POWER_IDLE_TIMEOUT.Data1
                 && *(_QWORD *)(a3 + 8) == *(_QWORD *)GUID_NVME_POWER_IDLE_TIMEOUT.Data4
                 && *(_DWORD *)(a3 + 24) == 4
                 && a1[16] == -1 )
          {
            a1[284] = **(_DWORD **)(a3 + 16);
          }
        }
      }
    }
    else
    {
      v14 = a1[5];
      if ( (v14 & 8) != 0 )
      {
        NVMeControllerRemove();
      }
      else if ( (v14 & 2) != 0 )
      {
        NVMeControllerStop();
      }
    }
  }
  else
  {
    if ( *(_DWORD *)a3 )
      *(_BYTE *)(a3 + 4) = 1;
    if ( *(_DWORD *)a3 > 1u )
      *(_BYTE *)(a3 + 5) = 1;
    if ( *(_DWORD *)a3 > 2u )
      *(_BYTE *)(a3 + 6) = 1;
    if ( *(_DWORD *)a3 > 6u )
      *(_BYTE *)(a3 + 10) = 1;
    if ( *(_DWORD *)a3 > 8u )
      *(_BYTE *)(a3 + 12) = 1;
    if ( *(_DWORD *)a3 > 9u )
      *(_BYTE *)(a3 + 13) = 1;
    if ( *(_DWORD *)a3 > 0xCu )
      *(_BYTE *)(a3 + 16) = 1;
    if ( *(_DWORD *)a3 > 0xDu )
      *(_BYTE *)(a3 + 17) = 1;
    if ( *(_DWORD *)a3 > 0xEu )
      *(_BYTE *)(a3 + 18) = 1;
    if ( *(_DWORD *)a3 > 0xFu )
      *(_BYTE *)(a3 + 19) = 1;
    if ( *(_DWORD *)a3 > 0x10u )
      *(_BYTE *)(a3 + 20) = 1;
    if ( *(_DWORD *)a3 > 5u )
      *(_BYTE *)(a3 + 9) = 1;
  }
  return v3;
}
