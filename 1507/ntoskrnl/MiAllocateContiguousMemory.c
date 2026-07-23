/*
 * XREFs of MiAllocateContiguousMemory @ 0x140114E20
 * Callers:
 *     MmAllocateContiguousNodeMemory @ 0x140114D80 (MmAllocateContiguousNodeMemory.c)
 *     MmAllocateContiguousMemory @ 0x140214A08 (MmAllocateContiguousMemory.c)
 * Callees:
 *     MiFindContiguousPages @ 0x14005BA20 (MiFindContiguousPages.c)
 *     MiFreePoolPages @ 0x1400630BC (MiFreePoolPages.c)
 *     MiFreeContiguousPages @ 0x140114BDC (MiFreeContiguousPages.c)
 *     MiFindContiguousMemoryInPool @ 0x140115220 (MiFindContiguousMemoryInPool.c)
 *     ExInsertPoolTag @ 0x140115390 (ExInsertPoolTag.c)
 *     MmUnmapIoSpace @ 0x1401153C0 (MmUnmapIoSpace.c)
 *     MiMapContiguousMemory @ 0x1401159C0 (MiMapContiguousMemory.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiLogPerfMemoryRangeEvent @ 0x140214958 (MiLogPerfMemoryRangeEvent.c)
 */

_SLIST_ENTRY *__fastcall MiAllocateContiguousMemory(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        int a6)
{
  unsigned int v6; // esi
  __int64 v7; // r10
  unsigned __int64 v9; // r11
  BOOL v11; // r12d
  unsigned __int64 v12; // r14
  int v13; // ecx
  unsigned __int16 v14; // r8
  unsigned __int16 v16; // ax
  char *v17; // r9
  unsigned __int16 *v18; // rdi
  unsigned __int16 *v19; // r13
  __int64 ContiguousMemoryInPool; // rax
  _SLIST_ENTRY *v21; // rbx
  int v22; // edi
  unsigned int v23; // ecx
  int v24; // eax
  unsigned __int64 v25; // r8
  char *v26; // rbx
  __int64 v27; // r9
  ULONG_PTR v28; // rbx
  __int64 v29; // rax
  unsigned __int64 v30; // rsi
  int v31; // ecx
  unsigned __int64 v32; // rbp
  unsigned __int64 v33; // r15
  __int64 v34; // rbx
  unsigned __int64 v35; // rdi
  unsigned __int8 CurrentIrql; // r13
  unsigned int v37; // r12d
  SIZE_T v39; // rdx
  ULONG_PTR v40; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v41; // [rsp+58h] [rbp-40h]
  int v42; // [rsp+A0h] [rbp+8h]
  unsigned int v45; // [rsp+C0h] [rbp+28h]
  unsigned int v46; // [rsp+D0h] [rbp+38h]

  v6 = a5;
  v7 = a4;
  v9 = a3;
  v11 = MmProtectFreedNonPagedPool == 1;
  v12 = ((a1 & 0xFFF) != 0) + (a1 >> 12);
  v41 = v12;
  if ( (a5 & 2) != 0 && (MiFlags & 0x30000) != 0 )
    v6 = a5 & 0xFFFFFFFD;
  if ( a4 && v12 > a4 || a2 > a3 || v12 + a2 <= a2 || v12 + a2 - 1 > a3 )
    return 0LL;
  v13 = 1;
  if ( v6 >> 3 == 1 )
  {
    v13 = 0;
  }
  else if ( v6 >> 3 == 3 && (v6 & 7) != 0 )
  {
    v13 = 2;
  }
  v14 = KeNumberNodes;
  if ( (unsigned __int16)KeNumberNodes <= 1u )
    a6 = 0;
  v46 = MiPlatformCacheAttributes[v13];
  if ( a6 == 0x80000000 )
  {
    v14 = KeNumberNodes;
    v16 = *(_WORD *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 1600) + 146LL);
  }
  else
  {
    v16 = a6;
  }
  v17 = (char *)qword_14034EB68;
  v42 = v16;
  v18 = (unsigned __int16 *)((char *)qword_14034EB68 + 2 * v16 * v14);
  if ( a6 == 0x80000000 )
    v19 = &v18[v14];
  else
    v19 = v18 + 1;
  if ( (v6 & 2) != 0 )
  {
    v22 = 0;
LABEL_21:
    v23 = 136314880;
    v24 = v42 * v14;
    v25 = v9;
    v26 = &v17[2 * v24];
    v27 = v7;
    while ( 1 )
    {
      v45 = v23;
      if ( (int)MiFindContiguousPages(
                  MiSystemPartition,
                  a2,
                  v25,
                  v27,
                  v12,
                  v46,
                  *(unsigned __int16 *)v26,
                  0x80000000,
                  v23,
                  &v40) >= 0 )
        break;
      v26 += 2;
      if ( v26 == (char *)v19 )
        return 0LL;
      v27 = a4;
      v23 = v45 & 0xF7FFFFFF;
      v25 = a3;
    }
    v28 = v40;
    v29 = MiMapContiguousMemory(v40 << 12, v12 << 12, v6, v11);
    v30 = v29;
    if ( v29 )
    {
      v31 = 1;
      if ( v11 )
        v31 = 3;
      if ( !(unsigned int)ExInsertPoolTag(1416523587, v29, a1, v22, v31) )
      {
        v39 = v12 << 12;
        if ( v11 )
          v39 += 4096LL;
        MmUnmapIoSpace((PVOID)v30, v39);
        v30 = 0LL;
      }
    }
    v32 = 48 * v28 - 0x58000000000LL;
    v33 = v32 + 48 * v12;
    if ( v30 )
      v34 = ((v30 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    else
      v34 = 0LL;
    v35 = v32 + 24;
    do
    {
      *(_QWORD *)(v35 + 16) = *(_QWORD *)(v35 + 16) & 0xFFFFFFF000000000uLL | 0xFFFFFFFFDLL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      v37 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v35, 0x3FuLL) )
      {
        do
        {
          if ( (++v37 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v37);
        }
        while ( *(__int64 *)v35 < 0 );
      }
      *(_QWORD *)(v35 - 16) = v34;
      _InterlockedAnd64((volatile signed __int64 *)v35, 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
      v32 += 48LL;
      v35 += 48LL;
      if ( v34 )
        v34 += 8LL;
    }
    while ( v32 < v33 );
    if ( v30 )
    {
      if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
        MiLogPerfMemoryRangeEvent(v30, 0LL, 13LL, v41);
      return (_SLIST_ENTRY *)v30;
    }
    MiFreeContiguousPages((__int64)MiSystemPartition, v40, v41);
    return 0LL;
  }
  if ( MmProtectFreedNonPagedPool == 1 || MiPlatformCacheAttributes[v13] != 1 )
  {
LABEL_20:
    v22 = 512;
    goto LABEL_21;
  }
  while ( 1 )
  {
    ContiguousMemoryInPool = MiFindContiguousMemoryInPool(a2, v9, v7, a1, *v18);
    v21 = (_SLIST_ENTRY *)ContiguousMemoryInPool;
    if ( ContiguousMemoryInPool )
      break;
    v7 = a4;
    ++v18;
    v9 = a3;
    if ( v18 == v19 )
    {
      v14 = KeNumberNodes;
      v17 = (char *)qword_14034EB68;
      goto LABEL_20;
    }
  }
  if ( !(unsigned int)ExInsertPoolTag(1953394499, ContiguousMemoryInPool, a1, 512, 0) )
  {
    MiFreePoolPages(v21, a1, 1953394499);
    return 0LL;
  }
  return v21;
}
