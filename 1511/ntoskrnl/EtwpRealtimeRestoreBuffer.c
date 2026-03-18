/*
 * XREFs of EtwpRealtimeRestoreBuffer @ 0x1404E7954
 * Callers:
 *     EtwpRealtimeFlushSavedBuffers @ 0x14046ABB8 (EtwpRealtimeFlushSavedBuffers.c)
 * Callees:
 *     ZwReadFile @ 0x1401506E0 (ZwReadFile.c)
 */

NTSTATUS __fastcall EtwpRealtimeRestoreBuffer(__int64 a1, _DWORD *Buffer)
{
  LARGE_INTEGER *ByteOffset; // rbx
  __int64 v4; // rsi
  NTSTATUS result; // eax
  NTSTATUS Status; // edx
  unsigned int v8; // ecx
  unsigned int v9; // eax
  __int64 Length; // rcx
  __int64 v11; // r14
  LARGE_INTEGER v12; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-28h] BYREF

  ByteOffset = (LARGE_INTEGER *)(a1 + 408);
  v4 = *(_QWORD *)(a1 + 408) + 72LL;
  if ( v4 > *(_QWORD *)(a1 + 416) )
    return -1073741566;
  result = ZwReadFile(*(HANDLE *)(a1 + 376), 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, 0x48u, ByteOffset, 0LL);
  Status = result;
  if ( result < 0 )
    return result;
  result = IoStatusBlock.Status;
  if ( IoStatusBlock.Status < 0 )
    return result;
  if ( IoStatusBlock.Information != 72 )
    return -1073741807;
  v8 = *(_DWORD *)(a1 + 4);
  if ( *Buffer != v8 )
    return -1073741566;
  v9 = Buffer[12];
  if ( v9 < 0x48 || v9 > v8 )
    return -1073741566;
  *((_WORD *)Buffer + 26) |= 0x10u;
  Length = v9 - 72;
  ByteOffset->QuadPart = v4;
  if ( v9 != 72 )
  {
    v11 = (unsigned int)Length;
    if ( Length + v4 <= *(_QWORD *)(a1 + 416) )
    {
      Status = ZwReadFile(*(HANDLE *)(a1 + 376), 0LL, 0LL, 0LL, &IoStatusBlock, Buffer + 18, Length, ByteOffset, 0LL);
      if ( Status >= 0 )
      {
        Status = IoStatusBlock.Status;
        if ( IoStatusBlock.Status >= 0 && IoStatusBlock.Information != v11 )
          Status = -1073741807;
      }
      ByteOffset->QuadPart += v11;
      goto LABEL_15;
    }
    return -1073741566;
  }
LABEL_15:
  v12 = *ByteOffset;
  result = Status;
  if ( ByteOffset->QuadPart >= *(_QWORD *)(a1 + 416) )
    v12.QuadPart = 72LL;
  *ByteOffset = v12;
  return result;
}
