/*
 * XREFs of HvlStartBootLogicalProcessors @ 0x140139CA4
 * Callers:
 *     KeStartAllProcessors @ 0x140792860 (KeStartAllProcessors.c)
 * Callees:
 *     qsort @ 0x14014E520 (qsort.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     HvlpCommitLpIndices @ 0x1401BB2F4 (HvlpCommitLpIndices.c)
 *     HvlpEnableNextLogicalProcessor @ 0x1401BB610 (HvlpEnableNextLogicalProcessor.c)
 *     HvlpGetLpcbByApicId @ 0x1401BB84C (HvlpGetLpcbByApicId.c)
 *     HvlpQueryApicIdAndNumaNode @ 0x1401BBB78 (HvlpQueryApicIdAndNumaNode.c)
 *     HvlpSelectLpSet @ 0x1401BBCAC (HvlpSelectLpSet.c)
 *     HvlpSelectVpSet @ 0x1401BC100 (HvlpSelectVpSet.c)
 *     HvlpUpdateLpcbIndex @ 0x1401BC7BC (HvlpUpdateLpcbIndex.c)
 *     MmFreeIndependentPages @ 0x1403E1F14 (MmFreeIndependentPages.c)
 *     MmAllocateIndependentPages @ 0x1404C8A68 (MmAllocateIndependentPages.c)
 *     xHalSetSystemInformation @ 0x140581DF0 (xHalSetSystemInformation.c)
 *     HvlpDiscoverTopologyLocal @ 0x1406205EC (HvlpDiscoverTopologyLocal.c)
 */

__int64 HvlStartBootLogicalProcessors()
{
  unsigned int MaximumProcessorCount; // eax
  __int64 v2; // rdi
  size_t v3; // r14
  char *IndependentPages; // rax
  char *v5; // rsi
  int ApicIdAndNumaNode; // ebx
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v8; // rcx
  unsigned int v9; // ebp
  unsigned __int16 *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // r10d
  char *v14; // r9
  __int64 v15; // rbx
  __int64 LpcbByApicId; // rax
  char v17; // r11
  unsigned int v18; // edi

  if ( (HvlpFlags & 2) == 0 )
    return 0LL;
  off_1402F37E8();
  HvlpQueryProcessorNode = 0LL;
  HvlpQueryProximityId = 0LL;
  HvlpQueryProximityNode = 0LL;
  HvlpQueryNodeDistance = 0LL;
  MaximumProcessorCount = HalQueryMaximumProcessorCount();
  v2 = MaximumProcessorCount;
  v3 = 36 * MaximumProcessorCount;
  IndependentPages = (char *)MmAllocateIndependentPages(v3, 0xFFFFFFFFLL);
  v5 = IndependentPages;
  if ( IndependentPages )
  {
    memset(IndependentPages, 0, v3);
    CurrentPrcb = KeGetCurrentPrcb();
    dword_1403AF024 = 0;
    ApicIdAndNumaNode = HvlpQueryApicIdAndNumaNode(0LL, &dword_1403AF028, &unk_1403AF02C);
    if ( ApicIdAndNumaNode < 0 )
      goto LABEL_31;
    qword_1403AF040 = (__int64)CurrentPrcb->StatisticsPage;
    dword_1403AF038 = CurrentPrcb->Number;
    HvlpCpuVendor = CurrentPrcb->CpuVendor;
    HvlpDiscoverTopologyLocal(v8, (unsigned int)dword_1403AF028, &unk_1403AF030, &unk_1403AF034);
    LODWORD(HvlpLogicalProcessorCount) = 1;
    HvlpLogicalProcessorRegions[0] = 1;
    ApicIdAndNumaNode = HvlpSelectLpSet((unsigned int)v2, v5);
    if ( ApicIdAndNumaNode < 0 )
      goto LABEL_31;
    v9 = 1;
    if ( (unsigned int)v2 > 1 )
    {
      v10 = (unsigned __int16 *)(v5 + 44);
      do
      {
        if ( *((_BYTE *)v10 - 7) )
        {
          if ( (int)HvlpEnableNextLogicalProcessor(*((unsigned int *)v10 - 1), *v10) < 0 )
            break;
          LODWORD(HvlpLogicalProcessorCount) = HvlpLogicalProcessorCount + 1;
          *((_BYTE *)v10 - 6) = 1;
        }
        ++v9;
        v10 += 18;
      }
      while ( v9 < (unsigned int)v2 );
    }
    ApicIdAndNumaNode = HvlpSelectVpSet((unsigned int)v2, v5);
    if ( ApicIdAndNumaNode < 0 )
      goto LABEL_31;
    v13 = HvlpActiveProcessorCount;
    if ( (_DWORD)v2 )
    {
      v14 = v5 + 1;
      v15 = v2;
      do
      {
        if ( *v14 || v14[2] )
        {
          LpcbByApicId = HvlpGetLpcbByApicId(*(unsigned int *)(v14 + 3), v11, v12, v14);
          if ( v17 )
            *(_DWORD *)(LpcbByApicId + 40) = 1;
          if ( v14[2] )
          {
            ++v13;
            *(_BYTE *)(LpcbByApicId + 104) = 1;
          }
        }
        v14 += 36;
        --v15;
      }
      while ( v15 );
      HvlpActiveProcessorCount = v13;
    }
    if ( (HvlpRootFlags & 0x400) == 0 )
      goto LABEL_30;
    if ( v13 != (_DWORD)HvlpLogicalProcessorCount )
    {
      qsort(HvlpLogicalProcessorRegions, (unsigned int)HvlpLogicalProcessorCount, 0x70uLL, HvlpCompareActiveLpcbs);
      v18 = 0;
      if ( (_DWORD)HvlpLogicalProcessorCount )
      {
        do
        {
          ApicIdAndNumaNode = HvlpUpdateLpcbIndex(&HvlpLogicalProcessorRegions[28 * v18], v18);
          if ( ApicIdAndNumaNode < 0 )
            goto LABEL_31;
        }
        while ( ++v18 < (unsigned int)HvlpLogicalProcessorCount );
      }
    }
    ApicIdAndNumaNode = HvlpCommitLpIndices();
    if ( ApicIdAndNumaNode >= 0 )
LABEL_30:
      ApicIdAndNumaNode = 0;
LABEL_31:
    MmFreeIndependentPages(v5, v3);
    return (unsigned int)ApicIdAndNumaNode;
  }
  return (unsigned int)-1073741670;
}
