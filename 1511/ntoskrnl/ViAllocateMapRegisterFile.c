/*
 * XREFs of ViAllocateMapRegisterFile @ 0x1406BC758
 * Callers:
 *     VfAllocateAdapterChannel @ 0x1406BA16C (VfAllocateAdapterChannel.c)
 *     VfBuildScatterGatherList @ 0x1406BA81C (VfBuildScatterGatherList.c)
 *     VfGetScatterGatherList @ 0x1406BB584 (VfGetScatterGatherList.c)
 *     VfHalAllocateMapRegisters @ 0x1406BBA40 (VfHalAllocateMapRegisters.c)
 * Callees:
 *     IoFreeMdl @ 0x1400395A0 (IoFreeMdl.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14004B6B0 (MmMapLockedPagesSpecifyCache.c)
 *     ExInterlockedInsertHeadList @ 0x1400E237C (ExInterlockedInsertHeadList.c)
 *     IoAllocateMdl @ 0x1400FC2E0 (IoAllocateMdl.c)
 *     MmGetPhysicalAddress @ 0x14010429C (MmGetPhysicalAddress.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ViAllocateFromContiguousMemory @ 0x1406BC6C4 (ViAllocateFromContiguousMemory.c)
 *     ViFreeToContiguousMemory @ 0x1406BD618 (ViFreeToContiguousMemory.c)
 *     ViInitializePadding @ 0x1406BDD84 (ViInitializePadding.c)
 */

char *__fastcall ViAllocateMapRegisterFile(__int64 a1, unsigned int a2)
{
  unsigned int v3; // esi
  SIZE_T v4; // rbp
  char *PoolWithTag; // rax
  char *v6; // rbx
  PMDL Mdl; // rbp
  PVOID v8; // rax
  struct _MDL *v9; // r15
  __int64 *v10; // r14
  __int64 v11; // rax
  PVOID v12; // rax
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  PVOID v14; // rax
  int v16; // esi
  PVOID *v17; // r14
  void *v18; // rcx

  v3 = a2;
  if ( a2 + *(_DWORD *)(a1 + 160) <= 0x20 )
  {
    if ( a2 )
    {
      v4 = 32 * (a2 - 1) + 120;
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x566C6148u);
      v6 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, (unsigned int)v4);
        *((_DWORD *)v6 + 7) = v3;
        Mdl = IoAllocateMdl(0LL, v3 << 12, 0, 0, 0LL);
        if ( Mdl )
        {
          v8 = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int64)v3 << 12, 0x566C6148u);
          *((_QWORD *)v6 + 9) = v8;
          if ( v8 )
          {
            v9 = Mdl + 1;
            v10 = (__int64 *)(v6 + 104);
            do
            {
              v11 = ViAllocateFromContiguousMemory(a1, *((_DWORD *)v6 + 7) - v3);
              *v10 = v11;
              if ( v11 )
              {
                _InterlockedIncrement((volatile signed __int32 *)(a1 + 312));
              }
              else
              {
                v12 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 0x3000uLL, 0x566C6148u);
                *v10 = (__int64)v12;
                if ( !v12 )
                  goto LABEL_14;
                _InterlockedIncrement((volatile signed __int32 *)(a1 + 316));
              }
              ViInitializePadding(*v10, 12288LL, 0LL, 0LL);
              PhysicalAddress = MmGetPhysicalAddress((PVOID)(*v10 + 4096));
              v10 += 4;
              v9->Next = (struct _MDL *)(PhysicalAddress.QuadPart >> 12);
              v9 = (struct _MDL *)((char *)v9 + 8);
              --v3;
            }
            while ( v3 );
            Mdl->MdlFlags |= 2u;
            v14 = MmMapLockedPagesSpecifyCache(Mdl, 0, MmCached, 0LL, 0, 0x40000010u);
            *((_QWORD *)v6 + 8) = v14;
            if ( v14 )
            {
              *((_QWORD *)v6 + 10) = 0LL;
              *((_QWORD *)v6 + 7) = Mdl;
              *(_DWORD *)v6 = -1393569779;
              ExInterlockedInsertHeadList((PLIST_ENTRY)(a1 + 104), (PLIST_ENTRY)(v6 + 8), (PKSPIN_LOCK)(a1 + 120));
              return v6;
            }
          }
        }
LABEL_14:
        v16 = *((_DWORD *)v6 + 7);
        if ( v16 )
        {
          v17 = (PVOID *)(v6 + 104);
          do
          {
            if ( !*v17 )
              break;
            if ( !(unsigned int)ViFreeToContiguousMemory(a1, *v17, (unsigned int)(*((_DWORD *)v6 + 7) - v16)) )
              ExFreePoolWithTag(*v17, 0);
            v17 += 4;
            --v16;
          }
          while ( v16 );
        }
        if ( Mdl )
          IoFreeMdl(Mdl);
        v18 = (void *)*((_QWORD *)v6 + 9);
        if ( v18 )
          ExFreePoolWithTag(v18, 0);
        ExFreePoolWithTag(v6, 0);
      }
    }
  }
  return 0LL;
}
