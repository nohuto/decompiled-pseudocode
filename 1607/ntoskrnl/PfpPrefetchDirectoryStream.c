/*
 * XREFs of PfpPrefetchDirectoryStream @ 0x1403EECA0
 * Callers:
 *     PfpVolumePrefetchMetadata @ 0x1403EE924 (PfpVolumePrefetchMetadata.c)
 * Callees:
 *     PfpCheckPrefetchAbort @ 0x14001FA24 (PfpCheckPrefetchAbort.c)
 *     MmQueryMemoryListInformation @ 0x14001FA60 (MmQueryMemoryListInformation.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x14042A9D8 (PfpUpdateRepurposedByPrefetch.c)
 *     PfpGetPageListCount @ 0x14042AAD8 (PfpGetPageListCount.c)
 *     NtFsControlFile @ 0x1404EB46C (NtFsControlFile.c)
 *     PfpOpenHandleClose @ 0x1404ED298 (PfpOpenHandleClose.c)
 *     PfpOpenHandleCreate @ 0x1404ED318 (PfpOpenHandleCreate.c)
 */

__int64 PfpPrefetchDirectoryStream(_QWORD *a1, __int64 a2, __int64 a3, ...)
{
  __int64 v3; // r12
  unsigned int *InputBuffer; // rsi
  unsigned __int64 v8; // r15
  unsigned int v9; // r13d
  __int64 v10; // r9
  __int64 v11; // r8
  int v12; // eax
  NTSTATUS v13; // ebx
  __int64 v14; // r8
  unsigned int v15; // ebp
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r8
  int v19; // r10d
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-58h] BYREF
  HANDLE FileHandle[4]; // [rsp+60h] [rbp-48h] BYREF
  __int64 v23; // [rsp+C8h] [rbp+20h] BYREF
  va_list va; // [rsp+C8h] [rbp+20h]
  __int64 v25; // [rsp+D0h] [rbp+28h]
  __int64 v26; // [rsp+D8h] [rbp+30h]
  va_list va1; // [rsp+E0h] [rbp+38h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v23 = va_arg(va1, _QWORD);
  v25 = va_arg(va1, _QWORD);
  v26 = va_arg(va1, _QWORD);
  v3 = a1[5];
  memset(FileHandle, 0, sizeof(FileHandle));
  InputBuffer = (unsigned int *)a1[3];
  FileHandle[3] = (HANDLE)((unsigned __int64)FileHandle[3] | 0x200000000LL);
  v8 = 0LL;
  v9 = *(unsigned __int16 *)(*a1 + 30LL);
  v10 = *(_QWORD *)(v25 + 8);
  v11 = *(_QWORD *)(v25 + 16);
  *InputBuffer = 4;
  v12 = v26;
  *((_QWORD *)InputBuffer + 1) = (8 * (v9 & 7)) | (unsigned __int64)(*(_DWORD *)(*a1 + 28LL) & 7);
  v13 = PfpOpenHandleCreate((unsigned int)FileHandle, v3, v11, v10, 1048577, v12, 0, a2);
  if ( v13 >= 0 )
  {
    if ( (*(_DWORD *)(*a1 + 80LL) & 4) != 0 )
      MmQueryMemoryListInformation((_OWORD *)a1 + 3, 0xB0u, v14, (__int64 *)va);
    v15 = 0;
    while ( v15 < *(_DWORD *)(a3 + 16) )
    {
      InputBuffer[1] = 0;
      if ( v15 >= *(_DWORD *)(a3 + 16) )
        break;
      do
      {
        v16 = *(_QWORD *)(a3 + 24);
        v17 = *(_QWORD *)(v16 + 16LL * v15);
        v18 = v17 + *(unsigned int *)(v16 + 16LL * v15 + 8);
        if ( v17 < v8 )
          v17 = v8;
        while ( v17 < v18 )
        {
          *(_QWORD *)&InputBuffer[2 * InputBuffer[1]++ + 4] = v17;
          if ( InputBuffer[1] >= *((_DWORD *)a1 + 8) )
          {
            v8 = v17 + 4096;
            break;
          }
          v17 += 4096LL;
        }
        if ( InputBuffer[1] >= *((_DWORD *)a1 + 8) )
          break;
        ++v15;
      }
      while ( v15 < *(_DWORD *)(a3 + 16) );
      if ( !InputBuffer[1] )
        break;
      if ( PfpCheckPrefetchAbort(a1)
        || (*(_DWORD *)(*a1 + 80LL) & 4) != 0
        && (unsigned __int64)(a1[6] + a1[7] + PfpGetPageListCount(a1 + 11, 0LL, v9)) < 0x80 )
      {
        v13 = -1073741248;
        goto LABEL_24;
      }
      v13 = NtFsControlFile(FileHandle[0], 0LL, 0LL, 0LL, &IoStatusBlock, 0x90120u, InputBuffer, 8 * v19 + 16, 0LL, 0);
      if ( (*(_DWORD *)(*a1 + 80LL) & 4) != 0 )
        PfpUpdateRepurposedByPrefetch(a1 + 6, InputBuffer[1]);
      if ( v13 < 0 )
      {
        if ( v13 == -1073741807 )
          break;
        goto LABEL_24;
      }
      if ( v13 == 259 )
        KeBugCheckEx(0x191u, 0x1481uLL, 0LL, 0LL, 0LL);
    }
    v13 = 0;
  }
LABEL_24:
  if ( ((unsigned __int64)FileHandle[3] & 0x400000000LL) != 0 )
    PfpOpenHandleClose(FileHandle, v3);
  return (unsigned int)v13;
}
