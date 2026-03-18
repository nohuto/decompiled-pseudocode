/*
 * XREFs of MiSortPartitionMdls @ 0x14021E170
 * Callers:
 *     MiDeletePartitionResources @ 0x14021D020 (MiDeletePartitionResources.c)
 *     MiInsertPartitionPages @ 0x14021D494 (MiInsertPartitionPages.c)
 * Callees:
 *     IoAllocateMdl @ 0x140033BF0 (IoAllocateMdl.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiDereferencePageRuns @ 0x140100004 (MiDereferencePageRuns.c)
 *     qsort @ 0x140172BB0 (qsort.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     MiCreateNodeLists @ 0x140596AF8 (MiCreateNodeLists.c)
 *     MiConvertInitialMemoryBlock @ 0x14059AF34 (MiConvertInitialMemoryBlock.c)
 */

void __fastcall MiSortPartitionMdls(__int64 a1)
{
  __int64 **v1; // rdx
  size_t v2; // rdi
  unsigned __int64 v4; // rax
  char *PoolWithTag; // rsi
  __int64 **v6; // r14
  __int64 v7; // rbp
  unsigned __int64 v8; // rbx
  size_t v9; // rcx
  unsigned __int64 v10; // rbp
  _QWORD *v11; // r12
  _QWORD *p_Next; // r13
  unsigned __int64 v13; // rbx
  PMDL Mdl; // r14
  unsigned __int64 v15; // rbx
  size_t v16; // rcx
  int i; // ebx
  __int64 v18; // r13
  _QWORD *v19; // rax
  void *v20; // r14
  size_t v21; // rcx
  _QWORD *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  volatile signed __int32 *v25; // rbx
  _QWORD *v26; // rdi
  __int64 v27; // rbp
  __int64 v28; // r14
  _QWORD *v29; // rbx
  unsigned int v30; // edi
  signed __int32 v31; // eax
  _QWORD *v32; // rbx
  void *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v34; // [rsp+70h] [rbp+8h]
  __int64 NodeLists; // [rsp+70h] [rbp+8h]
  unsigned __int64 v36; // [rsp+78h] [rbp+10h]
  unsigned __int8 CurrentIrql; // [rsp+78h] [rbp+10h]

  v1 = *(__int64 ***)(a1 + 48);
  v2 = 0LL;
  if ( v1 )
  {
    do
    {
      v4 = *((unsigned int *)v1 + 10);
      v1 = (__int64 **)*v1;
      v2 += v4 >> 12;
    }
    while ( v1 );
    if ( v2 )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v2, 0x6150694Du);
      if ( PoolWithTag )
      {
        v6 = *(__int64 ***)(a1 + 48);
        v7 = 0LL;
        while ( v6 )
        {
          v8 = (unsigned __int64)*((unsigned int *)v6 + 10) >> 12;
          memmove(&PoolWithTag[8 * v7], v6 + 6, 8 * v8);
          v6 = (__int64 **)*v6;
          v7 += v8;
        }
        qsort(PoolWithTag, v2, 8uLL, (int (__cdecl *)(const void *, const void *))MiPartitionMdlPageSort);
        v9 = v2;
        do
        {
          --v9;
          if ( *(__int64 *)&PoolWithTag[8 * v9] >= 0 )
            break;
          --v2;
        }
        while ( v9 );
        v34 = 0LL;
        v10 = v2 << 12;
        v11 = 0LL;
        p_Next = 0LL;
        if ( v2 << 12 )
        {
          while ( 1 )
          {
            v13 = v10;
            if ( v10 > 0xFFFFF000 )
              v13 = 4294963200LL;
            v36 = v13;
            Mdl = IoAllocateMdl(0LL, v13, 0, 0, 0LL);
            if ( !Mdl )
              break;
            v15 = v13 >> 12;
            memmove(&Mdl[1], &PoolWithTag[8 * v34], 8 * v15);
            v34 += v15;
            if ( p_Next )
            {
              *p_Next = Mdl;
            }
            else
            {
              p_Next = &Mdl->Next;
              v11 = &Mdl->Next;
            }
            v10 -= v36;
            if ( !v10 )
              goto LABEL_19;
          }
          if ( v11 )
          {
            do
            {
              v29 = (_QWORD *)*v11;
              ExFreePoolWithTag(v11, 0);
              v11 = v29;
            }
            while ( v29 );
          }
        }
        else
        {
LABEL_19:
          v16 = 0LL;
          for ( i = 1; v16 < v2; ++v16 )
          {
            if ( v16 )
            {
              if ( *(_QWORD *)&PoolWithTag[8 * v16] != *(_QWORD *)&PoolWithTag[8 * v16 - 8] + 1LL && !++i )
                break;
            }
          }
          v18 = 0LL;
          NodeLists = 0LL;
          if ( i )
          {
            v19 = ExAllocatePoolWithTag(NonPagedPoolNx, 16 * ((unsigned int)(i - 1) + 2LL), 0x6C4D6D4Du);
            v20 = v19;
            if ( v19 )
            {
              v21 = 0LL;
              *(_DWORD *)v19 = i;
              v22 = v19 + 1;
              for ( v19[1] = v2; v21 < v2; ++v21 )
              {
                if ( !v21 || *(_QWORD *)&PoolWithTag[8 * v21] != *(_QWORD *)&PoolWithTag[8 * v21 - 8] + 1LL )
                {
                  v23 = *(_QWORD *)&PoolWithTag[8 * v21];
                  v22 += 2;
                  *v22 = 0LL;
                  *(v22 - 1) = v23;
                }
                ++*v22;
              }
              v24 = MiConvertInitialMemoryBlock(a1, v20);
              v18 = v24;
              if ( v24 )
                NodeLists = MiCreateNodeLists(v24);
              ExFreePoolWithTag(v20, 0);
            }
          }
          v25 = (volatile signed __int32 *)(a1 + 240);
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1 + 240);
          }
          else
          {
            v30 = 0;
            if ( _interlockedbittestandset(v25, 0x1Fu) )
              v30 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(a1 + 240));
            while ( 1 )
            {
              v31 = *v25;
              if ( (*v25 & 0xBFFFFFFF) == 0x80000000 )
                break;
              if ( (v31 & 0x40000000) == 0 )
                _InterlockedCompareExchange(v25, v31 | 0x40000000, v31);
              if ( (++v30 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v30);
            }
          }
          v26 = *(_QWORD **)(a1 + 48);
          v27 = *(_QWORD *)(a1 + 144);
          v28 = *(_QWORD *)(a1 + 56);
          *(_QWORD *)(a1 + 56) = NodeLists;
          *(_QWORD *)(a1 + 48) = v11;
          *(_QWORD *)(a1 + 144) = v18;
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1 + 240, retaddr);
          else
            *v25 = 0;
          __writecr8(CurrentIrql);
          if ( v26 )
          {
            do
            {
              v32 = (_QWORD *)*v26;
              ExFreePoolWithTag(v26, 0);
              v26 = v32;
            }
            while ( v32 );
          }
          if ( v28 )
            MiDereferencePageRuns(v28);
          if ( v27 )
            MiDereferencePageRuns(v27);
        }
        ExFreePoolWithTag(PoolWithTag, 0);
      }
    }
  }
}
