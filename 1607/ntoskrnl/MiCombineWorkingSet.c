/*
 * XREFs of MiCombineWorkingSet @ 0x1401F7EFC
 * Callers:
 *     MiCombineIdenticalPages @ 0x140663C88 (MiCombineIdenticalPages.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedWorkingSetList @ 0x140046BF0 (MiGetSharedWorkingSetList.c)
 *     MiReleasePtes @ 0x140051250 (MiReleasePtes.c)
 *     KeShouldYieldProcessor @ 0x140094EC0 (KeShouldYieldProcessor.c)
 *     MiComputeHash64 @ 0x1400B0EC4 (MiComputeHash64.c)
 *     MiWorkingSetIsContended @ 0x1400B8870 (MiWorkingSetIsContended.c)
 *     MiReservePtes @ 0x1400DB9F0 (MiReservePtes.c)
 *     MiIsStoreProcess @ 0x14010AC04 (MiIsStoreProcess.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiCombineCandidate @ 0x1401F7CA4 (MiCombineCandidate.c)
 *     MiHashIsCommon @ 0x1401F9C40 (MiHashIsCommon.c)
 *     MiMapArbitraryPage @ 0x1401F9E68 (MiMapArbitraryPage.c)
 *     MiPerformCombineScan @ 0x1401F9F98 (MiPerformCombineScan.c)
 *     MiReleaseArbitraryPage @ 0x1401FA254 (MiReleaseArbitraryPage.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MiProcessCrcList @ 0x140663EAC (MiProcessCrcList.c)
 */

