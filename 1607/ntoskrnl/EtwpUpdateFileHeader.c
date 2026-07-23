/*
 * XREFs of EtwpUpdateFileHeader @ 0x140495264
 * Callers:
 *     EtwpCreateLogFile @ 0x140494FA8 (EtwpCreateLogFile.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x140086EF8 (EtwpQueryUsedProcessorCount.c)
 *     EtwpResetBufferHeader @ 0x1400870E4 (EtwpResetBufferHeader.c)
 *     EtwpInitializeBufferHeader @ 0x140087134 (EtwpInitializeBufferHeader.c)
 *     EtwpQueryMaximumFileSize @ 0x140087188 (EtwpQueryMaximumFileSize.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwReadFile @ 0x14015A2B0 (ZwReadFile.c)
 *     ZwWriteFile @ 0x14015A2F0 (ZwWriteFile.c)
 *     ZwQueryInformationFile @ 0x14015A410 (ZwQueryInformationFile.c)
 *     ZwSetInformationFile @ 0x14015A6D0 (ZwSetInformationFile.c)
 *     ZwQueryVolumeInformationFile @ 0x14015AB10 (ZwQueryVolumeInformationFile.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     EtwpAddLogHeader @ 0x1404948D8 (EtwpAddLogHeader.c)
 *     EtwpIsWow64Logger @ 0x140494D18 (EtwpIsWow64Logger.c)
 */

