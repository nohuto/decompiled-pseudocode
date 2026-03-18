/*
 * XREFs of AslpFileHasActiveMarkWrapper @ 0x140707630
 * Callers:
 *     AslpFileGetExeWrapper @ 0x140706788 (AslpFileGetExeWrapper.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwReadFile @ 0x14017F0B0 (ZwReadFile.c)
 *     ZwSetInformationFile @ 0x14017F4D0 (ZwSetInformationFile.c)
 *     RtlCompareMemory @ 0x14018BAA0 (RtlCompareMemory.c)
 *     memset @ 0x140195A80 (memset.c)
 *     AslLogCallPrintf @ 0x1405AB1C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileHasActiveMarkWrapper(_DWORD *a1, __int64 a2, __int64 a3)
{
  ULONG Length; // r14d
  NTSTATUS v7; // ebx
  void *v8; // rcx
  char *v9; // rbx
  _QWORD *v10; // rdx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-B0h] BYREF
  __int64 FileInformation; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD Source2[3]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD Buffer[128]; // [rsp+80h] [rbp-80h] BYREF

  strcpy((char *)Source2, "TMSAMVOF");
  Length = 1024;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(Buffer, 0, sizeof(Buffer));
  if ( *(_DWORD *)(a3 + 536) < 0x400u )
    Length = *(_DWORD *)(a3 + 536);
  *a1 = 0;
  FileInformation = *(_QWORD *)(a3 + 536) - (Length + *(_DWORD *)(a2 + 172));
  if ( FileInformation >= 0 )
  {
    v7 = ZwSetInformationFile(*(HANDLE *)(a3 + 520), &IoStatusBlock, &FileInformation, 8u, FilePositionInformation);
    if ( v7 < 0
      || (v8 = *(void **)(a3 + 520),
          IoStatusBlock.Pointer = 0LL,
          IoStatusBlock.Information = 0LL,
          v7 = ZwReadFile(v8, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, 0LL, 0LL),
          v7 < 0) )
    {
      AslLogCallPrintf(1LL);
    }
    else
    {
      v9 = (char *)&FileInformation + LODWORD(IoStatusBlock.Information) + 6;
      if ( RtlCompareMemory(v9, Source2, 8uLL) != 8
        || *((_WORD *)v9 + 4) != 1
        || *(unsigned int *)(v9 + 18)
         + 621LL
         + *(unsigned int *)(v9 + 10)
         + (unsigned __int64)*(unsigned int *)(v9 + 14)
         + 1 != *(_DWORD *)(v9 + 22) )
      {
        v10 = v9 + 22;
        while ( *(_QWORD *)((char *)v10 - 22) != Source2[0]
             || *((_WORD *)v10 - 7) != 1
             || *v10 + *(v10 - 1) + *((unsigned int *)v10 - 3) + 621LL + 1 != v10[1] )
        {
          v10 = (_QWORD *)((char *)v10 - 1);
          if ( (_QWORD *)((char *)v10 - 22) < Buffer )
            return 0;
        }
      }
      *a1 = 1;
      return 0;
    }
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return (unsigned int)v7;
}
