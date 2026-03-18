/*
 * XREFs of EtwpFinalizeHeader @ 0x1404AB82C
 * Callers:
 *     EtwpLogger @ 0x1404A17E4 (EtwpLogger.c)
 *     EtwpCreateLogFile @ 0x1404AC23C (EtwpCreateLogFile.c)
 *     EtwpBufferingModeFlush @ 0x1406E7FB0 (EtwpBufferingModeFlush.c)
 * Callees:
 *     KeQuerySystemTimePrecise @ 0x1400166E8 (KeQuerySystemTimePrecise.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwReadFile @ 0x14017F0B0 (ZwReadFile.c)
 *     ZwWriteFile @ 0x14017F0F0 (ZwWriteFile.c)
 *     ZwSetInformationFile @ 0x14017F4D0 (ZwSetInformationFile.c)
 *     ZwQueryVolumeInformationFile @ 0x14017F910 (ZwQueryVolumeInformationFile.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     EtwpAddDebugInfoEvents @ 0x1404ABA60 (EtwpAddDebugInfoEvents.c)
 *     EtwpIsWow64Logger @ 0x1404AC0A0 (EtwpIsWow64Logger.c)
 *     EtwpAddBinaryInfoEvents @ 0x1406E7EB8 (EtwpAddBinaryInfoEvents.c)
 */

NTSTATUS __fastcall EtwpFinalizeHeader(__int64 a1, void *a2, char a3)
{
  _QWORD *v3; // r14
  ULONG Length; // esi
  int v8; // r15d
  PVOID Buffer; // rdi
  NTSTATUS v10; // ebp
  bool v11; // zf
  int v12; // eax
  _QWORD *v13; // rbp
  unsigned int v14; // eax
  NTSTATUS v15; // eax
  int v16; // eax
  NTSTATUS result; // eax
  __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  LARGE_INTEGER ByteOffset; // [rsp+50h] [rbp-88h] BYREF
  __int64 FileInformation; // [rsp+58h] [rbp-80h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-78h] BYREF
  struct _IO_STATUS_BLOCK v24; // [rsp+70h] [rbp-68h] BYREF
  _BYTE FsInformation[20]; // [rsp+80h] [rbp-58h] BYREF
  int v26; // [rsp+94h] [rbp-44h]

  v3 = (_QWORD *)(a1 + 128);
  if ( (_QWORD *)*v3 == v3 && *(_QWORD *)(a1 + 872) == a1 + 872 )
  {
    result = ZwQueryVolumeInformationFile(a2, &IoStatusBlock, FsInformation, 0x18u, FileFsSizeInformation);
    if ( result < 0 )
      return result;
    Length = (v26 + 383) & ~(v26 - 1);
  }
  else
  {
    Length = *(_DWORD *)(a1 + 4);
  }
  v8 = 1;
  Buffer = ExAllocatePoolWithTag(PagedPool, (Length + 4095LL) & 0xFFFFFFFFFFFFF000uLL, 0x50777445u);
  if ( !Buffer )
    return -1073741801;
  ByteOffset.QuadPart = 0LL;
  v10 = ZwReadFile(a2, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, &ByteOffset, 0LL);
  if ( v10 >= 0 )
  {
    if ( !a3 )
    {
      *((_DWORD *)Buffer + 35) = *(_DWORD *)(a1 + 264);
      if ( (*(_DWORD *)(a1 + 12) & 0x10000000) == 0 )
        v8 = KeNumberProcessors_0;
      *((_DWORD *)Buffer + 29) = v8;
      *((_DWORD *)Buffer + 38) += *(_DWORD *)(a1 + 256);
      KeQuerySystemTimePrecise((__int64 *)Buffer + 15);
      v11 = (unsigned __int8)EtwpIsWow64Logger(a1) == 0;
      v12 = *(_DWORD *)(a1 + 268);
      if ( v11 )
        *((_DWORD *)Buffer + 95) += v12;
      else
        *((_DWORD *)Buffer + 93) += v12;
    }
    v13 = (_QWORD *)(a1 + 872);
    if ( (_QWORD *)*v13 != v13 || (_QWORD *)*v3 != v3 )
    {
      v14 = *((_DWORD *)Buffer + 1);
      if ( v14 < Length && v14 >= 0x178 )
      {
        *((_DWORD *)Buffer + 12) = v14;
        if ( (_QWORD *)*v3 != v3 )
          EtwpAddDebugInfoEvents(a1, (_DWORD)Buffer, Length, (_DWORD)Buffer + 88, 3);
        if ( (_QWORD *)*v13 != v13 )
          EtwpAddBinaryInfoEvents(a1, Buffer, Length);
      }
    }
    v15 = ZwWriteFile(a2, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, &ByteOffset, 0LL);
    v10 = v15;
    if ( !a3 && v15 >= 0 )
    {
      v16 = *(_DWORD *)(a1 + 12);
      if ( (v16 & 0x20) != 0 )
      {
        v18 = *(unsigned int *)(a1 + 308);
        if ( (v16 & 0x2000) != 0 )
          v19 = v18 << 10;
        else
          v19 = v18 << 20;
        v20 = *(unsigned int *)(a1 + 4);
        if ( v20 * (unsigned __int64)*(unsigned int *)(a1 + 264) < v19 )
        {
          FileInformation = v20 * *(unsigned int *)(a1 + 264);
          v10 = ZwSetInformationFile(a2, &v24, &FileInformation, 8u, FileEndOfFileInformation);
        }
      }
    }
  }
  ExFreePoolWithTag(Buffer, 0);
  return v10;
}
