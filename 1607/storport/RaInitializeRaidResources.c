/*
 * XREFs of RaInitializeRaidResources @ 0x1C00154B4
 * Callers:
 *     RaidAdapterCompleteInitialization @ 0x1C0015260 (RaidAdapterCompleteInitialization.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000245C (RaidAllocatePool.c)
 *     RaFreeRaidResources @ 0x1C0039A1C (RaFreeRaidResources.c)
 *     Template_zqqqqx @ 0x1C0039D8C (Template_zqqqqx.c)
 */

__int64 __fastcall RaInitializeRaidResources(
        unsigned __int64 ListHead,
        unsigned int a2,
        unsigned int a3,
        unsigned __int64 a4,
        char a5,
        int a6)
{
  int v6; // eax
  char v7; // r10
  unsigned __int64 v8; // rdx
  SIZE_T v10; // r14
  PSLIST_HEADER v11; // rdi
  __int64 v12; // r13
  unsigned __int64 v13; // rax
  unsigned int v14; // ecx
  unsigned int Alignment; // ebp
  ULONG MaximumProcessorCount; // eax
  ULONG v17; // ebx
  unsigned int v18; // eax
  PVOID Pool; // rax
  __int64 v20; // rsi
  union _SLIST_HEADER *v21; // rcx
  unsigned int v22; // esi
  struct _SLIST_ENTRY *v23; // rax
  struct _SLIST_ENTRY *v24; // rbx
  unsigned int v25; // ecx
  union _SLIST_HEADER *v26; // rcx

  *(_DWORD *)(ListHead + 80) = a2;
  v6 = a2;
  *(_QWORD *)(ListHead + 88) = a4;
  if ( a2 > 0x10 )
    v6 = 16;
  *(_DWORD *)(ListHead + 116) = a6;
  *(_DWORD *)(ListHead + 76) = v6;
  v7 = a2;
  v8 = PhysicalMemorySize;
  v10 = a3;
  v11 = (PSLIST_HEADER)ListHead;
  *(_DWORD *)(ListHead + 84) = a3;
  *(_DWORD *)(ListHead + 96) = 0;
  *(_BYTE *)(ListHead + 120) = a5 == 0;
  *(_DWORD *)(ListHead + 124) = 0;
  v12 = *(_QWORD *)(a4 + 64);
  if ( !v8 )
    goto LABEL_10;
  v13 = 0x400000000LL;
  if ( v8 >= 0x400000000LL )
  {
    a3 = *(_DWORD *)(ListHead + 80);
    v14 = 512;
    do
    {
      v14 *= 2;
      v13 *= 2LL;
    }
    while ( v14 < a3 && v13 <= 0x800000000000LL && v8 >= v13 );
  }
  Alignment = v11[5].Alignment;
  ListHead = *((unsigned int *)&v11[5].HeaderX64 + 1) * (unsigned __int64)Alignment;
  v8 /= 0x2710uLL;
  if ( ListHead > v8 )
LABEL_10:
    Alignment = 16;
  if ( Alignment > StorPreAllocatedMaxIoResourceCount )
    Alignment = StorPreAllocatedMaxIoResourceCount;
  if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
    Template_zqqqqx(ListHead, v8, a3, *(_QWORD *)(v12 + 48), *(_DWORD *)(v12 + 56), Alignment, v7, v10);
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v17 = MaximumProcessorCount;
  if ( MaximumProcessorCount > 0x10 )
  {
    if ( MaximumProcessorCount > 0x40 )
    {
      if ( MaximumProcessorCount > 0x100 )
        LODWORD(v11[4].Alignment) = 32;
      else
        LODWORD(v11[4].Alignment) = 16;
    }
    else
    {
      LODWORD(v11[4].Alignment) = 8;
    }
  }
  else
  {
    LODWORD(v11[4].Alignment) = 0;
    InitializeSListHead(v11);
  }
  v18 = v11[4].Alignment;
  *((_DWORD *)&v11[4].HeaderX64 + 1) = v17;
  if ( v18 )
  {
    Pool = RaidAllocatePool(NonPagedPoolNx, 8LL * v18, 0x53526152u, a4);
    v11->Alignment = (unsigned __int64)Pool;
    if ( !Pool )
      LODWORD(v11[4].Alignment) = 0;
    v20 = 0LL;
    if ( LODWORD(v11[4].Alignment) )
    {
      while ( 1 )
      {
        *(_QWORD *)(v11->Alignment + 8 * v20) = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 0x10uLL, 0x53526152u);
        v21 = *(union _SLIST_HEADER **)(v11->Alignment + 8 * v20);
        if ( !v21 )
          break;
        InitializeSListHead(v21);
        v20 = (unsigned int)(v20 + 1);
        if ( (unsigned int)v20 >= LODWORD(v11[4].Alignment) )
          goto LABEL_34;
      }
      if ( (_DWORD)v20 )
      {
        if ( (_DWORD)v20 != 1 )
        {
          LODWORD(v11[4].Alignment) = v20;
          goto LABEL_34;
        }
        ExFreePoolWithTag(*(PVOID *)v11->Alignment, 0x53526152u);
      }
      ExFreePoolWithTag((PVOID)v11->Alignment, 0x53526152u);
      LODWORD(v11[4].Alignment) = 0;
      InitializeSListHead(v11);
    }
  }
LABEL_34:
  v22 = 0;
  if ( Alignment )
  {
    while ( 1 )
    {
      v23 = *((_BYTE *)&v11[7].HeaderX64 + 8)
          ? (struct _SLIST_ENTRY *)RaidAllocatePool(NonPagedPoolNx, v10, 0x53526152u, a4)
          : (struct _SLIST_ENTRY *)MmAllocateContiguousNodeMemory(
                                     v10,
                                     *(_QWORD *)(v12 + 4392),
                                     *(_QWORD *)(v12 + 4400),
                                     *(_QWORD *)(v12 + 4384),
                                     4,
                                     0x80000000);
      v24 = v23;
      if ( !v23 )
        break;
      v25 = v11[4].Alignment;
      if ( v25 )
        v26 = *(union _SLIST_HEADER **)(v11->Alignment + 8LL * (v22 % v25));
      else
        v26 = v11;
      ExpInterlockedPushEntrySList(v26, v23);
      LODWORD(v24[1].Next) = 523124044;
      *((_DWORD *)&v24[47].Next + 2) = a6;
      if ( a6 )
        *((_QWORD *)&v24[48].Next + 1) = (char *)v24 + (unsigned int)(v10 - a6);
      else
        *((_QWORD *)&v24[48].Next + 1) = 0LL;
      if ( ++v22 >= Alignment )
        goto LABEL_48;
    }
    ++LODWORD(v11[6].Alignment);
  }
LABEL_48:
  if ( v22 >= *((_DWORD *)&v11[4].HeaderX64 + 3) )
  {
    *((_DWORD *)&v11[4].HeaderX64 + 2) = v22;
    return 0LL;
  }
  else
  {
    RaFreeRaidResources(v11);
    return 3221225495LL;
  }
}
