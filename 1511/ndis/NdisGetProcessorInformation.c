/*
 * XREFs of NdisGetProcessorInformation @ 0x1C00A9C50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NDIS_STATUS __stdcall NdisGetProcessorInformation(PNDIS_SYSTEM_PROCESSOR_INFO SystemProcessorInfo)
{
  NDIS_STATUS v1; // r8d
  unsigned __int64 ProcessorHistory; // rcx
  unsigned int Next_high; // eax
  unsigned int v5; // r11d
  $18E3EACC1E717291AA7C720ECCD5C45C v6; // r10
  __int64 v7; // rbx
  __int64 v8; // rdx
  unsigned int v9; // edi
  unsigned int v10; // r10d
  $8225CD6EE33E2E8BFFEAB8806035B221 *v11; // r11
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx

  v1 = 0;
  if ( SystemProcessorInfo->Header.Size < 0x430u )
    return -1073676266;
  ProcessorHistory = WPP_MAIN_CB.Dpc.ProcessorHistory;
  SystemProcessorInfo->Flags = *(_DWORD *)(WPP_MAIN_CB.Dpc.ProcessorHistory + 4);
  SystemProcessorInfo->ProcessorVendor = *(_DWORD *)(ProcessorHistory + 8);
  SystemProcessorInfo->NumPhysicalPackages = *(_DWORD *)(ProcessorHistory + 12);
  SystemProcessorInfo->NumCores = *(_DWORD *)(ProcessorHistory + 16);
  SystemProcessorInfo->NumCoresPerPhysicalPackage = *(_DWORD *)(ProcessorHistory + 20);
  SystemProcessorInfo->MaxHyperThreadingCpusPerCore = *(_DWORD *)(ProcessorHistory + 24);
  SystemProcessorInfo->RssBaseCpu = ndisRssBaseCpu;
  Next_high = HIDWORD(WPP_MAIN_CB.Dpc.DpcListEntry.Next);
  SystemProcessorInfo->RssCpuCount = HIDWORD(WPP_MAIN_CB.Dpc.DpcListEntry.Next);
  if ( SystemProcessorInfo->RssProcessors )
  {
    v5 = 0;
    if ( Next_high )
    {
      v6 = WPP_MAIN_CB.DeviceQueue.1;
      v7 = Next_high;
      do
      {
        if ( **(_WORD **)&v6 )
        {
          --SystemProcessorInfo->RssCpuCount;
        }
        else
        {
          v8 = v5++;
          SystemProcessorInfo->RssProcessors[v8] = *(_BYTE *)(*(_QWORD *)&v6 + 2LL);
        }
        *(_QWORD *)&v6 += 4LL;
        --v7;
      }
      while ( v7 );
    }
  }
  v9 = 0;
  v10 = 0;
  if ( !ndisNumberOfActiveProcessorsAtBoot )
    goto LABEL_14;
  v10 = ndisNumberOfActiveProcessorsAtBoot;
  v11 = &WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc->0 + 1;
  v12 = ndisNumberOfActiveProcessorsAtBoot;
  do
  {
    if ( !LOWORD(v11[-1].TargetInfoAsUlong) )
    {
      v13 = v9 + 3LL;
      v14 = v9++;
      *((_DWORD *)&SystemProcessorInfo->Header + 4 * v13) = LOBYTE(v11[-1].Number);
      SystemProcessorInfo->CpuInfo[v14].PhysicalPackageId = v11->TargetInfoAsUlong;
      SystemProcessorInfo->CpuInfo[v14].CoreId = v11[1].TargetInfoAsUlong;
      SystemProcessorInfo->CpuInfo[v14].HyperThreadID = v11[2].TargetInfoAsUlong;
    }
    v11 += 5;
    --v12;
  }
  while ( v12 );
  while ( v10 < 0x40 )
  {
LABEL_14:
    v15 = 2 * (v10++ + 3LL);
    *((_QWORD *)&SystemProcessorInfo->Header.Type + v15) = 0LL;
    *((_QWORD *)&SystemProcessorInfo->ProcessorVendor + v15) = 0LL;
  }
  return v1;
}
