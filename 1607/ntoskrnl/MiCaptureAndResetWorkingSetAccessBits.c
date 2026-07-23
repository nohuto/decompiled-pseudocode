/*
 * XREFs of MiCaptureAndResetWorkingSetAccessBits @ 0x14012A1C0
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x1400CBB40 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     MiEmptyPageAccessLog @ 0x1400271C0 (MiEmptyPageAccessLog.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     MiGetSharedWorkingSetList @ 0x140046BF0 (MiGetSharedWorkingSetList.c)
 *     MiLogPageAccess @ 0x1400484C0 (MiLogPageAccess.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiFlushTbListEarly @ 0x140088F20 (MiFlushTbListEarly.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     MiClearPteAccessed @ 0x1400DFD90 (MiClearPteAccessed.c)
 *     MiInsertWsle @ 0x1400DFF30 (MiInsertWsle.c)
 *     MiRemoveEntryWsle @ 0x1400E0420 (MiRemoveEntryWsle.c)
 *     MiGetPfnPriority @ 0x1400E4644 (MiGetPfnPriority.c)
 *     MiTbFlushType @ 0x1400FEB3C (MiTbFlushType.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiDemoteCombinedPte @ 0x1401F95DC (MiDemoteCombinedPte.c)
 */

void __fastcall MiCaptureAndResetWorkingSetAccessBits(__int64 a1, char a2)
{
  int *v3; // r14
  __int64 v4; // rdx
  __int64 v5; // r8
  ULONG_PTR *SharedWorkingSetList; // r9
  __int64 v7; // rcx
  __int64 *v8; // rsi
  ULONG_PTR v9; // r13
  __int64 v10; // rdi
  unsigned __int64 v11; // rdi
  unsigned __int64 *v12; // rdi
  char v13; // bl
  __int64 v14; // r10
  __int16 v15; // r11
  __int64 v16; // r15
  __int64 v17; // r8
  int *v18; // rax
  int *v19; // r8
  int v20; // edx
  int v21; // ebx
  LONG *SharedVm; // rbx
  _SLIST_ENTRY *v23; // rcx
  ULONG_PTR *v24; // [rsp+30h] [rbp-118h]
  int v25; // [rsp+38h] [rbp-110h]
  __int64 v26; // [rsp+40h] [rbp-108h] BYREF
  int v27; // [rsp+50h] [rbp-F8h] BYREF
  __int16 v28; // [rsp+54h] [rbp-F4h]
  __int64 v29; // [rsp+58h] [rbp-F0h]
  __int64 v30; // [rsp+60h] [rbp-E8h]
  __int64 v31; // [rsp+68h] [rbp-E0h]

  if ( (a2 & 0x10) != 0 )
  {
    v3 = &v27;
    v29 = 20LL;
    v27 = MiTbFlushType(a1);
    v28 = 0;
    v30 = 0LL;
    v31 = 0LL;
  }
  else
  {
    v3 = 0LL;
  }
  v25 = dword_1403271C8;
  SharedWorkingSetList = MiGetSharedWorkingSetList(a1);
  v24 = SharedWorkingSetList;
  v7 = *((unsigned int *)SharedWorkingSetList + 8);
  v8 = (__int64 *)(SharedWorkingSetList[10] + v7 * SharedWorkingSetList[1]);
  v9 = SharedWorkingSetList[10] + v7 * SharedWorkingSetList[2];
  if ( (unsigned __int64)v8 <= v9 )
  {
    v4 = 0xFFFFFFFFFFFFLL;
    v5 = 0xFFFFF68000000000uLL;
    while ( 1 )
    {
      v10 = *v8;
      if ( (*v8 & 1) != 0 )
        break;
LABEL_31:
      v8 = (__int64 *)((char *)v8 + *((unsigned int *)SharedWorkingSetList + 8));
      if ( (unsigned __int64)v8 > v9 )
        goto LABEL_32;
    }
    if ( (v10 & 0x800000000000LL) != 0 )
      v11 = v10 | 0xFFFF000000000000uLL;
    else
      v11 = v10 & 0xFFFFFFFFFFFFLL;
    v12 = (unsigned __int64 *)(((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v26 = MI_READ_PTE_LOCK_FREE(v12);
    v13 = v26;
    v16 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v26) - 0x58000000000LL;
    v17 = *(_QWORD *)(v16 + 8);
    if ( (v17 & v14) == 0 )
    {
      if ( (unsigned int)MiDemoteCombinedPte(a1, v12, v14 | v17) == 1 )
        v13 = MI_READ_PTE_LOCK_FREE(v12);
      SharedWorkingSetList = v24;
      v15 = 1023;
    }
    if ( (*(_BYTE *)(a1 + 184) & 7) == 2
      && (MiPartitionIdToPointer(v15 & ((unsigned int)HIDWORD(*(_QWORD *)(v16 + 40)) >> 8)),
          v18 = MiPartitionIdToPointer(*(_WORD *)(a1 + 164)),
          v18 != v19)
      || (v13 & 0x20) == 0 )
    {
LABEL_30:
      v5 = 0xFFFFF68000000000uLL;
      v4 = 0xFFFFFFFFFFFFLL;
      goto LABEL_31;
    }
    v20 = (*(_DWORD *)v8 >> 9) & 7;
    if ( v20 == 7 && (unsigned int)MiGetPfnPriority(v16) < dword_1403271F0 )
    {
      v21 = 0;
    }
    else
    {
      v21 = 1;
      if ( (unsigned int)(v20 - 1) <= 5 )
      {
        --*(_QWORD *)(a1 + 8LL * (unsigned int)(v20 - 1) + 40);
        MiRemoveEntryWsle(a1, v8);
        *v8 &= 0xFFFFFFFFFFFFF1FFuLL;
        MiInsertWsle(a1, (unsigned __int64 *)v8, 0);
      }
    }
    if ( (unsigned int)MiClearPteAccessed(a1, v16, v12, v8, (__int64)v3, v25) == 1 )
    {
      if ( v21 == 1 && v25 )
      {
        if ( !v3 )
        {
          MiLogPageAccess(a1, (__int64)v12);
          goto LABEL_29;
        }
      }
      else if ( !v3 )
      {
        goto LABEL_29;
      }
      MiFlushTbListEarly((__int64)v3, 0);
    }
LABEL_29:
    SharedWorkingSetList = v24;
    goto LABEL_30;
  }
LABEL_32:
  if ( v3 )
    MiFlushTbList((__int64)v3, (_KPROCESS *)v4, v5, (__int64)SharedWorkingSetList);
  SharedVm = MiGetSharedVm(a1);
  v23 = (_SLIST_ENTRY *)*((_QWORD *)SharedVm + 5);
  if ( v23 )
  {
    MiEmptyPageAccessLog(v23);
    *((_QWORD *)SharedVm + 5) = 0LL;
  }
}
