/*
 * XREFs of PfpVolumePrefetchMetadata @ 0x1403EE924
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1403EE5B4 (PfpPrefetchRequestPerform.c)
 * Callees:
 *     PfpCheckPrefetchAbort @ 0x14001FA24 (PfpCheckPrefetchAbort.c)
 *     MmQueryMemoryListInformation @ 0x14001FA60 (MmQueryMemoryListInformation.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     PfpPrefetchDirectoryStream @ 0x1403EECA0 (PfpPrefetchDirectoryStream.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x14042A9D8 (PfpUpdateRepurposedByPrefetch.c)
 *     PfpGetPageListCount @ 0x14042AAD8 (PfpGetPageListCount.c)
 *     NtFsControlFile @ 0x1404EB46C (NtFsControlFile.c)
 *     PfpFileSetupObjectAttributes @ 0x1404EC200 (PfpFileSetupObjectAttributes.c)
 */

__int64 __fastcall PfpVolumePrefetchMetadata(_QWORD *a1, unsigned int a2)
{
  __int64 v3; // r12
  __int64 v4; // r13
  __int64 v5; // r14
  unsigned int *InputBuffer; // rsi
  int v7; // r8d
  unsigned __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // r15
  __int64 v11; // r8
  __int64 v12; // rbp
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rsi
  _DWORD *v17; // rbx
  NTSTATUS v18; // ebx
  __int64 result; // rax
  int v20; // r9d
  int v21; // eax
  unsigned __int64 v22; // r12
  unsigned int v23; // ebp
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // r8
  int v27; // r10d
  int v28; // r10d
  __int64 v29; // [rsp+50h] [rbp-A8h]
  int v30; // [rsp+58h] [rbp-A0h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-98h] BYREF
  char v32; // [rsp+70h] [rbp-88h] BYREF
  _BYTE v33[120]; // [rsp+80h] [rbp-78h] BYREF
  unsigned int v34; // [rsp+100h] [rbp+8h]
  int v36; // [rsp+110h] [rbp+18h] BYREF
  int v37; // [rsp+118h] [rbp+20h] BYREF

  v3 = a2;
  v29 = a2;
  v4 = 0LL;
  v5 = 5LL * a2;
  InputBuffer = (unsigned int *)a1[3];
  v7 = MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324];
  v8 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v9 = *(unsigned __int16 *)(*a1 + 30LL);
  v10 = *(_QWORD *)(*a1 + 32LL);
  *InputBuffer = 3;
  v11 = (unsigned int)(v7 << 8);
  v34 = v9;
  v30 = v11 + v8;
  *((_QWORD *)InputBuffer + 1) = (8 * (v9 & 7)) | (unsigned __int64)(*(_DWORD *)(*a1 + 28LL) & 7);
  if ( (*(_DWORD *)(*a1 + 80LL) & 4) != 0 )
    MmQueryMemoryListInformation((_OWORD *)a1 + 3, 0xB0u, v11, &v37);
  v12 = 0LL;
  if ( (*(_DWORD *)(v10 + 8 * v5 + 12) & 0xFFFFFFFE) != 0 )
  {
    do
    {
      InputBuffer[1] = 0;
      if ( (unsigned int)v12 >= *(_DWORD *)(v10 + 8 * v5 + 12) >> 1 )
        break;
      do
      {
        v13 = 3 * v12;
        v12 = (unsigned int)(v12 + 1);
        v14 = *(_QWORD *)(v10 + 8 * v5 + 16) + 16 * v13;
        v15 = *(_QWORD *)(v14 + 8);
        if ( (*(_BYTE *)v14 & 0x10) != 0 )
          v4 = v14;
        if ( v15 )
        {
          *(_QWORD *)&InputBuffer[2 * InputBuffer[1]++ + 4] = v15;
          if ( InputBuffer[1] >= *((_DWORD *)a1 + 8) )
            break;
        }
      }
      while ( (unsigned int)v12 < *(_DWORD *)(v10 + 8 * v5 + 12) >> 1 );
      if ( !InputBuffer[1] )
        break;
      if ( PfpCheckPrefetchAbort(a1)
        || (*(_DWORD *)(*a1 + 80LL) & 4) != 0
        && (unsigned __int64)(a1[6] + a1[7] + PfpGetPageListCount(a1 + 11, 0LL, v9)) < 0x80 )
      {
LABEL_53:
        v18 = -1073741248;
        goto LABEL_15;
      }
      v18 = NtFsControlFile(
              *(HANDLE *)((v3 << 6) + a1[2]),
              0LL,
              0LL,
              0LL,
              &IoStatusBlock,
              0x90120u,
              InputBuffer,
              8 * v28 + 16,
              0LL,
              0);
      if ( (*(_DWORD *)(*a1 + 80LL) & 4) != 0 )
        PfpUpdateRepurposedByPrefetch(a1 + 6, InputBuffer[1]);
      if ( v18 < 0 )
        goto LABEL_15;
      if ( v18 == 259 )
        KeBugCheckEx(0x191u, 0x15BFuLL, 0LL, 0LL, 0LL);
      v9 = v34;
    }
    while ( (unsigned int)v12 < *(_DWORD *)(v10 + 8 * v5 + 12) >> 1 );
    if ( v4 )
    {
      v22 = 0LL;
      v23 = 0;
      ++*(_DWORD *)(*a1 + 88LL);
      if ( *(_DWORD *)(v4 + 16) )
      {
        while ( 1 )
        {
          InputBuffer[1] = 0;
          if ( v23 >= *(_DWORD *)(v4 + 16) )
            break;
          do
          {
            v24 = *(_QWORD *)(v4 + 24);
            v25 = *(_QWORD *)(v24 + 16LL * v23);
            v26 = v25 + *(unsigned int *)(v24 + 16LL * v23 + 8);
            if ( v25 < v22 )
              v25 = v22;
            while ( v25 < v26 )
            {
              *(_QWORD *)&InputBuffer[2 * InputBuffer[1]++ + 4] = v25 >> 10;
              if ( InputBuffer[1] >= *((_DWORD *)a1 + 8) )
              {
                v22 = v25 + 4096;
                break;
              }
              v25 += 4096LL;
            }
            if ( InputBuffer[1] >= *((_DWORD *)a1 + 8) )
              break;
            ++v23;
          }
          while ( v23 < *(_DWORD *)(v4 + 16) );
          if ( !InputBuffer[1] )
            break;
          if ( PfpCheckPrefetchAbort(a1)
            || (*(_DWORD *)(*a1 + 80LL) & 4) != 0
            && (unsigned __int64)(a1[6] + a1[7] + PfpGetPageListCount(a1 + 11, 0LL, v9)) < 0x80 )
          {
            goto LABEL_53;
          }
          v18 = NtFsControlFile(
                  *(HANDLE *)((v29 << 6) + a1[2]),
                  0LL,
                  0LL,
                  0LL,
                  &IoStatusBlock,
                  0x90120u,
                  InputBuffer,
                  8 * v27 + 16,
                  0LL,
                  0);
          if ( (*(_DWORD *)(*a1 + 80LL) & 4) != 0 )
            PfpUpdateRepurposedByPrefetch(a1 + 6, InputBuffer[1]);
          if ( v18 < 0 )
            goto LABEL_15;
          if ( v18 == 259 )
            KeBugCheckEx(0x191u, 0x1624uLL, 0LL, 0LL, 0LL);
          if ( v23 >= *(_DWORD *)(v4 + 16) )
            break;
          v9 = v34;
        }
      }
      LODWORD(v3) = v29;
    }
  }
  v16 = 0LL;
  if ( (*(_DWORD *)(v10 + 8 * v5 + 12) & 0xFFFFFFFE) != 0 )
  {
    do
    {
      v17 = (_DWORD *)(*(_QWORD *)(v10 + 8 * v5 + 16) + 48 * v16);
      if ( (*v17 & 2) != 0 )
      {
        PfpFileSetupObjectAttributes((_DWORD)a1, (_DWORD)v17, a2, (unsigned int)&v32, (__int64)v33, (__int64)&v36);
        v21 = PfpPrefetchDirectoryStream(
                (_DWORD)a1,
                *((_DWORD *)a1 + 4) + ((_DWORD)v3 << 6),
                (_DWORD)v17,
                v20,
                (__int64)v33,
                v36);
        v18 = v21;
        if ( v21 < 0 )
        {
          if ( v21 == -1073741248 )
            goto LABEL_15;
        }
        else
        {
          ++*(_DWORD *)(*a1 + 88LL);
        }
      }
      v16 = (unsigned int)(v16 + 1);
    }
    while ( (unsigned int)v16 < *(_DWORD *)(v10 + 8 * v5 + 12) >> 1 );
  }
  v18 = 0;
LABEL_15:
  result = (unsigned int)v18;
  *(_DWORD *)(*a1 + 108LL) += ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
                            + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                            - v30;
  return result;
}
