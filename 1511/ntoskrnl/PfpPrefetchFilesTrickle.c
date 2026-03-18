/*
 * XREFs of PfpPrefetchFilesTrickle @ 0x1404D95B0
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1404DC998 (PfpPrefetchRequestPerform.c)
 * Callees:
 *     PfpCheckPrefetchAbort @ 0x1400FCA8C (PfpCheckPrefetchAbort.c)
 *     MmQueryMemoryListInformation @ 0x1400FCAC0 (MmQueryMemoryListInformation.c)
 *     PfpReadSupportInitialize @ 0x1400FE064 (PfpReadSupportInitialize.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     PfpFileBuildReadSupport @ 0x1404D9100 (PfpFileBuildReadSupport.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x1404D9904 (PfpUpdateRepurposedByPrefetch.c)
 *     PfpGetPageListCount @ 0x1404D99F8 (PfpGetPageListCount.c)
 *     MmPrefetchPagesEx @ 0x1404D9B80 (MmPrefetchPagesEx.c)
 *     PfpReadSupportCleanup @ 0x1404DA420 (PfpReadSupportCleanup.c)
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
  __int64 v11; // r8
  __int64 v12; // rbp
  unsigned int v13; // r13d
  unsigned int v14; // ebx
  int v15; // ebx
  int v16; // ecx
  bool v17; // cf
  __int64 result; // rax
  unsigned int v19; // [rsp+30h] [rbp-B8h]
  unsigned int v20; // [rsp+34h] [rbp-B4h]
  __int64 v21; // [rsp+38h] [rbp-B0h]
  __int64 v22; // [rsp+40h] [rbp-A8h]
  __int64 v23; // [rsp+48h] [rbp-A0h] BYREF
  __int64 i; // [rsp+50h] [rbp-98h]
  int v25; // [rsp+58h] [rbp-90h] BYREF
  _QWORD v26[17]; // [rsp+60h] [rbp-88h] BYREF
  char v27; // [rsp+F0h] [rbp+8h]
  int v28; // [rsp+F8h] [rbp+10h]
  unsigned int v29; // [rsp+100h] [rbp+18h]
  unsigned int v30; // [rsp+108h] [rbp+20h]

  v1 = *a1;
  v3 = 0;
  v4 = 0;
  v27 = 0;
  v29 = 0;
  v30 = *(unsigned __int16 *)(*a1 + 30LL);
  for ( i = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
          + (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
        v4 < *(_DWORD *)(v1 + 8);
        v29 = ++v4 )
  {
    v5 = *(_QWORD *)(v1 + 32);
    v22 = v5;
    v6 = 5LL * v4;
    v21 = v6;
    if ( (*(_QWORD *)(((unsigned __int64)v4 << 6) + a1[2] + 24) & 0x400000000LL) == 0 )
      continue;
    v7 = 0;
    v19 = 0;
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
        v17 = v10++ == -1;
        if ( !v17 && v10 != 1 )
          goto LABEL_23;
      }
      if ( (v9 & 1) != 0 )
        goto LABEL_22;
LABEL_9:
      PfpReadSupportInitialize((char *)v26);
      if ( (int)PfpFileBuildReadSupport(a1, v8, v4, v10, (__int64)v26) >= 0 )
      {
        v12 = v26[0];
        v23 = v26[0];
        v13 = 0;
        v28 = 0;
        *(_QWORD *)v26[0] = v26[2];
        v14 = *(_DWORD *)(v12 + 8);
        v20 = v14;
        MmQueryMemoryListInformation((_OWORD *)a1 + 3, 0xB0u, v11, &v25);
        if ( v14 )
        {
          while ( !PfpCheckPrefetchAbort(a1)
               && (unsigned __int64)(a1[6] + a1[7] + PfpGetPageListCount(a1 + 11, 0LL, v30)) >= 0x80 )
          {
            if ( v13 + 16 > v14 )
              *(_DWORD *)(v12 + 8) = v14 - v13;
            else
              *(_DWORD *)(v12 + 8) = 16;
            memmove((void *)(v12 + 16), (const void *)(v12 + 16 + 8LL * v13), 8LL * *(unsigned int *)(v12 + 8));
            *(_QWORD *)(v12 + 16) |= (8 * (v30 & 7)) | (unsigned __int64)(*(_DWORD *)(*a1 + 28LL) & 7);
            v15 = MmPrefetchPagesEx(1LL, &v23);
            PfpUpdateRepurposedByPrefetch(a1 + 6, *(unsigned int *)(v12 + 8));
            v16 = v28;
            if ( v15 >= 0 )
            {
              v16 = *(_DWORD *)(v12 + 8) + v28;
              v13 += *(_DWORD *)(v12 + 8);
              v14 = v20;
              v28 = v16;
              if ( v13 < v20 )
                continue;
            }
            goto LABEL_17;
          }
          v16 = v28;
          v27 = 1;
        }
        else
        {
          v16 = 0;
        }
LABEL_17:
        v4 = v29;
        if ( v10 )
          *(_DWORD *)(v1 + 100) += v16;
        else
          *(_DWORD *)(v1 + 96) += v16;
      }
      PfpReadSupportCleanup(a1[5], v26);
      if ( v27 || PfpCheckPrefetchAbort(a1) )
      {
        v3 = -1073741248;
        goto LABEL_27;
      }
      v9 = *v8;
      if ( (*v8 & 8) == 0 )
        goto LABEL_22;
LABEL_23:
      v6 = v21;
      v5 = v22;
      if ( (*v8 & 8) == 0 )
        ++*(_DWORD *)(v1 + 84);
LABEL_25:
      v7 = v19 + 1;
      v19 = v7;
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
