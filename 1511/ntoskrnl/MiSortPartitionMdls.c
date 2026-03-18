/*
 * XREFs of MiSortPartitionMdls @ 0x1401D9E48
 * Callers:
 *     MiDeletePartitionResources @ 0x1401D91C8 (MiDeletePartitionResources.c)
 *     MiInsertPartitionPages @ 0x1401D9510 (MiInsertPartitionPages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     MiDereferencePageRuns @ 0x1400BFEC0 (MiDereferencePageRuns.c)
 *     IoAllocateMdl @ 0x1400FC2E0 (IoAllocateMdl.c)
 *     qsort @ 0x140144B80 (qsort.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiCreateNodeLists @ 0x1405200A4 (MiCreateNodeLists.c)
 *     MiConvertInitialMemoryBlock @ 0x14054B2F8 (MiConvertInitialMemoryBlock.c)
 */

void __fastcall MiSortPartitionMdls(__int64 a1)
{
  __int64 **v1; // rdx
  size_t v2; // rdi
  unsigned __int64 v4; // rax
  char *PoolWithTag; // rsi
  __int64 **v6; // r14
  __int64 v7; // r15
  unsigned __int64 v8; // rbx
  size_t v9; // rcx
  _QWORD *p_Next; // r14
  unsigned __int64 v11; // r12
  _QWORD *v12; // r13
  unsigned __int64 v13; // rbx
  PMDL Mdl; // r15
  unsigned __int64 v15; // rbx
  __int64 v16; // rdx
  int v17; // ebx
  _QWORD *v18; // rax
  void *v19; // r15
  size_t v20; // rcx
  _QWORD *v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  KIRQL v24; // al
  _QWORD *v25; // rdi
  __int64 v26; // r15
  __int64 v27; // r14
  _QWORD *v28; // rbx
  _QWORD *v29; // rbx
  __int64 v30; // [rsp+70h] [rbp+8h]
  __int64 v31; // [rsp+78h] [rbp+10h]
  __int64 NodeLists; // [rsp+80h] [rbp+18h]

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
        v31 = 0LL;
        p_Next = 0LL;
        NodeLists = 0LL;
        if ( v2 )
        {
          v30 = 0LL;
          v11 = v2;
          v12 = 0LL;
          do
          {
            if ( v11 <= 0xFFFFF )
              v13 = v11 << 12;
            else
              v13 = 4294963200LL;
            Mdl = IoAllocateMdl(0LL, v13, 0, 0, 0LL);
            if ( !Mdl )
            {
              if ( p_Next )
              {
                do
                {
                  v29 = (_QWORD *)*p_Next;
                  ExFreePoolWithTag(p_Next, 0);
                  p_Next = v29;
                }
                while ( v29 );
              }
              goto LABEL_41;
            }
            v15 = v13 >> 12;
            memmove(&Mdl[1], &PoolWithTag[8 * v30], 8 * v15);
            v30 += v15;
            if ( v12 )
              *v12 = Mdl;
            else
              p_Next = &Mdl->Next;
            v12 = &Mdl->Next;
            v11 -= v15;
          }
          while ( v11 );
          v16 = 0LL;
          v17 = 1;
          while ( 1 )
          {
            if ( v16 )
            {
              if ( *(_QWORD *)&PoolWithTag[8 * v16] != *(_QWORD *)&PoolWithTag[8 * v16 - 8] + 1LL && !++v17 )
                break;
            }
            if ( ++v16 >= v2 )
            {
              v18 = ExAllocatePoolWithTag(NonPagedPoolNx, 16 * ((unsigned int)(v17 - 1) + 2LL), 0x6C4D6D4Du);
              v19 = v18;
              if ( v18 )
              {
                v20 = 0LL;
                *(_DWORD *)v18 = v17;
                v21 = v18 + 1;
                v18[1] = v2;
                do
                {
                  if ( !v20 || *(_QWORD *)&PoolWithTag[8 * v20] != *(_QWORD *)&PoolWithTag[8 * v20 - 8] + 1LL )
                  {
                    v22 = *(_QWORD *)&PoolWithTag[8 * v20];
                    v21 += 2;
                    *v21 = 0LL;
                    *(v21 - 1) = v22;
                  }
                  ++*v21;
                  ++v20;
                }
                while ( v20 < v2 );
                v23 = MiConvertInitialMemoryBlock(a1, v19);
                v31 = v23;
                if ( v23 )
                  NodeLists = MiCreateNodeLists(a1, v23);
                ExFreePoolWithTag(v19, 0);
              }
              break;
            }
          }
        }
        v24 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 224));
        v25 = *(_QWORD **)(a1 + 48);
        v26 = *(_QWORD *)(a1 + 56);
        *(_QWORD *)(a1 + 48) = p_Next;
        v27 = *(_QWORD *)(a1 + 128);
        *(_QWORD *)(a1 + 128) = v31;
        *(_QWORD *)(a1 + 56) = NodeLists;
        ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 224), v24);
        if ( v25 )
        {
          do
          {
            v28 = (_QWORD *)*v25;
            ExFreePoolWithTag(v25, 0);
            v25 = v28;
          }
          while ( v28 );
        }
        if ( v26 )
          MiDereferencePageRuns(v26);
        if ( v27 )
          MiDereferencePageRuns(v27);
LABEL_41:
        ExFreePoolWithTag(PoolWithTag, 0);
      }
    }
  }
}
