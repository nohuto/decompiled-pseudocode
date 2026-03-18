/*
 * XREFs of PpmScaleIdleStateValues @ 0x1401244B0
 * Callers:
 *     PpmPerfApplyProcessorState @ 0x140124144 (PpmPerfApplyProcessorState.c)
 *     PpmResetIdlePolicy @ 0x140139D8C (PpmResetIdlePolicy.c)
 * Callees:
 *     HvlpGetLpIndexFromProcessorIndex @ 0x1401AF204 (HvlpGetLpIndexFromProcessorIndex.c)
 *     HvlpSetPowerProperty @ 0x1401B2EF8 (HvlpSetPowerProperty.c)
 */

void __fastcall PpmScaleIdleStateValues(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  unsigned int v4; // eax
  int v5; // r8d
  int v6; // ecx
  __int64 v7; // rcx
  int v8; // r10d
  _DWORD v9[106]; // [rsp+20h] [rbp-1A8h] BYREF

  v2 = *(_QWORD *)(a1 + 376);
  v3 = *(_QWORD *)(a1 + 368);
  if ( *(_BYTE *)(a1 + 60) && v2 && v3 )
  {
    v4 = *(_DWORD *)(v3 + 364);
    if ( *(_DWORD *)(v2 + 52) < v4 )
      LOBYTE(v4) = *(_BYTE *)(v2 + 52);
    v5 = (unsigned __int8)v4 * (unsigned __int8)v4;
    v6 = *(unsigned __int8 *)(a1 + 59);
    *(_BYTE *)(a1 + 56) = v5 * (unsigned int)*(unsigned __int8 *)(a1 + 58) / 0x2710;
    *(_BYTE *)(a1 + 57) = v5 * v6 / 0x2710u;
    if ( *(_DWORD *)(a1 + 216) == 3 )
    {
      v7 = *(unsigned int *)(a1 - 23772);
      v9[0] = 2;
      v9[2] = HvlpGetLpIndexFromProcessorIndex(v7);
      v9[4] = v8;
      HvlpSetPowerProperty(v9);
    }
  }
}
