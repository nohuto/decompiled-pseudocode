/*
 * XREFs of MdlInvariantPreProcessing1 @ 0x14025AC9C
 * Callers:
 *     IovpCallDriver1 @ 0x14073F69C (IovpCallDriver1.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x1400ABA30 (MmMapLockedPagesSpecifyCache.c)
 *     MmMdlPageContentsState @ 0x140122348 (MmMdlPageContentsState.c)
 *     RtlpComputeCrcInternal @ 0x14013422C (RtlpComputeCrcInternal.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall MdlInvariantPreProcessing1(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v7; // rcx
  __int64 v8; // rcx
  PVOID v9; // rdi
  __int64 v10; // rax
  unsigned int v11; // ecx
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rax
  char v16; // cl
  __int64 v17; // r9
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  __int64 v21; // r8
  int v22; // edx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  _QWORD *v26; // rbx
  _QWORD *PoolWithTag; // rax
  unsigned int v28; // ecx
  __int64 v29; // rdx
  __int64 v30; // rax
  ULONG_PTR v31; // [rsp+20h] [rbp-48h]
  __int128 v32; // [rsp+30h] [rbp-38h]
  __int128 v33; // [rsp+40h] [rbp-28h]

  v3 = *(_QWORD *)(a1 + 168);
  v7 = *(_QWORD *)(v3 + 8);
  if ( !*(_QWORD *)v7
    && (KeGetCurrentIrql() >= 2u || *(_DWORD *)(v7 + 40) != -1)
    && (unsigned int)MmMdlPageContentsState(v7, 2u) == 1 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8LL);
    v9 = (*(_BYTE *)(v8 + 10) & 5) != 0
       ? *(PVOID *)(v8 + 24)
       : MmMapLockedPagesSpecifyCache((PMDL)v8, 0, MmCached, 0LL, 0, 0x20u);
    if ( v9 )
    {
      v10 = *(_QWORD *)(a2 + 224);
      if ( !v10 )
        goto LABEL_37;
      v11 = 0;
      if ( *(_DWORD *)v10 )
      {
        v12 = *(_QWORD *)(v10 + 8);
        while ( 1 )
        {
          v13 = *(_QWORD *)(32LL * v11 + v12);
          if ( v13 )
          {
            if ( v13 == *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8LL) )
              break;
          }
          if ( ++v11 >= *(_DWORD *)v10 )
            goto LABEL_15;
        }
        v14 = v12 + 32LL * v11;
      }
      else
      {
LABEL_15:
        v14 = 0LL;
      }
      if ( !v14 )
        goto LABEL_37;
      v15 = *(_QWORD *)(a1 + 168);
      v16 = *(_BYTE *)(v15 + 67);
      if ( v16 == *(_BYTE *)(v15 + 66) || *(_BYTE *)(v14 + 28) == v16 )
      {
        memset((void *)v14, 0, 0x20uLL);
        *(_QWORD *)(*(_QWORD *)(a2 + 224) + 16LL) = 0LL;
        v14 = 0LL;
      }
      if ( v14 )
      {
        v17 = *(_QWORD *)(a1 + 168);
        v18 = *(unsigned int *)(v14 + 24);
        v19 = *(unsigned int *)(*(_QWORD *)(v17 + 8) + 40LL);
        if ( (_DWORD)v18 != (_DWORD)v19 )
        {
          v20 = *(_QWORD *)(v14 + 16);
          if ( (unsigned __int64)v9 < v20 || (unsigned __int64)v9 + v19 > v20 + v18 )
          {
            v21 = *(_QWORD *)(a3 + 40);
            v31 = (ULONG_PTR)v9;
            if ( *(_BYTE *)a3 == 4 )
              v22 = 4112;
            else
              v22 = 4113;
            goto LABEL_33;
          }
        }
        if ( (MmVerifierData & 0x4000) != 0 )
        {
          v23 = RtlpComputeCrcInternal((unsigned __int64)v9, v19, 0LL, &Crc64Ctrl);
          if ( *(_QWORD *)(v14 + 8) != v23 )
          {
            if ( *(_BYTE *)a3 == 4 )
            {
              v22 = 4112;
LABEL_32:
              v21 = *(_QWORD *)(a3 + 40);
              v17 = *(_QWORD *)(a1 + 168);
              v31 = (ULONG_PTR)v9;
LABEL_33:
              VerifierBugCheckIfAppropriate(196, v22, v21, v17, v31);
              return;
            }
            if ( *(_DWORD *)(*(_QWORD *)(v3 + 184) + 8LL) == *(_DWORD *)(a3 + 8) )
            {
              v22 = 4113;
              goto LABEL_32;
            }
            *(_QWORD *)(v14 + 8) = v23;
          }
        }
      }
      else
      {
LABEL_37:
        v24 = RtlpComputeCrcInternal(
                (unsigned __int64)v9,
                *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 168) + 8LL) + 40LL),
                0LL,
                &Crc64Ctrl);
        v25 = *(_QWORD *)(a1 + 168);
        v26 = *(_QWORD **)(a2 + 224);
        *((_QWORD *)&v32 + 1) = v24;
        *(_QWORD *)&v33 = v9;
        *(_QWORD *)&v32 = *(_QWORD *)(v25 + 8);
        DWORD2(v33) = *(_DWORD *)(v32 + 40);
        BYTE12(v33) = *(_BYTE *)(v25 + 67);
        if ( !v26 )
        {
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x6D646C56u);
          v26 = PoolWithTag;
          if ( !PoolWithTag )
            return;
          memset(PoolWithTag, 0, 0x58uLL);
          *(_DWORD *)v26 = 2;
          v26[1] = v26 + 3;
          *(_QWORD *)(a2 + 224) = v26;
        }
        v28 = 0;
        if ( *(_DWORD *)v26 )
        {
          v29 = v26[1];
          while ( *(_QWORD *)(32LL * v28 + v29) )
          {
            if ( ++v28 >= *(_DWORD *)v26 )
              return;
          }
          v30 = 32LL * v28;
          *(_OWORD *)(v30 + v29) = v32;
          *(_OWORD *)(v30 + v29 + 16) = v33;
        }
      }
    }
  }
}
