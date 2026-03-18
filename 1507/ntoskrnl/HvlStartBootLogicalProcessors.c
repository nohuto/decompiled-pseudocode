/*
 * XREFs of HvlStartBootLogicalProcessors @ 0x140163754
 * Callers:
 *     KeStartAllProcessors @ 0x1407D3888 (KeStartAllProcessors.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     sub_1401E60EC @ 0x1401E60EC (sub_1401E60EC.c)
 *     sub_1401E65AC @ 0x1401E65AC (sub_1401E65AC.c)
 *     HvlpQueryApicIdAndNumaNode @ 0x1401E6D94 (HvlpQueryApicIdAndNumaNode.c)
 *     HvlpSelectLpSet @ 0x1401E6DE4 (HvlpSelectLpSet.c)
 *     HvlpSelectVpSet @ 0x1401E7224 (HvlpSelectVpSet.c)
 *     MmFreeIndependentPages @ 0x14055E3E4 (MmFreeIndependentPages.c)
 *     MmAllocateIndependentPages @ 0x1405610B8 (MmAllocateIndependentPages.c)
 *     xHalSetSystemInformation @ 0x1405C733C (xHalSetSystemInformation.c)
 *     HvlpDiscoverTopologyLocal @ 0x140670858 (HvlpDiscoverTopologyLocal.c)
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
  off_140321B18();
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
    dword_1403D61D4 = 0;
    ApicIdAndNumaNode = HvlpQueryApicIdAndNumaNode(0LL, &dword_1403D61D8, &word_1403D61DC);
    if ( ApicIdAndNumaNode >= 0 )
    {
      v8 = (unsigned int)dword_1403D61D8;
      qword_1403D61F0 = (__int64)CurrentPrcb->StatisticsPage;
      dword_1403D61E8 = CurrentPrcb->Number;
      v9 = (unsigned __int16)word_1403D61DC;
      HvlpNodeCount = 1;
      HvlpNodes[2 * (unsigned __int16)word_1403D61DC] = 1;
      HvlpNodes[2 * v9 + 1] = 1;
      HvlpCpuVendor = CurrentPrcb->CpuVendor;
      HvlpDiscoverTopologyLocal(HvlpNodes, v8, &unk_1403D61E0, &unk_1403D61E4);
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
              if ( (int)sub_1401E60EC(*((unsigned int *)v14 - 1), *v14) < 0 )
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
                *(_DWORD *)(sub_1401E65AC(*v17, v15, v16, v17) + 40) = 1;
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
