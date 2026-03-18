/*
 * XREFs of PopDisablePowerExecutionRequest @ 0x1404E61DC
 * Callers:
 *     PopPowerRequestCleanUp @ 0x1400D0F98 (PopPowerRequestCleanUp.c)
 *     PopAoacExecutionRequiredPowerRequest @ 0x1405569F0 (PopAoacExecutionRequiredPowerRequest.c)
 *     PopEnableExecutionRequiredPowerRequests @ 0x1405C0FA4 (PopEnableExecutionRequiredPowerRequests.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14009C420 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     PspChargeJobWakeCounter @ 0x140417810 (PspChargeJobWakeCounter.c)
 */

__int64 __fastcall PopDisablePowerExecutionRequest(__int64 a1, char a2)
{
  __int64 v3; // rbx
  char v5; // al
  __int64 v6; // r8
  _QWORD *v7; // rbx

  if ( !*(_DWORD *)(a1 + 44) || !a2 )
  {
    v3 = *(_QWORD *)(a1 + 88);
    if ( v3 )
    {
      v5 = 1;
      v6 = *(_QWORD *)(a1 + 88) & 7LL;
      v7 = (_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF8uLL);
      if ( (_DWORD)v6 == 5 )
      {
        v5 = 5;
        LODWORD(v6) = 0;
      }
      PspChargeJobWakeCounter(v7, 0LL, v6, -1LL, v5, 0LL, a1);
      ObDereferenceObjectDeferDeleteWithTag(v7, 0x6B577350u);
      *(_QWORD *)(a1 + 88) = 0LL;
    }
  }
  return 0LL;
}
