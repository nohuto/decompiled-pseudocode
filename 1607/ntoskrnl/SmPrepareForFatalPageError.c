/*
 * XREFs of SmPrepareForFatalPageError @ 0x140221F94
 * Callers:
 *     ?StDmPageError@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@J@Z @ 0x14021EB48 (-StDmPageError@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@J@Z.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140024B8C (MmGetPhysicalAddress.c)
 *     MmUnmapLockedPages @ 0x140025890 (MmUnmapLockedPages.c)
 *     MmProbeAndLockPages @ 0x14002ECA0 (MmProbeAndLockPages.c)
 *     MmUnlockPages @ 0x140051600 (MmUnlockPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400DC0C0 (MmMapLockedPagesSpecifyCache.c)
 *     KeRegisterBugCheckReasonCallback @ 0x14012E220 (KeRegisterBugCheckReasonCallback.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SmPrepareForFatalPageError(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        int a5,
        unsigned int a6,
        __int64 a7,
        PVOID BaseAddress)
{
  __int16 v8; // bx
  struct _MDL *v9; // rdi
  char *v10; // r14
  int v11; // r13d
  __int64 v12; // r12
  struct _KBUGCHECK_REASON_CALLBACK_RECORD *PoolWithTag; // r15
  unsigned int v14; // ebx
  __int64 v15; // rbx
  struct _MDL *v16; // rax
  _DWORD *v17; // r12
  __int64 v18; // rcx

  v8 = a1;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0;
  v12 = a2;
  PoolWithTag = (struct _KBUGCHECK_REASON_CALLBACK_RECORD *)ExAllocatePoolWithTag(
                                                              NonPagedPoolNx,
                                                              a2 + 104LL,
                                                              0x50626D73u);
  if ( !PoolWithTag )
    goto LABEL_2;
  v15 = v8 & 0xFFF;
  v16 = (struct _MDL *)ExAllocatePoolWithTag(
                         NonPagedPoolNx,
                         8 * ((unsigned __int64)(v15 + v12 + 4095) >> 12) + 48,
                         0x50426D73u);
  v9 = v16;
  if ( !v16 )
    goto LABEL_2;
  v16->Next = 0LL;
  v16->Size = 8 * (((unsigned __int64)(v15 + v12 + 4095) >> 12) + 6);
  v16->MdlFlags = 0;
  v16->StartVa = (PVOID)(a1 & 0xFFFFFFFFFFFFF000uLL);
  v16->ByteOffset = a1 & 0xFFF;
  v16->ByteCount = v12;
  MmProbeAndLockPages(v16, 0, IoReadAccess);
  v11 = 1;
  v10 = (char *)((v9->MdlFlags & 5) != 0
               ? v9->MappedSystemVa
               : MmMapLockedPagesSpecifyCache(v9, 0, MmCached, 0LL, 0, 0x40000020u));
  if ( !v10 )
    goto LABEL_2;
  v17 = (_DWORD *)(((unsigned __int64)&PoolWithTag[1].Entry.Flink + 7) & 0xFFFFFFFFFFFFFFF8uLL);
  PoolWithTag->State = 0;
  memset(v17, 0, 0x40uLL);
  *v17 = 65539;
  v17[1] = a3;
  v17[2] = a4;
  v17[3] = a2;
  v17[4] = a5;
  v18 = (unsigned int)(a7 - a1);
  v17[5] = v18;
  *((_QWORD *)v17 + 3) = a6;
  *((_QWORD *)v17 + 4) = MmGetPhysicalAddress(&v10[v18]).QuadPart / 4096;
  *((_QWORD *)v17 + 5) = (((a7 & 0xFFF) + a3 + 4095LL) & 0xFFFFFFFFFFFFF000uLL) == 0x1000
                       ? -1LL
                       : MmGetPhysicalAddress(&v10[a3 - 1 + v17[5]]).QuadPart / 4096;
  *((_QWORD *)v17 + 6) = MmGetPhysicalAddress(BaseAddress).QuadPart / 4096;
  memmove(v17 + 14, v10, a2);
  if ( KeRegisterBugCheckReasonCallback(
         PoolWithTag,
         (PKBUGCHECK_REASON_CALLBACK_ROUTINE)SmFatalPageErrorDumpCallback,
         KbCallbackSecondaryDumpData,
         (PUCHAR)"nt!store memory compression") )
  {
    PoolWithTag = 0LL;
    v14 = 0;
  }
  else
  {
LABEL_2:
    v14 = -1073741670;
  }
  if ( v10 )
    MmUnmapLockedPages(v10, v9);
  if ( v11 )
    MmUnlockPages(v9);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return v14;
}
