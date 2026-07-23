/*
 * XREFs of MiAllocateContiguousMemory @ 0x14009A740
 * Callers:
 *     MmAllocateContiguousNodeMemory @ 0x14009A6A0 (MmAllocateContiguousNodeMemory.c)
 *     MmAllocateContiguousMemory @ 0x1401E34C8 (MmAllocateContiguousMemory.c)
 * Callees:
 *     MiFreePoolPages @ 0x1400180D8 (MiFreePoolPages.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     ExInsertPoolTag @ 0x14009AABC (ExInsertPoolTag.c)
 *     MiFindContiguousMemoryInPool @ 0x14009AAEC (MiFindContiguousMemoryInPool.c)
 *     MmUnmapIoSpace @ 0x14009ACB0 (MmUnmapIoSpace.c)
 *     MiMapContiguousMemory @ 0x14009B0AC (MiMapContiguousMemory.c)
 *     MiProtectionToCacheAttribute @ 0x1400E538C (MiProtectionToCacheAttribute.c)
 *     MiFindContiguousPages @ 0x140102220 (MiFindContiguousPages.c)
 *     MiFreeContiguousPages @ 0x140111E80 (MiFreeContiguousPages.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1401E340C (MiLogPerfMemoryRangeEvent.c)
 */

unsigned __int64 *__fastcall MiAllocateContiguousMemory(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        int a6)
{
  unsigned int v6; // esi
  int v7; // r13d
  int v8; // ebp
  BOOL v10; // r12d
  unsigned __int64 v11; // r14
  int v12; // eax
  int v13; // r10d
  unsigned __int16 v14; // r8
  int v15; // r11d
  unsigned __int16 v17; // r9
  unsigned __int16 v18; // cx
  char *v19; // r9
  unsigned __int16 *v20; // rdi
  unsigned __int16 *v21; // rax
  __int64 ContiguousMemoryInPool; // rax
  unsigned __int64 *v23; // rbx
  int v24; // edi
  int v25; // eax
  unsigned int v26; // ecx
  int v27; // r8d
  char *v28; // rbx
  __int64 v29; // rbx
  __int64 v30; // rax
  unsigned __int64 v31; // rsi
  int v32; // ecx
  unsigned __int64 v33; // rbx
  unsigned __int64 v34; // rbp
  __int64 v35; // rdi
  unsigned __int8 v36; // al
  SIZE_T v38; // rdx
  int i; // [rsp+28h] [rbp-70h]
  int v40; // [rsp+30h] [rbp-68h]
  unsigned int v41; // [rsp+40h] [rbp-58h]
  __int64 v42[9]; // [rsp+50h] [rbp-48h] BYREF
  int v43; // [rsp+A0h] [rbp+8h]
  int v44; // [rsp+B0h] [rbp+18h]
  unsigned __int16 *v45; // [rsp+B8h] [rbp+20h]
  unsigned int v46; // [rsp+C0h] [rbp+28h]
  int v47; // [rsp+D0h] [rbp+38h]

  v44 = a3;
  v6 = a5;
  v7 = a4;
  v8 = a2;
  v10 = MmProtectFreedNonPagedPool == 1;
  v11 = ((a1 & 0xFFF) != 0) + (a1 >> 12);
  if ( (a5 & 2) != 0 && (MiFlags & 0x4000) != 0 )
    v6 = a5 & 0xFFFFFFFD;
  if ( a4 && v11 > a4 || a2 > a3 || v11 + a2 <= a2 || v11 + a2 - 1 > a3 )
    return 0LL;
  v12 = MiProtectionToCacheAttribute(v6);
  v14 = KeNumberNodes;
  v15 = v12;
  v47 = v12;
  if ( (unsigned __int16)KeNumberNodes <= v17 )
    a6 = 0;
  if ( a6 == 0x80000000 )
  {
    v14 = KeNumberNodes;
    v18 = *(_WORD *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 1600) + 146LL);
  }
  else
  {
    v18 = a6;
  }
  v19 = (char *)qword_1403269E8;
  v43 = v18;
  v20 = (unsigned __int16 *)((char *)qword_1403269E8 + 2 * v18 * v14);
  if ( a6 == 0x80000000 )
    v21 = &v20[v14];
  else
    v21 = v20 + 1;
  v45 = v21;
  if ( (v6 & 2) != 0 )
  {
    v24 = 0;
LABEL_19:
    v25 = v43 * v14;
    v26 = 135266304;
    v27 = v13;
    v41 = 135266304;
    v28 = &v19[2 * v25];
    v40 = *(unsigned __int16 *)v28;
    for ( i = v15; ; i = v47 )
    {
      v46 = v26;
      if ( (int)MiFindContiguousPages(
                  (unsigned int)MiSystemPartition,
                  v8,
                  v27,
                  v7,
                  v11,
                  i,
                  v40,
                  0x80000000,
                  v41,
                  (__int64)v42) >= 0 )
        break;
      v28 += 2;
      if ( v28 == (char *)v45 )
        return 0LL;
      v27 = v44;
      v26 = v46 & 0xF7FFFFFF;
      v41 = v46 & 0xF7FFFFFF;
      v40 = *(unsigned __int16 *)v28;
    }
    v29 = v42[0];
    v30 = MiMapContiguousMemory(v42[0] << 12, v11 << 12, v6, v10);
    v31 = v30;
    if ( v30 )
    {
      v32 = 1;
      if ( v10 )
        v32 = 3;
      if ( !(unsigned int)ExInsertPoolTag(1416523587, v30, a1, v24, v32) )
      {
        v38 = v11 << 12;
        if ( v10 )
          v38 += 4096LL;
        MmUnmapIoSpace((PVOID)v31, v38);
        v31 = 0LL;
      }
    }
    v33 = 48 * v29 - 0x58000000000LL;
    v34 = v33 + 48 * v11;
    if ( v31 )
      v35 = ((v31 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    else
      v35 = 0LL;
    do
    {
      *(_QWORD *)(v33 + 40) = *(_QWORD *)(v33 + 40) & 0xFFFFFFF000000000uLL | 0xFFFFFFFFDLL;
      v36 = MiLockPageInline(v33);
      *(_QWORD *)(v33 + 8) = v35;
      _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v36);
      v33 += 48LL;
      if ( v35 )
        v35 += 8LL;
    }
    while ( v33 < v34 );
    if ( v31 )
    {
      if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
        MiLogPerfMemoryRangeEvent(v31, 0LL, 13LL, v11);
      return (unsigned __int64 *)v31;
    }
    MiFreeContiguousPages(MiSystemPartition, v42[0], v11);
    return 0LL;
  }
  if ( v10 || v15 != 1 )
  {
LABEL_18:
    v24 = 512;
    goto LABEL_19;
  }
  while ( 1 )
  {
    ContiguousMemoryInPool = MiFindContiguousMemoryInPool(v8, v13, v7, a1, *v20);
    v23 = (unsigned __int64 *)ContiguousMemoryInPool;
    if ( ContiguousMemoryInPool )
      break;
    v13 = v44;
    if ( ++v20 == v45 )
    {
      v14 = KeNumberNodes;
      v19 = (char *)qword_1403269E8;
      v15 = v47;
      goto LABEL_18;
    }
  }
  if ( !(unsigned int)ExInsertPoolTag(1953394499, ContiguousMemoryInPool, a1, 512, 0) )
  {
    MiFreePoolPages(v23, a1);
    return 0LL;
  }
  return v23;
}
