/*
 * XREFs of EtwpUpdateFileHeader @ 0x1404AC4DC
 * Callers:
 *     EtwpCreateLogFile @ 0x1404AC23C (EtwpCreateLogFile.c)
 * Callees:
 *     EtwpResetBufferHeader @ 0x1400754B4 (EtwpResetBufferHeader.c)
 *     EtwpInitializeBufferHeader @ 0x140075504 (EtwpInitializeBufferHeader.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwReadFile @ 0x14017F0B0 (ZwReadFile.c)
 *     ZwWriteFile @ 0x14017F0F0 (ZwWriteFile.c)
 *     ZwQueryInformationFile @ 0x14017F210 (ZwQueryInformationFile.c)
 *     ZwSetInformationFile @ 0x14017F4D0 (ZwSetInformationFile.c)
 *     ZwQueryVolumeInformationFile @ 0x14017F910 (ZwQueryVolumeInformationFile.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     EtwpAddLogHeader @ 0x1404ABC40 (EtwpAddLogHeader.c)
 *     EtwpIsWow64Logger @ 0x1404AC0A0 (EtwpIsWow64Logger.c)
 */

NTSTATUS __fastcall EtwpUpdateFileHeader(__int64 a1, char a2)
{
  NTSTATUS result; // eax
  ULONG Length; // r13d
  int v6; // r12d
  _DWORD *PoolWithTag; // rax
  __int64 Buffer; // rsi
  NTSTATUS v9; // ebx
  void *v10; // rcx
  char v11; // dl
  __int64 v12; // r15
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  void *v18; // rcx
  __int64 v19; // [rsp+58h] [rbp-39h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+60h] [rbp-31h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-29h] BYREF
  struct _IO_STATUS_BLOCK v22; // [rsp+78h] [rbp-19h] BYREF
  _BYTE FsInformation[20]; // [rsp+88h] [rbp-9h] BYREF
  int v24; // [rsp+9Ch] [rbp+Bh]
  _BYTE FileInformation[8]; // [rsp+A0h] [rbp+Fh] BYREF
  __int64 v26; // [rsp+A8h] [rbp+17h]

  result = ZwQueryVolumeInformationFile(
             *(HANDLE *)(a1 + 816),
             &IoStatusBlock,
             FsInformation,
             0x18u,
             FileFsSizeInformation);
  if ( result >= 0 )
  {
    if ( a2 )
    {
      LODWORD(v19) = v24 - 1;
      Length = ~(v24 - 1) & (v24 + 383);
    }
    else
    {
      Length = *(_DWORD *)(a1 + 4);
      LODWORD(v19) = v24 - 1;
      if ( ((v24 - 1) & Length) != 0 )
        return -1073741811;
    }
    v6 = 1;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (Length + 4095LL) & 0xFFFFFFFFFFFFF000uLL, 0x50777445u);
    Buffer = (__int64)PoolWithTag;
    if ( !PoolWithTag )
      return -1073741801;
    if ( !a2 )
    {
      EtwpInitializeBufferHeader((__int16 *)a1, PoolWithTag);
      EtwpResetBufferHeader(Buffer, 4);
      EtwpAddLogHeader(a1, (unsigned int *)Buffer);
      v9 = ZwWriteFile(*(HANDLE *)(a1 + 816), 0LL, 0LL, 0LL, &IoStatusBlock, (PVOID)Buffer, Length, 0LL, 0LL);
      if ( v9 >= 0 )
      {
        if ( (*(_DWORD *)(a1 + 12) & 0x20) != 0 )
        {
          v16 = *(unsigned int *)(a1 + 308);
          if ( (*(_DWORD *)(a1 + 12) & 0x2000) != 0 )
            v17 = v16 << 10;
          else
            v17 = v16 << 20;
          v18 = *(void **)(a1 + 816);
          v19 = v17;
          v9 = ZwSetInformationFile(v18, &v22, &v19, 8u, FileEndOfFileInformation);
        }
        if ( v9 >= 0 )
        {
          *(_DWORD *)(a1 + 264) = 1;
          *(_DWORD *)(a1 + 220) = 1;
          *(_QWORD *)(a1 + 232) = Length;
        }
      }
      goto LABEL_10;
    }
    v10 = *(void **)(a1 + 816);
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
          goto LABEL_10;
        }
        if ( *(_DWORD *)(Buffer + 148) == (EtwpIsWow64Logger(a1) ? 4 : 8) )
        {
          v12 = *(unsigned int *)(Buffer + 104);
          LODWORD(v13) = *(_DWORD *)(Buffer + 140);
          if ( ((unsigned int)v12 & (unsigned int)v19) != 0 )
          {
            v9 = -1073741811;
          }
          else
          {
            if ( (unsigned int)(v12 - 1024) > 0xFFFC00 )
            {
              v9 = -1073741811;
              *(_DWORD *)(a1 + 60) = 4;
              goto LABEL_10;
            }
            if ( (*(_DWORD *)(a1 + 832) & 2) == 0 || *(_DWORD *)(a1 + 4) == (_DWORD)v12 )
            {
              if ( !*(_QWORD *)(Buffer + 120) )
              {
                if ( (v11 & 0x20) != 0 )
                {
                  v9 = -1073741811;
                  *(_DWORD *)(a1 + 60) = 6;
                  goto LABEL_10;
                }
                v9 = ZwQueryInformationFile(
                       *(HANDLE *)(a1 + 816),
                       &IoStatusBlock,
                       FileInformation,
                       0x18u,
                       FileStandardInformation);
                if ( v9 < 0 )
                {
                  *(_DWORD *)(a1 + 60) = 7;
                  goto LABEL_10;
                }
                v14 = *(unsigned int *)(a1 + 308);
                if ( (*(_DWORD *)(a1 + 12) & 0x2000) != 0 )
                  v15 = v14 << 10;
                else
                  v15 = v14 << 20;
                if ( v15 > 0 && v26 >= v15 )
                {
                  v9 = -1073741432;
                  *(_DWORD *)(a1 + 60) = 8;
                  goto LABEL_10;
                }
                v13 = v26 / v12;
              }
              if ( (_DWORD)v13 )
              {
                if ( (*(_DWORD *)(a1 + 12) & 0x10000000) == 0 )
                  v6 = KeNumberProcessors_0;
                if ( *(_DWORD *)(Buffer + 116) == v6 )
                {
                  *(_QWORD *)(Buffer + 120) = 0LL;
                  v9 = ZwWriteFile(
                         *(HANDLE *)(a1 + 816),
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
                    *(_DWORD *)(a1 + 264) = v13;
                    *(_DWORD *)(a1 + 220) = v13;
                    *(_DWORD *)(a1 + 4) = v12;
                    *(_QWORD *)(a1 + 232) = (unsigned int)(v12 * v13);
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
              goto LABEL_10;
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
LABEL_10:
    ExFreePoolWithTag((PVOID)Buffer, 0);
    return v9;
  }
  return result;
}
