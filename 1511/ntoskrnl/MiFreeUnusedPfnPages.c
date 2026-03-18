/*
 * XREFs of MiFreeUnusedPfnPages @ 0x1401322A8
 * Callers:
 *     MmInitNucleus @ 0x140748C60 (MmInitNucleus.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14003AA70 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetNextPageTable @ 0x14005F080 (MiGetNextPageTable.c)
 *     MiIsAddressValid @ 0x1400795B0 (MiIsAddressValid.c)
 *     KeWaitForGate @ 0x1400DEBE8 (KeWaitForGate.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x140126D68 (MiUnlockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryExclusive @ 0x140127060 (MiLockDynamicMemoryExclusive.c)
 *     MiPfnRangeIsZero @ 0x140132700 (MiPfnRangeIsZero.c)
 *     RtlCompareMemoryUlong @ 0x14015C040 (RtlCompareMemoryUlong.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiFreeUnusedPfnPages(int *a1)
{
  int *v1; // rdi
  unsigned __int64 v3; // rbx
  struct _KTHREAD *CurrentThread; // r12
  unsigned __int64 v5; // rsi
  KIRQL v6; // r13
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 result; // rax
  __int64 NextPageTable; // rax
  __int64 v12; // r13
  SIZE_T i; // r15
  unsigned __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // r14
  __int64 v17; // r12
  unsigned __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // r14
  SIZE_T v21; // rax
  __int64 v22; // r13
  __int64 v23; // rdx
  void *v24; // r9
  unsigned __int64 v25; // r12
  __int64 v26; // r9
  void *v27; // r9
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // [rsp+30h] [rbp-39h]
  unsigned __int64 v32; // [rsp+40h] [rbp-29h]
  struct _KTHREAD *v33; // [rsp+50h] [rbp-19h]
  __int64 v34; // [rsp+58h] [rbp-11h] BYREF
  __int16 v35; // [rsp+60h] [rbp-9h] BYREF
  char v36; // [rsp+62h] [rbp-7h]
  int v37; // [rsp+64h] [rbp-5h]
  _QWORD v38[11]; // [rsp+68h] [rbp-1h] BYREF
  KIRQL v39; // [rsp+D0h] [rbp+67h]
  int v40; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v41; // [rsp+E0h] [rbp+77h] BYREF
  unsigned __int64 v42; // [rsp+E8h] [rbp+7Fh]

  v1 = MiSystemPartition;
  if ( a1 )
    v1 = a1;
  v3 = (((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  while ( 1 )
  {
    CurrentThread = KeGetCurrentThread();
    v33 = CurrentThread;
    v5 = (((unsigned __int64)(48 * qword_1402FE758 - 0x57FFFFFFFD0LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL;
    v32 = v5;
    MiLockDynamicMemoryExclusive((__int64)v1, (__int64)CurrentThread);
    if ( !a1 && *((_BYTE *)v1 + 104) == 1 )
      return MiUnlockDynamicMemoryExclusive((__int64)v1, (__int64)CurrentThread);
    v39 = ExAcquireSpinLockExclusive(&dword_1402FFA80);
    v6 = v39;
    ExAcquireSpinLockExclusiveAtDpcLevel(v1 + 56);
    if ( !*((_QWORD *)v1 + 8) )
      break;
    if ( a1 )
    {
      v35 = 263;
      v38[1] = v38;
      v38[0] = v38;
      v34 = *((_QWORD *)v1 + 15);
      *((_QWORD *)v1 + 15) = &v34;
      v36 = 6;
      v37 = 0;
    }
    else
    {
      *((_QWORD *)v1 + 9) = 0LL;
      *((_QWORD *)v1 + 11) = MiFreeUnusedPfnPages;
      v3 = v5 + 8;
      *((_QWORD *)v1 + 12) = v1;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(v1 + 18), DelayedWorkQueue);
      *((_BYTE *)v1 + 104) = 1;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v1 + 56);
    LOBYTE(v8) = v39;
    MiUnlockWorkingSetExclusive((__int64)&dword_1402FFA80, v8, v9);
    result = MiUnlockDynamicMemoryExclusive((__int64)v1, (__int64)CurrentThread);
    if ( !a1 )
      return result;
    KeWaitForGate((__int64)&v35, 18);
  }
  if ( !a1 )
    *((_BYTE *)v1 + 104) = 1;
  if ( v3 <= v5 )
  {
LABEL_15:
    LOBYTE(v7) = 17;
    NextPageTable = MiGetNextPageTable(v3, v5, 0LL, v7, 7, &v40);
    v12 = NextPageTable;
    if ( !NextPageTable )
      goto LABEL_50;
    if ( v40 == 1 )
    {
      i = 0x200000LL;
      v14 = NextPageTable;
      v15 = (__int64)(v5 - NextPageTable) >> 3;
      if ( (unsigned __int64)(v15 + 1) < 0x200 )
        i = (v15 + 1) << 12;
    }
    else
    {
      v16 = qword_1402FF290;
      v3 = NextPageTable;
      v17 = qword_1402FF288[0];
      v31 = qword_1402FF290;
      while ( 1 )
      {
        v41 = MI_READ_PTE_LOCK_FREE(v3);
        if ( (v41 & 1) != 0
          && (v17 == v16 || (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v41) >> 12) & 0xFFFFFFFFFLL) != v17) )
        {
          break;
        }
        v3 += 8LL;
        if ( v3 > v5 )
          goto LABEL_50;
        if ( (v3 & 0xFFF) == 0 )
          goto LABEL_49;
      }
      v14 = v3;
      if ( !v3 )
        goto LABEL_49;
      v18 = v3 + 8;
      for ( i = 4096LL; v18 <= v5; i += 4096LL )
      {
        if ( (v18 & 0xFFF) == 0 )
          break;
        v19 = MI_READ_PTE_LOCK_FREE(v18);
        v18 += 8LL;
        v41 = v19;
        if ( (v19 & 1) == 0 || v17 != v31 && MI_GET_PAGE_FRAME_FROM_PTE(&v41) == v17 )
          break;
      }
    }
    v20 = (__int64)(v14 << 25) >> 16;
    v42 = v12 + 8 * (i >> 12);
    while ( 1 )
    {
      if ( *(_QWORD *)v20 )
        goto LABEL_46;
      v21 = RtlCompareMemoryUlong((PVOID)v20, i, 0);
      v22 = v21;
      if ( v21 >= 0x1000 )
      {
        v41 = v20;
        v23 = (v20 + 0x58000000000LL) / 48;
        if ( 48 * v23 - 0x58000000000LL != v20
          && (!MiIsAddressValid(48 * v23 - 0x58000000000LL) || RtlCompareMemoryUlong(v24, 0x30uLL, 0) != 48) )
        {
          v41 = v20 + 4096;
        }
        v25 = v20 + (v22 & 0xFFFFFFFFFFFFF000uLL);
        v26 = 48 * ((__int64)(v25 + 0x58000000000LL) / 48) - 0x58000000000LL;
        if ( v26 != v25 && (!MiIsAddressValid(v26 + 48) || RtlCompareMemoryUlong(v27, 0x30uLL, 0) != 48) )
          v25 -= 4096LL;
        MiPfnRangeIsZero(v41, v25);
        goto LABEL_47;
      }
      if ( !v21 )
LABEL_46:
        v22 = 4096LL;
LABEL_47:
      v28 = (v22 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      v20 += v28;
      i -= v28;
      if ( i < 0x1000 )
      {
        v3 = v42;
        v5 = v32;
LABEL_49:
        if ( v3 > v5 )
        {
LABEL_50:
          CurrentThread = v33;
          v6 = v39;
          break;
        }
        goto LABEL_15;
      }
    }
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v1 + 56);
  LOBYTE(v29) = v6;
  MiUnlockWorkingSetExclusive((__int64)&dword_1402FFA80, v29, v30);
  *((_QWORD *)v1 + 14) = 0LL;
  *((_BYTE *)v1 + 104) = 0;
  return MiUnlockDynamicMemoryExclusive((__int64)v1, (__int64)CurrentThread);
}
