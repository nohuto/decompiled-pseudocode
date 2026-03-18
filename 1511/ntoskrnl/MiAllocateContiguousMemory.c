/*
 * XREFs of MiAllocateContiguousMemory @ 0x1400BD4F4
 * Callers:
 *     MmAllocateContiguousNodeMemory @ 0x1400BD454 (MmAllocateContiguousNodeMemory.c)
 *     MmAllocateContiguousMemory @ 0x1401D35C0 (MmAllocateContiguousMemory.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiFreePoolPages @ 0x14003B78C (MiFreePoolPages.c)
 *     MiFindContiguousMemoryInPool @ 0x1400BD920 (MiFindContiguousMemoryInPool.c)
 *     ExInsertPoolTag @ 0x1400BDA98 (ExInsertPoolTag.c)
 *     MiFindContiguousPages @ 0x1400BE4E0 (MiFindContiguousPages.c)
 *     MmUnmapIoSpace @ 0x1400C07D0 (MmUnmapIoSpace.c)
 *     MiMapContiguousMemory @ 0x1400C0CB8 (MiMapContiguousMemory.c)
 *     MiFreeContiguousPages @ 0x1400C1F6C (MiFreeContiguousPages.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1401D3510 (MiLogPerfMemoryRangeEvent.c)
 */

ULONG_PTR __fastcall MiAllocateContiguousMemory(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        int a6)
{
  unsigned int v6; // esi
  int v7; // r10d
  int v8; // ebp
  int v9; // r11d
  BOOL v11; // r12d
  unsigned __int64 v12; // r14
  int v13; // ecx
  unsigned __int16 v14; // r8
  unsigned __int16 v16; // ax
  char *v17; // r9
  unsigned __int16 *v18; // rdi
  unsigned __int16 *v19; // rax
  int v20; // r13d
  __int64 ContiguousMemoryInPool; // rax
  ULONG_PTR v22; // rbx
  char *v23; // rbx
  __int64 v24; // rbx
  __int64 v25; // rax
  unsigned __int64 v26; // rsi
  int v27; // ecx
  unsigned __int64 v28; // rbx
  unsigned __int64 v29; // rbp
  __int64 v30; // rdi
  unsigned __int8 v31; // al
  SIZE_T v33; // rdx
  unsigned __int16 *v34; // [rsp+50h] [rbp-48h]
  _QWORD v35[8]; // [rsp+58h] [rbp-40h] BYREF
  int v36; // [rsp+A0h] [rbp+8h]
  int v37; // [rsp+B0h] [rbp+18h]
  int v38; // [rsp+B8h] [rbp+20h]
  int v39; // [rsp+C0h] [rbp+28h]
  int v40; // [rsp+D0h] [rbp+38h]

  v38 = a4;
  v37 = a3;
  v6 = a5;
  v7 = a4;
  v8 = a2;
  v9 = a3;
  v11 = MmProtectFreedNonPagedPool == 1;
  v12 = ((a1 & 0xFFF) != 0) + (a1 >> 12);
  if ( (a5 & 2) != 0 && (MiFlags & 0x10000) != 0 )
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
  v40 = MiPlatformCacheAttributes[v13];
  if ( a6 == 0x80000000 )
  {
    v14 = KeNumberNodes;
    v16 = *(_WORD *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 1600) + 146LL);
  }
  else
  {
    v16 = a6;
  }
  v17 = (char *)qword_1402FE6B8;
  v36 = v16;
  v18 = (unsigned __int16 *)((char *)qword_1402FE6B8 + 2 * v16 * v14);
  if ( a6 == 0x80000000 )
    v19 = &v18[v14];
  else
    v19 = v18 + 1;
  v34 = v19;
  v20 = 512;
  if ( (v6 & 2) != 0 )
  {
    v20 = 0;
    goto LABEL_20;
  }
  if ( MmProtectFreedNonPagedPool == 1 || MiPlatformCacheAttributes[v13] != 1 )
  {
LABEL_20:
    v39 = 136314880;
    v23 = &v17[2 * v36 * v14];
    if ( (int)MiFindContiguousPages(
                (unsigned int)MiSystemPartition,
                v8,
                v9,
                v7,
                v12,
                v40,
                *(unsigned __int16 *)v23,
                0x80000000,
                136314880,
                (__int64)v35) < 0 )
    {
      while ( 1 )
      {
        v23 += 2;
        if ( v23 == (char *)v34 )
          break;
        v39 &= ~0x8000000u;
        if ( (int)MiFindContiguousPages(
                    (unsigned int)MiSystemPartition,
                    v8,
                    v37,
                    v38,
                    v12,
                    v40,
                    *(unsigned __int16 *)v23,
                    0x80000000,
                    v39,
                    (__int64)v35) >= 0 )
          goto LABEL_21;
      }
    }
    else
    {
LABEL_21:
      v24 = v35[0];
      v25 = MiMapContiguousMemory(v35[0] << 12, v12 << 12, v6, v11);
      v26 = v25;
      if ( v25 )
      {
        v27 = 1;
        if ( v11 )
          v27 = 3;
        if ( !(unsigned int)ExInsertPoolTag(1416523587, v25, a1, v20, v27) )
        {
          v33 = v12 << 12;
          if ( v11 )
            v33 += 4096LL;
          MmUnmapIoSpace((PVOID)v26, v33);
          v26 = 0LL;
        }
      }
      v28 = 48 * v24 - 0x58000000000LL;
      v29 = v28 + 48 * v12;
      if ( v26 )
        v30 = ((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      else
        v30 = 0LL;
      do
      {
        *(_QWORD *)(v28 + 40) = *(_QWORD *)(v28 + 40) & 0xFFFFFFF000000000uLL | 0xFFFFFFFFDLL;
        v31 = MiLockPageInline(v28);
        *(_QWORD *)(v28 + 8) = v30;
        _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v31);
        v28 += 48LL;
        if ( v30 )
          v30 += 8LL;
      }
      while ( v28 < v29 );
      if ( v26 )
      {
        if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
          MiLogPerfMemoryRangeEvent(v26, 0LL, 13LL, v12);
        return v26;
      }
      MiFreeContiguousPages(MiSystemPartition, v35[0], v12);
    }
    return 0LL;
  }
  while ( 1 )
  {
    ContiguousMemoryInPool = MiFindContiguousMemoryInPool(v8, v9, v7, a1, *v18);
    v22 = ContiguousMemoryInPool;
    if ( ContiguousMemoryInPool )
      break;
    v7 = v38;
    ++v18;
    v9 = v37;
    if ( v18 == v34 )
    {
      v14 = KeNumberNodes;
      v17 = (char *)qword_1402FE6B8;
      goto LABEL_20;
    }
  }
  if ( !(unsigned int)ExInsertPoolTag(1953394499, ContiguousMemoryInPool, a1, 512, 0) )
  {
    MiFreePoolPages(v22, a1);
    return 0LL;
  }
  return v22;
}
