/*
 * XREFs of MmPurgeSection @ 0x1400107A0
 * Callers:
 *     CcPurgeCacheSection @ 0x14000EA84 (CcPurgeCacheSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiDeleteLockedTransitionPte @ 0x140010C30 (MiDeleteLockedTransitionPte.c)
 *     MiCheckProtoPtePageState @ 0x14001103C (MiCheckProtoPtePageState.c)
 *     MiCanFileBeTruncatedInternal @ 0x140011AD8 (MiCanFileBeTruncatedInternal.c)
 *     MiRemoveUnusedSubsection @ 0x14003A500 (MiRemoveUnusedSubsection.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MiUnlockProtoPoolPage @ 0x14006AD80 (MiUnlockProtoPoolPage.c)
 *     MiCheckControlArea @ 0x14006D900 (MiCheckControlArea.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     MiInsertUnusedSubsection @ 0x1400A86E0 (MiInsertUnusedSubsection.c)
 *     MiComputeDataFlushRange @ 0x1400A889C (MiComputeDataFlushRange.c)
 *     MiDecrementSubsections @ 0x1400A8B80 (MiDecrementSubsections.c)
 *     MiIncrementSubsectionViewCount @ 0x1400A8CA0 (MiIncrementSubsectionViewCount.c)
 *     MiDecrementSubsectionViewCount @ 0x1400A8DA0 (MiDecrementSubsectionViewCount.c)
 *     MiSubsectionUsingExtents @ 0x1400A8E40 (MiSubsectionUsingExtents.c)
 *     MiWaitForPageWriteCompletion @ 0x1401074A4 (MiWaitForPageWriteCompletion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReturnSubsectionCharges @ 0x1401E3170 (MiReturnSubsectionCharges.c)
 */

