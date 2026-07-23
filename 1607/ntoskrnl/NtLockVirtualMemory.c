/*
 * XREFs of NtLockVirtualMemory @ 0x1400B8D58
 * Callers:
 *     <none>
 * Callees:
 *     MiLockPageAndSetDirty @ 0x1400150F8 (MiLockPageAndSetDirty.c)
 *     MiMakeSystemAddressValid @ 0x14001592C (MiMakeSystemAddressValid.c)
 *     MiLocateAddress @ 0x14001EC10 (MiLocateAddress.c)
 *     MiChargeCommit @ 0x14002B1D0 (MiChargeCommit.c)
 *     MiVadPureReserve @ 0x14002B610 (MiVadPureReserve.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiLockWorkingSetExclusive @ 0x14002E580 (MiLockWorkingSetExclusive.c)
 *     MiLockPageTablePage @ 0x1400300B0 (MiLockPageTablePage.c)
 *     MiGetNextPageTable @ 0x140043470 (MiGetNextPageTable.c)
 *     MiLocateWsle @ 0x1400466D0 (MiLocateWsle.c)
 *     MiSwapWslEntries @ 0x1400499F0 (MiSwapWslEntries.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KeShouldYieldProcessor @ 0x140094EC0 (KeShouldYieldProcessor.c)
 *     MiGetPagingFileOffset @ 0x1400B7610 (MiGetPagingFileOffset.c)
 *     MiWorkingSetIsContended @ 0x1400B8870 (MiWorkingSetIsContended.c)
 *     MiUnlockVa @ 0x1400B88A0 (MiUnlockVa.c)
 *     MiUnlockPageTableCharges @ 0x1400B8AD8 (MiUnlockPageTableCharges.c)
 *     MiUpdateWorkingSetAgeDistribution @ 0x1400BA3CC (MiUpdateWorkingSetAgeDistribution.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     MiRemoveEntryWsle @ 0x1400E0420 (MiRemoveEntryWsle.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401F23C0 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiRelockWorkingSetExclusive @ 0x1401F2918 (MiRelockWorkingSetExclusive.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MiUnlockVadRange @ 0x1404D6774 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1404D6868 (MiLockVadRange.c)
 *     MiLockUnlockCommon @ 0x1404D6AD4 (MiLockUnlockCommon.c)
 */

