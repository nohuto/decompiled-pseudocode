/*
 * XREFs of EtwpKernelTraceRundown @ 0x14054A6C8
 * Callers:
 *     EtwpUpdateGroupMasks @ 0x14054A404 (EtwpUpdateGroupMasks.c)
 *     EtwKernelMemoryRundown @ 0x1406E2B34 (EtwKernelMemoryRundown.c)
 *     EtwpLogKernelTraceRundown @ 0x1406E8638 (EtwpLogKernelTraceRundown.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x140013958 (PopExecuteOnTargetProcessors.c)
 *     IoSetThreadHardErrorMode @ 0x1400EFE84 (IoSetThreadHardErrorMode.c)
 *     WmiTraceRundownNotify @ 0x1405332B4 (WmiTraceRundownNotify.c)
 *     EtwpProcessThreadImageRundown @ 0x14054B004 (EtwpProcessThreadImageRundown.c)
 *     CmEtwRunDown @ 0x140652CF0 (CmEtwRunDown.c)
 *     MmIdentifyPhysicalMemory @ 0x1406A2ADC (MmIdentifyPhysicalMemory.c)
 *     MmPerfLogSessionRundown @ 0x1406A4DE0 (MmPerfLogSessionRundown.c)
 *     MmLogSystemShareablePfnInfo @ 0x1406A7C70 (MmLogSystemShareablePfnInfo.c)
 *     MmLogQueryCombineStats @ 0x1406A92D0 (MmLogQueryCombineStats.c)
 *     EtwpClockSourceRunDown @ 0x1406E8450 (EtwpClockSourceRunDown.c)
 *     EtwpExecutiveResourceConfigRunDown @ 0x1406E85AC (EtwpExecutiveResourceConfigRunDown.c)
 *     EtwpLogMemInfoRundown @ 0x1406E8680 (EtwpLogMemInfoRundown.c)
 *     EtwpLogRefSetAutoMark @ 0x1406E87EC (EtwpLogRefSetAutoMark.c)
 *     EtwpObjectTypeRundown @ 0x1406E8B94 (EtwpObjectTypeRundown.c)
 *     EtwpPoolRunDown @ 0x1406E8CE0 (EtwpPoolRunDown.c)
 *     EtwpProcessorRundown @ 0x1406E9204 (EtwpProcessorRundown.c)
 *     EtwpSampledProfileRunDown @ 0x1406E9678 (EtwpSampledProfileRunDown.c)
 *     EtwpSpinLockConfigRunDown @ 0x1406E97FC (EtwpSpinLockConfigRunDown.c)
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
