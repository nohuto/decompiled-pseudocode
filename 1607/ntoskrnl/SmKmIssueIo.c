/*
 * XREFs of SmKmIssueIo @ 0x140220894
 * Callers:
 *     SmIssueIo @ 0x140221DD0 (SmIssueIo.c)
 * Callees:
 *     SmKmIssueVolumeIo @ 0x140220978 (SmKmIssueVolumeIo.c)
 *     NtReadFile @ 0x1404424F0 (NtReadFile.c)
 *     NtWriteFile @ 0x1404454D0 (NtWriteFile.c)
 */

__int64 __fastcall SmKmIssueIo(
        __int64 a1,
        __int64 a2,
        void (__stdcall *a3)(PVOID ApcContext, PIO_STATUS_BLOCK IoStatusBlock, ULONG Reserved),
        void *a4,
        int a5)
{
  __int64 v5; // rax
  __int64 i; // r10
  struct _IO_STATUS_BLOCK *v9; // rbx
  void *v10; // rcx
  NTSTATUS v11; // eax
  struct _IO_STATUS_BLOCK *IoStatusBlock; // [rsp+20h] [rbp-38h]
  PVOID Buffer; // [rsp+28h] [rbp-30h]
  ULONG Length; // [rsp+30h] [rbp-28h]
  LARGE_INTEGER ByteOffset; // [rsp+60h] [rbp+8h] BYREF

  v5 = *(unsigned int *)(a2 + 24);
  for ( i = *(_QWORD *)(a1 + 48); (unsigned int)v5 >= *(_DWORD *)i; i += 16LL )
    v5 = (unsigned int)(v5 - *(_DWORD *)i);
  ByteOffset.QuadPart = *(_QWORD *)(i + 8) + *(unsigned int *)(a2 + 20) + v5 * *(unsigned int *)(a2 + 28);
  if ( !a5 )
    return SmKmIssueVolumeIo(a1, a2, (unsigned int)&ByteOffset, (_DWORD)a3, (__int64)a4);
  v9 = *(struct _IO_STATUS_BLOCK **)a2;
  v10 = *(void **)a1;
  Length = *(_DWORD *)(a2 + 16);
  Buffer = *(PVOID *)(a2 + 8);
  IoStatusBlock = *(struct _IO_STATUS_BLOCK **)a2;
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
    v11 = NtReadFile(v10, 0LL, a3, a4, IoStatusBlock, Buffer, Length, &ByteOffset, 0LL);
  else
    v11 = NtWriteFile(v10, 0LL, a3, a4, IoStatusBlock, Buffer, Length, &ByteOffset, 0LL);
  if ( (v11 & 0xC0000000) == 0xC0000000 )
  {
    v9->Status = v11;
    ((void (__fastcall *)(void *, struct _IO_STATUS_BLOCK *, _QWORD))a3)(a4, v9, 0LL);
  }
  return 259LL;
}
