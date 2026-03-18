/*
 * XREFs of NtLockVirtualMemory @ 0x1400FD8C4
 * Callers:
 *     <none>
 * Callees:
 *     MiLockPageTablePage @ 0x140035180 (MiLockPageTablePage.c)
 *     MiGetNextPageTable @ 0x14003BAA0 (MiGetNextPageTable.c)
 *     MiLockPageAndSetDirty @ 0x14003C7B8 (MiLockPageAndSetDirty.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiMakeSystemAddressValid @ 0x14005E6FC (MiMakeSystemAddressValid.c)
 *     MiUnlockVa @ 0x14007C98C (MiUnlockVa.c)
 *     MiUnlockPageTableCharges @ 0x14007CC10 (MiUnlockPageTableCharges.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUpdateWorkingSetAgeDistribution @ 0x1400808F0 (MiUpdateWorkingSetAgeDistribution.c)
 *     MiLocateAddress @ 0x1400898F0 (MiLocateAddress.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     MiVadPureReserve @ 0x14008F840 (MiVadPureReserve.c)
 *     MiLocateWsle @ 0x140095350 (MiLocateWsle.c)
 *     MiSwapWslEntries @ 0x140097790 (MiSwapWslEntries.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     MiRemoveEntryWsle @ 0x1400AFC70 (MiRemoveEntryWsle.c)
 *     KeShouldYieldProcessor @ 0x14010B540 (KeShouldYieldProcessor.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     memset @ 0x140195A80 (memset.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     MiUnlockVadRange @ 0x1404B1B2C (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1404B1C28 (MiLockVadRange.c)
 *     MiLockUnlockCommon @ 0x1404B1E84 (MiLockUnlockCommon.c)
 */

