/*
 * XREFs of PfpPrefetchFilesTrickle @ 0x14042A684
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1403EE5B4 (PfpPrefetchRequestPerform.c)
 * Callees:
 *     PfpCheckPrefetchAbort @ 0x14001FA24 (PfpCheckPrefetchAbort.c)
 *     MmQueryMemoryListInformation @ 0x14001FA60 (MmQueryMemoryListInformation.c)
 *     PfpReadSupportInitialize @ 0x1400AAE24 (PfpReadSupportInitialize.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x14042A9D8 (PfpUpdateRepurposedByPrefetch.c)
 *     PfpGetPageListCount @ 0x14042AAD8 (PfpGetPageListCount.c)
 *     MmPrefetchPagesEx @ 0x14042AFAC (MmPrefetchPagesEx.c)
 *     PfpReadSupportCleanup @ 0x1404EC1AC (PfpReadSupportCleanup.c)
 *     PfpFileBuildReadSupport @ 0x1404EC2A0 (PfpFileBuildReadSupport.c)
 */

__int64 __fastcall PfpPrefetchFilesTrickle(_QWORD *a1)
{
  __int64 v1; // rsi
  unsigned int v3; // edi
  unsigned int v4; // ebx
  __int64 v5; // r8
  __int64 v6; // rdx
  unsigned int v7; // r14d
  int *v8; // r14
  int v9; // eax
  char v10; // r12
  int v11; // r9d
  __int64 v12; // r8
  __int64 v13; // rbp
  unsigned int v14; // r13d
  unsigned int v15; // ebx
  int v16; // ebx
  int v17; // ecx
  bool v18; // cf
  __int64 result; // rax
  unsigned int v20; // [rsp+30h] [rbp-B8h]
  unsigned int v21; // [rsp+34h] [rbp-B4h]
  __int64 v22; // [rsp+38h] [rbp-B0h]
  __int64 v23; // [rsp+40h] [rbp-A8h]
  int v24; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+50h] [rbp-98h] BYREF
  __int64 i; // [rsp+58h] [rbp-90h]
  _QWORD v27[17]; // [rsp+60h] [rbp-88h] BYREF
  char v28; // [rsp+F0h] [rbp+8h]
  int v29; // [rsp+F8h] [rbp+10h]
  int v30; // [rsp+100h] [rbp+18h]
  unsigned int v31; // [rsp+108h] [rbp+20h]

  v1 = *a1;
  v3 = 0;
  v4 = 0;
  v28 = 0;
  v30 = 0;
  v31 = *(unsigned __int16 *)(*a1 + 30LL);
  for ( i = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
          + (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
        v4 < *(_DWORD *)(v1 + 8);
        v30 = ++v4 )
  {
    v5 = *(_QWORD *)(v1 + 32);
    v23 = v5;
    v6 = 5LL * v4;
    v22 = v6;
    if ( (*(_QWORD *)(((unsigned __int64)v4 << 6) + a1[2] + 24) & 0x400000000LL) == 0 )
      continue;
    v7 = 0;
    v20 = 0;
    if ( (*(_DWORD *)(v5 + 40LL * v4 + 12) & 0xFFFFFFFE) == 0 )
      continue;
    do
    {
      v8 = (int *)(*(_QWORD *)(v5 + 8 * v6 + 16) + 48LL * v7);
      v9 = *v8;
      if ( (*v8 & 2) != 0 || !v8[4] )
        goto LABEL_25;
      v10 = 0;
      while ( v10 )
      {
        if ( (v9 & 1) != 0 )
          goto LABEL_9;
LABEL_22:
        v18 = v10++ == -1;
        if ( !v18 && v10 != 1 )
          goto LABEL_23;
      }
      if ( (v9 & 1) != 0 )
        goto LABEL_22;
LABEL_9:
      PfpReadSupportInitialize((char *)v27);
      LOBYTE(v11) = v10;
      if ( (int)PfpFileBuildReadSupport((_DWORD)a1, (_DWORD)v8, v4, v11, (__int64)v27) >= 0 )
      {
        v13 = v27[0];
        v25 = v27[0];
        v14 = 0;
        v29 = 0;
        *(_QWORD *)v27[0] = v27[2];
        v15 = *(_DWORD *)(v13 + 8);
        v21 = v15;
        MmQueryMemoryListInformation((_OWORD *)a1 + 3, 0xB0u, v12, &v24);
        if ( v15 )
        {
          while ( !PfpCheckPrefetchAbort(a1)
               && (unsigned __int64)(a1[6] + a1[7] + PfpGetPageListCount(a1 + 11, 0LL, v31)) >= 0x80 )
          {
            if ( v14 + 16 > v15 )
              *(_DWORD *)(v13 + 8) = v15 - v14;
            else
              *(_DWORD *)(v13 + 8) = 16;
            memmove((void *)(v13 + 16), (const void *)(v13 + 16 + 8LL * v14), 8LL * *(unsigned int *)(v13 + 8));
            *(_QWORD *)(v13 + 16) |= (8 * (v31 & 7)) | (unsigned __int64)(*(_DWORD *)(*a1 + 28LL) & 7);
            v16 = MmPrefetchPagesEx(1LL, &v25);
            PfpUpdateRepurposedByPrefetch(a1 + 6, *(unsigned int *)(v13 + 8));
            v17 = v29;
            if ( v16 >= 0 )
            {
              v17 = *(_DWORD *)(v13 + 8) + v29;
              v14 += *(_DWORD *)(v13 + 8);
              v15 = v21;
              v29 = v17;
              if ( v14 < v21 )
                continue;
            }
            goto LABEL_17;
          }
          v17 = v29;
          v28 = 1;
        }
        else
        {
          v17 = 0;
        }
LABEL_17:
        v4 = v30;
        if ( v10 )
          *(_DWORD *)(v1 + 100) += v17;
        else
          *(_DWORD *)(v1 + 96) += v17;
      }
      PfpReadSupportCleanup(a1[5], v27);
      if ( v28 || PfpCheckPrefetchAbort(a1) )
      {
        v3 = -1073741248;
        goto LABEL_27;
      }
      v9 = *v8;
      if ( (*v8 & 8) == 0 )
        goto LABEL_22;
LABEL_23:
      v6 = v22;
      v5 = v23;
      if ( (*v8 & 8) == 0 )
        ++*(_DWORD *)(v1 + 84);
LABEL_25:
      v7 = v20 + 1;
      v20 = v7;
    }
    while ( v7 < *(_DWORD *)(v5 + 8 * v6 + 12) >> 1 );
  }
LABEL_27:
  result = v3;
  *(_DWORD *)(*a1 + 112LL) += ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
                            + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                            - i;
  return result;
}
