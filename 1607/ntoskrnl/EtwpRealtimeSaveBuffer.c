/*
 * XREFs of EtwpRealtimeSaveBuffer @ 0x14052CBD0
 * Callers:
 *     EtwpFlushBufferToRealtime @ 0x140492064 (EtwpFlushBufferToRealtime.c)
 *     EtwpRealtimeUpdateReferenceTime @ 0x14057EF78 (EtwpRealtimeUpdateReferenceTime.c)
 * Callees:
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     ZwWriteFile @ 0x14015A2F0 (ZwWriteFile.c)
 *     EtwpEventWriteTemplateAdmin @ 0x1406A42F0 (EtwpEventWriteTemplateAdmin.c)
 *     EtwpEventWriteTemplateBackingFile @ 0x1406A43A8 (EtwpEventWriteTemplateBackingFile.c)
 */

__int64 __fastcall EtwpRealtimeSaveBuffer(__int64 a1, unsigned int *Buffer)
{
  LARGE_INTEGER v2; // rax
  LARGE_INTEGER v4; // r8
  LARGE_INTEGER v6; // rbx
  __int64 Length; // r10
  NTSTATUS v8; // ebp
  LONGLONG QuadPart; // r8
  int v10; // edx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  int v21; // r8d
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+70h] [rbp+8h] BYREF

  v2 = *(LARGE_INTEGER *)(a1 + 384);
  v4 = *(LARGE_INTEGER *)(a1 + 392);
  v6 = *(LARGE_INTEGER *)(a1 + 400);
  ByteOffset = v2;
  if ( v2.QuadPart >= v4.QuadPart )
  {
    Length = Buffer[12];
    if ( v2.QuadPart + Length > *(_QWORD *)(a1 + 416) )
    {
      v6 = v2;
      v2.QuadPart = 72LL;
      ByteOffset.QuadPart = 72LL;
    }
    if ( v2.QuadPart >= v4.QuadPart )
      goto LABEL_5;
  }
  Length = Buffer[12];
  if ( v2.QuadPart + Length < v4.QuadPart )
  {
LABEL_5:
    v8 = ZwWriteFile(*(HANDLE *)(a1 + 360), 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, &ByteOffset, 0LL);
    if ( v8 < 0 )
    {
      ++*(_DWORD *)(a1 + 260);
      *(_DWORD *)(a1 + 448) = 2;
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_WRITE_FAILED) )
        EtwpEventWriteTemplateAdmin(
          a1 + 368,
          (unsigned int)&ETW_EVENT_WRITE_FAILED,
          v21,
          a1 + 136,
          a1 + 368,
          v8,
          *(_DWORD *)(a1 + 12));
    }
    else
    {
      QuadPart = ByteOffset.QuadPart + Buffer[12];
      v10 = *(_DWORD *)(a1 + 236);
      v11 = *(_QWORD *)(a1 + 416);
      *(_QWORD *)(a1 + 384) = QuadPart;
      if ( v6.QuadPart > QuadPart )
        QuadPart = v6.QuadPart;
      v12 = (unsigned int)(*(_DWORD *)(a1 + 4) * v10);
      *(_QWORD *)(a1 + 400) = QuadPart;
      *(_QWORD *)(a1 + 408) += Buffer[12];
      v13 = v11 - *(_QWORD *)(a1 + 408);
      ++*(_DWORD *)(a1 + 424);
      if ( v13 <= v12 && *(int *)(a1 + 16) >= 0 )
      {
        *(_DWORD *)(a1 + 16) = -1073741432;
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_BACKING_FILE_FULL) )
          EtwpEventWriteTemplateBackingFile(v19, v18, v20, a1 + 136);
      }
    }
    return (unsigned int)v8;
  }
  else
  {
    ++*(_DWORD *)(a1 + 260);
    *(_DWORD *)(a1 + 448) = 2;
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_BACKING_FILE_FULL) )
      EtwpEventWriteTemplateBackingFile(v16, v15, v17, a1 + 136);
    return 3221225864LL;
  }
}