NTSTATUS __stdcall NtLockVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T NumberOfBytesToLock,
        ULONG MapType)
{
  int v5; // ebx
  NTSTATUS result; // eax
  ULONG_PTR v7; // r14
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rdi
  PVOID PoolWithTag; // r13
  unsigned __int64 v11; // rdi
  NTSTATUS v12; // edi
  __int64 Address; // r15
  unsigned __int64 v14; // r8
  unsigned __int64 i; // r9
  unsigned __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // r9
  volatile signed __int32 *v19; // rdi
  unsigned __int8 CurrentIrql; // r13
  signed __int32 v21; // edx
  __int64 v22; // rcx
  _QWORD *v23; // rax
  int v24; // eax
  unsigned __int64 PteShadow; // rcx
  volatile signed __int32 *v26; // rdi
  signed __int32 j; // edx
  __int64 v28; // rcx
  unsigned __int64 v29; // rdi
  __int64 v30; // r10
  unsigned __int64 v31; // r9
  __int64 v32; // rsi
  _QWORD *v33; // rdi
  volatile signed __int32 *v34; // r14
  __int64 v35; // r8
  __int64 *v36; // r9
  unsigned __int64 *v37; // rcx
  unsigned __int64 v38; // rdx
  __int64 v39; // rax
  _QWORD *v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  __int16 *v43; // rdi
  unsigned __int64 v44; // r15
  ULONG_PTR v45; // r14
  const signed __int64 *v46; // rdi
  volatile signed __int32 *v47; // rsi
  signed __int32 k; // edx
  __int64 v49; // rcx
  __int64 *v50; // rdi
  __int64 v51; // rcx
  signed __int32 m; // edx
  __int64 v53; // rcx
  PVOID v54; // rdi
  unsigned __int64 v55; // rax
  __int64 v56; // rcx
  int v57; // [rsp+40h] [rbp-138h]
  NTSTATUS v58; // [rsp+40h] [rbp-138h]
  PVOID Object; // [rsp+48h] [rbp-130h] BYREF
  int v60; // [rsp+50h] [rbp-128h]
  unsigned __int64 v61; // [rsp+58h] [rbp-120h]
  int v62; // [rsp+60h] [rbp-118h]
  int v63; // [rsp+64h] [rbp-114h]
  int v64; // [rsp+6Ch] [rbp-10Ch]
  int v65; // [rsp+70h] [rbp-108h]
  int v66; // [rsp+74h] [rbp-104h]
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-100h]
  PVOID P; // [rsp+80h] [rbp-F8h]
  ULONG_PTR v69; // [rsp+88h] [rbp-F0h]
  unsigned __int64 v70; // [rsp+90h] [rbp-E8h]
  unsigned __int64 v71; // [rsp+98h] [rbp-E0h]
  __int64 v72; // [rsp+A0h] [rbp-D8h] BYREF
  unsigned __int64 v73; // [rsp+A8h] [rbp-D0h]
  unsigned __int64 v74; // [rsp+B0h] [rbp-C8h] BYREF
  ULONG_PTR v75; // [rsp+B8h] [rbp-C0h]
  ULONG_PTR v76; // [rsp+C0h] [rbp-B8h]
  ULONG_PTR Wsle; // [rsp+C8h] [rbp-B0h]
  __int64 *v78; // [rsp+D0h] [rbp-A8h]
  unsigned __int64 v79; // [rsp+D8h] [rbp-A0h]
  PSIZE_T v80; // [rsp+E0h] [rbp-98h]
  __int64 v81; // [rsp+E8h] [rbp-90h] BYREF
  PVOID *v82; // [rsp+F0h] [rbp-88h]
  int v83; // [rsp+F8h] [rbp-80h] BYREF
  _BYTE v84[48]; // [rsp+100h] [rbp-78h] BYREF

  v80 = NumberOfBytesToLock;
  v82 = BaseAddress;
  v5 = 0;
  v60 = 0;
  v62 = 0;
  result = MiLockUnlockCommon(ProcessHandle, (__int64)&v72, (__int64)&v81, (__int64)&Object);
  if ( result >= 0 )
  {
    v7 = (v72 + v81 - 1) & 0xFFFFFFFFFFFFF000uLL;
    v75 = v7;
    v8 = v72 & 0xFFFFFFFFFFFFF000uLL;
    BugCheckParameter2 = v72 & 0xFFFFFFFFFFFFF000uLL;
    v9 = ((v7 - (v72 & 0xFFFFFFFFFFFFF000uLL)) >> 12) + 1;
    v61 = 0LL;
    v69 = 0LL;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * (((v9 & 0x3F) != 0) + (v9 >> 6)), 0x6B6C6D4Du);
    P = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 4 * ((v9 >> 5) + ((v9 & 0x1F) != 0)));
      if ( ProcessHandle != (HANDLE)-1LL )
      {
        KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v84);
        v5 = 2;
        v60 = 2;
        v62 = 2;
      }
      v70 = (((unsigned __int64)v72 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v71 = v8;
      v79 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v11 = MiLockVadRange(Object, v8, v7);
      v73 = v11;
      if ( v11 )
      {
        Address = (__int64)MiLocateAddress(v8);
        v14 = Address;
        for ( i = 0LL; i < v11; ++i )
        {
          if ( ((1 << (*(_BYTE *)(v14 + 48) & 7)) & 0x15) == 0 )
          {
            v12 = -1073741747;
            goto LABEL_99;
          }
          v16 = v14;
          v17 = *(_QWORD **)(v14 + 8);
          if ( v17 )
          {
            do
            {
              v14 = (unsigned __int64)v17;
              v17 = (_QWORD *)*v17;
            }
            while ( v17 );
          }
          else
          {
            while ( 1 )
            {
              v14 = *(_QWORD *)(v14 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
              if ( !v14 || *(_QWORD *)v14 == v16 )
                break;
              v16 = v14;
            }
          }
        }
        v57 = MiVadPureReserve(Address);
        v19 = (volatile signed __int32 *)((char *)Object + 1272);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented((char *)Object + 1272);
        }
        else
        {
          v63 = 0;
          if ( _interlockedbittestandset(v19, 0x1Fu) )
            v63 = ExpWaitForSpinLockExclusiveAndAcquire(v19);
          while ( 1 )
          {
            v21 = *v19;
            if ( (*v19 & 0xBFFFFFFF) == 0x80000000 )
              break;
            if ( (v21 & 0x40000000) == 0 )
              _InterlockedCompareExchange(v19, v21 | 0x40000000, v21);
            v56 = (unsigned int)(v63 + 1);
            v63 = v56;
            if ( ((unsigned int)v56 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v56);
          }
        }
LABEL_53:
        v29 = v70;
        while ( BugCheckParameter2 <= v7 )
        {
          if ( BugCheckParameter2 >> 12 <= (*(unsigned int *)(Address + 28) | ((unsigned __int64)*(unsigned __int8 *)(Address + 33) << 32)) )
          {
            v24 = v57;
          }
          else
          {
            v22 = Address;
            v23 = *(_QWORD **)(Address + 8);
            if ( v23 )
            {
              do
              {
                Address = (__int64)v23;
                v23 = (_QWORD *)*v23;
              }
              while ( v23 );
            }
            else
            {
              while ( 1 )
              {
                Address = *(_QWORD *)(Address + 16) & 0xFFFFFFFFFFFFFFFCuLL;
                if ( !Address || *(_QWORD *)Address == v22 )
                  break;
                v22 = Address;
              }
            }
            v24 = MiVadPureReserve(Address);
            v57 = v24;
          }
          LOBYTE(v18) = CurrentIrql;
          if ( v24 )
          {
            if ( MiGetNextPageTable(v29, v79, 0LL, v18, 1, &v83) != v29 )
            {
              v12 = -1073741819;
              goto LABEL_77;
            }
          }
          else
          {
            MiMakeSystemAddressValid(v29, 0LL, (*(_DWORD *)(Address + 48) >> 8) & 0x3F, CurrentIrql, 1);
          }
          PteShadow = *(_QWORD *)v29;
          if ( (*(_QWORD *)v29 & 1) == 0 )
          {
            v26 = (volatile signed __int32 *)((char *)Object + 1272);
            MiUnlockWorkingSetExclusive((__int64)Object + 1272, CurrentIrql);
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v26);
            }
            else
            {
              v66 = 0;
              if ( _interlockedbittestandset(v26, 0x1Fu) )
                v66 = ExpWaitForSpinLockExclusiveAndAcquire(v26);
              for ( j = *v26; (*v26 & 0xBFFFFFFF) != 0x80000000; j = *v26 )
              {
                if ( (j & 0x40000000) == 0 )
                  _InterlockedCompareExchange(v26, j | 0x40000000, j);
                v28 = (unsigned int)(v66 + 1);
                v66 = v28;
                if ( ((unsigned int)v28 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                  _mm_pause();
                else
                  HvlNotifyLongSpinWait(v28);
              }
            }
            goto LABEL_53;
          }
          v30 = 0x90482413000LL;
          v31 = 2040LL;
          if ( v29 + 0x90482413000LL <= 0x7F8 )
            PteShadow = MiReadPteShadow(v29, *(_QWORD *)v29);
          v74 = PteShadow;
          if ( (unsigned __int64)&v74 + v30 <= v31 )
            PteShadow = MiReadPteShadow(&v74, PteShadow);
          v32 = 48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          v33 = Object;
          v34 = (volatile signed __int32 *)((char *)Object + 1272);
          Wsle = MiLocateWsle(BugCheckParameter2, (__int64)Object + 1272, *(_QWORD *)v32);
          v76 = MEMORY[0xFFFFF58010804008];
          if ( Wsle < MEMORY[0xFFFFF58010804008] )
          {
            v5 |= 1u;
            v60 = v5;
            v62 = v5;
          }
          else
          {
            v78 = (__int64 *)(MEMORY[0xFFFFF58010804008] * MEMORY[0xFFFFF58010804040] - 0xA7FEF7FBD00LL);
            if ( (unsigned __int64)(MEMORY[0xFFFFF58010804008] + 6LL) >= v33[171] )
            {
              v12 = -1073741663;
              goto LABEL_77;
            }
            if ( (*(_QWORD *)(v32 + 40) & 0x200000000000000LL) != 0
              && !(unsigned int)MiLockPageTablePage(v32, 1, v35, v36) )
            {
              goto LABEL_63;
            }
            v37 = (unsigned __int64 *)(((BugCheckParameter2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
            v38 = *v37;
            if ( (unsigned __int64)(v37 + 0x12090482600LL) <= 0x7F8 )
              v38 = MiReadPteShadow(v37, v38);
            v69 = 48 * ((v38 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
            if ( !(unsigned int)MiLockPageTablePage(v69, 0, v35, v36) )
            {
              v39 = *(_QWORD *)(v32 + 40);
              if ( (v39 & 0x200000000000000LL) != 0 )
                MiUnlockPageTableCharges(48 * (v39 & 0xFFFFFFFFFLL) - 0x58000000000LL, 2u, 0);
LABEL_63:
              v12 = -1073741670;
LABEL_77:
              v58 = v12;
              v44 = v61;
              if ( v61 )
              {
                v45 = v71 + (v61 << 12);
                v46 = (const signed __int64 *)P;
                do
                {
                  --v44;
                  v45 -= 4096LL;
                  if ( _bittest64(v46, v44) == 1 )
                    MiUnlockVa((__int64)Object + 1272, v45);
                  if ( (v44 & 0xF) == 0 && (*((_DWORD *)Object + 318) & 0x40000000) != 0 || KeShouldYieldProcessor() )
                  {
                    v47 = (volatile signed __int32 *)((char *)Object + 1272);
                    MiUnlockWorkingSetExclusive((__int64)Object + 1272, CurrentIrql);
                    CurrentIrql = KeGetCurrentIrql();
                    __writecr8(2uLL);
                    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
                    {
                      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v47);
                    }
                    else
                    {
                      v65 = 0;
                      if ( _interlockedbittestandset(v47, 0x1Fu) )
                        v65 = ExpWaitForSpinLockExclusiveAndAcquire(v47);
                      for ( k = *v47; (*v47 & 0xBFFFFFFF) != 0x80000000; k = *v47 )
                      {
                        if ( (k & 0x40000000) == 0 )
                          _InterlockedCompareExchange(v47, k | 0x40000000, k);
                        v49 = (unsigned int)(v65 + 1);
                        v65 = v49;
                        if ( ((unsigned int)v49 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                          _mm_pause();
                        else
                          HvlNotifyLongSpinWait(v49);
                      }
                    }
                  }
                }
                while ( v44 );
                LOBYTE(v5) = v60;
                v12 = v58;
              }
              MiUnlockWorkingSetExclusive((__int64)Object + 1272, CurrentIrql);
              PoolWithTag = P;
              goto LABEL_99;
            }
            v40 = (_QWORD *)(v32 + 16);
            if ( (*(_DWORD *)(v32 + 16) & 0x400LL) != 0 )
            {
              v42 = *(_QWORD *)(v32 + 40);
              if ( (v42 & 0x200000000000000LL) != 0 )
              {
                v43 = MiPartitionIdToPointer((HIDWORD(v42) >> 8) & 0x3FF);
                if ( !(unsigned int)MiChargeCommit((__int64)v43, 1uLL, 0) )
                {
                  MiUnlockPageTableCharges(v69, 2u, 1);
                  MiUnlockPageTableCharges(48 * (*(_QWORD *)(v32 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL, 2u, 0);
                  v12 = -1073741523;
                  goto LABEL_77;
                }
                _InterlockedAdd64((volatile signed __int64 *)v43 + 720, 1uLL);
              }
            }
            else
            {
              v41 = *v40;
              if ( (unsigned __int64)(v32 + 0x90482413010LL) <= 0x7F8 )
                LOBYTE(v41) = MiReadPteShadow(v40, *v40);
              if ( (v41 & 4) != 0 )
                MiLockPageAndSetDirty(v32, 1);
            }
            if ( Wsle != v76 )
              MiSwapWslEntries(Wsle, v76, (ULONG_PTR)v34);
            v50 = v78;
            MiRemoveEntryWsle(0xFFFFF58010804000uLL, v78);
            ++*(_QWORD *)(v51 + 8);
            _bittestandset64((signed __int64 *)P, v61);
            MiUpdateWorkingSetAgeDistribution((__int64)v34, (*(_DWORD *)v50 >> 9) & 7, -1LL);
          }
          v69 = ++v61;
          v29 = v70 + 8;
          v70 = v29;
          BugCheckParameter2 += 4096LL;
          if ( (v29 & 0x78) == 0 && (*v34 & 0x40000000) != 0 || KeShouldYieldProcessor() )
          {
            MiUnlockWorkingSetExclusive((__int64)v34, CurrentIrql);
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v34);
            }
            else
            {
              v64 = 0;
              if ( _interlockedbittestandset(v34, 0x1Fu) )
                v64 = ExpWaitForSpinLockExclusiveAndAcquire(v34);
              for ( m = *v34; (*v34 & 0xBFFFFFFF) != 0x80000000; m = *v34 )
              {
                if ( (m & 0x40000000) == 0 )
                  _InterlockedCompareExchange(v34, m | 0x40000000, m);
                v53 = (unsigned int)(v64 + 1);
                v64 = v53;
                if ( ((unsigned int)v53 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                  _mm_pause();
                else
                  HvlNotifyLongSpinWait(v53);
              }
            }
          }
          v7 = v75;
        }
        v54 = Object;
        MiUnlockWorkingSetExclusive((__int64)Object + 1272, CurrentIrql);
        MiUnlockVadRange(v54, v71, v73);
        if ( (v5 & 2) != 0 )
          KiUnstackDetachProcess((struct _KTHREAD *)v84, 0);
        ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
        ExFreePoolWithTag(P, 0);
        v55 = v72 & 0xFFFFFFFFFFFFF000uLL;
        *v80 = v7 - (v72 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        *v82 = (PVOID)v55;
        return (v5 & 1) != 0 ? 0x40000019 : 0;
      }
      else
      {
        v12 = -1073741819;
LABEL_99:
        MiUnlockVadRange(Object, v71, v73);
        if ( (v5 & 2) != 0 )
          KiUnstackDetachProcess((struct _KTHREAD *)v84, 0);
        ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
        ExFreePoolWithTag(PoolWithTag, 0);
        return v12;
      }
    }
    else
    {
      ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
      return -1073741670;
    }
  }
  return result;
}
