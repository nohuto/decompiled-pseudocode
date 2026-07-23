/*
 * XREFs of RtlAllocateHandle @ 0x1800526C0
 * Callers:
 *     RtlpInsertStringAtom @ 0x18005262C (RtlpInsertStringAtom.c)
 * Callees:
 *     RtlReAllocateHeap @ 0x18002DA20 (RtlReAllocateHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     ZwAllocateVirtualMemory @ 0x180093A80 (ZwAllocateVirtualMemory.c)
 */

PRTL_HANDLE_TABLE_ENTRY __cdecl RtlAllocateHandle(PRTL_HANDLE_TABLE HandleTable, PULONG HandleIndex)
{
  PRTL_HANDLE_TABLE_ENTRY *p_FreeHandles; // rdi
  _QWORD *v5; // rcx
  ULONG_PTR v7; // rax
  _RTL_HANDLE_TABLE_ENTRY *v8; // rcx
  _RTL_HANDLE_TABLE_ENTRY *v9; // rdx
  _QWORD *v10; // rcx
  ULONG v11; // ecx
  ULONG SizeOfHandleTableEntry; // eax
  PRTL_HANDLE_TABLE_ENTRY CommittedHandles; // r8
  unsigned int v14; // esi
  __int64 v15; // r14
  void *ProcessHeap; // rcx
  _RTL_HANDLE_TABLE_ENTRY *v17; // rax
  ULONG_PTR v18[2]; // [rsp+30h] [rbp-10h] BYREF
  PVOID UnCommittedHandles; // [rsp+70h] [rbp+30h] BYREF
  PVOID BaseAddress; // [rsp+80h] [rbp+40h] BYREF
  ULONG_PTR RegionSize; // [rsp+88h] [rbp+48h] BYREF

  UnCommittedHandles = 0LL;
  p_FreeHandles = &HandleTable->FreeHandles;
  if ( !HandleTable->FreeHandles )
  {
    if ( HandleTable->Reserved[0] )
    {
      v11 = HandleTable->Reserved[1];
      if ( v11 <= HandleTable->MaximumNumberOfHandles )
      {
        SizeOfHandleTableEntry = HandleTable->SizeOfHandleTableEntry;
        CommittedHandles = HandleTable->CommittedHandles;
        v14 = v11 * SizeOfHandleTableEntry;
        v15 = v11 * SizeOfHandleTableEntry + 8 * SizeOfHandleTableEntry;
        ProcessHeap = NtCurrentPeb()->ProcessHeap;
        v17 = (_RTL_HANDLE_TABLE_ENTRY *)(CommittedHandles
                                        ? RtlReAllocateHeap(ProcessHeap, 8u, CommittedHandles, (unsigned int)v15)
                                        : RtlAllocateHeap(ProcessHeap, 8u, v14 + 8 * SizeOfHandleTableEntry));
        BaseAddress = v17;
        if ( v17 )
        {
          HandleTable->Reserved[1] += 8;
          HandleTable->CommittedHandles = v17;
          v9 = (_RTL_HANDLE_TABLE_ENTRY *)((char *)v17 + v14);
          UnCommittedHandles = v9;
          HandleTable->UnCommittedHandles = (_RTL_HANDLE_TABLE_ENTRY *)((char *)v17 + v15);
LABEL_12:
          v10 = p_FreeHandles;
          while ( v9 < HandleTable->UnCommittedHandles )
          {
            *v10 = v9;
            v10 = UnCommittedHandles;
            v9 = (_RTL_HANDLE_TABLE_ENTRY *)((char *)UnCommittedHandles + HandleTable->SizeOfHandleTableEntry);
            UnCommittedHandles = v9;
          }
          goto LABEL_2;
        }
      }
    }
    else
    {
      if ( !HandleTable->UnCommittedHandles )
      {
        v7 = HandleTable->MaximumNumberOfHandles * HandleTable->SizeOfHandleTableEntry;
        BaseAddress = 0LL;
        RegionSize = v7;
        if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u) < 0 )
          return 0LL;
        v8 = (_RTL_HANDLE_TABLE_ENTRY *)BaseAddress;
        HandleTable->CommittedHandles = (PRTL_HANDLE_TABLE_ENTRY)BaseAddress;
        HandleTable->UnCommittedHandles = v8;
        HandleTable->MaxReservedHandles = (_RTL_HANDLE_TABLE_ENTRY *)((char *)v8 + RegionSize);
      }
      UnCommittedHandles = HandleTable->UnCommittedHandles;
      if ( UnCommittedHandles < HandleTable->MaxReservedHandles )
      {
        v18[0] = 4096LL;
        if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &UnCommittedHandles, 0LL, v18, 0x1000u, 4u) >= 0 )
        {
          v9 = (_RTL_HANDLE_TABLE_ENTRY *)UnCommittedHandles;
          HandleTable->UnCommittedHandles = (PRTL_HANDLE_TABLE_ENTRY)((char *)UnCommittedHandles + v18[0]);
          goto LABEL_12;
        }
      }
    }
    return 0LL;
  }
LABEL_2:
  v5 = *p_FreeHandles;
  UnCommittedHandles = v5;
  *p_FreeHandles = (PRTL_HANDLE_TABLE_ENTRY)*v5;
  *v5 = 0LL;
  if ( HandleIndex )
    *HandleIndex = (signed __int64)((__int64)UnCommittedHandles - (unsigned __int64)HandleTable->CommittedHandles)
                 / HandleTable->SizeOfHandleTableEntry;
  return (PRTL_HANDLE_TABLE_ENTRY)UnCommittedHandles;
}
