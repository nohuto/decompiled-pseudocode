/*
 * XREFs of NdisGetProcessorInformation @ 0x1C00B1850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NDIS_STATUS __stdcall NdisGetProcessorInformation(PNDIS_SYSTEM_PROCESSOR_INFO SystemProcessorInfo)
{
  NDIS_STATUS v1; // r8d
  _LIST_ENTRY *Blink; // rcx
  __int64 DeviceRoutine_low; // rax
  unsigned int v5; // edi
  unsigned int v6; // r10d
  unsigned int *v7; // r11
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v13; // r11d
  char *v14; // r10
  __int64 v15; // rbx
  __int64 v16; // rdx

  v1 = 0;
  if ( SystemProcessorInfo->Header.Size < 0x430u )
    return -1073676266;
  Blink = WPP_MAIN_CB.Queue.ListEntry.Blink;
  SystemProcessorInfo->Flags = HIDWORD(WPP_MAIN_CB.Queue.ListEntry.Blink->Flink);
  SystemProcessorInfo->ProcessorVendor = (_NDIS_PROCESSOR_VENDOR)Blink->Blink;
  SystemProcessorInfo->NumPhysicalPackages = HIDWORD(Blink->Blink);
  SystemProcessorInfo->NumCores = (unsigned int)Blink[1].Flink;
  SystemProcessorInfo->NumCoresPerPhysicalPackage = HIDWORD(Blink[1].Flink);
  SystemProcessorInfo->MaxHyperThreadingCpusPerCore = (unsigned int)Blink[1].Blink;
  SystemProcessorInfo->RssBaseCpu = ndisRssBaseCpu;
  DeviceRoutine_low = LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine);
  SystemProcessorInfo->RssCpuCount = (unsigned int)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
  if ( SystemProcessorInfo->RssProcessors )
  {
    v13 = 0;
    if ( (_DWORD)DeviceRoutine_low )
    {
      v14 = (char *)ndisRssProcessors;
      v15 = DeviceRoutine_low;
      do
      {
        if ( *(_WORD *)v14 )
        {
          --SystemProcessorInfo->RssCpuCount;
        }
        else
        {
          v16 = v13++;
          SystemProcessorInfo->RssProcessors[v16] = v14[2];
        }
        v14 += 4;
        --v15;
      }
      while ( v15 );
    }
  }
  v5 = 0;
  v6 = 0;
  if ( !ndisNumberOfActiveProcessorsAtBoot )
    goto LABEL_9;
  v6 = ndisNumberOfActiveProcessorsAtBoot;
  v7 = (unsigned int *)(*(_QWORD *)&WPP_MAIN_CB.DeviceType + 4LL);
  v8 = ndisNumberOfActiveProcessorsAtBoot;
  do
  {
    if ( !*((_WORD *)v7 - 2) )
    {
      v9 = v5 + 3LL;
      v10 = v5++;
      *((_DWORD *)&SystemProcessorInfo->Header + 4 * v9) = *((unsigned __int8 *)v7 - 2);
      SystemProcessorInfo->CpuInfo[v10].PhysicalPackageId = *v7;
      SystemProcessorInfo->CpuInfo[v10].CoreId = v7[1];
      SystemProcessorInfo->CpuInfo[v10].HyperThreadID = v7[2];
    }
    v7 += 5;
    --v8;
  }
  while ( v8 );
  while ( v6 < 0x40 )
  {
LABEL_9:
    v11 = 2 * (v6++ + 3LL);
    *((_QWORD *)&SystemProcessorInfo->Header.Type + v11) = 0LL;
    *((_QWORD *)&SystemProcessorInfo->ProcessorVendor + v11) = 0LL;
  }
  return v1;
}
