/*
 * XREFs of PfpPrefetchDirectoryStream @ 0x1404561D8
 * Callers:
 *     PfpVolumePrefetchMetadata @ 0x140455E28 (PfpVolumePrefetchMetadata.c)
 * Callees:
 *     MmQueryMemoryListInformation @ 0x140013C30 (MmQueryMemoryListInformation.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memset @ 0x140195A80 (memset.c)
 *     NtFsControlFile @ 0x14042CAF8 (NtFsControlFile.c)
 *     PfpOpenHandleClose @ 0x14042D5B8 (PfpOpenHandleClose.c)
 *     PfpOpenHandleCreate @ 0x14042D8E8 (PfpOpenHandleCreate.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x14042DF28 (PfpUpdateRepurposedByPrefetch.c)
 *     PfpGetPageListCount @ 0x14042E01C (PfpGetPageListCount.c)
 */

__int64 PfpPrefetchDirectoryStream(_QWORD *a1, __int64 a2, __int64 a3, ...)
{
  __int64 v3; // r12
  unsigned int *InputBuffer; // rsi
  unsigned __int64 v8; // r15
  unsigned int v9; // r13d
  __int64 v10; // r9
  __int64 v11; // r8
  unsigned int v12; // eax
  int v13; // eax
  __int64 v14; // r8
  void *OutputBuffer; // r11
  NTSTATUS v16; // ebx
  unsigned int v17; // ebp
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r8
  unsigned int v21; // r10d
  __int64 v22; // rax
  int v23; // ecx
  __int64 v24; // rax
  __int64 v25; // r8
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-58h] BYREF
  HANDLE FileHandle[4]; // [rsp+60h] [rbp-48h] BYREF
  __int64 v29; // [rsp+C8h] [rbp+20h] BYREF
  va_list va; // [rsp+C8h] [rbp+20h]
  __int64 v31; // [rsp+D0h] [rbp+28h]
  __int64 v32; // [rsp+D8h] [rbp+30h]
  va_list va1; // [rsp+E0h] [rbp+38h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v29 = va_arg(va1, _QWORD);
  v31 = va_arg(va1, _QWORD);
  v32 = va_arg(va1, _QWORD);
  v3 = a1[5];
  memset(FileHandle, 0, sizeof(FileHandle));
  InputBuffer = (unsigned int *)a1[3];
  FileHandle[3] = (HANDLE)((unsigned __int64)FileHandle[3] | 0x200000000LL);
  v8 = 0LL;
  v9 = *(unsigned __int16 *)(*a1 + 30LL);
  v10 = *(_QWORD *)(v31 + 8);
  v11 = *(_QWORD *)(v31 + 16);
  *InputBuffer = 4;
  v12 = v32;
  *((_QWORD *)InputBuffer + 1) = (8 * (v9 & 7)) | (unsigned __int64)(*(_DWORD *)(*a1 + 28LL) & 7);
  v13 = PfpOpenHandleCreate((__int64)FileHandle, v3, v11, v10, 1048577, v12, 0, a2);
  OutputBuffer = 0LL;
  v16 = v13;
  if ( v13 >= 0 )
  {
    if ( (*(_DWORD *)(*a1 + 80LL) & 4) != 0 )
    {
      MmQueryMemoryListInformation((_OWORD *)a1 + 3, 0xB0u, v14, (__int64 *)va);
      OutputBuffer = 0LL;
    }
    v17 = 0;
    while ( v17 < *(_DWORD *)(a3 + 16) )
    {
      InputBuffer[1] = 0;
      if ( v17 >= *(_DWORD *)(a3 + 16) )
        break;
      do
      {
        v18 = *(_QWORD *)(a3 + 24);
        v19 = *(_QWORD *)(v18 + 16LL * v17);
        v20 = v19 + *(unsigned int *)(v18 + 16LL * v17 + 8);
        if ( v19 < v8 )
          v19 = v8;
        while ( v19 < v20 )
        {
          *(_QWORD *)&InputBuffer[2 * InputBuffer[1]++ + 4] = v19;
          if ( InputBuffer[1] >= *((_DWORD *)a1 + 8) )
          {
            v8 = v19 + 4096;
            break;
          }
          v19 += 4096LL;
        }
        if ( InputBuffer[1] >= *((_DWORD *)a1 + 8) )
          break;
        ++v17;
      }
      while ( v17 < *(_DWORD *)(a3 + 16) );
      v21 = InputBuffer[1];
      if ( !v21 )
        break;
      v22 = *(_QWORD *)(*a1 + 72LL);
      if ( v22 && *(_DWORD *)(v22 + 4)
        || (v23 = (*(_DWORD *)(*a1 + 80LL) >> 2) & 1) != 0
        && ((v24 = a1[5], *(_DWORD *)(v24 + 72)) || (*(_DWORD *)(v24 + 68) & 4) != 0)
        || v23 && (unsigned __int64)(a1[6] + a1[7] + PfpGetPageListCount((__int64)(a1 + 11), 0, v9)) < 0x80 )
      {
        v16 = -1073741248;
        goto LABEL_28;
      }
      v16 = NtFsControlFile(
              FileHandle[0],
              0LL,
              0LL,
              0LL,
              &IoStatusBlock,
              0x90120u,
              InputBuffer,
              8 * v21 + 16,
              OutputBuffer,
              (ULONG)OutputBuffer);
      if ( (*(_DWORD *)(*a1 + 80LL) & 4) != 0 )
        PfpUpdateRepurposedByPrefetch((_OWORD *)a1 + 3, InputBuffer[1], v25);
      OutputBuffer = 0LL;
      if ( v16 < 0 )
      {
        if ( v16 == -1073741807 )
          break;
        goto LABEL_28;
      }
      if ( v16 == 259 )
        KeBugCheckEx(0x191u, 0x1472uLL, 0LL, 0LL, 0LL);
    }
    v16 = 0;
  }
LABEL_28:
  if ( ((unsigned __int64)FileHandle[3] & 0x400000000LL) != 0 )
    PfpOpenHandleClose(FileHandle, v3);
  return (unsigned int)v16;
}
