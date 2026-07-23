/*
 * XREFs of EtwpKernelTraceRundown @ 0x140496594
 * Callers:
 *     EtwpUpdateGroupMasks @ 0x1404962BC (EtwpUpdateGroupMasks.c)
 *     EtwKernelMemoryRundown @ 0x1406A0810 (EtwKernelMemoryRundown.c)
 *     EtwpLogKernelTraceRundown @ 0x1406A7070 (EtwpLogKernelTraceRundown.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x14000D0F8 (PopExecuteOnTargetProcessors.c)
 *     IoSetThreadHardErrorMode @ 0x140074D38 (IoSetThreadHardErrorMode.c)
 *     EtwpProcessThreadImageRundown @ 0x140499274 (EtwpProcessThreadImageRundown.c)
 *     WmiTraceRundownNotify @ 0x1404AC86C (WmiTraceRundownNotify.c)
 *     CmEtwRunDown @ 0x1405FB6F4 (CmEtwRunDown.c)
 *     MmIdentifyPhysicalMemory @ 0x140658EFC (MmIdentifyPhysicalMemory.c)
 *     MmPerfLogSessionRundown @ 0x14065A04C (MmPerfLogSessionRundown.c)
 *     MmLogSystemShareablePfnInfo @ 0x14065E164 (MmLogSystemShareablePfnInfo.c)
 *     MmLogQueryCombineStats @ 0x140664594 (MmLogQueryCombineStats.c)
 *     EtwpClockSourceRunDown @ 0x1406A6E78 (EtwpClockSourceRunDown.c)
 *     EtwpExecutiveResourceConfigRunDown @ 0x1406A6FE0 (EtwpExecutiveResourceConfigRunDown.c)
 *     EtwpLogMemInfoRundown @ 0x1406A70B8 (EtwpLogMemInfoRundown.c)
 *     EtwpLogRefSetAutoMark @ 0x1406A7230 (EtwpLogRefSetAutoMark.c)
 *     EtwpObjectTypeRundown @ 0x1406A7548 (EtwpObjectTypeRundown.c)
 *     EtwpPoolRunDown @ 0x1406A76A0 (EtwpPoolRunDown.c)
 *     EtwpProcessorRundown @ 0x1406A7BF8 (EtwpProcessorRundown.c)
 *     EtwpSampledProfileRunDown @ 0x1406A8034 (EtwpSampledProfileRunDown.c)
 *     EtwpSpinLockConfigRunDown @ 0x1406A81C0 (EtwpSpinLockConfigRunDown.c)
 */

BOOLEAN __fastcall EtwpKernelTraceRundown(int *a1, unsigned int a2, unsigned __int8 a3)
{
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  BOOLEAN v8; // bp
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // ecx
  int v13; // eax
  unsigned int v14; // [rsp+38h] [rbp+10h] BYREF

  v14 = a2;
  v5 = a2;
  v8 = IoSetThreadHardErrorMode(0);
  if ( a1 )
  {
    if ( (a1[1] & 0x20) != 0 && !a3 )
      EtwpLogRefSetAutoMark(0LL, v5);
    v11 = *a1;
    if ( (*a1 & 0xC004) != 0 || (a1[4] & 0x40) != 0 || (v11 & 1) != 0 || (v11 & 2) != 0 || (a1[1] & 0x8000000) != 0 )
    {
      LOBYTE(v9) = a3;
      EtwpProcessThreadImageRundown(a1, v5, v9);
    }
    v7 = *a1 & 0x20000;
    if ( (*a1 & 0x20000) != 0 || (a1[2] & 0x1000000) != 0 )
    {
      LOBYTE(v10) = a3;
      LOBYTE(v6) = (_DWORD)v7 != 0;
      CmEtwRunDown(v5, v6, HIBYTE(a1[2]) & 1, v10);
    }
    if ( (a1[1] & 2) != 0 )
    {
      LOBYTE(v9) = 1;
      LOBYTE(v6) = a3;
      EtwpSampledProfileRunDown(v5, v6, v9);
    }
    if ( (a1[1] & 0x400) != 0 )
    {
      LOBYTE(v6) = a3;
      EtwpSampledProfileRunDown(v5, v6, 0LL);
    }
    if ( (a1[1] & 0x10000) != 0 )
    {
      LOBYTE(v6) = a3;
      EtwpSpinLockConfigRunDown(v5, v6);
    }
    if ( (a1[1] & 0x20000) != 0 )
    {
      LOBYTE(v6) = a3;
      EtwpExecutiveResourceConfigRunDown(v5, v6);
    }
    if ( (a1[1] & 0x400008) != 0 )
      MmPerfLogSessionRundown(v5, a3);
    if ( (a1[1] & 0x8000049) != 0 )
    {
      LOBYTE(v6) = a3;
      EtwpPoolRunDown(v5, v6);
    }
    if ( (a1[2] & 0x100000) != 0 )
    {
      LOBYTE(v6) = a3;
      EtwpClockSourceRunDown(v5, v6);
    }
  }
  if ( a3 )
  {
    if ( a1 )
    {
      if ( (a1[1] & 0x8000000) != 0 )
      {
        MmIdentifyPhysicalMemory(v5, 645LL, 1LL);
        MmLogSystemShareablePfnInfo(v5);
      }
      if ( (a1[1] & 0x20) != 0 )
      {
        LOBYTE(v7) = a3;
        EtwpLogRefSetAutoMark(v7, v5);
      }
    }
  }
  else if ( a1 )
  {
    if ( (a1[1] & 0x8000000) != 0 )
    {
      MmLogSystemShareablePfnInfo(v5);
      MmIdentifyPhysicalMemory(v5, 645LL, 1LL);
    }
    if ( (a1[1] & 9) != 0 )
    {
      EtwpLogMemInfoRundown(v5);
      MmIdentifyPhysicalMemory(v5, 547LL, 0LL);
    }
    if ( (a1[1] & 0x80000) != 0 )
    {
      MmLogQueryCombineStats(&v14, 0LL);
      v5 = v14;
    }
    if ( (*a1 & 0x200) != 0 )
      WmiTraceRundownNotify(v5);
    if ( (a1[4] & 0x8000) != 0 )
      PopExecuteOnTargetProcessors((__int64)KeActiveProcessors, (__int64)PpmTracePerfIdleRundown, 0LL, 0LL);
    v13 = a1[4];
    if ( (v13 & 0x40) != 0 || (v13 & 0x80u) != 0 )
      EtwpObjectTypeRundown(v5, 0LL);
    if ( (a1[2] & 0x10000) != 0 )
      EtwpProcessorRundown(v5);
  }
  return IoSetThreadHardErrorMode(v8);
}
