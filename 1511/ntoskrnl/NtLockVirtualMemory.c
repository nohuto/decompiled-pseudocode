/*
 * XREFs of NtLockVirtualMemory @ 0x1400BB80C
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockVa @ 0x140021744 (MiUnlockVa.c)
 *     MiUnlockPageTableCharges @ 0x140021978 (MiUnlockPageTableCharges.c)
 *     MiLocateAddress @ 0x140038340 (MiLocateAddress.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiSwapWslEntries @ 0x140057020 (MiSwapWslEntries.c)
 *     MiLocateWsle @ 0x140058C00 (MiLocateWsle.c)
 *     MiGetNextPageTable @ 0x14005F080 (MiGetNextPageTable.c)
 *     MiVadPureReserve @ 0x140061050 (MiVadPureReserve.c)
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     MiLockPageTablePage @ 0x1400A81C0 (MiLockPageTablePage.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiRemoveEntryWsle @ 0x1400B7840 (MiRemoveEntryWsle.c)
 *     MiLockPageAndSetDirty @ 0x1400B820C (MiLockPageAndSetDirty.c)
 *     MiMakeSystemAddressValid @ 0x1400B82F0 (MiMakeSystemAddressValid.c)
 *     MiUpdateWorkingSetAgeDistribution @ 0x1400BAC08 (MiUpdateWorkingSetAgeDistribution.c)
 *     MI_GET_PAGING_FILE_OFFSET @ 0x1400BB740 (MI_GET_PAGING_FILE_OFFSET.c)
 *     KeShouldYieldProcessor @ 0x1400D54D0 (KeShouldYieldProcessor.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401CE7C4 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiUnlockVadRange @ 0x1403E8634 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1403E8728 (MiLockVadRange.c)
 *     MiLockUnlockCommon @ 0x1403E899C (MiLockUnlockCommon.c)
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
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r13
  PVOID PoolWithTag; // r12
  ULONG_PTR v11; // rsi
  unsigned __int64 v12; // r10
  NTSTATUS v13; // edi
  unsigned __int64 Address; // rdi
  unsigned __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // rcx
  _QWORD *v18; // rax
  volatile LONG *v19; // r14
  KIRQL v20; // al
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  KIRQL v24; // r12
  unsigned __int64 v25; // rcx
  _QWORD *v26; // rax
  int v27; // eax
  __int64 NextPageTable; // rax
  __int64 v29; // rdx
  _BYTE *v30; // rcx
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // rax
  ULONG_PTR v35; // rsi
  const signed __int64 *v36; // rbx
  __int64 *v37; // rsi
  __int64 v38; // rcx
  LOGICAL ShouldYieldProcessor; // eax
  PVOID v40; // rdi
  unsigned __int64 v41; // rax
  PVOID Object; // [rsp+40h] [rbp-118h] BYREF
  int v43; // [rsp+48h] [rbp-110h]
  int v44; // [rsp+4Ch] [rbp-10Ch]
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-108h]
  ULONG_PTR BugCheckParameter1; // [rsp+58h] [rbp-100h]
  int v47; // [rsp+60h] [rbp-F8h]
  ULONG_PTR v48; // [rsp+68h] [rbp-F0h]
  PVOID P; // [rsp+70h] [rbp-E8h]
  unsigned __int64 v50; // [rsp+78h] [rbp-E0h]
  unsigned __int64 v51; // [rsp+80h] [rbp-D8h] BYREF
  unsigned __int64 v52; // [rsp+88h] [rbp-D0h]
  unsigned __int64 v53; // [rsp+90h] [rbp-C8h]
  unsigned __int64 v54; // [rsp+98h] [rbp-C0h]
  ULONG_PTR v55; // [rsp+A0h] [rbp-B8h]
  ULONG_PTR Wsle; // [rsp+A8h] [rbp-B0h]
  int v57; // [rsp+B0h] [rbp-A8h] BYREF
  __int64 *v58; // [rsp+B8h] [rbp-A0h]
  int *v59; // [rsp+C0h] [rbp-98h]
  PSIZE_T v60; // [rsp+C8h] [rbp-90h]
  __int64 v61; // [rsp+D0h] [rbp-88h] BYREF
  PVOID *v62; // [rsp+D8h] [rbp-80h]
  __int64 v63; // [rsp+E0h] [rbp-78h] BYREF
  $D4FCF91253F76F57393CBFE908971F67 v64; // [rsp+E8h] [rbp-70h] BYREF

  v60 = NumberOfBytesToLock;
  v62 = BaseAddress;
  v5 = 0;
  v43 = 0;
  v44 = 0;
  result = MiLockUnlockCommon(ProcessHandle, (__int64)&v51, (__int64)&v63, (__int64)&Object);
  if ( result < 0 )
    return result;
  v52 = (v51 + v63 - 1) & 0xFFFFFFFFFFFFF000uLL;
  v7 = v51 & 0xFFFFFFFFFFFFF000uLL;
  BugCheckParameter2 = v51 & 0xFFFFFFFFFFFFF000uLL;
  v8 = ((v52 - (v51 & 0xFFFFFFFFFFFFF000uLL)) >> 12) + 1;
  v9 = 0LL;
  v48 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * (((v8 & 0x3F) != 0) + (v8 >> 6)), 0x6B6C6D4Du);
  P = PoolWithTag;
  if ( !PoolWithTag )
  {
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
    return -1073741670;
  }
  memset(PoolWithTag, 0, 4 * ((v8 >> 5) + ((v8 & 0x1F) != 0)));
  if ( ProcessHandle != (HANDLE)-1LL )
  {
    KiStackAttachProcess((_KPROCESS *)Object, 0LL, (__int64)&v64);
    v5 = 2;
    v43 = 2;
    v44 = 2;
  }
  BugCheckParameter1 = ((v51 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v50 = v7;
  v11 = v52;
  v54 = ((v52 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = MiLockVadRange(Object, v7, v52);
  v53 = v12;
  if ( !v12 )
  {
    v13 = -1073741819;
LABEL_64:
    MiUnlockVadRange(Object, v50, v12);
    if ( (v5 & 2) != 0 )
      KiUnstackDetachProcess(&v64, 0LL);
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
    ExFreePoolWithTag(PoolWithTag, 0);
    return v13;
  }
  Address = MiLocateAddress(v7);
  v15 = Address;
  v16 = 0LL;
  if ( v12 )
  {
    while ( ((1 << (*(_BYTE *)(v15 + 48) & 7)) & 0x15) != 0 )
    {
      v17 = v15;
      v18 = *(_QWORD **)(v15 + 8);
      if ( v18 )
      {
        do
        {
          v15 = (unsigned __int64)v18;
          v18 = (_QWORD *)*v18;
        }
        while ( v18 );
      }
      else
      {
        while ( 1 )
        {
          v15 = *(_QWORD *)(v15 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v15 || *(_QWORD *)v15 == v17 )
            break;
          v17 = v15;
        }
      }
      if ( ++v16 >= v12 )
        goto LABEL_19;
    }
    v13 = -1073741747;
    goto LABEL_64;
  }
LABEL_19:
  v47 = MiVadPureReserve(Address);
  v19 = (volatile LONG *)((char *)Object + 1280);
LABEL_20:
  v20 = ExAcquireSpinLockExclusive(v19);
LABEL_21:
  v24 = v20;
  while ( BugCheckParameter2 <= v11 )
  {
    if ( BugCheckParameter2 >> 12 <= (*(unsigned int *)(Address + 28) | ((unsigned __int64)*(unsigned __int8 *)(Address + 33) << 32)) )
    {
      v27 = v47;
    }
    else
    {
      v25 = Address;
      v26 = *(_QWORD **)(Address + 8);
      if ( v26 )
      {
        do
        {
          Address = (unsigned __int64)v26;
          v26 = (_QWORD *)*v26;
        }
        while ( v26 );
      }
      else
      {
        while ( 1 )
        {
          Address = *(_QWORD *)(Address + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !Address || *(_QWORD *)Address == v25 )
            break;
          v25 = Address;
        }
      }
      v27 = MiVadPureReserve(Address);
      v47 = v27;
    }
    LOBYTE(v23) = v24;
    if ( v27 )
    {
      NextPageTable = MiGetNextPageTable(BugCheckParameter1, v54, 0LL, v23, 4, &v57);
      v30 = (_BYTE *)BugCheckParameter1;
      if ( NextPageTable != BugCheckParameter1 )
      {
        v13 = -1073741819;
        goto LABEL_53;
      }
    }
    else
    {
      MiMakeSystemAddressValid(BugCheckParameter1, 0LL, (*(_DWORD *)(Address + 48) >> 8) & 0x3F, v24, 1);
      v30 = (_BYTE *)BugCheckParameter1;
    }
    if ( (*v30 & 1) == 0 )
    {
      LOBYTE(v29) = v24;
      MiUnlockWorkingSetExclusive((__int64)v19, v29, v22);
      goto LABEL_20;
    }
    v61 = MI_READ_PTE_LOCK_FREE(v30);
    v31 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v61) - 0x58000000000LL;
    Wsle = MiLocateWsle(BugCheckParameter2, (__int64)v19, *(_QWORD *)v31);
    v21 = 0xFFFFF58010804000uLL;
    v55 = MEMORY[0xFFFFF58010804008];
    if ( Wsle < MEMORY[0xFFFFF58010804008] )
    {
      v5 |= 1u;
      v43 = v5;
      v44 = v5;
    }
    else
    {
      v58 = (__int64 *)(MEMORY[0xFFFFF58010804008] * MEMORY[0xFFFFF58010804040] - 0xA7FEF7FBCB0LL);
      v29 = MEMORY[0xFFFFF58010804008] + 6LL;
      if ( (unsigned __int64)(MEMORY[0xFFFFF58010804008] + 6LL) >= *((_QWORD *)Object + 172) )
      {
        v13 = -1073741663;
        goto LABEL_53;
      }
      if ( (*(_QWORD *)(v31 + 40) & 0x200000000000000LL) != 0 && !(unsigned int)MiLockPageTablePage(v31, 1uLL) )
        goto LABEL_43;
      v48 = MI_GET_PFN_FROM_PTE(((BugCheckParameter2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
      if ( !(unsigned int)MiLockPageTablePage(v48, 0LL) )
      {
        v32 = *(_QWORD *)(v31 + 40);
        if ( (v32 & 0x200000000000000LL) != 0 )
          MiUnlockPageTableCharges(48 * (v32 & 0xFFFFFFFFFLL) - 0x58000000000LL, 2u, 0);
LABEL_43:
        v13 = -1073741670;
LABEL_53:
        if ( v9 )
        {
          v35 = v50 + (v9 << 12);
          v36 = (const signed __int64 *)P;
          do
          {
            --v9;
            v35 -= 4096LL;
            if ( _bittest64(v36, v9) == 1 )
              MiUnlockVa((__int64)v19, v35);
            if ( (v9 & 0xF) == 0 && (*v19 & 0x40000000) != 0 || KeShouldYieldProcessor() )
            {
              LOBYTE(v29) = v24;
              MiUnlockWorkingSetExclusive((__int64)v19, v29, v22);
              v24 = ExAcquireSpinLockExclusive(v19);
            }
          }
          while ( v9 );
          LOBYTE(v5) = v43;
        }
        LOBYTE(v29) = v24;
        MiUnlockWorkingSetExclusive((__int64)v19, v29, v22);
        PoolWithTag = P;
        v12 = v53;
        goto LABEL_64;
      }
      if ( (*(_DWORD *)(v31 + 16) & 0x400LL) != 0 )
      {
        v34 = *(_QWORD *)(v31 + 40);
        if ( (v34 & 0x200000000000000LL) != 0 )
        {
          v59 = MiPartitionIdToPointer((HIDWORD(v34) >> 8) & 0x3FF);
          if ( !(unsigned int)MiChargeCommit((unsigned __int64)v59, 1uLL, 0LL) )
          {
            MiUnlockPageTableCharges(v48, 2u, 1);
            MiUnlockPageTableCharges(48 * (*(_QWORD *)(v31 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL, 2u, 0);
            v13 = -1073741523;
            goto LABEL_53;
          }
          _InterlockedAdd64((volatile signed __int64 *)v59 + 768, 1uLL);
        }
      }
      else if ( (unsigned int)MI_GET_PAGING_FILE_OFFSET(v31 + 16) )
      {
        MiLockPageAndSetDirty(v31, 1LL, v33);
      }
      if ( Wsle != v55 )
        MiSwapWslEntries(Wsle, v55, (ULONG_PTR)v19);
      v37 = v58;
      MiRemoveEntryWsle(0xFFFFF58010804000uLL, v58);
      ++*(_QWORD *)(v38 + 8);
      _bittestandset64((signed __int64 *)P, v9);
      MiUpdateWorkingSetAgeDistribution((__int64)v19, (*(_DWORD *)v37 >> 9) & 7, -1LL);
    }
    v48 = ++v9;
    BugCheckParameter1 += 8LL;
    BugCheckParameter2 += 4096LL;
    if ( (BugCheckParameter1 & 0x78) != 0 || (*v19 & 0x40000000) == 0 )
    {
      ShouldYieldProcessor = KeShouldYieldProcessor();
      v11 = v52;
      if ( !ShouldYieldProcessor )
        continue;
    }
    LOBYTE(v21) = v24;
    MiUnlockWorkingSetExclusive((__int64)v19, v21, v22);
    v20 = ExAcquireSpinLockExclusive(v19);
    v11 = v52;
    goto LABEL_21;
  }
  v40 = Object;
  LOBYTE(v21) = v24;
  MiUnlockWorkingSetExclusive((__int64)Object + 1280, v21, v22);
  MiUnlockVadRange(v40, v50, v53);
  if ( (v5 & 2) != 0 )
    KiUnstackDetachProcess(&v64, 0LL);
  ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  ExFreePoolWithTag(P, 0);
  v41 = v51 & 0xFFFFFFFFFFFFF000uLL;
  *v60 = v11 - (v51 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  *v62 = (PVOID)v41;
  return (v5 & 1) != 0 ? 0x40000019 : 0;
}
