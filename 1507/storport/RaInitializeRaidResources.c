/*
 * XREFs of RaInitializeRaidResources @ 0x1C00100A0
 * Callers:
 *     RaidAdapterCompleteInitialization @ 0x1C000FE34 (RaidAdapterCompleteInitialization.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0003BAC (RaidAllocatePool.c)
 *     RaFreeRaidResources @ 0x1C0034B48 (RaFreeRaidResources.c)
 *     Template_zqqqqx @ 0x1C0034E84 (Template_zqqqqx.c)
 */

__int64 __fastcall RaInitializeRaidResources(
        PSLIST_HEADER ListHead,
        int a2,
        unsigned int a3,
        unsigned __int64 a4,
        char a5,
        int a6)
{
  SIZE_T v6; // r15
  unsigned __int64 v9; // rax
  unsigned int v10; // ecx
  unsigned int v11; // esi
  unsigned int v12; // eax
  __int64 v13; // r14
  ULONG MaximumProcessorCount; // eax
  ULONG v15; // ebx
  __int64 Alignment_low; // rax
  unsigned int v17; // ebp
  struct _SLIST_ENTRY *v18; // rax
  struct _SLIST_ENTRY *v19; // rbx
  unsigned int Alignment; // ecx
  union _SLIST_HEADER *v21; // rcx
  PVOID Pool; // rax
  __int64 v24; // rbp
  union _SLIST_HEADER *v25; // rcx

  v6 = a3;
  *((_DWORD *)&ListHead[4].HeaderX64 + 3) = 16;
  LODWORD(ListHead[6].Alignment) = 0;
  *((_BYTE *)&ListHead[7].HeaderX64 + 8) = a5 == 0;
  v9 = PhysicalMemorySize;
  LODWORD(ListHead[5].Alignment) = a2;
  *((_DWORD *)&ListHead[5].HeaderX64 + 1) = a3;
  ListHead[5].Region = a4;
  *((_DWORD *)&ListHead[7].HeaderX64 + 1) = a6;
  *((_DWORD *)&ListHead[7].HeaderX64 + 3) = 0;
  v10 = 0x80000000;
  if ( !v9 )
    goto LABEL_36;
  if ( v9 < 0x40000000 )
  {
    v11 = 64;
    goto LABEL_6;
  }
  if ( v9 < 0x80000000 )
  {
    v11 = 128;
    goto LABEL_6;
  }
  v10 = 0;
  if ( v9 < 0x200000000LL )
  {
LABEL_36:
    v11 = 256;
    goto LABEL_6;
  }
  v10 = 0;
  v11 = v9 < 0x400000000LL ? 512 : 1024;
LABEL_6:
  v12 = LODWORD(ListHead[5].Alignment) >> 2;
  if ( v12 <= v11 )
  {
    v11 = LODWORD(ListHead[5].Alignment) >> 2;
    if ( v12 < 0x10 )
      v11 = 16;
  }
  v13 = *(_QWORD *)(a4 + 64);
  if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x10) != 0 )
    Template_zqqqqx(v10, a2, 256, *(_QWORD *)(v13 + 48), *(_DWORD *)(v13 + 56), v11, a2, a3);
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v15 = MaximumProcessorCount;
  if ( MaximumProcessorCount <= 0x10 )
  {
    LODWORD(ListHead[4].Alignment) = 0;
    InitializeSListHead(ListHead);
  }
  else if ( MaximumProcessorCount > 0x40 )
  {
    if ( MaximumProcessorCount > 0x100 )
      LODWORD(ListHead[4].Alignment) = 32;
    else
      LODWORD(ListHead[4].Alignment) = 16;
  }
  else
  {
    LODWORD(ListHead[4].Alignment) = 8;
  }
  Alignment_low = LODWORD(ListHead[4].Alignment);
  *((_DWORD *)&ListHead[4].HeaderX64 + 1) = v15;
  if ( (_DWORD)Alignment_low )
  {
    Pool = RaidAllocatePool(NonPagedPoolNx, 8 * Alignment_low, 0x53526152u, a4);
    ListHead->Alignment = (unsigned __int64)Pool;
    if ( !Pool )
      LODWORD(ListHead[4].Alignment) = 0;
    v24 = 0LL;
    if ( LODWORD(ListHead[4].Alignment) )
    {
      while ( 1 )
      {
        *(_QWORD *)(ListHead->Alignment + 8 * v24) = ExAllocatePoolWithTag(
                                                       NonPagedPoolNxCacheAligned,
                                                       0x10uLL,
                                                       0x53526152u);
        v25 = *(union _SLIST_HEADER **)(ListHead->Alignment + 8 * v24);
        if ( !v25 )
          break;
        InitializeSListHead(v25);
        v24 = (unsigned int)(v24 + 1);
        if ( (unsigned int)v24 >= LODWORD(ListHead[4].Alignment) )
          goto LABEL_15;
      }
      if ( (_DWORD)v24 )
      {
        if ( (_DWORD)v24 != 1 )
        {
          LODWORD(ListHead[4].Alignment) = v24;
          goto LABEL_15;
        }
        ExFreePoolWithTag(*(PVOID *)ListHead->Alignment, 0x53526152u);
      }
      ExFreePoolWithTag((PVOID)ListHead->Alignment, 0x53526152u);
      LODWORD(ListHead[4].Alignment) = 0;
      InitializeSListHead(ListHead);
    }
  }
LABEL_15:
  v17 = 0;
  if ( v11 )
  {
    while ( 1 )
    {
      v18 = *((_BYTE *)&ListHead[7].HeaderX64 + 8)
          ? (struct _SLIST_ENTRY *)RaidAllocatePool(NonPagedPoolNx, v6, 0x53526152u, a4)
          : (struct _SLIST_ENTRY *)MmAllocateContiguousNodeMemory(
                                     v6,
                                     *(_QWORD *)(v13 + 4392),
                                     *(_QWORD *)(v13 + 4400),
                                     *(_QWORD *)(v13 + 4384),
                                     4,
                                     0x80000000);
      v19 = v18;
      if ( !v18 )
        break;
      Alignment = ListHead[4].Alignment;
      if ( Alignment )
        v21 = *(union _SLIST_HEADER **)(ListHead->Alignment + 8LL * (v17 % Alignment));
      else
        v21 = ListHead;
      ExpInterlockedPushEntrySList(v21, v18);
      LODWORD(v19[1].Next) = 523124044;
      *((_DWORD *)&v19[46].Next + 2) = a6;
      if ( a6 )
        *((_QWORD *)&v19[47].Next + 1) = (char *)v19 + (unsigned int)(v6 - a6);
      else
        *((_QWORD *)&v19[47].Next + 1) = 0LL;
      if ( ++v17 >= v11 )
        goto LABEL_24;
    }
    ++LODWORD(ListHead[6].Alignment);
  }
LABEL_24:
  if ( v17 < *((_DWORD *)&ListHead[4].HeaderX64 + 3) )
  {
    RaFreeRaidResources(ListHead);
    return 3221225495LL;
  }
  else
  {
    *((_DWORD *)&ListHead[4].HeaderX64 + 2) = v17;
    return 0LL;
  }
}
