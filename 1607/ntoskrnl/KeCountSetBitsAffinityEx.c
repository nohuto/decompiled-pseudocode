/*
 * XREFs of KeCountSetBitsAffinityEx @ 0x1400C6910
 * Callers:
 *     KeFlushProcessWriteBuffers @ 0x1400C67CC (KeFlushProcessWriteBuffers.c)
 *     PpmParkUnblockIdle @ 0x1400D30AC (PpmParkUnblockIdle.c)
 *     PpmParkReportParkedCores @ 0x1400D30F0 (PpmParkReportParkedCores.c)
 *     PpmParkReportUnparkedCores @ 0x1400D3134 (PpmParkReportUnparkedCores.c)
 *     PpmPerfApplyProcessorStates @ 0x14012F730 (PpmPerfApplyProcessorStates.c)
 *     KeSynchronizeAddressPolicy @ 0x1401D2158 (KeSynchronizeAddressPolicy.c)
 *     KiInitializeKernel @ 0x1403D3DE0 (KiInitializeKernel.c)
 *     PpmIdleInitializeConcurrency @ 0x14056A9F0 (PpmIdleInitializeConcurrency.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeCountSetBitsAffinityEx(_WORD *a1)
{
  unsigned __int16 v1; // ax
  unsigned int v2; // r8d
  unsigned __int64 *v3; // rcx
  __int64 v4; // r9
  unsigned __int64 v5; // rdx

  v1 = *a1;
  v2 = 0;
  if ( *a1 )
  {
    v3 = (unsigned __int64 *)(a1 + 4);
    v4 = v1;
    do
    {
      v5 = *v3++;
      v2 += (unsigned int)((0x101010101010101LL
                          * ((((v5 - ((v5 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                            + (((v5 - ((v5 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                            + ((((v5 - ((v5 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                              + (((v5 - ((v5 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
      --v4;
    }
    while ( v4 );
  }
  return v2;
}
