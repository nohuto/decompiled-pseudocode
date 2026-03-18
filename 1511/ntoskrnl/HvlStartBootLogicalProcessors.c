/*
 * XREFs of HvlStartBootLogicalProcessors @ 0x140136B70
 * Callers:
 *     KeStartAllProcessors @ 0x140762F20 (KeStartAllProcessors.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     sub_1401AEFE0 @ 0x1401AEFE0 (sub_1401AEFE0.c)
 *     sub_1401AF240 @ 0x1401AF240 (sub_1401AF240.c)
 *     HvlpQueryApicIdAndNumaNode @ 0x1401AF56C (HvlpQueryApicIdAndNumaNode.c)
 *     HvlpSelectLpSet @ 0x1401AF638 (HvlpSelectLpSet.c)
 *     HvlpSelectVpSet @ 0x1401AFA78 (HvlpSelectVpSet.c)
 *     MmFreeIndependentPages @ 0x1403C5554 (MmFreeIndependentPages.c)
 *     MmAllocateIndependentPages @ 0x1403CBDCC (MmAllocateIndependentPages.c)
 *     xHalSetSystemInformation @ 0x14054F598 (xHalSetSystemInformation.c)
 *     HvlpDiscoverTopologyLocal @ 0x1405F6988 (HvlpDiscoverTopologyLocal.c)
 */

__int64 HvlStartBootLogicalProcessors()
{
  unsigned int MaximumProcessorCount; // eax
  __int64 v2; // rbx
  size_t v3; // r14
  char *IndependentPages; // rax
  char *v5; // rsi
  int ApicIdAndNumaNode; // edi
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // ecx
  _BYTE *v11; // rax
  __int64 v12; // rdx
  unsigned int v13; // ebp
  unsigned __int16 *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r8
  unsigned int *v17; // r9
  __int64 v18; // r10

  if ( (HvlpFlags & 4) == 0 )
    return 0LL;
  off_1402D29C8();
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
    dword_140387144 = 0;
    ApicIdAndNumaNode = HvlpQueryApicIdAndNumaNode(0LL, &dword_140387148, &word_14038714C);
    if ( ApicIdAndNumaNode >= 0 )
    {
      v8 = (unsigned int)dword_140387148;
      qword_140387160 = (__int64)CurrentPrcb->StatisticsPage;
      dword_140387158 = CurrentPrcb->Number;
      v9 = (unsigned __int16)word_14038714C;
      HvlpNodeCount = 1;
      HvlpNodes[2 * (unsigned __int16)word_14038714C] = 1;
      HvlpNodes[2 * v9 + 1] = 1;
      HvlpCpuVendor = CurrentPrcb->CpuVendor;
      HvlpDiscoverTopologyLocal(HvlpNodes, v8, &unk_140387150, &unk_140387154);
      HvlpLogicalProcessorCount = 1;
      HvlpLogicalProcessorRegions = 1;
      ApicIdAndNumaNode = HvlpSelectLpSet((unsigned int)v2, v5);
      if ( ApicIdAndNumaNode >= 0 )
      {
        if ( (_DWORD)v2 )
        {
          v10 = HvlpMaximumProcessors;
          v11 = v5 + 1;
          v12 = v2;
          do
          {
            if ( *v11 )
              ++v10;
            v11 += 36;
            --v12;
          }
          while ( v12 );
          HvlpMaximumProcessors = v10;
        }
        v13 = 1;
        if ( (unsigned int)v2 > 1 )
        {
          v14 = (unsigned __int16 *)(v5 + 44);
          do
          {
            if ( *((_BYTE *)v14 - 7) )
            {
              if ( (int)sub_1401AEFE0(*((unsigned int *)v14 - 1), *v14) < 0 )
                break;
              ++HvlpLogicalProcessorCount;
              *((_BYTE *)v14 - 6) = 1;
            }
            ++v13;
            v14 += 18;
          }
          while ( v13 < (unsigned int)v2 );
        }
        ApicIdAndNumaNode = HvlpSelectVpSet((unsigned int)v2, v5);
        if ( ApicIdAndNumaNode >= 0 )
        {
          if ( (_DWORD)v2 )
          {
            v17 = (unsigned int *)(v5 + 4);
            v18 = v2;
            do
            {
              if ( *((_BYTE *)v17 - 3) )
                *(_DWORD *)(sub_1401AF240(*v17, v15, v16, v17) + 40) = 1;
              v17 += 9;
              --v18;
            }
            while ( v18 );
          }
          ApicIdAndNumaNode = 0;
        }
      }
    }
    MmFreeIndependentPages(v5, v3);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)ApicIdAndNumaNode;
}
