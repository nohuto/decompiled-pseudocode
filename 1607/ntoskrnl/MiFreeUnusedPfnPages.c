/*
 * XREFs of MiFreeUnusedPfnPages @ 0x14013E7A4
 * Callers:
 *     MiInitNucleus @ 0x1407D06B4 (MiInitNucleus.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14001CBDC (MiGetAnyMultiplexedVm.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140026AF0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiIsAddressValid @ 0x1400370C0 (MiIsAddressValid.c)
 *     MiGetNextPageTable @ 0x140043470 (MiGetNextPageTable.c)
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
 *     KeWaitForGate @ 0x140097498 (KeWaitForGate.c)
 *     MiLockDynamicMemoryExclusive @ 0x140133378 (MiLockDynamicMemoryExclusive.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x1401333E4 (MiUnlockDynamicMemoryExclusive.c)
 *     MiPfnRangeIsZero @ 0x14013EC44 (MiPfnRangeIsZero.c)
 *     RtlCompareMemoryUlong @ 0x140167A50 (RtlCompareMemoryUlong.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiFreeUnusedPfnPages(int *a1)
{
  int *v1; // rsi
  unsigned __int64 v3; // rdi
  __int64 v4; // r8
  unsigned __int64 v5; // r9
  char *AnyMultiplexedVm; // r13
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 v8; // r12
  LONG *SharedVm; // rbx
  KIRQL v10; // al
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 result; // rax
  __int64 NextPageTable; // rax
  __int64 v15; // r10
  SIZE_T i; // rbx
  __int64 v17; // rdx
  unsigned __int64 v18; // r14
  __int64 v19; // rdx
  __int64 v20; // r11
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // r11
  __int64 v25; // rax
  __int64 v26; // r14
  SIZE_T v27; // rax
  __int64 v28; // r13
  __int64 v29; // rdx
  void *v30; // r15
  char *v31; // r15
  char *v32; // rcx
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  unsigned __int64 v35; // [rsp+30h] [rbp-48h]
  struct _KTHREAD *v36; // [rsp+40h] [rbp-38h]
  char *v37; // [rsp+48h] [rbp-30h]
  __int64 v38; // [rsp+50h] [rbp-28h] BYREF
  __int16 v39; // [rsp+58h] [rbp-20h] BYREF
  char v40; // [rsp+5Ah] [rbp-1Eh]
  int v41; // [rsp+5Ch] [rbp-1Ch]
  _QWORD v42[3]; // [rsp+60h] [rbp-18h] BYREF
  KIRQL v43; // [rsp+C0h] [rbp+48h]
  unsigned int v44; // [rsp+C8h] [rbp+50h] BYREF
  __int64 v45; // [rsp+D0h] [rbp+58h] BYREF
  PVOID Source; // [rsp+D8h] [rbp+60h]

  v1 = MiSystemPartition;
  if ( a1 )
    v1 = a1;
  v3 = (((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v37 = AnyMultiplexedVm;
  while ( 1 )
  {
    CurrentThread = KeGetCurrentThread();
    v8 = (v4 & ((unsigned __int64)(48 * qword_140326AD0 - 0x57FFFFFFFD0LL) >> 9)) + v5 - 8;
    v36 = CurrentThread;
    v35 = v8;
    MiLockDynamicMemoryExclusive((__int64)v1, (__int64)CurrentThread);
    if ( !a1 && *((_BYTE *)v1 + 112) == 1 )
      return MiUnlockDynamicMemoryExclusive((__int64)v1, (__int64)CurrentThread);
    SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
    v10 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    v43 = v10;
    ExAcquireSpinLockExclusiveAtDpcLevel(v1 + 58);
    if ( !*((_QWORD *)v1 + 9) )
      break;
    if ( a1 )
    {
      v39 = 263;
      v42[1] = v42;
      v42[0] = v42;
      v38 = *((_QWORD *)v1 + 16);
      *((_QWORD *)v1 + 16) = &v38;
      v40 = 6;
      v41 = 0;
    }
    else
    {
      *((_QWORD *)v1 + 10) = 0LL;
      *((_QWORD *)v1 + 12) = MiFreeUnusedPfnPages;
      v3 = v8 + 8;
      *((_QWORD *)v1 + 13) = v1;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(v1 + 20), DelayedWorkQueue);
      *((_BYTE *)v1 + 112) = 1;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v1 + 58);
    LOBYTE(v12) = v43;
    MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v12);
    result = MiUnlockDynamicMemoryExclusive((__int64)v1, (__int64)CurrentThread);
    if ( !a1 )
      return result;
    KeWaitForGate((__int64)&v39, 0x12u);
    v4 = 0x7FFFFFFFF8LL;
    v5 = 0xFFFFF68000000000uLL;
  }
  if ( !a1 )
    *((_BYTE *)v1 + 112) = 1;
  if ( v3 <= v8 )
  {
LABEL_15:
    LOBYTE(v11) = 17;
    NextPageTable = MiGetNextPageTable(v3, v8, 0LL, v11, 7, &v44);
    v15 = NextPageTable;
    if ( !NextPageTable )
      goto LABEL_54;
    if ( v44 )
    {
      i = 0x200000LL;
      if ( v44 > 1 )
      {
        v17 = v44 - 1;
        do
        {
          i <<= 9;
          --v17;
        }
        while ( v17 );
      }
      v18 = NextPageTable;
      v19 = (__int64)(v8 - NextPageTable) >> 3;
      if ( i >> 12 > v19 + 1 )
        i = (v19 + 1) << 12;
    }
    else
    {
      v3 = NextPageTable;
      while ( 1 )
      {
        v45 = MI_READ_PTE_LOCK_FREE(v3);
        if ( (v45 & 1) != 0 )
        {
          if ( v11 == v20 )
            break;
          v21 = MI_READ_PTE_LOCK_FREE(&v45);
          if ( ((v21 >> 12) & 0xFFFFFFFFFLL) != v11 )
            break;
        }
        v3 += 8LL;
        if ( v3 > v8 )
          goto LABEL_54;
        if ( (v3 & 0xFFF) == 0 )
          goto LABEL_53;
      }
      v18 = v3;
      if ( !v3 )
        goto LABEL_53;
      v22 = v3 + 8;
      for ( i = 4096LL; v22 <= v8; i += 4096LL )
      {
        if ( (v22 & 0xFFF) == 0 )
          break;
        v23 = MI_READ_PTE_LOCK_FREE(v22);
        v22 += 8LL;
        v45 = v23;
        if ( (v23 & 1) == 0 )
          break;
        if ( v11 != v24 )
        {
          v25 = MI_GET_PAGE_FRAME_FROM_PTE(&v45);
          if ( v25 == v11 )
            break;
        }
      }
    }
    v26 = (__int64)(v18 << 25) >> 16;
    v3 = v15 + 8 * (i >> 12);
    while ( 1 )
    {
      if ( *(_QWORD *)v26 )
        goto LABEL_50;
      v27 = RtlCompareMemoryUlong((PVOID)v26, i, 0);
      v28 = v27;
      if ( v27 >= 0x1000 )
      {
        v45 = v26;
        v29 = (v26 + 0x58000000000LL) / 48;
        v30 = (void *)(48 * v29 - 0x58000000000LL);
        if ( v30 != (void *)v26
          && (!MiIsAddressValid(48 * v29 - 0x58000000000LL) || RtlCompareMemoryUlong(v30, 0x30uLL, 0) != 48) )
        {
          v45 = v26 + 4096;
        }
        v31 = (char *)(v26 + (v28 & 0xFFFFFFFFFFFFF000uLL));
        v32 = (char *)(48 * ((__int64)(v31 + 0x58000000000LL) / 48) - 0x58000000000LL);
        Source = v32;
        if ( v32 != v31 && (!MiIsAddressValid((__int64)(v32 + 48)) || RtlCompareMemoryUlong(Source, 0x30uLL, 0) != 48) )
          v31 -= 4096;
        MiPfnRangeIsZero(v45, v31);
        goto LABEL_51;
      }
      if ( !v27 )
LABEL_50:
        v28 = 4096LL;
LABEL_51:
      v33 = (v28 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      v26 += v33;
      i -= v33;
      if ( i < 0x1000 )
      {
        v8 = v35;
LABEL_53:
        if ( v3 > v8 )
        {
LABEL_54:
          CurrentThread = v36;
          AnyMultiplexedVm = v37;
          break;
        }
        goto LABEL_15;
      }
    }
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v1 + 58);
  LOBYTE(v34) = v43;
  MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v34);
  *((_QWORD *)v1 + 15) = 0LL;
  *((_BYTE *)v1 + 112) = 0;
  return MiUnlockDynamicMemoryExclusive((__int64)v1, (__int64)CurrentThread);
}