char __fastcall MmPurgeSection(SECTION_OBJECT_POINTERS *a1, __int64 *a2, __int64 a3, char a4, _BYTE *a5)
{
  __int64 *v7; // rbx
  __int64 CanFileBeTruncatedInternal; // rax
  __int64 v9; // rdx
  __int64 v10; // r15
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned __int64 v14; // rsi
  KIRQL v15; // di
  __int64 v16; // r14
  __int64 v17; // rbx
  KIRQL v18; // al
  unsigned __int64 v19; // r12
  __int64 v20; // rcx
  int v21; // r13d
  __int64 v22; // r14
  __int64 v23; // rax
  __int64 v24; // r14
  __int64 v25; // rax
  unsigned __int64 v26; // r9
  __int64 v27; // rdi
  __int64 v28; // r9
  __int64 v29; // rbx
  __int64 v30; // rax
  ULONG_PTR BugCheckParameter4; // rax
  __int64 v32; // rcx
  char v33; // al
  __int64 v34; // r12
  __int64 v35; // [rsp+30h] [rbp-41h]
  int v36; // [rsp+38h] [rbp-39h]
  int v37; // [rsp+3Ch] [rbp-35h] BYREF
  __int64 v38; // [rsp+40h] [rbp-31h] BYREF
  __int64 v39; // [rsp+48h] [rbp-29h]
  __int64 v40; // [rsp+50h] [rbp-21h] BYREF
  _BYTE v41[8]; // [rsp+58h] [rbp-19h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-11h]
  __int64 v43; // [rsp+68h] [rbp-9h]
  __int64 v44; // [rsp+70h] [rbp-1h]
  __int64 v45; // [rsp+78h] [rbp+7h]
  __int64 v46; // [rsp+D8h] [rbp+67h] BYREF
  unsigned __int8 v47; // [rsp+E8h] [rbp+77h]

  v7 = a2;
  *a5 = 0;
  if ( a2 )
  {
    v7 = &v40;
    v40 = *a2;
  }
  v36 = a4 & 2;
  v35 = 0LL;
  CanFileBeTruncatedInternal = MiCanFileBeTruncatedInternal(a1, (__int64)&v46);
  v9 = (unsigned __int8)v46;
  v10 = CanFileBeTruncatedInternal;
  v39 = CanFileBeTruncatedInternal;
  if ( (_BYTE)v46 == 17 )
    return 0;
  if ( !CanFileBeTruncatedInternal )
    return 1;
  if ( (a4 & 1) == 0 && *(_DWORD *)(CanFileBeTruncatedInternal + 88) || !*(_QWORD *)(CanFileBeTruncatedInternal + 64) )
  {
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(CanFileBeTruncatedInternal + 72), v46);
    return 0;
  }
  *(_DWORD *)(CanFileBeTruncatedInternal + 56) |= 0x8000u;
  if ( !(unsigned int)MiComputeDataFlushRange(CanFileBeTruncatedInternal, v9, v7, a3, 1, v41) )
    return 1;
  v14 = BugCheckParameter2;
  v15 = 17;
  v16 = v44;
  LOBYTE(v13) = 1;
  v17 = v45;
  LOBYTE(v46) = 17;
  v47 = 1;
  while ( 1 )
  {
    if ( v15 == 17 )
    {
      v18 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v10 + 72));
      v13 = v47;
      v15 = v18;
      LOBYTE(v46) = v18;
    }
    if ( v17 == v16 )
    {
      v19 = v43 + 8;
    }
    else
    {
      v12 = *(unsigned int *)(v16 + 44);
      v19 = *(_QWORD *)(v16 + 8) + 8 * v12;
    }
    v21 = MiSubsectionUsingExtents(v16, v12, v13);
    if ( !*(_QWORD *)(v16 + 8) )
      break;
    MiIncrementSubsectionViewCount(v20, 0LL);
    if ( (*(_BYTE *)(v16 + 34) & 8) != 0 )
      MiRemoveUnusedSubsection(v16);
    *(_WORD *)(v16 + 32) |= 1u;
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v10 + 72), v15);
    if ( v14 < v19 )
    {
      while ( 1 )
      {
        v27 = MiCheckProtoPtePageState(v14);
        if ( v27 )
          break;
        v14 = (v14 & 0xFFFFFFFFFFFFF000uLL) + 4096;
LABEL_55:
        if ( v14 >= v19 )
          goto LABEL_58;
      }
      while ( 1 )
      {
        do
        {
          v25 = MI_READ_PTE_LOCK_FREE(v14);
          v38 = v25;
          v26 = v25;
          if ( (v25 & 1) != 0 )
          {
            v26 = MI_READ_PTE_LOCK_FREE(&v38);
          }
          else if ( (v25 & 0x400) != 0 || (v25 & 0x800) == 0 )
          {
            goto LABEL_54;
          }
        }
        while ( !(unsigned int)MI_IS_PFN((v26 >> 12) & 0xFFFFFFFFFLL) );
        v37 = 0;
        v29 = 48 * v28 - 0x58000000000LL;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v37);
            while ( (*(_QWORD *)(v29 + 24) & 0x8000000000000000uLL) != 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) );
          v10 = v39;
        }
        v30 = MI_READ_PTE_LOCK_FREE(v14);
        if ( v30 == v38 )
          break;
        _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      if ( !v29 )
      {
LABEL_54:
        v14 += 8LL;
        goto LABEL_55;
      }
      BugCheckParameter4 = MI_READ_PTE_LOCK_FREE(v14);
      if ( (BugCheckParameter4 & 1) != 0 )
        goto LABEL_57;
      v32 = *(_QWORD *)(v29 + 16);
      if ( (v32 & 0x400) == 0 || (v32 & 1) != 0 || (*(_QWORD *)(v29 + 8) | 0x8000000000000000uLL) != v14 )
        KeBugCheckEx(0xDEu, 2uLL, v14, *(_QWORD *)(v29 + 8), BugCheckParameter4);
      v33 = *(_BYTE *)(v29 + 34);
      if ( (v33 & 0x10) != 0 && v36 )
      {
LABEL_57:
        _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v47 = 0;
      }
      else
      {
        if ( (v33 & 8) != 0 )
        {
          MiWaitForPageWriteCompletion(v29, v10, v27, 17LL);
          goto LABEL_55;
        }
        if ( v21 && *(_WORD *)(v29 + 32) )
          *a5 = 1;
        MiDeleteLockedTransitionPte(v14);
        if ( *(_QWORD *)(v10 + 32) )
          goto LABEL_54;
      }
LABEL_58:
      v17 = v45;
    }
    LOBYTE(v46) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v10 + 72));
    v15 = v46;
    v34 = MiDecrementSubsectionViewCount(v16, 0LL) + v35;
    v35 = v34;
    if ( !*(_QWORD *)(v16 + 96) && (*(_BYTE *)(v16 + 34) & 1) == 0 )
      v35 = MiInsertUnusedSubsection(v16, 1LL) + v34;
    v13 = v47;
LABEL_63:
    if ( v16 == v17 || !(_BYTE)v13 )
      goto LABEL_21;
    v16 = *(_QWORD *)(v16 + 16);
    v14 = *(_QWORD *)(v16 + 8);
  }
  if ( v16 != v17 && (_BYTE)v13 )
    goto LABEL_63;
LABEL_21:
  v22 = MiDecrementSubsections(v44, v44, 0LL) + v35;
  v23 = MiDecrementSubsections(v17, v17, 0LL);
  --*(_QWORD *)(v10 + 40);
  *(_DWORD *)(v10 + 56) &= ~4u;
  v24 = v23 + v22;
  MiCheckControlArea(v10, v15);
  if ( v24 )
    MiReturnSubsectionCharges(v24);
  return v47;
}
