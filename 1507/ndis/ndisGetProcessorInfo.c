/*
 * XREFs of ndisGetProcessorInfo @ 0x1C0103B2C
 * Callers:
 *     DriverEntry @ 0x1C01023B0 (DriverEntry.c)
 * Callees:
 *     memset @ 0x1C0023A40 (memset.c)
 *     ndisGetLogicalProcessorInformation @ 0x1C0103CE4 (ndisGetLogicalProcessorInformation.c)
 */

__int64 ndisGetProcessorInfo()
{
  SIZE_T v0; // rbx
  _DWORD *PoolWithTag; // rax
  _DWORD *v2; // rdi
  unsigned __int64 ProcessorHistory; // rcx
  NTSTATUS LogicalProcessorInformation; // ebx
  ULONG v10; // esi
  __int64 v11; // rdi
  __int64 j; // rbp
  ULONG v14; // edi
  __int64 i; // rbx

  v0 = 20 * (ndisMaxNumberOfProcessors + 2LL + 2LL * ndisMaxNumRssCpus);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v0, 0x2020444Eu);
  WPP_MAIN_CB.Dpc.ProcessorHistory = (unsigned __int64)PoolWithTag;
  v2 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, v0);
  _RAX = 0LL;
  *v2 = 2621824;
  __asm { cpuid }
  if ( (_DWORD)_RBX == 1970169159 )
  {
    if ( (_DWORD)_RDX == 1231384169 && (_DWORD)_RCX == 1818588270 )
    {
      v2[2] = 1;
      goto LABEL_6;
    }
  }
  else if ( (_DWORD)_RBX == 1752462657 && (_DWORD)_RDX == 1769238117 && (_DWORD)_RCX == 1145913699 )
  {
    v2[2] = 2;
    goto LABEL_6;
  }
  v2[2] = 0;
LABEL_6:
  WPP_MAIN_CB.DeviceQueue.1 = ($18E3EACC1E717291AA7C720ECCD5C45C)ExAllocatePoolWithTag(
                                                                   NonPagedPoolNx,
                                                                   4LL * ndisMaxNumRssCpus,
                                                                   0x2020444Eu);
  if ( !*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.32 )
    return (unsigned int)-1073741670;
  ProcessorHistory = WPP_MAIN_CB.Dpc.ProcessorHistory;
  *(_DWORD *)(WPP_MAIN_CB.Dpc.ProcessorHistory + 32) = ndisNumberOfActiveProcessorsAtBoot;
  WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc = (_KDPC *)(ProcessorHistory + 40);
  *(_DWORD *)(ProcessorHistory + 12) = 1;
  *(_DWORD *)(ProcessorHistory + 16) = 1;
  *(_DWORD *)(ProcessorHistory + 24) = 1;
  *(_DWORD *)(ProcessorHistory + 20) = 1;
  *(_DWORD *)(ProcessorHistory + 28) = 40;
  *(_DWORD *)(ProcessorHistory + 36) = 20;
  LogicalProcessorInformation = ndisGetLogicalProcessorInformation();
  if ( LogicalProcessorInformation < 0 )
  {
    v14 = ndisRssBaseCpu;
    for ( i = 0LL;
          v14 < ndisNumberOfActiveProcessorsAtBoot && (unsigned int)i < ndisMaxNumRssCpus;
          i = (unsigned int)(i + 1) )
    {
      KeGetProcessorNumberFromIndex(v14++, (PPROCESSOR_NUMBER)(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.32 + 4 * i));
    }
    HIDWORD(WPP_MAIN_CB.Dpc.DpcListEntry.Next) = i;
    return 0;
  }
  else
  {
    v10 = ndisRssBaseCpu;
    v11 = 0LL;
    while ( v10 < ndisNumberOfActiveProcessorsAtBoot && (unsigned int)v11 < ndisMaxNumRssCpus )
    {
      for ( j = 0LL; (unsigned int)j < (unsigned int)v11; j = (unsigned int)(j + 1) )
      {
        if ( *(_QWORD *)(&WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc->0
                       + 5
                       * KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.32 + 4 * j))
                       + 1) == *(_QWORD *)(&WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc->0 + 5 * v10 + 1) )
          break;
      }
      if ( (_DWORD)j == (_DWORD)v11 )
      {
        LogicalProcessorInformation = KeGetProcessorNumberFromIndex(
                                        v10,
                                        (PPROCESSOR_NUMBER)(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.32 + 4 * v11));
        v11 = (unsigned int)(v11 + 1);
      }
      ++v10;
    }
    HIDWORD(WPP_MAIN_CB.Dpc.DpcListEntry.Next) = v11;
  }
  return (unsigned int)LogicalProcessorInformation;
}
