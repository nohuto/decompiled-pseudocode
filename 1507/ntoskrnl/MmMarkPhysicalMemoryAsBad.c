/*
 * XREFs of MmMarkPhysicalMemoryAsBad @ 0x140213164
 * Callers:
 *     WheapAttemptPhysicalPageOffline @ 0x1406FC934 (WheapAttemptPhysicalPageOffline.c)
 * Callees:
 *     MiFindContiguousPages @ 0x14005BA20 (MiFindContiguousPages.c)
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     MiInsertPageInList @ 0x1400C6750 (MiInsertPageInList.c)
 *     MiDereferencePartition @ 0x140100E94 (MiDereferencePartition.c)
 *     MiFreeContiguousPages @ 0x140114BDC (MiFreeContiguousPages.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ZwUpdateWnfStateData @ 0x140182610 (ZwUpdateWnfStateData.c)
 *     MiReferencePagePartition @ 0x14021D890 (MiReferencePagePartition.c)
 */

__int64 __fastcall MmMarkPhysicalMemoryAsBad(__int64 *a1, __int64 *a2)
{
  unsigned __int64 v3; // rdi
  __int64 v4; // r14
  unsigned __int64 v5; // r15
  unsigned int v6; // r13d
  __int64 v7; // rbx
  unsigned int v8; // r9d
  unsigned __int64 v9; // r10
  unsigned int v10; // ebp
  unsigned __int8 CurrentIrql; // bp
  unsigned int v12; // esi
  __int16 *v13; // r12
  char v14; // al
  char v15; // al
  int ContiguousPages; // esi
  unsigned __int8 v17; // r13
  unsigned int v18; // r15d
  unsigned int v19; // ebx
  unsigned __int64 v20; // [rsp+58h] [rbp-50h]
  unsigned __int64 v21[9]; // [rsp+60h] [rbp-48h] BYREF
  int v23; // [rsp+C0h] [rbp+18h]
  unsigned int v24; // [rsp+C8h] [rbp+20h]

  if ( !MmPhysicalMemoryBlock )
    return 3221225474LL;
  v3 = *a1 >> 12;
  v4 = *a2 >> 12;
  v5 = v4 + v3;
  v20 = v4 + v3;
  if ( v3 >= v4 + v3 )
    return 3221225711LL;
  v6 = 203423744;
  v23 = 0;
  if ( (*(_BYTE *)a1 & 1) == 0 )
    v6 = 471859200;
  v7 = 48 * v3 - 0x58000000000LL;
  v24 = v6;
  while ( !MI_IS_PFN(v3) )
  {
    v10 = -1073741584;
LABEL_43:
    ++v3;
    v7 += 48LL;
    if ( v3 >= v5 )
    {
      v19 = 0;
      goto LABEL_46;
    }
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(v9);
  v12 = v8;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v12 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v12);
    }
    while ( (*(_QWORD *)(v7 + 24) & 0x8000000000000000uLL) != 0 );
  }
  v13 = (__int16 *)MiReferencePagePartition(v7);
  if ( !v13 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
    v10 = -1073741558;
    goto LABEL_43;
  }
  if ( (v6 & 0x10000000) != 0 )
  {
    v14 = *(_BYTE *)(v7 + 35);
    if ( v14 >= 0 )
      *(_BYTE *)(v7 + 35) = v14 | 0x80;
  }
  v15 = *(_BYTE *)(v7 + 35);
  if ( (v15 & 0x40) == 0 )
    *(_BYTE *)(v7 + 35) = v15 | 0x40;
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(CurrentIrql);
  ContiguousPages = MiFindContiguousPages(v13, v3, v3, 0LL, 1uLL, 1u, 0x80000000, 0x80000000, v6, v21);
  v10 = 0;
  v17 = KeGetCurrentIrql();
  __writecr8(2uLL);
  v18 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v18 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v18);
    }
    while ( (*(_QWORD *)(v7 + 24) & 0x8000000000000000uLL) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) );
  }
  if ( ContiguousPages >= 0 )
  {
    if ( (*(_BYTE *)(v7 + 35) & 0x40) != 0 )
    {
      *(_WORD *)(v7 + 32) = 0;
      *(_QWORD *)(v7 + 40) &= 0xFFFFFFF000000000uLL;
      MiInsertPageInList(v7, 0x20u);
      goto LABEL_41;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v17);
    MiFreeContiguousPages((__int64)v13, v3, 1uLL);
LABEL_42:
    MiDereferencePartition(v13);
    v5 = v20;
    v6 = v24;
    goto LABEL_43;
  }
  if ( (*(_BYTE *)(v7 + 35) & 0x40) != 0 )
  {
    if ( (*(_QWORD *)(v7 + 8) | 0x8000000000000000uLL) != 0xFFFFFFFFFFFFFFFCuLL || (*(_BYTE *)(v7 + 34) & 7) != 5 )
    {
      byte_14034F218 = 1;
      v10 = 259;
      v23 = 1;
    }
    goto LABEL_41;
  }
  if ( ContiguousPages != -1073741523 && ContiguousPages != -1073741670 )
  {
LABEL_41:
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v17);
    goto LABEL_42;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v17);
  MiDereferencePartition(v13);
  v5 = v20;
  v10 = ContiguousPages;
  v19 = ContiguousPages;
LABEL_46:
  if ( v23 == 1 )
    ZwUpdateWnfStateData(&WNF_MM_BAD_MEMORY_PENDING_REMOVAL, 0LL, 0, 0LL, 0LL, 0, 0);
  *a2 = (v3 + v4 - v5) << 12;
  if ( v4 == 1 )
    return v10;
  return v19;
}
