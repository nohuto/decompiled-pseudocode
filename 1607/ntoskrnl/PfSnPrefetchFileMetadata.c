/*
 * XREFs of PfSnPrefetchFileMetadata @ 0x1404B762C
 * Callers:
 *     PfSnPrefetchMetadata @ 0x1404EB4C8 (PfSnPrefetchMetadata.c)
 *     PfSnGetSectionObject @ 0x1404EDC30 (PfSnGetSectionObject.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     NtWaitForSingleObject @ 0x1404469A0 (NtWaitForSingleObject.c)
 *     NtResetEvent @ 0x1404B773C (NtResetEvent.c)
 *     NtFsControlFile @ 0x1404EB46C (NtFsControlFile.c)
 */

__int64 __fastcall PfSnPrefetchFileMetadata(
        __int64 a1,
        void *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        HANDLE EventHandle)
{
  unsigned int Status; // r10d
  unsigned int v10; // ebp
  unsigned int v11; // eax
  _QWORD *v13; // r14
  unsigned int v14; // r12d
  void *v15; // r9
  int v16; // r13d
  ULONG InputBufferLength; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF

  Status = 0;
  if ( a5 )
  {
    v10 = *(_DWORD *)(a3 + 4);
    if ( v10 <= a4 || v10 - a4 < a5 )
    {
      return (unsigned int)-1073741701;
    }
    else
    {
      v11 = *(_DWORD *)(a1 + 96) & 7 | (8 * (*(_DWORD *)(a1 + 100) & 7 | 8));
      if ( a4 || a5 > 0x300 )
      {
        v13 = *(_QWORD **)(a1 + 80);
        v14 = 0;
        *v13 = 3LL;
        v13[1] = v11;
        v15 = v13 + 2;
        do
        {
          v16 = 768;
          if ( a5 - v14 < 0x300 )
            v16 = a5 - v14;
          *((_DWORD *)v13 + 1) = v16;
          memmove(v15, (const void *)(a3 + 8 * (v14 + a4 + 2LL)), (unsigned int)(8 * v16));
          InputBufferLength = 8 * *((_DWORD *)v13 + 1) + 16;
          NtResetEvent(EventHandle, 0LL);
          Status = NtFsControlFile(a2, EventHandle, 0LL, 0LL, &IoStatusBlock, 0x90120u, v13, InputBufferLength, 0LL, 0);
          if ( Status == 259 )
          {
            NtWaitForSingleObject(EventHandle, 0, 0LL);
            Status = IoStatusBlock.Status;
          }
          if ( (Status & 0xC0000000) == 0xC0000000 )
            break;
          v14 += v16;
          v15 = v13 + 2;
        }
        while ( v14 < a5 );
      }
      else
      {
        *(_DWORD *)(a3 + 4) = a5;
        *(_QWORD *)(a3 + 8) = v11;
        NtResetEvent(EventHandle, 0LL);
        Status = NtFsControlFile(a2, EventHandle, 0LL, 0LL, &IoStatusBlock, 0x90120u, (PVOID)a3, 8 * a5 + 16, 0LL, 0);
        if ( Status == 259 )
        {
          NtWaitForSingleObject(EventHandle, 0, 0LL);
          Status = IoStatusBlock.Status;
        }
        *(_DWORD *)(a3 + 4) = v10;
      }
    }
  }
  return Status;
}
