/*
 * XREFs of MiCaptureAndResetWorkingSetAccessBits @ 0x14011AB80
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x1400A59F0 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     MiFlushTbListEarly @ 0x140015ED0 (MiFlushTbListEarly.c)
 *     MiLogPageAccess @ 0x14005A690 (MiLogPageAccess.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiEmptyPageAccessLog @ 0x14006DE20 (MiEmptyPageAccessLog.c)
 *     MiTbFlushType @ 0x1400A086C (MiTbFlushType.c)
 *     MiClearPteAccessed @ 0x1400B72A0 (MiClearPteAccessed.c)
 *     MiInsertWsle @ 0x1400B7450 (MiInsertWsle.c)
 *     MiRemoveEntryWsle @ 0x1400B7840 (MiRemoveEntryWsle.c)
 *     MI_GET_PFN_PRIORITY @ 0x1400B8498 (MI_GET_PFN_PRIORITY.c)
 *     MiDemoteCombinedPte @ 0x14012836C (MiDemoteCombinedPte.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiCaptureAndResetWorkingSetAccessBits(__int64 a1, _KPROCESS *a2)
{
  int *v3; // rbp
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 *v7; // rsi
  __int64 v8; // rdi
  unsigned __int64 v9; // rdi
  unsigned __int64 *v10; // rdi
  char v11; // bl
  __int64 v12; // r15
  __int64 v13; // rdx
  int v14; // edx
  int v15; // ebx
  __int64 v16; // rcx
  _KPROCESS *v17; // r8
  _QWORD *v18; // rcx
  int v19; // [rsp+30h] [rbp-118h]
  __int64 v20; // [rsp+38h] [rbp-110h] BYREF
  unsigned __int64 v21; // [rsp+40h] [rbp-108h]
  int v22; // [rsp+50h] [rbp-F8h] BYREF
  __int16 v23; // [rsp+54h] [rbp-F4h]
  __int64 v24; // [rsp+58h] [rbp-F0h]
  __int64 v25; // [rsp+60h] [rbp-E8h]
  __int64 v26; // [rsp+68h] [rbp-E0h]

  if ( ((unsigned __int8)a2 & 0x10) != 0 )
  {
    v3 = &v22;
    v24 = 20LL;
    v22 = MiTbFlushType(a1);
    v23 = 0;
    v25 = 0LL;
    v26 = 0LL;
  }
  else
  {
    v3 = 0LL;
  }
  v4 = *(_QWORD *)(a1 + 184);
  v19 = dword_1402FED88;
  v5 = *(unsigned int *)(v4 + 64);
  v6 = *(_QWORD *)(v4 + 496);
  v7 = (__int64 *)(v6 + v5 * *(_QWORD *)(v4 + 8));
  v21 = v6 + v5 * *(_QWORD *)(v4 + 16);
  if ( (unsigned __int64)v7 <= v21 )
  {
    a2 = (_KPROCESS *)0xFFFF000000000000LL;
    while ( 1 )
    {
      v8 = *v7;
      if ( (*v7 & 1) != 0 )
        break;
LABEL_27:
      v7 = (__int64 *)((char *)v7 + *(unsigned int *)(v4 + 64));
      if ( (unsigned __int64)v7 > v21 )
        goto LABEL_28;
    }
    if ( (v8 & 0x800000000000LL) != 0 )
      v9 = v8 | 0xFFFF000000000000uLL;
    else
      v9 = v8 & 0xFFFFFFFFFFFFLL;
    v10 = (unsigned __int64 *)(((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v20 = MI_READ_PTE_LOCK_FREE(v10);
    v11 = v20;
    v12 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v20) - 0x58000000000LL;
    v13 = *(_QWORD *)(v12 + 8);
    if ( v13 >= 0 && (unsigned int)MiDemoteCombinedPte(v10, v13 | 0x8000000000000000uLL) == 1 )
      v11 = MI_READ_PTE_LOCK_FREE(v10);
    if ( (v11 & 0x20) != 0 )
    {
      v14 = (*(_DWORD *)v7 >> 9) & 7;
      if ( v14 == 7 && (unsigned int)MI_GET_PFN_PRIORITY(v12) < dword_1402FEDB0 )
      {
        v15 = 0;
      }
      else
      {
        v15 = 1;
        if ( (unsigned int)(v14 - 1) <= 5 )
        {
          --*(_QWORD *)(a1 + 8LL * (unsigned int)(v14 - 1) + 40);
          MiRemoveEntryWsle(v4, v7);
          *v7 &= 0xFFFFFFFFFFFFF1FFuLL;
          MiInsertWsle(v16, (unsigned __int64 *)v7, 0);
        }
      }
      if ( (unsigned int)MiClearPteAccessed(a1, v12, v10, v7, (__int64)v3, v19) == 1 )
      {
        if ( v15 == 1 && v19 )
        {
          if ( !v3 )
          {
            MiLogPageAccess(a1, (__int64)v10);
            goto LABEL_26;
          }
        }
        else if ( !v3 )
        {
          goto LABEL_26;
        }
        MiFlushTbListEarly((__int64)v3, 0LL, v17);
      }
    }
LABEL_26:
    a2 = (_KPROCESS *)0xFFFF000000000000LL;
    goto LABEL_27;
  }
LABEL_28:
  if ( v3 )
    MiFlushTbList((__int64)v3, a2);
  v18 = *(_QWORD **)(a1 + 16);
  if ( v18 )
  {
    MiEmptyPageAccessLog(v18);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