NTSTATUS __fastcall EtwpUpdateFileHeader(__int64 a1, char a2)
{
  NTSTATUS result; // eax
  ULONG Length; // r12d
  int v6; // r13d
  _DWORD *PoolWithTag; // rax
  __int64 Buffer; // rsi
  NTSTATUS v9; // ebx
  void *v10; // rcx
  char v11; // dl
  __int64 v12; // r15
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 MaximumFileSize; // rax
  void *v16; // rcx
  LARGE_INTEGER ByteOffset; // [rsp+58h] [rbp-29h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-21h] BYREF
  struct _IO_STATUS_BLOCK v19; // [rsp+70h] [rbp-11h] BYREF
  _BYTE FsInformation[20]; // [rsp+80h] [rbp-1h] BYREF
  int v21; // [rsp+94h] [rbp+13h]
  _BYTE FileInformation[8]; // [rsp+98h] [rbp+17h] BYREF
  __int64 v23; // [rsp+A0h] [rbp+1Fh]

  result = ZwQueryVolumeInformationFile(
             *(HANDLE *)(a1 + 800),
             &IoStatusBlock,
             FsInformation,
             0x18u,
             FileFsSizeInformation);
  if ( result >= 0 )
  {
    if ( a2 )
    {
      v6 = v21 - 1;
      Length = ~(v21 - 1) & (v21 + 383);
    }
    else
    {
      Length = *(_DWORD *)(a1 + 4);
      v6 = v21 - 1;
      if ( ((v21 - 1) & Length) != 0 )
        return -1073741811;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (Length + 4095LL) & 0xFFFFFFFFFFFFF000uLL, 0x50777445u);
    Buffer = (__int64)PoolWithTag;
    if ( !PoolWithTag )
      return -1073741801;
    if ( !a2 )
    {
      EtwpInitializeBufferHeader((__int16 *)a1, PoolWithTag);
      EtwpResetBufferHeader(Buffer, 4);
      EtwpAddLogHeader(a1, (unsigned int *)Buffer);
      v9 = ZwWriteFile(*(HANDLE *)(a1 + 800), 0LL, 0LL, 0LL, &IoStatusBlock, (PVOID)Buffer, Length, 0LL, 0LL);
      if ( v9 >= 0 )
      {
        if ( (*(_DWORD *)(a1 + 12) & 0x20) != 0 )
        {
          MaximumFileSize = EtwpQueryMaximumFileSize(a1);
          v16 = *(void **)(a1 + 800);
          ByteOffset.QuadPart = MaximumFileSize;
          v9 = ZwSetInformationFile(v16, &v19, &ByteOffset, 8u, FileEndOfFileInformation);
        }
        if ( v9 >= 0 )
        {
          *(_DWORD *)(a1 + 248) = 1;
          *(_DWORD *)(a1 + 204) = 1;
          *(_QWORD *)(a1 + 216) = Length;
        }
      }
      goto LABEL_11;
    }
    v10 = *(void **)(a1 + 800);
    ByteOffset.QuadPart = 0LL;
    v9 = ZwReadFile(v10, 0LL, 0LL, 0LL, &IoStatusBlock, PoolWithTag, Length, &ByteOffset, 0LL);
    if ( v9 >= 0 )
    {
      if ( (*(_DWORD *)(Buffer + 136) & 0x4000402) != 0 )
      {
        v9 = -1073741811;
        *(_DWORD *)(a1 + 60) = 1;
      }
      else
      {
        if ( *(_BYTE *)(Buffer + 108) != 10 || *(_BYTE *)(Buffer + 109) )
        {
          v9 = -1073741811;
          *(_DWORD *)(a1 + 60) = 2;
          goto LABEL_11;
        }
        if ( *(_DWORD *)(Buffer + 148) == (EtwpIsWow64Logger(a1) ? 4 : 8) )
        {
          v12 = *(unsigned int *)(Buffer + 104);
          LODWORD(v13) = *(_DWORD *)(Buffer + 140);
          if ( (v6 & (unsigned int)v12) != 0 )
          {
            v9 = -1073741811;
          }
          else
          {
            if ( (unsigned int)(v12 - 1024) > 0xFFFC00 )
            {
              v9 = -1073741811;
              *(_DWORD *)(a1 + 60) = 4;
              goto LABEL_11;
            }
            if ( (*(_DWORD *)(a1 + 816) & 2) == 0 || *(_DWORD *)(a1 + 4) == (_DWORD)v12 )
            {
              if ( !*(_QWORD *)(Buffer + 120) )
              {
                if ( (v11 & 0x20) != 0 )
                {
                  v9 = -1073741811;
                  *(_DWORD *)(a1 + 60) = 6;
                  goto LABEL_11;
                }
                v9 = ZwQueryInformationFile(
                       *(HANDLE *)(a1 + 800),
                       &IoStatusBlock,
                       FileInformation,
                       0x18u,
                       FileStandardInformation);
                if ( v9 < 0 )
                {
                  *(_DWORD *)(a1 + 60) = 7;
                  goto LABEL_11;
                }
                v14 = EtwpQueryMaximumFileSize(a1);
                if ( v14 > 0 && v23 >= v14 )
                {
                  v9 = -1073741432;
                  *(_DWORD *)(a1 + 60) = 8;
                  goto LABEL_11;
                }
                v13 = v23 / v12;
              }
              if ( (_DWORD)v13 )
              {
                if ( *(_DWORD *)(Buffer + 116) == (unsigned int)EtwpQueryUsedProcessorCount(a1) )
                {
                  *(_QWORD *)(Buffer + 120) = 0LL;
                  v9 = ZwWriteFile(
                         *(HANDLE *)(a1 + 800),
                         0LL,
                         0LL,
                         0LL,
                         &IoStatusBlock,
                         (PVOID)Buffer,
                         Length,
                         &ByteOffset,
                         0LL);
                  if ( v9 >= 0 )
                  {
                    *(_DWORD *)(a1 + 248) = v13;
                    *(_DWORD *)(a1 + 204) = v13;
                    *(_DWORD *)(a1 + 4) = v12;
                    *(_QWORD *)(a1 + 216) = (unsigned int)(v12 * v13);
                  }
                }
                else
                {
                  v9 = -1073741811;
                  *(_DWORD *)(a1 + 60) = 10;
                }
              }
              else
              {
                v9 = -1073741811;
                *(_DWORD *)(a1 + 60) = 9;
              }
              goto LABEL_11;
            }
            v9 = -1073741306;
            *(_DWORD *)(a1 + 60) = 5;
          }
        }
        else
        {
          v9 = -1073741811;
          *(_DWORD *)(a1 + 60) = 3;
        }
      }
    }
LABEL_11:
    ExFreePoolWithTag((PVOID)Buffer, 0);
    return v9;
  }
  return result;
}
