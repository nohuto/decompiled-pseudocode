/*
 * XREFs of PfpPrefetchFilesTrickle @ 0x14042DB8C
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x140455A8C (PfpPrefetchRequestPerform.c)
 * Callees:
 *     PfpReadSupportInitialize @ 0x140013934 (PfpReadSupportInitialize.c)
 *     MmQueryMemoryListInformation @ 0x140013C30 (MmQueryMemoryListInformation.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     PfpFileBuildReadSupport @ 0x14042D618 (PfpFileBuildReadSupport.c)
 *     PfpReadSupportCleanup @ 0x14042DB04 (PfpReadSupportCleanup.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x14042DF28 (PfpUpdateRepurposedByPrefetch.c)
 *     PfpGetPageListCount @ 0x14042E01C (PfpGetPageListCount.c)
 *     MmPrefetchPagesEx @ 0x14049D750 (MmPrefetchPagesEx.c)
 */

__int64 __fastcall PfpPrefetchFilesTrickle(_QWORD *a1)
{
  __int64 v1; // rbp
  unsigned int v3; // edi
  unsigned int v4; // ebx
  __int64 v5; // r8
  __int64 v6; // rdx
  unsigned int v7; // r14d
  int *v8; // r14
  int v9; // eax
  char v10; // r12
  __int64 v11; // r8
  __int64 v12; // r15
  unsigned int v13; // r13d
  unsigned int v14; // ebx
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // ebx
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rax
  bool v21; // cf
  __int64 result; // rax
  unsigned int v23; // [rsp+30h] [rbp-B8h]
  unsigned int v24; // [rsp+34h] [rbp-B4h]
  __int64 v25; // [rsp+38h] [rbp-B0h]
  __int64 v26; // [rsp+40h] [rbp-A8h]
  __int64 v27; // [rsp+48h] [rbp-A0h] BYREF
  __int64 i; // [rsp+50h] [rbp-98h]
  int v29; // [rsp+58h] [rbp-90h] BYREF
  _QWORD v30[17]; // [rsp+60h] [rbp-88h] BYREF
  char v31; // [rsp+F0h] [rbp+8h]
  int v32; // [rsp+F8h] [rbp+10h]
  unsigned int v33; // [rsp+100h] [rbp+18h]
  unsigned int v34; // [rsp+108h] [rbp+20h]

  v1 = *a1;
  v3 = 0;
  v4 = 0;
  v31 = 0;
  v33 = 0;
  v34 = *(unsigned __int16 *)(*a1 + 30LL);
  for ( i = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
          + (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
        v4 < *(_DWORD *)(v1 + 8);
        v33 = ++v4 )
  {
    v5 = *(_QWORD *)(v1 + 32);
    v26 = v5;
    v6 = 5LL * v4;
    v25 = v6;
    if ( (*(_QWORD *)(((unsigned __int64)v4 << 6) + a1[2] + 24) & 0x400000000LL) == 0 )
      continue;
    v7 = 0;
    v23 = 0;
    if ( (*(_DWORD *)(v5 + 40LL * v4 + 12) & 0xFFFFFFFE) == 0 )
      continue;
    do
    {
      v8 = (int *)(*(_QWORD *)(v5 + 8 * v6 + 16) + 48LL * v7);
      v9 = *v8;
      if ( (*v8 & 2) != 0 || !v8[4] )
        goto LABEL_33;
      v10 = 0;
      while ( v10 )
      {
        if ( (v9 & 1) != 0 )
          goto LABEL_9;
LABEL_30:
        v21 = v10++ == -1;
        if ( !v21 && v10 != 1 )
          goto LABEL_31;
      }
      if ( (v9 & 1) != 0 )
        goto LABEL_30;
LABEL_9:
      PfpReadSupportInitialize((char *)v30);
      if ( (int)PfpFileBuildReadSupport(a1, v8, v4, v10, (__int64)v30) >= 0 )
      {
        v12 = v30[0];
        v27 = v30[0];
        v13 = 0;
        v32 = 0;
        *(_QWORD *)v30[0] = v30[2];
        v14 = *(_DWORD *)(v12 + 8);
        v24 = v14;
        MmQueryMemoryListInformation((_OWORD *)a1 + 3, 0xB0u, v11, &v29);
        if ( v14 )
        {
          while ( 1 )
          {
            v15 = *(_QWORD *)(*a1 + 72LL);
            if ( v15 )
            {
              if ( *(_DWORD *)(v15 + 4) )
                break;
            }
            if ( (*(_DWORD *)(*a1 + 80LL) & 4) != 0 )
            {
              v16 = a1[5];
              if ( *(_DWORD *)(v16 + 72) || (*(_DWORD *)(v16 + 68) & 4) != 0 )
                break;
            }
            if ( (unsigned __int64)(a1[6] + a1[7] + PfpGetPageListCount(a1 + 11, 0LL, v34)) < 0x80 )
              break;
            if ( v13 + 16 > v14 )
              *(_DWORD *)(v12 + 8) = v14 - v13;
            else
              *(_DWORD *)(v12 + 8) = 16;
            memmove((void *)(v12 + 16), (const void *)(v12 + 8 * (v13 + 2LL)), 8LL * *(unsigned int *)(v12 + 8));
            *(_QWORD *)(v12 + 16) |= (8 * (v34 & 7)) | (unsigned __int64)(*(_DWORD *)(*a1 + 28LL) & 7);
            v17 = MmPrefetchPagesEx(1LL, &v27, 0LL);
            PfpUpdateRepurposedByPrefetch(a1 + 6, *(unsigned int *)(v12 + 8));
            if ( v17 >= 0 )
            {
              v18 = *(_DWORD *)(v12 + 8);
              v13 += v18;
              v32 += v18;
              v14 = v24;
              if ( v13 < v24 )
                continue;
            }
            goto LABEL_21;
          }
          v31 = 1;
        }
LABEL_21:
        v4 = v33;
        if ( v10 )
          *(_DWORD *)(v1 + 100) += v32;
        else
          *(_DWORD *)(v1 + 96) += v32;
      }
      PfpReadSupportCleanup(a1[5], (__int64)v30);
      if ( v31
        || (v19 = *(_QWORD *)(*a1 + 72LL)) != 0 && *(_DWORD *)(v19 + 4)
        || (*(_DWORD *)(*a1 + 80LL) & 4) != 0
        && ((v20 = a1[5], *(_DWORD *)(v20 + 72)) || (*(_DWORD *)(v20 + 68) & 4) != 0) )
      {
        v3 = -1073741248;
        goto LABEL_35;
      }
      v9 = *v8;
      if ( (*v8 & 8) == 0 )
        goto LABEL_30;
LABEL_31:
      v6 = v25;
      v5 = v26;
      if ( (*v8 & 8) == 0 )
        ++*(_DWORD *)(v1 + 84);
LABEL_33:
      v7 = v23 + 1;
      v23 = v7;
    }
    while ( v7 < *(_DWORD *)(v5 + 8 * v6 + 12) >> 1 );
  }
LABEL_35:
  result = v3;
  *(_DWORD *)(*a1 + 112LL) += ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
                            + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                            - i;
  return result;
}
