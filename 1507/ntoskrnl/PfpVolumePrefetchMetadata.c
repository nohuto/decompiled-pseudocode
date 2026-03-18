/*
 * XREFs of PfpVolumePrefetchMetadata @ 0x140455E28
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x140455A8C (PfpPrefetchRequestPerform.c)
 * Callees:
 *     MmQueryMemoryListInformation @ 0x140013C30 (MmQueryMemoryListInformation.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     NtFsControlFile @ 0x14042CAF8 (NtFsControlFile.c)
 *     PfpFileSetupObjectAttributes @ 0x14042DA64 (PfpFileSetupObjectAttributes.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x14042DF28 (PfpUpdateRepurposedByPrefetch.c)
 *     PfpGetPageListCount @ 0x14042E01C (PfpGetPageListCount.c)
 *     PfpPrefetchDirectoryStream @ 0x1404561D8 (PfpPrefetchDirectoryStream.c)
 */

__int64 __fastcall PfpVolumePrefetchMetadata(_QWORD *a1, unsigned int a2)
{
  __int64 v3; // r12
  void *OutputBuffer; // r11
  __int64 v5; // r13
  __int64 v6; // r14
  unsigned int *InputBuffer; // rsi
  int v8; // r8d
  unsigned __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // r15
  __int64 v12; // r8
  unsigned int v13; // ebp
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned int v17; // r10d
  unsigned int v18; // esi
  int *v19; // rbx
  NTSTATUS v20; // ebx
  __int64 result; // rax
  int v22; // r9d
  int v23; // eax
  unsigned __int64 v24; // r12
  unsigned int v25; // ebp
  __int64 v26; // rax
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // r8
  unsigned int v29; // r10d
  __int64 v30; // rax
  int v31; // ecx
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // rax
  int v35; // ecx
  __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // [rsp+50h] [rbp-A8h]
  int v39; // [rsp+58h] [rbp-A0h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-98h] BYREF
  _BYTE v41[16]; // [rsp+70h] [rbp-88h] BYREF
  _BYTE v42[120]; // [rsp+80h] [rbp-78h] BYREF
  unsigned int v43; // [rsp+100h] [rbp+8h]
  int v45; // [rsp+110h] [rbp+18h] BYREF
  int v46; // [rsp+118h] [rbp+20h] BYREF

  v3 = a2;
  v38 = a2;
  OutputBuffer = 0LL;
  v5 = 0LL;
  v6 = 5LL * a2;
  InputBuffer = (unsigned int *)a1[3];
  v8 = MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324];
  v9 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v10 = *(unsigned __int16 *)(*a1 + 30LL);
  v11 = *(_QWORD *)(*a1 + 32LL);
  *InputBuffer = 3;
  v12 = (unsigned int)(v8 << 8);
  v43 = v10;
  v39 = v12 + v9;
  *((_QWORD *)InputBuffer + 1) = (8 * (v10 & 7)) | (unsigned __int64)(*(_DWORD *)(*a1 + 28LL) & 7);
  if ( (*(_DWORD *)(*a1 + 80LL) & 4) != 0 )
  {
    MmQueryMemoryListInformation((_OWORD *)a1 + 3, 0xB0u, v12, &v46);
    OutputBuffer = 0LL;
  }
  v13 = 0;
  if ( (*(_DWORD *)(v11 + 8 * v6 + 12) & 0xFFFFFFFE) != 0 )
  {
    do
    {
      InputBuffer[1] = 0;
      if ( v13 >= *(_DWORD *)(v11 + 8 * v6 + 12) >> 1 )
        break;
      do
      {
        v14 = v13++;
        v15 = *(_QWORD *)(v11 + 8 * v6 + 16) + 48 * v14;
        v16 = *(_QWORD *)(v15 + 8);
        if ( (*(_BYTE *)v15 & 0x10) != 0 )
          v5 = *(_QWORD *)(v11 + 8 * v6 + 16) + 48 * v14;
        if ( v16 )
        {
          *(_QWORD *)&InputBuffer[2 * InputBuffer[1]++ + 4] = v16;
          if ( InputBuffer[1] >= *((_DWORD *)a1 + 8) )
            break;
        }
      }
      while ( v13 < *(_DWORD *)(v11 + 8 * v6 + 12) >> 1 );
      v17 = InputBuffer[1];
      if ( !v17 )
        break;
      v34 = *(_QWORD *)(*a1 + 72LL);
      if ( !v34 || !*(_DWORD *)(v34 + 4) )
      {
        v35 = (*(_DWORD *)(*a1 + 80LL) >> 2) & 1;
        if ( !v35 || (v36 = a1[5], !*(_DWORD *)(v36 + 72)) && (*(_DWORD *)(v36 + 68) & 4) == 0 )
        {
          if ( !v35 || (unsigned __int64)(a1[6] + a1[7] + PfpGetPageListCount((__int64)(a1 + 11), 0, v10)) >= 0x80 )
            continue;
        }
      }
LABEL_60:
      v20 = -1073741248;
      goto LABEL_15;
      v20 = NtFsControlFile(
              *(HANDLE *)((v3 << 6) + a1[2]),
              0LL,
              0LL,
              0LL,
              &IoStatusBlock,
              0x90120u,
              InputBuffer,
              8 * v17 + 16,
              OutputBuffer,
              (ULONG)OutputBuffer);
      if ( (*(_DWORD *)(*a1 + 80LL) & 4) != 0 )
        PfpUpdateRepurposedByPrefetch((_OWORD *)a1 + 3, InputBuffer[1], v37);
      OutputBuffer = 0LL;
      if ( v20 < 0 )
        goto LABEL_15;
      if ( v20 == 259 )
        KeBugCheckEx(0x191u, 0x15B0uLL, 0LL, 0LL, 0LL);
      v10 = v43;
    }
    while ( v13 < *(_DWORD *)(v11 + 8 * v6 + 12) >> 1 );
    if ( v5 )
    {
      v24 = 0LL;
      v25 = 0;
      ++*(_DWORD *)(*a1 + 88LL);
      if ( *(_DWORD *)(v5 + 16) )
      {
        while ( 1 )
        {
          InputBuffer[1] = 0;
          if ( v25 >= *(_DWORD *)(v5 + 16) )
            break;
          do
          {
            v26 = *(_QWORD *)(v5 + 24);
            v27 = *(_QWORD *)(v26 + 16LL * v25);
            v28 = v27 + *(unsigned int *)(v26 + 16LL * v25 + 8);
            if ( v27 < v24 )
              v27 = v24;
            while ( v27 < v28 )
            {
              *(_QWORD *)&InputBuffer[2 * InputBuffer[1]++ + 4] = v27 >> 10;
              if ( InputBuffer[1] >= *((_DWORD *)a1 + 8) )
              {
                v24 = v27 + 4096;
                break;
              }
              v27 += 4096LL;
            }
            if ( InputBuffer[1] >= *((_DWORD *)a1 + 8) )
              break;
            ++v25;
          }
          while ( v25 < *(_DWORD *)(v5 + 16) );
          v29 = InputBuffer[1];
          if ( !v29 )
            break;
          v30 = *(_QWORD *)(*a1 + 72LL);
          if ( v30 && *(_DWORD *)(v30 + 4) )
            goto LABEL_60;
          v31 = (*(_DWORD *)(*a1 + 80LL) >> 2) & 1;
          if ( v31 )
          {
            v32 = a1[5];
            if ( *(_DWORD *)(v32 + 72) || (*(_DWORD *)(v32 + 68) & 4) != 0 )
              goto LABEL_60;
          }
          if ( v31 && (unsigned __int64)(a1[6] + a1[7] + PfpGetPageListCount((__int64)(a1 + 11), 0, v10)) < 0x80 )
            goto LABEL_60;
          v20 = NtFsControlFile(
                  *(HANDLE *)((v38 << 6) + a1[2]),
                  0LL,
                  0LL,
                  0LL,
                  &IoStatusBlock,
                  0x90120u,
                  InputBuffer,
                  8 * v29 + 16,
                  OutputBuffer,
                  (ULONG)OutputBuffer);
          if ( (*(_DWORD *)(*a1 + 80LL) & 4) != 0 )
            PfpUpdateRepurposedByPrefetch((_OWORD *)a1 + 3, InputBuffer[1], v33);
          OutputBuffer = 0LL;
          if ( v20 < 0 )
            goto LABEL_15;
          if ( v20 == 259 )
            KeBugCheckEx(0x191u, 0x1615uLL, 0LL, 0LL, 0LL);
          if ( v25 >= *(_DWORD *)(v5 + 16) )
            break;
          v10 = v43;
        }
      }
      LODWORD(v3) = v38;
    }
  }
  v18 = 0;
  if ( (*(_DWORD *)(v11 + 8 * v6 + 12) & 0xFFFFFFFE) != 0 )
  {
    do
    {
      v19 = (int *)(*(_QWORD *)(v11 + 8 * v6 + 16) + 48LL * v18);
      if ( (*v19 & 2) != 0 )
      {
        PfpFileSetupObjectAttributes((__int64)a1, v19, a2, (__int64)v41, (__int64)v42, &v45);
        v23 = PfpPrefetchDirectoryStream(
                (_DWORD)a1,
                *((_DWORD *)a1 + 4) + ((_DWORD)v3 << 6),
                (_DWORD)v19,
                v22,
                (__int64)v42,
                v45);
        v20 = v23;
        if ( v23 < 0 )
        {
          if ( v23 == -1073741248 )
            goto LABEL_15;
        }
        else
        {
          ++*(_DWORD *)(*a1 + 88LL);
        }
      }
      ++v18;
    }
    while ( v18 < *(_DWORD *)(v11 + 8 * v6 + 12) >> 1 );
  }
  v20 = 0;
LABEL_15:
  result = (unsigned int)v20;
  *(_DWORD *)(*a1 + 108LL) += ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
                            + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                            - v39;
  return result;
}
