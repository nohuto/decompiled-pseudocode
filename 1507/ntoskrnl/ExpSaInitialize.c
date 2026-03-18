/*
 * XREFs of ExpSaInitialize @ 0x14016CC14
 * Callers:
 *     ExpInitSystemPhase1 @ 0x1407C3074 (ExpInitSystemPhase1.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x140014408 (KeQueryMaximumProcessorCountEx.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400D4C6C (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400D4F5C (KeSetSystemGroupAffinityThread.c)
 *     ExpSaAllocatorInitialize @ 0x14016CE5C (ExpSaAllocatorInitialize.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

char ExpSaInitialize()
{
  char v0; // bl
  PVOID PoolWithTag; // rax
  ULONG MaximumProcessorCount; // eax
  SIZE_T v3; // rdi
  ULONG v4; // ebp
  PVOID v5; // rax
  unsigned int v6; // r15d
  unsigned int v7; // esi
  __int64 v8; // rdi
  int *v9; // r14
  int v10; // ecx
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  unsigned int v12; // eax
  PVOID v13; // rcx
  __int64 v14; // rdx
  PVOID v15; // rax
  PVOID v16; // rax
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-48h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-38h] BYREF

  ExSaPageGroupDescriptorArray = 0LL;
  ExSaPageArrays = 0LL;
  ExSaNonPagedSlotAllocator = 0LL;
  ExSaPagedSlotAllocator = 0LL;
  ExSaPageGroupDescriptorArrayLock = 0LL;
  v0 = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x80uLL, 0x61537845u);
  ExSaPageGroupDescriptorArray = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x80uLL);
    MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
    v3 = 8LL * MaximumProcessorCount;
    v4 = MaximumProcessorCount;
    v5 = ExAllocatePoolWithTag(NonPagedPoolNx, v3, 0x61537845u);
    ExSaPageArrays = (__int64)v5;
    if ( v5 )
    {
      memset(v5, 0, v3);
      v6 = KeNumberProcessors_0;
      v7 = 0;
      if ( v4 )
      {
        v8 = 0LL;
        v9 = KiProcessorIndexToNumberMappingTable;
        while ( 1 )
        {
          if ( v7 < v6 )
          {
            v10 = *v9;
            p_PreviousAffinity = 0LL;
            v12 = *v9;
            Affinity.Reserved[1] = 0;
            *(_DWORD *)&Affinity.Group = (unsigned __int16)(v12 >> 6);
            Affinity.Reserved[2] = 0;
            Affinity.Mask = 1LL << (v10 & 0x3F);
            if ( !v0 )
            {
              v0 = 1;
              p_PreviousAffinity = &PreviousAffinity;
            }
            KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
          }
          v13 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x80uLL, 0x61537845u);
          *(_QWORD *)(v8 * 8 + ExSaPageArrays) = v13;
          if ( !v13 )
            break;
          memset(v13, 0, 0x80uLL);
          if ( v7 >= (unsigned int)KeNumberProcessors_0 )
            v14 = 0LL;
          else
            v14 = KiProcessorBlock[v8];
          if ( v14 )
            *(_QWORD *)(v14 + 26792) = *(_QWORD *)(v8 * 8 + ExSaPageArrays);
          ++v7;
          ++v9;
          ++v8;
          if ( v7 >= v4 )
          {
            if ( v0 )
            {
              KeRevertToUserGroupAffinityThread(&PreviousAffinity);
              v0 = 0;
            }
            goto LABEL_17;
          }
        }
      }
      else
      {
LABEL_17:
        v15 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x61537845u);
        ExSaNonPagedSlotAllocator = (__int64)v15;
        if ( v15 )
        {
          ExpSaAllocatorInitialize(v15, 0LL);
          v16 = ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x61537845u);
          ExSaPagedSlotAllocator = (ULONG_PTR)v16;
          if ( v16 )
          {
            ExpSaAllocatorInitialize(v16, 1LL);
            return 1;
          }
        }
      }
      if ( v0 )
        KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    }
  }
  return 0;
}
