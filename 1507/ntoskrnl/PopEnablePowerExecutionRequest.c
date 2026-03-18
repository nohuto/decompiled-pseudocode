/*
 * XREFs of PopEnablePowerExecutionRequest @ 0x140556B0C
 * Callers:
 *     PopAoacExecutionRequiredPowerRequest @ 0x1405569F0 (PopAoacExecutionRequiredPowerRequest.c)
 *     PopEnableExecutionRequiredPowerRequests @ 0x1405C0FA4 (PopEnableExecutionRequiredPowerRequests.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     PspChargeJobWakeCounter @ 0x140417810 (PspChargeJobWakeCounter.c)
 */

__int64 __fastcall PopEnablePowerExecutionRequest(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rbx

  if ( !*(_QWORD *)(a1 + 88) && PopExecutionRequiredTimeout && !PopLastCsEnterTime )
  {
    v2 = *(_QWORD *)(a1 + 96);
    v3 = *(_QWORD *)(v2 + 944);
    if ( v3 && (*(_DWORD *)(v3 + 1296) & 0x1000) != 0 )
    {
      PspChargeJobWakeCounter((_QWORD *)v3, 0LL, 1, 1LL, 1, v2, a1);
      ObfReferenceObjectWithTag((PVOID)v3, 0x6B577350u);
      v4 = v3 | 1;
    }
    else
    {
      v4 = 0LL;
    }
    *(_QWORD *)(a1 + 88) = v4;
  }
  return 0LL;
}
