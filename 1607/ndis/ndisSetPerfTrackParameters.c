/*
 * XREFs of ndisSetPerfTrackParameters @ 0x1C00D03E4
 * Callers:
 *     ndisDeviceControlHandler @ 0x1C009B358 (ndisDeviceControlHandler.c)
 * Callees:
 *     memset @ 0x1C0027500 (memset.c)
 *     ?ndisPcwGetPerCpuDataForProcessor@@YAPEAU_NDIS_PCW_PER_CPU_DATA_BLOCK@@PEAU_NDIS_PCW_DATA_BLOCK@@K@Z @ 0x1C0027768 (-ndisPcwGetPerCpuDataForProcessor@@YAPEAU_NDIS_PCW_PER_CPU_DATA_BLOCK@@PEAU_NDIS_PCW_DATA_BLOCK@.c)
 *     ?ndisPcwGetMiniportDataBlock@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00D8000 (-ndisPcwGetMiniportDataBlock@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisSetPerfTrackParameters(struct _NDIS_MINIPORT_BLOCK *a1, _QWORD *a2, _DWORD *a3)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  _DWORD *v7; // rsi
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  struct _NDIS_PCW_DATA_BLOCK *MiniportDataBlock; // r15
  unsigned int v12; // r14d
  unsigned int i; // esi
  struct _NDIS_PCW_PER_CPU_DATA_BLOCK *PerCpuDataForProcessor; // rax

  *a3 = -1073741823;
  v4 = a2[23];
  v5 = 0;
  if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v4 + 48) + 24LL) + 24LL) )
    return (unsigned int)-1073741790;
  if ( *(_DWORD *)(v4 + 16) < 0x14u )
    return (unsigned int)-1073741811;
  v7 = (_DWORD *)a2[3];
  v8 = v7[2];
  if ( (unsigned int)(v8 - 1) > 2 )
  {
    *a3 = -1073741811;
    return (unsigned int)-1073741811;
  }
  *a3 = 0;
  v9 = v8 - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      if ( v10 == 1 )
      {
        MiniportDataBlock = ndisPcwGetMiniportDataBlock(a1);
        if ( MiniportDataBlock )
        {
          v12 = ndisMaxNumberOfProcessors;
          for ( i = 0; i < v12; ++i )
          {
            PerCpuDataForProcessor = ndisPcwGetPerCpuDataForProcessor(MiniportDataBlock, i);
            memset(PerCpuDataForProcessor, 0, 0x130uLL);
          }
        }
        a1->NumberOfIndirectionTableChanges = 0LL;
      }
    }
    else
    {
      a1->PcwDatapathEventMask = 0;
      a1->PcwDatapathCycleMask = 0;
    }
  }
  else if ( ndisPcwGetMiniportDataBlock(a1) )
  {
    a1->PcwDatapathEventMask = v7[3];
    a1->PcwDatapathCycleMask = v7[4];
  }
  a2[7] = 0LL;
  return v5;
}
