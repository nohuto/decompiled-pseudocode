/*
 * XREFs of ?ndisPcwGetMiniportDataBlockInternal@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00D8038
 * Callers:
 *     ?ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z @ 0x1C0067B74 (-ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_.c)
 *     ?ndisPcwGetMiniportDataBlock@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00D8000 (-ndisPcwGetMiniportDataBlock@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     memset @ 0x1C0027500 (memset.c)
 *     ?ndisPcwGetPerCpuDataForProcessor@@YAPEAU_NDIS_PCW_PER_CPU_DATA_BLOCK@@PEAU_NDIS_PCW_DATA_BLOCK@@K@Z @ 0x1C0027768 (-ndisPcwGetPerCpuDataForProcessor@@YAPEAU_NDIS_PCW_PER_CPU_DATA_BLOCK@@PEAU_NDIS_PCW_DATA_BLOCK@.c)
 *     ?ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z @ 0x1C00D7FA0 (-ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z.c)
 *     ?ndisPcwGetMiniportInstanceId@@YAKPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00D81F4 (-ndisPcwGetMiniportInstanceId@@YAKPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisPcwGetMiniportName@@YAPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00D8234 (-ndisPcwGetMiniportName@@YAPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

struct _NDIS_PCW_DATA_BLOCK *__fastcall ndisPcwGetMiniportDataBlockInternal(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int v2; // esi
  int v3; // edx
  unsigned __int16 v4; // r12
  SIZE_T v5; // rbp
  struct _NDIS_PCW_DATA_BLOCK *PoolWithTag; // rax
  struct _NDIS_PCW_DATA_BLOCK *v7; // rbx
  unsigned int v8; // r10d
  __int64 v9; // r15
  unsigned int v10; // esi
  char *v11; // r15
  int v12; // ebp
  unsigned int MiniportInstanceId; // eax
  __int64 v14; // r10
  int v15; // r10d
  unsigned int v16; // r11d
  signed __int32 v18[18]; // [rsp+0h] [rbp-48h] BYREF

  if ( !a1->Reserved4.Buffer )
  {
    v2 = ndisMaxNumberOfProcessors * ndisPcwPerCpuDataStride;
    v4 = ndisPcwGetMiniportName(a1)->Length + 18;
    v5 = v2 + ndisPcwOffsetToPerCpuData + v4 * (v3 + 1);
    PoolWithTag = (struct _NDIS_PCW_DATA_BLOCK *)ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v5, 0x7763444Eu);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, (unsigned int)v5);
      v8 = ndisMaxNumberOfProcessors;
      v9 = v2;
      v10 = 0;
      v11 = (char *)v7 + ndisPcwOffsetToPerCpuData + v9;
      v7->Miniport = a1;
      v7->ReferenceCount = 2;
      if ( v8 )
      {
        v12 = 0;
        while ( 1 )
        {
          ndisPcwGetPerCpuDataForProcessor(v7, v10);
          MiniportInstanceId = ndisPcwGetMiniportInstanceId(a1, v10);
          *(_DWORD *)(v14 + 408) = MiniportInstanceId;
          *(_QWORD *)(v14 + 424) = &v11[v12];
          *(_WORD *)(v14 + 416) = 0;
          *(_WORD *)(v14 + 418) = v4;
          if ( ndisPcwGetInstanceName(a1, (const struct _UNICODE_STRING *)v10, (struct _UNICODE_STRING *)(v14 + 416)) < 0 )
            break;
          ++v10;
          v12 += v4;
          if ( v10 >= ndisMaxNumberOfProcessors )
            goto LABEL_7;
        }
      }
      else
      {
LABEL_7:
        v7->TotalInstanceId = ndisPcwGetMiniportInstanceId(a1, 0xFFFu);
        v7->TotalInstanceName.Length = 0;
        v7->TotalInstanceName.MaximumLength = v4;
        v7->TotalInstanceName.Buffer = (wchar_t *)&v11[v15 * v4];
        if ( ndisPcwGetInstanceName(a1, (const struct _UNICODE_STRING *)v16, &v7->TotalInstanceName) >= 0 )
        {
          a1->IfBlock->PcwDataBlock = v7;
          a1->Reserved4.Buffer = (wchar_t *)v7;
          _InterlockedOr(v18, 0);
          v7->Next = ndisPcwDataBlockList;
          ndisPcwDataBlockList = v7;
          return a1->PcwDataBlock;
        }
      }
      ExFreePoolWithTag(v7, 0);
    }
  }
  return a1->PcwDataBlock;
}
