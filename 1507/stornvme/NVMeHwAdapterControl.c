/*
 * XREFs of NVMeHwAdapterControl @ 0x1C0001B80
 * Callers:
 *     <none>
 * Callees:
 *     ControllerReset @ 0x1C0001000 (ControllerReset.c)
 *     NVMeControllerStartFailureEventLog @ 0x1C00010CC (NVMeControllerStartFailureEventLog.c)
 *     NVMeQueuesReInit @ 0x1C0004044 (NVMeQueuesReInit.c)
 *     NVMeControllerInitPart1 @ 0x1C000427C (NVMeControllerInitPart1.c)
 *     NVMeControllerInitPart2 @ 0x1C0004400 (NVMeControllerInitPart2.c)
 *     NVMeControllerFilterResouceRequirements @ 0x1C00045A8 (NVMeControllerFilterResouceRequirements.c)
 *     NVMeControllerStop @ 0x1C00048A4 (NVMeControllerStop.c)
 *     NVMeControllerRemove @ 0x1C00049B4 (NVMeControllerRemove.c)
 *     NVMeControllerPowerDown @ 0x1C0004B18 (NVMeControllerPowerDown.c)
 *     NVMeControllerCompleteAllIORequests @ 0x1C0004CD4 (NVMeControllerCompleteAllIORequests.c)
 *     NVMePowerActive @ 0x1C00057BC (NVMePowerActive.c)
 *     NVMePowerSetFState @ 0x1C0005974 (NVMePowerSetFState.c)
 *     NVMeSystemPowerHint @ 0x1C0005A8C (NVMeSystemPowerHint.c)
 *     NVMeMaxOperationalPower @ 0x1C0005B40 (NVMeMaxOperationalPower.c)
 *     NVMePowerSetPerfState @ 0x1C0005C74 (NVMePowerSetPerfState.c)
 */

__int64 __fastcall NVMeHwAdapterControl(__int64 a1, int a2, __int64 a3)
{
  unsigned int v3; // edi
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // eax
  char inited; // al
  int v10; // ecx
  int v11; // eax
  int v12; // edx
  int v13; // edx
  int v14; // edx
  __int64 v15; // rdx

  v3 = 0;
  if ( a2 > 9 )
  {
    v12 = a2 - 12;
    if ( !v12 )
    {
      NVMeSystemPowerHint(a1, a3);
      return v3;
    }
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( !v14 )
      {
        NVMeMaxOperationalPower(a1, a3);
        return v3;
      }
      v15 = (unsigned int)(v14 - 1);
      if ( !(_DWORD)v15 )
      {
        NVMePowerSetPerfState(a1, a3);
        return v3;
      }
      if ( (_DWORD)v15 == 1 )
      {
        LOBYTE(v15) = 17;
        *(_DWORD *)(a1 + 20) = *(_DWORD *)(a1 + 20) & 0xFFFFFFF6 | 8;
        NVMeControllerCompleteAllIORequests(a1, v15);
        *(_DWORD *)(a1 + 20) &= ~0x10u;
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
        v7 = v6 - 4;
        if ( v7 )
        {
          if ( v7 == 2 )
          {
            NVMePowerActive(a1, a3);
            return v3;
          }
          return 1;
        }
        v8 = *(_DWORD *)(a3 + 20);
        if ( v8 == 1 )
        {
          *(_DWORD *)(a1 + 20) &= ~4u;
          StorPortDebugPrint(3LL, "StorNVMe - POWER: Controller D0\n");
          NVMeQueuesReInit(a1);
          inited = ControllerReset(a1);
          if ( inited == 1 )
          {
            inited = NVMeControllerInitPart1(a1, 0LL);
            if ( inited == 1 )
              inited = NVMeControllerInitPart2(a1, 0LL);
          }
          if ( !inited )
            NVMeControllerStartFailureEventLog(a1);
          StorPortDebugPrint(3LL, "StorNVMe - POWER: Controller D0\n");
        }
        else if ( v8 == 4 )
        {
          v10 = *(_DWORD *)(a3 + 16);
          if ( v10 != 5 && ((*(_DWORD *)(a1 + 20) & 0x40) == 0 || v10 != 3) )
            NVMeControllerPowerDown(a1);
        }
      }
    }
    else
    {
      v11 = *(_DWORD *)(a1 + 20);
      if ( (v11 & 8) != 0 )
      {
        NVMeControllerRemove();
      }
      else if ( (v11 & 2) != 0 )
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
  }
  return v3;
}
