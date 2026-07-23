/*
 * XREFs of PoClearPowerRequestInternalDeferred @ 0x140131AE0
 * Callers:
 *     PpmEndHighPerfRequest @ 0x140131ACC (PpmEndHighPerfRequest.c)
 * Callees:
 *     KiSetTimerEx @ 0x140006F70 (KiSetTimerEx.c)
 *     PoClearPowerRequestInternal @ 0x1400F9750 (PoClearPowerRequestInternal.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PoClearPowerRequestInternalDeferred(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  unsigned int v4; // ebx
  __int64 v5; // rbp
  PVOID PoolWithTag; // rax
  __int64 v7; // rdi

  v3 = PopTransitionHighPerfRequest;
  v4 = 0;
  v5 = a3;
  if ( a3 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x90uLL, 0x54515750u);
    v7 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x90uLL);
      *(_DWORD *)(v7 + 136) = 4;
      *(_QWORD *)(v7 + 128) = v3;
      *(_QWORD *)(v7 + 24) = PopDelayedPowerRequestClearDpc;
      *(_DWORD *)v7 = 275;
      *(_QWORD *)(v7 + 32) = v7;
      *(_QWORD *)(v7 + 56) = 0LL;
      *(_QWORD *)(v7 + 16) = 0LL;
      *(_QWORD *)(v7 + 64) = 0LL;
      *(_BYTE *)(v7 + 64) = 8;
      *(_QWORD *)(v7 + 80) = v7 + 72;
      *(_QWORD *)(v7 + 72) = v7 + 72;
      *(_QWORD *)(v7 + 88) = 0LL;
      *(_QWORD *)(v7 + 120) = 0LL;
      KiSetTimerEx(v7 + 64, -10000 * v5, 0, 0, v7);
    }
    else
    {
      v4 = -1073741801;
      PoClearPowerRequestInternal(v3, 4);
    }
  }
  else
  {
    return (unsigned int)PoClearPowerRequestInternal(PopTransitionHighPerfRequest, 4);
  }
  return v4;
}