__int64 __fastcall MiCombineWorkingSet(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 v4; // rcx
  bool v5; // zf
  __int64 v6; // r14
  LONG *SharedVm; // rbx
  KIRQL v8; // al
  __int64 v9; // rdx
  __int64 v10; // rsi
  SIZE_T v11; // rsi
  unsigned __int64 *PoolWithTag; // rax
  unsigned __int64 *v13; // r15
  unsigned __int64 *v14; // rsi
  unsigned __int64 *v15; // rdi
  ULONG_PTR *SharedWorkingSetList; // rbx
  ULONG_PTR v17; // r13
  LONG *v18; // rbx
  KIRQL v19; // al
  ULONG_PTR v20; // rax
  __int64 v21; // rbx
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // r8
  ULONG_PTR v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rdx
  int v28; // ebx
  LONG *v29; // rbx
  KIRQL v30; // al
  __int64 v31; // [rsp+20h] [rbp-98h] BYREF
  __int64 v32; // [rsp+28h] [rbp-90h]
  ULONG_PTR v33; // [rsp+30h] [rbp-88h]
  __int64 v34; // [rsp+38h] [rbp-80h]
  __int64 v35; // [rsp+40h] [rbp-78h]
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-70h]
  __int64 v37; // [rsp+50h] [rbp-68h]
  __int64 v38; // [rsp+58h] [rbp-60h]
  unsigned __int64 v39; // [rsp+60h] [rbp-58h]
  char v40; // [rsp+C0h] [rbp+8h]
  unsigned int v41; // [rsp+C8h] [rbp+10h]
  char v42; // [rsp+D0h] [rbp+18h]
  ULONG_PTR *v43; // [rsp+D8h] [rbp+20h]

  v34 = *(_QWORD *)a1;
  v35 = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(a1 + 32);
  v4 = *(_QWORD *)(a1 + 24);
  v32 = v2;
  LODWORD(v2) = *(_DWORD *)(a1 + 40);
  v5 = (*(_BYTE *)(v3 + 184) & 7) == 0;
  v37 = v4;
  v42 = v2;
  if ( v5 )
    v6 = v3 - 1280;
  else
    v6 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v41 = *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[CurrentThread->IdealProcessor] + 1600) + 146LL);
  SharedVm = MiGetSharedVm(v3);
  v8 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v40 = v8;
  if ( v6 && ((*(_DWORD *)(v6 + 772) & 0xC00u) < 0xC00 || *(_QWORD *)(v3 + 96) || MiIsStoreProcess(v6)) )
    goto LABEL_48;
  v10 = *(_QWORD *)(v3 + 136);
  if ( !v10 )
    goto LABEL_48;
  v11 = (32 * v10 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  while ( 1 )
  {
    PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x6D75534Du);
    v13 = PoolWithTag;
    if ( PoolWithTag )
      break;
    v11 >>= 1;
    if ( v11 < 0x10000 )
      goto LABEL_48;
  }
  v14 = (unsigned __int64 *)((char *)PoolWithTag + (v11 & 0xFFFFFFFFFFFFFFE0uLL));
  v15 = PoolWithTag;
  SharedWorkingSetList = MiGetSharedWorkingSetList(v3);
  v43 = SharedWorkingSetList;
  v17 = SharedWorkingSetList[1];
  v33 = SharedWorkingSetList[2];
  if ( v17 > v33 )
    goto LABEL_47;
  do
  {
    if ( (v17 & 7) == 0 && MiWorkingSetIsContended(v3) || KeShouldYieldProcessor() )
    {
      LOBYTE(v9) = v40;
      MiUnlockWorkingSetExclusive(v3, v9);
      MiProcessCrcList(a1, v13, ((char *)v15 - (char *)v13) >> 5, v41);
      v15 = v13;
      v18 = MiGetSharedVm(v3);
      v19 = ExAcquireSpinLockExclusive(v18);
      v18[1] = 0;
      SharedWorkingSetList = v43;
      v40 = v19;
      v20 = v43[1];
      v33 = v43[2];
      if ( v17 >= v20 )
      {
        --v17;
        goto LABEL_19;
      }
      goto LABEL_18;
    }
    v21 = *(_QWORD *)(v17 * *((unsigned int *)SharedWorkingSetList + 8) + SharedWorkingSetList[10]);
    if ( (v21 & 1) == 0 )
      goto LABEL_43;
    v22 = (v21 & 0x800000000000LL) != 0 ? v21 | 0xFFFF000000000000uLL : v21 & 0xFFFFFFFFFFFFLL;
    v9 = 0xFFFFF68000000000uLL;
    if ( v22 >= 0xFFFFF68000000000uLL && v22 <= 0xFFFFF6FFFFFFFFFFuLL )
      goto LABEL_43;
    v31 = MI_READ_PTE_LOCK_FREE(((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v39 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v31) >> 12) & 0xFFFFFFFFFLL;
    v9 = 48 * v39 - 0x58000000000LL;
    v38 = v9;
    if ( (*(_QWORD *)(v9 + 40) & 0x200000000000000LL) != 0 )
      goto LABEL_43;
    if ( v35 && *(_DWORD *)(v35 + 4) || (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
      break;
    if ( (unsigned int)MiCombineCandidate(v34, v9) )
    {
      ++*(_QWORD *)(v37 + 16);
      if ( (v31 & 0x20) != 0 )
      {
        if ( (v42 & 4) != 0 )
        {
          if ( v6 )
          {
            v9 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFF000uLL) + 1LL;
            if ( (v9 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
              goto LABEL_43;
          }
        }
        *v15 = MiComputeHash64(v22 & 0xFFFFFFFFFFFFF000uLL);
      }
      else
      {
        v24 = MiReservePtes((__int64)&qword_1403278B0, 1uLL, v23);
        v31 = v24;
        v25 = v24;
        if ( !v24 )
          break;
        v26 = v32;
        *(_QWORD *)(v32 + 72) = v24;
        *(_QWORD *)(v26 + 64) = v38;
        if ( !(unsigned int)MiMapArbitraryPage(v34, v26, 0LL, 0LL) )
        {
          MiReleasePtes((__int64)&qword_1403278B0, v25, 1u);
          goto LABEL_43;
        }
        v28 = MiPerformCombineScan(a1, v32, v15);
        MiReleaseArbitraryPage(v32);
        MiReleasePtes((__int64)&qword_1403278B0, v31, 1u);
        if ( v28 != 1 )
          goto LABEL_43;
      }
      if ( (v42 & 4) == 0 || !v6 || (unsigned int)MiHashIsCommon(a1, *v15) )
      {
        v15[2] = 0LL;
        v15[3] = 0LL;
        v15[1] = v39;
        v15 += 4;
        if ( v15 == v14 )
        {
          LOBYTE(v9) = v40;
          MiUnlockWorkingSetExclusive(v3, v9);
          MiProcessCrcList(a1, v13, ((char *)v15 - (char *)v13) >> 5, v41);
          v15 = v13;
          v29 = MiGetSharedVm(v3);
          v30 = ExAcquireSpinLockExclusive(v29);
          v29[1] = 0;
          SharedWorkingSetList = v43;
          v40 = v30;
          v20 = v43[1];
          v33 = v43[2];
          if ( v17 >= v20 )
          {
LABEL_19:
            if ( v6 && (*(_DWORD *)(v6 + 772) & 0xC00u) < 0xC00 || *(_QWORD *)(v3 + 96) || MiIsStoreProcess(v6) )
              goto LABEL_48;
            goto LABEL_44;
          }
LABEL_18:
          v17 = v20 - 1;
          goto LABEL_19;
        }
      }
    }
LABEL_43:
    SharedWorkingSetList = v43;
LABEL_44:
    ++v17;
  }
  while ( v17 <= v33 );
  if ( v15 != v13 )
  {
    LOBYTE(v9) = v40;
    MiUnlockWorkingSetExclusive(v3, v9);
    v40 = 17;
    MiProcessCrcList(a1, v13, ((char *)v15 - (char *)v13) >> 5, v41);
  }
LABEL_47:
  ExFreePoolWithTag(v13, 0);
LABEL_48:
  if ( v40 != 17 )
  {
    LOBYTE(v9) = v40;
    MiUnlockWorkingSetExclusive(v3, v9);
  }
  return 0LL;
}
