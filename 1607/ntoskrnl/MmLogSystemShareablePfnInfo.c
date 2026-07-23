/*
 * XREFs of MmLogSystemShareablePfnInfo @ 0x14065E164
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140496594 (EtwpKernelTraceRundown.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14001CBDC (MiGetAnyMultiplexedVm.c)
 *     MiGetAggregateWorkingSetSize @ 0x1400FCF88 (MiGetAggregateWorkingSetSize.c)
 *     MiGetWorkingSetInfoEx @ 0x14010FA14 (MiGetWorkingSetInfoEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     EtwLogPfnInfoRundown @ 0x1406A6BE8 (EtwLogPfnInfoRundown.c)
 */

void __fastcall MmLogSystemShareablePfnInfo(unsigned int a1)
{
  __int64 v2; // r14
  _QWORD *PoolWithTag; // rdi
  unsigned __int64 v4; // r15
  SIZE_T v5; // rsi
  char *AnyMultiplexedVm; // r12
  char *v7; // rbp
  unsigned __int64 AggregateWorkingSetSize; // rax
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rbx
  int v11; // ecx
  _DWORD v12[4]; // [rsp+20h] [rbp-48h]

  v12[0] = 2;
  v12[1] = 3;
  v12[2] = 4;
  v2 = 0LL;
  PoolWithTag = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(0);
  v7 = AnyMultiplexedVm;
  AggregateWorkingSetSize = MiGetAggregateWorkingSetSize((__int64)AnyMultiplexedVm);
  if ( AggregateWorkingSetSize <= v9 )
    v10 = 64LL;
  else
    v10 = AggregateWorkingSetSize - v9 + 64;
  do
  {
    if ( v12[v2] == 2 )
    {
      v7 = AnyMultiplexedVm;
    }
    else
    {
      if ( v12[v2] == 3 )
      {
        v11 = 2;
      }
      else
      {
        if ( v12[v2] != 4 )
          goto LABEL_11;
        v11 = 1;
      }
      v7 = MiGetAnyMultiplexedVm(v11);
    }
LABEL_11:
    if ( v4 < v10 )
    {
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0);
      v5 = 32 * v10 + 16;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x4D777445u);
      if ( !PoolWithTag )
        return;
      v4 = v10;
    }
    memset(PoolWithTag, 0, v5);
    if ( (int)MiGetWorkingSetInfoEx((__int64)v7, PoolWithTag, v5, 0) >= 0 )
    {
      if ( PoolWithTag[1] )
        EtwLogPfnInfoRundown(0LL, a1, PoolWithTag);
      v2 = (unsigned int)(v2 + 1);
    }
    else
    {
      v10 = PoolWithTag[1] + 64LL;
    }
  }
  while ( (unsigned int)v2 < 3 );
  ExFreePoolWithTag(PoolWithTag, 0);
}
