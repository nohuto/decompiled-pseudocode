/*
 * XREFs of PfpPrefetchFiles @ 0x140668D84
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1403EE5B4 (PfpPrefetchRequestPerform.c)
 * Callees:
 *     PfpCheckPrefetchAbort @ 0x14001FA24 (PfpCheckPrefetchAbort.c)
 *     PfpReadSupportInitialize @ 0x1400AAE24 (PfpReadSupportInitialize.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MmPrefetchPagesEx @ 0x14042AFAC (MmPrefetchPagesEx.c)
 *     PfpReadSupportCleanup @ 0x1404EC1AC (PfpReadSupportCleanup.c)
 *     PfpFileBuildReadSupport @ 0x1404EC2A0 (PfpFileBuildReadSupport.c)
 */

__int64 __fastcall PfpPrefetchFiles(__int64 *a1, char a2)
{
  __int64 v2; // rdi
  __int64 *v3; // r12
  signed int v4; // r14d
  int v5; // esi
  char v6; // r13
  __int64 v7; // rax
  unsigned int v8; // ecx
  int v9; // r11d
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r10
  __int64 v13; // r8
  _DWORD *v14; // rcx
  char *PoolWithTag; // rbp
  unsigned int v16; // ebx
  __int64 v17; // r15
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r12
  int *v21; // rsi
  char *v22; // r13
  int v23; // r9d
  __int64 v24; // r8
  _QWORD *v25; // rdx
  int v26; // eax
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // r9
  int v30; // r8d
  __int64 v32; // [rsp+30h] [rbp-68h]
  __int64 v33; // [rsp+38h] [rbp-60h]
  int v34; // [rsp+40h] [rbp-58h]
  unsigned int v37; // [rsp+B0h] [rbp+18h]

  v2 = *a1;
  v3 = a1;
  v4 = 0;
  v5 = 0;
  v6 = a2;
  v7 = *a1;
  v8 = *(_DWORD *)(*a1 + 8);
  v9 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
     + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  v34 = v9;
  v37 = *(_DWORD *)(v7 + 28) & 7 | (8 * (*(_WORD *)(v7 + 30) & 7));
  if ( !v8 )
    goto LABEL_48;
  v10 = 0LL;
  v11 = *(_QWORD *)(v2 + 32) + 12LL;
  v12 = v8;
  do
  {
    if ( (*(_QWORD *)(v10 + v3[2] + 24) & 0x400000000LL) != 0 )
    {
      v13 = 0LL;
      if ( (*(_DWORD *)v11 & 0xFFFFFFFE) != 0 )
      {
        while ( 1 )
        {
          v14 = (_DWORD *)(*(_QWORD *)(v11 + 4) + 48 * v13);
          if ( (*v14 & 0xA) != 0 || !v14[4] )
            goto LABEL_11;
          if ( !v6 )
            break;
          if ( (*v14 & 1) != 0 )
            goto LABEL_10;
LABEL_11:
          v13 = (unsigned int)(v13 + 1);
          if ( (unsigned int)v13 >= *(_DWORD *)v11 >> 1 )
            goto LABEL_12;
        }
        ++*(_DWORD *)(v2 + 84);
LABEL_10:
        ++v5;
        goto LABEL_11;
      }
    }
LABEL_12:
    v11 += 40LL;
    v10 += 64LL;
    --v12;
  }
  while ( v12 );
  if ( v5 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned int)(v5 << 6), 0x41536650u);
    if ( PoolWithTag )
    {
      v33 = (__int64)&PoolWithTag[56 * v5];
      memset(PoolWithTag, 0, (unsigned int)(v5 << 6));
      v17 = 0LL;
      if ( !*(_DWORD *)(v2 + 8) )
        goto LABEL_43;
      do
      {
        v18 = 5 * v17;
        v19 = *(_QWORD *)(v2 + 32);
        v32 = v19;
        if ( (*(_QWORD *)(((unsigned __int64)(unsigned int)v17 << 6) + v3[2] + 24) & 0x400000000LL) != 0 )
        {
          v20 = 0LL;
          if ( (*(_DWORD *)(v19 + 40 * v17 + 12) & 0xFFFFFFFE) != 0 )
          {
            do
            {
              v21 = (int *)(*(_QWORD *)(v19 + 8 * v18 + 16) + 48 * v20);
              if ( (*v21 & 0xA) == 0 && v21[4] && (!v6 || (*v21 & 1) != 0) )
              {
                v22 = &PoolWithTag[56 * v4];
                PfpReadSupportInitialize(v22);
                if ( (int)PfpFileBuildReadSupport(a1, v21, v17, a2, (__int64)v22) < 0 )
                {
                  PfpReadSupportCleanup(a1[5], (__int64)v22);
                  PfpReadSupportInitialize(v22);
                }
                else
                {
                  ++v4;
                }
                v6 = a2;
                v19 = v32;
                v18 = 5 * v17;
              }
              v20 = (unsigned int)(v20 + 1);
            }
            while ( (unsigned int)v20 < *(_DWORD *)(v19 + 8 * v18 + 12) >> 1 );
          }
          v3 = a1;
        }
        v17 = (unsigned int)(v17 + 1);
      }
      while ( (unsigned int)v17 < *(_DWORD *)(v2 + 8) );
      if ( v4 )
      {
        if ( PfpCheckPrefetchAbort(v3) )
        {
          v16 = -1073741248;
        }
        else
        {
          v23 = 0;
          v24 = 0LL;
          if ( v4 > 0 )
          {
            v25 = PoolWithTag;
            do
            {
              *(_QWORD *)*v25 = v25[2];
              *(_QWORD *)(v33 + 8 * v24) = *v25;
              v26 = *(_DWORD *)(*v25 + 8LL);
              v23 += v26;
              if ( v26 )
                *(_QWORD *)(*v25 + 16LL) |= v37;
              ++v24;
              v25 += 7;
            }
            while ( v24 < v4 );
          }
          if ( v6 )
            *(_DWORD *)(v2 + 100) += v23;
          else
            *(_DWORD *)(v2 + 96) += v23;
          v16 = MmPrefetchPagesEx(v4, v33, 0LL);
        }
      }
      else
      {
LABEL_43:
        v16 = -1073741275;
      }
      if ( v4 > 0 )
      {
        v27 = (__int64)PoolWithTag;
        v28 = (unsigned int)v4;
        do
        {
          PfpReadSupportCleanup(v3[5], v27);
          v27 += 56LL;
          --v28;
        }
        while ( v28 );
      }
      ExFreePoolWithTag(PoolWithTag, 0);
    }
    else
    {
      v16 = -1073741670;
    }
    v9 = v34;
  }
  else
  {
LABEL_48:
    v16 = -1073741275;
  }
  v29 = *v3;
  v30 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
      + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
      - v9;
  if ( v6 )
    *(_DWORD *)(v29 + 116) += v30;
  else
    *(_DWORD *)(v29 + 112) += v30;
  return v16;
}
