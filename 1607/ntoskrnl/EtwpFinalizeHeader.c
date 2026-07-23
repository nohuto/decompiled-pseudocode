/*
 * XREFs of EtwpFinalizeHeader @ 0x140493704
 * Callers:
 *     EtwpLogger @ 0x140490638 (EtwpLogger.c)
 *     EtwpCreateLogFile @ 0x140494FA8 (EtwpCreateLogFile.c)
 *     EtwpBufferingModeFlush @ 0x1406A6848 (EtwpBufferingModeFlush.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x140086EF8 (EtwpQueryUsedProcessorCount.c)
 *     EtwpQueryMaximumFileSize @ 0x140087188 (EtwpQueryMaximumFileSize.c)
 *     KeQuerySystemTimePrecise @ 0x1400EFF50 (KeQuerySystemTimePrecise.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwReadFile @ 0x14015A2B0 (ZwReadFile.c)
 *     ZwWriteFile @ 0x14015A2F0 (ZwWriteFile.c)
 *     ZwSetInformationFile @ 0x14015A6D0 (ZwSetInformationFile.c)
 *     ZwQueryVolumeInformationFile @ 0x14015AB10 (ZwQueryVolumeInformationFile.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     EtwpAddDebugInfoEvents @ 0x14049393C (EtwpAddDebugInfoEvents.c)
 *     EtwpIsWow64Logger @ 0x140494D18 (EtwpIsWow64Logger.c)
 *     EtwpAddBinaryInfoEvents @ 0x1406A6750 (EtwpAddBinaryInfoEvents.c)
 */

NTSTATUS __fastcall EtwpFinalizeHeader(__int64 a1, void *a2, char a3)
{
  _QWORD *v3; // r14
  ULONG Length; // esi
  LARGE_INTEGER *Buffer; // rdi
  NTSTATUS v9; // ebp
  _QWORD *v10; // rbp
  unsigned int HighPart; // eax
  NTSTATUS v12; // eax
  NTSTATUS result; // eax
  bool v14; // zf
  int v15; // eax
  unsigned __int64 MaximumFileSize; // rax
  unsigned __int64 v17; // rdx
  LARGE_INTEGER ByteOffset; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 FileInformation; // [rsp+58h] [rbp-70h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-68h] BYREF
  struct _IO_STATUS_BLOCK v21; // [rsp+70h] [rbp-58h] BYREF
  char FsInformation[20]; // [rsp+80h] [rbp-48h] BYREF
  int v23; // [rsp+94h] [rbp-34h]

  v3 = (_QWORD *)(a1 + 112);
  if ( (_QWORD *)*v3 == v3 && *(_QWORD *)(a1 + 856) == a1 + 856 )
  {
    result = ZwQueryVolumeInformationFile(a2, &IoStatusBlock, FsInformation, 0x18u, FileFsSizeInformation);
    if ( result < 0 )
      return result;
    Length = (v23 + 383) & ~(v23 - 1);
  }
  else
  {
    Length = *(_DWORD *)(a1 + 4);
  }
  Buffer = (LARGE_INTEGER *)ExAllocatePoolWithTag(PagedPool, (Length + 4095LL) & 0xFFFFFFFFFFFFF000uLL, 0x50777445u);
  if ( !Buffer )
    return -1073741801;
  ByteOffset.QuadPart = 0LL;
  v9 = ZwReadFile(a2, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, &ByteOffset, 0LL);
  if ( v9 >= 0 )
  {
    if ( !a3 )
    {
      Buffer[17].HighPart = *(_DWORD *)(a1 + 248);
      Buffer[14].HighPart = EtwpQueryUsedProcessorCount(a1);
      Buffer[19].LowPart += *(_DWORD *)(a1 + 240);
      KeQuerySystemTimePrecise(Buffer + 15);
      v14 = (unsigned __int8)EtwpIsWow64Logger(a1) == 0;
      v15 = *(_DWORD *)(a1 + 252);
      if ( v14 )
        Buffer[47].HighPart += v15;
      else
        Buffer[46].HighPart += v15;
    }
    v10 = (_QWORD *)(a1 + 856);
    if ( (_QWORD *)*v10 != v10 || (_QWORD *)*v3 != v3 )
    {
      HighPart = Buffer->HighPart;
      if ( HighPart < Length && HighPart >= 0x178 )
      {
        Buffer[6].LowPart = HighPart;
        if ( (_QWORD *)*v3 != v3 )
          EtwpAddDebugInfoEvents(a1, (_DWORD)Buffer, Length, (_DWORD)Buffer + 88, 3);
        if ( (_QWORD *)*v10 != v10 )
          EtwpAddBinaryInfoEvents(a1, Buffer, Length);
      }
    }
    v12 = ZwWriteFile(a2, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, &ByteOffset, 0LL);
    v9 = v12;
    if ( !a3 && v12 >= 0 && (*(_DWORD *)(a1 + 12) & 0x20) != 0 )
    {
      MaximumFileSize = EtwpQueryMaximumFileSize(a1);
      if ( v17 < MaximumFileSize )
      {
        FileInformation = v17;
        v9 = ZwSetInformationFile(a2, &v21, &FileInformation, 8u, FileEndOfFileInformation);
      }
    }
  }
  ExFreePoolWithTag(Buffer, 0);
  return v9;
}
