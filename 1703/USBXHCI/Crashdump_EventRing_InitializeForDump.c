/*
 * XREFs of Crashdump_EventRing_InitializeForDump @ 0x1C0033E9C
 * Callers:
 *     Crashdump_UcxEvtGetDumpData @ 0x1C0032DE0 (Crashdump_UcxEvtGetDumpData.c)
 * Callees:
 *     Crashdump_CommonBufferAcquire @ 0x1C0031D3C (Crashdump_CommonBufferAcquire.c)
 */

__int64 __fastcall Crashdump_EventRing_InitializeForDump(__int64 *a1, __int64 a2)
{
  int v3; // ebx
  PVOID PoolWithTag; // rax

  *a1 = a2;
  a1[1] = a2;
  a1[2] = *(_QWORD *)(*(_QWORD *)a2 + 40LL) + 32LL;
  v3 = Crashdump_CommonBufferAcquire(a2, 1008, (__int64)(a1 + 6));
  if ( v3 >= 0 )
  {
    v3 = Crashdump_CommonBufferAcquire(*a1, 16, (__int64)(a1 + 3));
    if ( v3 >= 0 )
    {
      PoolWithTag = ExAllocatePoolWithTag(*((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1), 0x50uLL, 0x43434858u);
      a1[13] = (__int64)PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v3;
}
