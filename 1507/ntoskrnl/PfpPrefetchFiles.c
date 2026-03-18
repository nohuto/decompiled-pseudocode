/*
 * XREFs of PfpPrefetchFiles @ 0x1406AF06C
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x140455A8C (PfpPrefetchRequestPerform.c)
 * Callees:
 *     PfpReadSupportInitialize @ 0x140013934 (PfpReadSupportInitialize.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PfpFileBuildReadSupport @ 0x14042D618 (PfpFileBuildReadSupport.c)
 *     PfpReadSupportCleanup @ 0x14042DB04 (PfpReadSupportCleanup.c)
 *     MmPrefetchPagesEx @ 0x14049D750 (MmPrefetchPagesEx.c)
 */

__int64 __fastcall PfpPrefetchFiles(_QWORD *a1, char a2)
{
  __int64 v2; // rdi
  signed int v4; // r12d
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
  __int64 v20; // r13
  _DWORD *v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // r9d
  __int64 v25; // r8
  _QWORD *v26; // rdx
  int v27; // eax
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // r9
  int v31; // r8d
  __int64 v33; // [rsp+30h] [rbp-68h]
  __int64 v34; // [rsp+38h] [rbp-60h]
  int v35; // [rsp+40h] [rbp-58h]
  unsigned int v36; // [rsp+A0h] [rbp+8h]
  char *v38; // [rsp+B0h] [rbp+18h]

  v2 = *a1;
  v4 = 0;
  v5 = 0;
  v6 = a2;
  v7 = *a1;
  v8 = *(_DWORD *)(*a1 + 8LL);
  v9 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
     + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  v35 = v9;
  v36 = *(_DWORD *)(v7 + 28) & 7 | (8 * (*(_WORD *)(v7 + 30) & 7));
  if ( v8 )
  {
    v10 = 0LL;
    v11 = *(_QWORD *)(v2 + 32) + 12LL;
    v12 = v8;
    do
    {
      if ( (*(_QWORD *)(v10 + a1[2] + 24) & 0x400000000LL) != 0 )
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
      if ( !PoolWithTag )
      {
        v16 = -1073741670;
LABEL_16:
        v9 = v35;
        goto LABEL_53;
      }
      v34 = (__int64)&PoolWithTag[56 * v5];
      memset(PoolWithTag, 0, (unsigned int)(v5 << 6));
      v17 = 0LL;
      if ( *(_DWORD *)(v2 + 8) )
      {
        do
        {
          v18 = 5 * v17;
          v19 = *(_QWORD *)(v2 + 32);
          v33 = v19;
          if ( (*(_QWORD *)(((unsigned __int64)(unsigned int)v17 << 6) + a1[2] + 24) & 0x400000000LL) != 0 )
          {
            v20 = 0LL;
            if ( (*(_DWORD *)(v19 + 40 * v17 + 12) & 0xFFFFFFFE) != 0 )
            {
              do
              {
                v21 = (_DWORD *)(*(_QWORD *)(v19 + 8 * v18 + 16) + 48 * v20);
                if ( (*v21 & 0xA) == 0 && v21[4] && (!a2 || (*v21 & 1) != 0) )
                {
                  v38 = &PoolWithTag[56 * v4];
                  PfpReadSupportInitialize(v38);
                  if ( (int)PfpFileBuildReadSupport(a1, v21, v17, a2, (__int64)v38) < 0 )
                  {
                    PfpReadSupportCleanup(a1[5], (__int64)v38);
                    PfpReadSupportInitialize(v38);
                  }
                  else
                  {
                    ++v4;
                  }
                  v19 = v33;
                  v18 = 5 * v17;
                }
                v20 = (unsigned int)(v20 + 1);
              }
              while ( (unsigned int)v20 < *(_DWORD *)(v19 + 8 * v18 + 12) >> 1 );
            }
          }
          v17 = (unsigned int)(v17 + 1);
        }
        while ( (unsigned int)v17 < *(_DWORD *)(v2 + 8) );
        if ( v4 )
        {
          v22 = *(_QWORD *)(*a1 + 72LL);
          if ( v22 && *(_DWORD *)(v22 + 4)
            || (*(_DWORD *)(*a1 + 80LL) & 4) != 0
            && ((v23 = a1[5], *(_DWORD *)(v23 + 72)) || (*(_DWORD *)(v23 + 68) & 4) != 0) )
          {
            v6 = a2;
            v16 = -1073741248;
          }
          else
          {
            v24 = 0;
            v25 = 0LL;
            if ( v4 > 0 )
            {
              v26 = PoolWithTag;
              do
              {
                *(_QWORD *)*v26 = v26[2];
                *(_QWORD *)(v34 + 8 * v25) = *v26;
                v27 = *(_DWORD *)(*v26 + 8LL);
                v24 += v27;
                if ( v27 )
                  *(_QWORD *)(*v26 + 16LL) |= v36;
                ++v25;
                v26 += 7;
              }
              while ( v25 < v4 );
            }
            v6 = a2;
            if ( a2 )
              *(_DWORD *)(v2 + 100) += v24;
            else
              *(_DWORD *)(v2 + 96) += v24;
            v16 = MmPrefetchPagesEx(v4, v34, 0LL);
          }
          goto LABEL_48;
        }
        v6 = a2;
      }
      v16 = -1073741275;
LABEL_48:
      if ( v4 > 0 )
      {
        v28 = (__int64)PoolWithTag;
        v29 = (unsigned int)v4;
        do
        {
          PfpReadSupportCleanup(a1[5], v28);
          v28 += 56LL;
          --v29;
        }
        while ( v29 );
      }
      ExFreePoolWithTag(PoolWithTag, 0);
      goto LABEL_16;
    }
  }
  v16 = -1073741275;
LABEL_53:
  v30 = *a1;
  v31 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
      + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
      - v9;
  if ( v6 )
    *(_DWORD *)(v30 + 116) += v31;
  else
    *(_DWORD *)(v30 + 112) += v31;
  return v16;
}
