/*
 * XREFs of CreateTlgAggregateSession @ 0x140149D30
 * Callers:
 *     TlgRegisterAggregateProviderEx @ 0x140149B64 (TlgRegisterAggregateProviderEx.c)
 * Callees:
 *     ExAllocateTimer @ 0x140133010 (ExAllocateTimer.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall CreateTlgAggregateSession(char a1)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v3; // rbx
  __int64 Timer; // rax

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1B0uLL, 0x47417254u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  memset(PoolWithTag, 0, 0x1B0uLL);
  v3[41] = 0LL;
  *((_DWORD *)v3 + 84) = 0;
  *((_WORD *)v3 + 148) = 0;
  *((_BYTE *)v3 + 298) = 6;
  *((_DWORD *)v3 + 75) = 0;
  v3[39] = v3 + 38;
  v3[38] = v3 + 38;
  v3[35] = FlushWorkItemRoutineKernelMode;
  v3[36] = v3;
  v3[33] = 0LL;
  *((_WORD *)v3 + 160) = 0;
  if ( a1 )
  {
    Timer = ExAllocateTimer((__int64)FlushTimerCallbackKernelMode, (__int64)(v3 + 33), 8u);
    v3[52] = Timer;
    if ( !Timer )
    {
      ExFreePoolWithTag(v3, 0);
      return 0LL;
    }
  }
  return v3;
}