NTSTATUS __stdcall NtLockVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T NumberOfBytesToLock,
        ULONG MapType)
{
  int v5; // ebx
  NTSTATUS result; // eax
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r12
  PVOID PoolWithTag; // rcx
  ULONG_PTR v12; // rsi
  unsigned __int64 v13; // r10
  NTSTATUS v14; // edi
  unsigned __int64 Address; // rdi
  unsigned __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rcx
  _QWORD *v19; // rax
  char *v20; // r14
  __int64 v21; // rdx
  __int64 v22; // r9
  KIRQL v23; // r13
  unsigned __int64 v24; // rcx
  _QWORD *v25; // rax
  int v26; // eax
  __int64 NextPageTable; // rax
  __int64 v28; // rdx
  _BYTE *v29; // rcx
  __int64 v30; // rsi
  unsigned __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  ULONG_PTR v34; // rsi
  const signed __int64 *v35; // rbx
  _DWORD *v36; // rsi
  LOGICAL ShouldYieldProcessor; // eax
  unsigned __int64 v38; // rax
  char v39; // [rsp+40h] [rbp-138h]
  PVOID Object; // [rsp+48h] [rbp-130h] BYREF
  int v41; // [rsp+50h] [rbp-128h]
  ULONG_PTR BugCheckParameter4; // [rsp+58h] [rbp-120h]
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-118h]
  int v44; // [rsp+68h] [rbp-110h]
  PVOID P; // [rsp+70h] [rbp-108h]
  ULONG_PTR v46; // [rsp+78h] [rbp-100h]
  unsigned __int64 v47; // [rsp+80h] [rbp-F8h]
  unsigned __int64 v48; // [rsp+88h] [rbp-F0h]
  __int64 v49; // [rsp+90h] [rbp-E8h]
  unsigned __int64 v50; // [rsp+A0h] [rbp-D8h]
  __int64 v51; // [rsp+A8h] [rbp-D0h] BYREF
  int v52; // [rsp+B0h] [rbp-C8h] BYREF
  __int64 v53; // [rsp+B8h] [rbp-C0h] BYREF
  unsigned __int64 v54; // [rsp+C0h] [rbp-B8h]
  char *v55; // [rsp+C8h] [rbp-B0h]
  __int64 v56; // [rsp+D0h] [rbp-A8h] BYREF
  int *v57; // [rsp+D8h] [rbp-A0h]
  unsigned __int64 v58; // [rsp+E0h] [rbp-98h]
  ULONG_PTR Wsle; // [rsp+E8h] [rbp-90h]
  _DWORD *v60; // [rsp+F0h] [rbp-88h]
  PSIZE_T v61; // [rsp+F8h] [rbp-80h]
  PVOID *v62; // [rsp+100h] [rbp-78h]
  _BYTE v63[48]; // [rsp+108h] [rbp-70h] BYREF

  v61 = NumberOfBytesToLock;
  v62 = BaseAddress;
  v5 = 0;
  v39 = 0;
  v41 = 0;
  result = MiLockUnlockCommon(ProcessHandle, (__int64)&v51, (__int64)&v53, (__int64)&Object);
  if ( result < 0 )
    return result;
  v7 = v51;
  v47 = (v51 + v53 - 1) & 0xFFFFFFFFFFFFF000uLL;
  v8 = v51 & 0xFFFFFFFFFFFFF000uLL;
  BugCheckParameter2 = v51 & 0xFFFFFFFFFFFFF000uLL;
  v9 = ((v47 - (v51 & 0xFFFFFFFFFFFFF000uLL)) >> 12) + 1;
  v49 = qword_140327FD0;
  v10 = 0LL;
  v46 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * (((v9 & 0x3F) != 0) + (v9 >> 6)), 0x6B6C6D4Du);
  P = PoolWithTag;
  if ( !PoolWithTag )
  {
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
    return -1073741670;
  }
  memset(PoolWithTag, 0, 4 * ((v9 >> 5) + ((v9 & 0x1F) != 0)));
  if ( ProcessHandle != (HANDLE)-1LL )
  {
    KiStackAttachProcess((ULONG_PTR)Object);
    v5 = 2;
    v39 = 2;
    v41 = 2;
  }
  BugCheckParameter4 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v48 = v8;
  v12 = v47;
  v54 = ((v47 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = MiLockVadRange(Object, v8, v47);
  v50 = v13;
  if ( !v13 )
  {
    v14 = -1073741819;
LABEL_63:
    MiUnlockVadRange(Object, v48, v13);
    if ( (v5 & 2) != 0 )
      KiUnstackDetachProcess(v63, 0LL);
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
    ExFreePoolWithTag(P, 0);
    return v14;
  }
  Address = MiLocateAddress(v8);
  v16 = Address;
  v17 = 0LL;
  if ( v13 )
  {
    while ( ((1 << (*(_BYTE *)(v16 + 48) & 7)) & 0x15) != 0 )
    {
      v18 = v16;
      v19 = *(_QWORD **)(v16 + 8);
      if ( v19 )
      {
        do
        {
          v16 = (unsigned __int64)v19;
          v19 = (_QWORD *)*v19;
        }
        while ( v19 );
      }
      else
      {
        while ( 1 )
        {
          v16 = *(_QWORD *)(v16 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v16 || *(_QWORD *)v16 == v18 )
            break;
          v18 = v16;
        }
      }
      if ( ++v17 >= v13 )
        goto LABEL_19;
    }
    v14 = -1073741747;
    goto LABEL_63;
  }
LABEL_19:
  v44 = MiVadPureReserve(Address);
  v20 = (char *)Object + 1280;
  v55 = (char *)Object + 1280;
LABEL_20:
  v23 = MiLockWorkingSetExclusive((__int64)v20);
  while ( BugCheckParameter2 <= v12 )
  {
    if ( BugCheckParameter2 >> 12 <= (*(unsigned int *)(Address + 28) | ((unsigned __int64)*(unsigned __int8 *)(Address + 33) << 32)) )
    {
      v26 = v44;
    }
    else
    {
      v24 = Address;
      v25 = *(_QWORD **)(Address + 8);
      if ( v25 )
      {
        do
        {
          Address = (unsigned __int64)v25;
          v25 = (_QWORD *)*v25;
        }
        while ( v25 );
      }
      else
      {
        while ( 1 )
        {
          Address = *(_QWORD *)(Address + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !Address || *(_QWORD *)Address == v24 )
            break;
          v24 = Address;
        }
      }
      v26 = MiVadPureReserve(Address);
      v44 = v26;
    }
    LOBYTE(v22) = v23;
    if ( v26 )
    {
      NextPageTable = MiGetNextPageTable(BugCheckParameter4, v54, 0LL, v22, 4, &v52);
      v29 = (_BYTE *)BugCheckParameter4;
      if ( NextPageTable != BugCheckParameter4 )
      {
        v14 = -1073741819;
        goto LABEL_52;
      }
    }
    else
    {
      MiMakeSystemAddressValid(BugCheckParameter4, 0LL, (*(_DWORD *)(Address + 48) >> 8) & 0x3F, v23, 1);
      v29 = (_BYTE *)BugCheckParameter4;
    }
    if ( (*v29 & 1) == 0 )
    {
      LOBYTE(v28) = v23;
      MiUnlockWorkingSetExclusive((__int64)v20, v28);
      goto LABEL_20;
    }
    v56 = MI_READ_PTE_LOCK_FREE(v29);
    v30 = MI_GET_PFN_FROM_PTE(&v56);
    Wsle = MiLocateWsle(BugCheckParameter2, (__int64)v20, *(_QWORD *)v30);
    v31 = *(_QWORD *)(v49 + 276841240);
    v58 = v31;
    if ( Wsle < v31 )
    {
      v5 |= 1u;
      v39 = v5;
      v41 = v5;
    }
    else
    {
      v28 = *(_QWORD *)(qword_140327FD0 + 276841312) + v31 * *(unsigned int *)(v49 + 276841264);
      v60 = (_DWORD *)v28;
      if ( v31 + 6 >= *((_QWORD *)v20 + 13) )
      {
        v14 = -1073741663;
        goto LABEL_52;
      }
      if ( (*(_QWORD *)(v30 + 40) & 0x200000000000000LL) != 0 && !(unsigned int)MiLockPageTablePage(v30, 1) )
        goto LABEL_42;
      v46 = MI_GET_PFN_FROM_PTE(((BugCheckParameter2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
      if ( !(unsigned int)MiLockPageTablePage(v46, 0) )
      {
        v32 = *(_QWORD *)(v30 + 40);
        if ( (v32 & 0x200000000000000LL) != 0 )
          MiUnlockPageTableCharges(48 * (v32 & 0xFFFFFFFFFLL) - 0x58000000000LL, 2u, 0);
LABEL_42:
        v14 = -1073741670;
LABEL_52:
        if ( v10 )
        {
          v34 = v48 + (v10 << 12);
          v35 = (const signed __int64 *)P;
          do
          {
            --v10;
            v34 -= 4096LL;
            if ( _bittest64(v35, v10) == 1 )
              MiUnlockVa((__int64)v20, v34);
            if ( (v10 & 0xF) == 0 && MiWorkingSetIsContended((__int64)v20) || KeShouldYieldProcessor() )
            {
              LOBYTE(v28) = v23;
              MiRelockWorkingSetExclusive(v20, v28);
            }
          }
          while ( v10 );
          LOBYTE(v5) = v39;
        }
        LOBYTE(v28) = v23;
        MiUnlockWorkingSetExclusive((__int64)v20, v28);
        v13 = v50;
        goto LABEL_63;
      }
      if ( (*(_DWORD *)(v30 + 16) & 0x400LL) != 0 )
      {
        v33 = *(_QWORD *)(v30 + 40);
        if ( (v33 & 0x200000000000000LL) != 0 )
        {
          v57 = MiPartitionIdToPointer((HIDWORD(v33) >> 8) & 0x3FF);
          if ( !(unsigned int)MiChargeCommit((__int64)v57, 1uLL, 0) )
          {
            MiUnlockPageTableCharges(v46, 2u, 1);
            MiUnlockPageTableCharges(48 * (*(_QWORD *)(v30 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL, 2u, 0);
            v14 = -1073741523;
            goto LABEL_52;
          }
          _InterlockedAdd64((volatile signed __int64 *)v57 + 920, 1uLL);
        }
      }
      else if ( (unsigned int)MiGetPagingFileOffset(v30 + 16) )
      {
        MiLockPageAndSetDirty(v30, 1);
      }
      if ( Wsle != v58 )
        MiSwapWslEntries(Wsle, v58, (ULONG_PTR)v20);
      v36 = v60;
      MiRemoveEntryWsle(v20, v60);
      ++*(_QWORD *)(v49 + 276841240);
      _bittestandset64((signed __int64 *)P, v10);
      MiUpdateWorkingSetAgeDistribution(v20, (*v36 >> 9) & 7, -1LL);
    }
    v46 = ++v10;
    BugCheckParameter4 += 8LL;
    BugCheckParameter2 += 4096LL;
    if ( (BugCheckParameter4 & 0x78) != 0 || !MiWorkingSetIsContended((__int64)v20) )
    {
      ShouldYieldProcessor = KeShouldYieldProcessor();
      v12 = v47;
      if ( !ShouldYieldProcessor )
        continue;
    }
    LOBYTE(v21) = v23;
    MiRelockWorkingSetExclusive(v20, v21);
    v12 = v47;
  }
  LOBYTE(v21) = v23;
  MiUnlockWorkingSetExclusive((__int64)v20, v21);
  MiUnlockVadRange(Object, v48, v50);
  if ( (v5 & 2) != 0 )
    KiUnstackDetachProcess(v63, 0LL);
  ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  ExFreePoolWithTag(P, 0);
  v38 = v51 & 0xFFFFFFFFFFFFF000uLL;
  *v61 = v12 - (v51 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  *v62 = (PVOID)v38;
  return (v5 & 1) != 0 ? 0x40000019 : 0;
}
