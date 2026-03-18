/*
 * XREFs of PfpPrefetchFiles @ 0x1404F3380
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1404DC998 (PfpPrefetchRequestPerform.c)
 * Callees:
 *     PfpCheckPrefetchAbort @ 0x1400FCA8C (PfpCheckPrefetchAbort.c)
 *     PfpReadSupportInitialize @ 0x1400FE064 (PfpReadSupportInitialize.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PfpFileBuildReadSupport @ 0x1404D9100 (PfpFileBuildReadSupport.c)
 *     MmPrefetchPagesEx @ 0x1404D9B80 (MmPrefetchPagesEx.c)
 *     PfpReadSupportCleanup @ 0x1404DA420 (PfpReadSupportCleanup.c)
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
  __int64 v16; // r15
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r12
  _DWORD *v20; // rsi
  char *v21; // r13
  int v22; // r9d
  __int64 v23; // r8
  _QWORD *v24; // rdx
  int v25; // eax
  unsigned int v26; // ebx
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
    goto LABEL_53;
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
        do
        {
          v14 = (_DWORD *)(*(_QWORD *)(v11 + 4) + 48 * v13);
          if ( (*v14 & 0xA) != 0 || !v14[4] )
            goto LABEL_10;
          if ( v6 )
          {
            if ( (*v14 & 1) == 0 )
              goto LABEL_10;
          }
          else
          {
            ++*(_DWORD *)(v2 + 84);
          }
          ++v5;
LABEL_10:
          v13 = (unsigned int)(v13 + 1);
        }
        while ( (unsigned int)v13 < *(_DWORD *)v11 >> 1 );
      }
    }
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
      v16 = 0LL;
      if ( !*(_DWORD *)(v2 + 8) )
        goto LABEL_52;
      do
      {
        v17 = 5 * v16;
        v18 = *(_QWORD *)(v2 + 32);
        v32 = v18;
        if ( (*(_QWORD *)(((unsigned __int64)(unsigned int)v16 << 6) + v3[2] + 24) & 0x400000000LL) != 0 )
        {
          v19 = 0LL;
          if ( (*(_DWORD *)(v18 + 40 * v16 + 12) & 0xFFFFFFFE) != 0 )
          {
            do
            {
              v20 = (_DWORD *)(*(_QWORD *)(v18 + 8 * v17 + 16) + 48 * v19);
              if ( (*v20 & 0xA) == 0 && v20[4] && (!v6 || (*v20 & 1) != 0) )
              {
                v21 = &PoolWithTag[56 * v4];
                PfpReadSupportInitialize(v21);
                if ( (int)PfpFileBuildReadSupport(a1, v20, v16, a2, (__int64)v21) < 0 )
                {
                  PfpReadSupportCleanup(a1[5], (__int64)v21);
                  PfpReadSupportInitialize(v21);
                }
                else
                {
                  ++v4;
                }
                v6 = a2;
                v18 = v32;
                v17 = 5 * v16;
              }
              v19 = (unsigned int)(v19 + 1);
            }
            while ( (unsigned int)v19 < *(_DWORD *)(v18 + 8 * v17 + 12) >> 1 );
          }
          v3 = a1;
        }
        v16 = (unsigned int)(v16 + 1);
      }
      while ( (unsigned int)v16 < *(_DWORD *)(v2 + 8) );
      if ( v4 )
      {
        if ( PfpCheckPrefetchAbort(v3) )
        {
          v26 = -1073741248;
        }
        else
        {
          v22 = 0;
          v23 = 0LL;
          if ( v4 > 0 )
          {
            v24 = PoolWithTag;
            do
            {
              *(_QWORD *)*v24 = v24[2];
              *(_QWORD *)(v33 + 8 * v23) = *v24;
              v25 = *(_DWORD *)(*v24 + 8LL);
              v22 += v25;
              if ( v25 )
                *(_QWORD *)(*v24 + 16LL) |= v37;
              ++v23;
              v24 += 7;
            }
            while ( v23 < v4 );
          }
          if ( v6 )
            *(_DWORD *)(v2 + 100) += v22;
          else
            *(_DWORD *)(v2 + 96) += v22;
          v26 = MmPrefetchPagesEx(v4, v33, 0LL);
        }
      }
      else
      {
LABEL_52:
        v26 = -1073741275;
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
      v26 = -1073741670;
    }
    v9 = v34;
  }
  else
  {
LABEL_53:
    v26 = -1073741275;
  }
  v29 = *v3;
  v30 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
      + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
      - v9;
  if ( v6 )
    *(_DWORD *)(v29 + 116) += v30;
  else
    *(_DWORD *)(v29 + 112) += v30;
  return v26;
}
