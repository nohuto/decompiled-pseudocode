/*
 * XREFs of ndisGetProcessorInfo @ 0x1C0103EF8
 * Callers:
 *     DriverEntry @ 0x1C01027E0 (DriverEntry.c)
 * Callees:
 *     memset @ 0x1C0027500 (memset.c)
 *     ndisGetLogicalProcessorInformation @ 0x1C01040B0 (ndisGetLogicalProcessorInformation.c)
 */

__int64 ndisGetProcessorInfo()
{
  SIZE_T v0; // rbx
  _LIST_ENTRY *PoolWithTag; // rax
  _LIST_ENTRY *v2; // rdi
  _LIST_ENTRY *Blink; // rcx
  NTSTATUS LogicalProcessorInformation; // ebx
  ULONG v10; // esi
  __int64 v11; // rdi
  __int64 j; // rbp
  ULONG ProcessorIndexFromNumber; // eax
  ULONG v15; // edi
  __int64 i; // rbx

  v0 = 20 * (ndisMaxNumberOfProcessors + 2LL + 2LL * ndisMaxNumRssCpus);
  PoolWithTag = (_LIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, v0, 0x2020444Eu);
  WPP_MAIN_CB.Queue.ListEntry.Blink = PoolWithTag;
  v2 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, v0);
  _RAX = 0LL;
  LODWORD(v2->Flink) = 2621824;
  __asm { cpuid }
  if ( (_DWORD)_RBX == 1970169159 )
  {
    if ( (_DWORD)_RDX == 1231384169 && (_DWORD)_RCX == 1818588270 )
    {
      LODWORD(v2->Blink) = 1;
      goto LABEL_6;
    }
  }
  else if ( (_DWORD)_RBX == 1752462657 && (_DWORD)_RDX == 1769238117 && (_DWORD)_RCX == 1145913699 )
  {
    LODWORD(v2->Blink) = 2;
    goto LABEL_6;
  }
  LODWORD(v2->Blink) = 0;
LABEL_6:
  ndisRssProcessors = ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * ndisMaxNumRssCpus, 0x2020444Eu);
  if ( !ndisRssProcessors )
    return (unsigned int)-1073741670;
  Blink = WPP_MAIN_CB.Queue.ListEntry.Blink;
  LODWORD(WPP_MAIN_CB.Queue.ListEntry.Blink[2].Flink) = ndisNumberOfActiveProcessorsAtBoot;
  *(_QWORD *)&WPP_MAIN_CB.DeviceType = (char *)Blink + 40;
  HIDWORD(Blink->Blink) = 1;
  LODWORD(Blink[1].Flink) = 1;
  LODWORD(Blink[1].Blink) = 1;
  HIDWORD(Blink[1].Flink) = 1;
  HIDWORD(Blink[1].Blink) = 40;
  HIDWORD(Blink[2].Flink) = 20;
  LogicalProcessorInformation = ndisGetLogicalProcessorInformation();
  if ( LogicalProcessorInformation < 0 )
  {
    v15 = ndisRssBaseCpu;
    for ( i = 0LL;
          v15 < ndisNumberOfActiveProcessorsAtBoot && (unsigned int)i < ndisMaxNumRssCpus;
          i = (unsigned int)(i + 1) )
    {
      KeGetProcessorNumberFromIndex(v15++, (PPROCESSOR_NUMBER)ndisRssProcessors + i);
    }
    LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine) = i;
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
        ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)ndisRssProcessors + j);
        if ( *(_DWORD *)(*(_QWORD *)&WPP_MAIN_CB.DeviceType + 20LL * ProcessorIndexFromNumber + 4) == *(_DWORD *)(*(_QWORD *)&WPP_MAIN_CB.DeviceType + 20LL * v10 + 4)
          && *(_DWORD *)(*(_QWORD *)&WPP_MAIN_CB.DeviceType + 20LL * ProcessorIndexFromNumber + 8) == *(_DWORD *)(*(_QWORD *)&WPP_MAIN_CB.DeviceType + 20LL * v10 + 8) )
        {
          break;
        }
      }
      if ( (_DWORD)j == (_DWORD)v11 )
      {
        LogicalProcessorInformation = KeGetProcessorNumberFromIndex(v10, (PPROCESSOR_NUMBER)ndisRssProcessors + v11);
        v11 = (unsigned int)(v11 + 1);
      }
      ++v10;
    }
    LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine) = v11;
  }
  return (unsigned int)LogicalProcessorInformation;
}
