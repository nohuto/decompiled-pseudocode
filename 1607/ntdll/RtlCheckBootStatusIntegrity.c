/*
 * XREFs of RtlCheckBootStatusIntegrity @ 0x18008CFB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     NtReadFile @ 0x1800A64E0 (NtReadFile.c)
 */

NTSTATUS __cdecl RtlCheckBootStatusIntegrity(HANDLE FileHandle, PBOOLEAN Verified)
{
  BOOLEAN v2; // bl
  char v5; // bp
  int v6; // edi
  PVOID Buffer; // rsi
  __int64 v8; // rcx
  _BYTE *v9; // rax
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  SIZE_T Size; // [rsp+A0h] [rbp+18h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+A8h] [rbp+20h] BYREF

  v2 = 0;
  ByteOffset.QuadPart = 0LL;
  v5 = 0;
  v6 = NtReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, &Size, 4u, &ByteOffset, 0LL);
  if ( v6 >= 0 )
  {
    if ( (_DWORD)Size )
    {
      Buffer = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned int)Size);
      if ( Buffer )
      {
        v6 = NtReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Size, &ByteOffset, 0LL);
        if ( v6 >= 0 )
        {
          if ( !(_DWORD)Size )
            goto LABEL_9;
          v8 = (unsigned int)Size;
          v9 = Buffer;
          do
          {
            v5 += *v9++;
            --v8;
          }
          while ( v8 );
          if ( !v5 )
LABEL_9:
            v2 = 1;
          *Verified = v2;
        }
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Buffer);
      }
      else
      {
        return -1073741801;
      }
    }
    else
    {
      *Verified = 0;
    }
  }
  return v6;
}
