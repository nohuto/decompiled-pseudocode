/*
 * XREFs of EtwpFlushBufferToLogfile @ 0x140491EFC
 * Callers:
 *     EtwpFlushBuffer @ 0x140491DBC (EtwpFlushBuffer.c)
 *     EtwpBufferingModeFlush @ 0x1406A6848 (EtwpBufferingModeFlush.c)
 * Callees:
 *     EtwpQueryMaximumFileSize @ 0x140087188 (EtwpQueryMaximumFileSize.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     ZwWriteFile @ 0x14015A2F0 (ZwWriteFile.c)
 *     EtwpEventWriteTemplateMaxFileSize @ 0x1403E27E4 (EtwpEventWriteTemplateMaxFileSize.c)
 *     EtwpGenerateFileName @ 0x1404D29BC (EtwpGenerateFileName.c)
 *     EtwpEventWriteTemplateAdmin @ 0x1406A42F0 (EtwpEventWriteTemplateAdmin.c)
 */

__int64 __fastcall EtwpFlushBufferToLogfile(__int64 a1, unsigned int *a2)
{
  __int64 Length; // rbp
  unsigned __int64 MaximumFileSize; // rax
  __int64 v6; // rcx
  char v7; // si
  unsigned __int64 v8; // r8
  NTSTATUS v9; // edi
  _QWORD *EtwSupport; // rdx
  int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // r8d
  int Buffer; // [rsp+28h] [rbp-40h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF

  Length = *a2;
  if ( *(_DWORD *)(a1 + 292) )
  {
    MaximumFileSize = EtwpQueryMaximumFileSize(a1);
    v7 = MaximumFileSize;
    if ( v8 >= MaximumFileSize )
    {
      v12 = *(_DWORD *)(v6 + 12);
      if ( (v12 & 2) != 0 )
      {
        *(_QWORD *)(a1 + 216) = *(unsigned int *)(a1 + 4);
        *(_DWORD *)(a1 + 204) = 1;
      }
      else
      {
        if ( (v12 & 8) == 0 )
        {
          v9 = -1073741432;
          if ( (*(_DWORD *)(a1 + 816) & 0x100) == 0 )
          {
            _InterlockedOr((volatile signed __int32 *)(a1 + 816), 0x100u);
            if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_MAX_FILE_SIZE_REACHED) )
              EtwpEventWriteTemplateMaxFileSize(
                a1 + 152,
                v13,
                v14,
                (unsigned __int16 *)(a1 + 136),
                (unsigned __int16 *)(a1 + 152),
                Buffer,
                *(_DWORD *)(a1 + 12),
                v7);
          }
          goto LABEL_11;
        }
        if ( (*(_DWORD *)(a1 + 820) & 1) == 0 )
        {
          EtwpGenerateFileName(a1 + 168, a1 + 296, a1 + 184);
          _InterlockedOr((volatile signed __int32 *)(a1 + 820), 1u);
        }
      }
    }
  }
  v9 = ZwWriteFile(*(HANDLE *)(a1 + 800), 0LL, 0LL, 0LL, &IoStatusBlock, a2, Length, (PLARGE_INTEGER)(a1 + 216), 0LL);
  if ( v9 < 0 )
  {
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_WRITE_FAILED) )
      EtwpEventWriteTemplateAdmin(
        a1 + 152,
        (unsigned int)&ETW_EVENT_WRITE_FAILED,
        v15,
        a1 + 136,
        a1 + 152,
        v9,
        *(_DWORD *)(a1 + 12));
  }
  else
  {
    *(_QWORD *)(a1 + 216) += Length;
    EtwSupport = KeGetCurrentPrcb()->EtwSupport;
    EtwSupport[354] += Length;
  }
  if ( v9 >= 0 )
  {
    ++*(_DWORD *)(a1 + 248);
    ++*(_DWORD *)(a1 + 204);
    return (unsigned int)v9;
  }
LABEL_11:
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 252));
  if ( v9 == -1073741670 )
    return 0;
  return (unsigned int)v9;
}
