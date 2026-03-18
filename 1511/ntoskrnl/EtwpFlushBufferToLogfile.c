/*
 * XREFs of EtwpFlushBufferToLogfile @ 0x1404CB248
 * Callers:
 *     EtwpFlushBuffer @ 0x1404CACEC (EtwpFlushBuffer.c)
 *     EtwpBufferingModeFlush @ 0x140664ED8 (EtwpBufferingModeFlush.c)
 * Callees:
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     EtwpQueryMaximumFileSize @ 0x1400F4C28 (EtwpQueryMaximumFileSize.c)
 *     ZwWriteFile @ 0x140150720 (ZwWriteFile.c)
 *     EtwpGenerateFileName @ 0x1404C51D4 (EtwpGenerateFileName.c)
 *     EtwpEventWriteTemplateAdmin @ 0x140663790 (EtwpEventWriteTemplateAdmin.c)
 *     EtwpEventWriteTemplateMaxFileSize @ 0x1406638E4 (EtwpEventWriteTemplateMaxFileSize.c)
 */

__int64 __fastcall EtwpFlushBufferToLogfile(__int64 a1, void *a2)
{
  __int64 Length; // rsi
  __int64 v5; // rcx
  unsigned __int64 MaximumFileSize; // rbp
  unsigned __int64 v7; // r8
  NTSTATUS v8; // edi
  _QWORD *EtwSupport; // rdx
  int v11; // ecx
  int v12; // edx
  int v13; // r8d
  int v14; // r8d
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF

  Length = *(unsigned int *)(a1 + 4);
  if ( *(_DWORD *)(a1 + 308) )
  {
    MaximumFileSize = EtwpQueryMaximumFileSize(a1);
    if ( v7 >= MaximumFileSize )
    {
      v11 = *(_DWORD *)(v5 + 12);
      if ( (v11 & 2) != 0 )
      {
        *(_QWORD *)(a1 + 232) = Length;
        *(_DWORD *)(a1 + 220) = 1;
      }
      else
      {
        if ( (v11 & 8) == 0 )
        {
          v8 = -1073741432;
          if ( (*(_DWORD *)(a1 + 832) & 0x100) == 0 )
          {
            _InterlockedOr((volatile signed __int32 *)(a1 + 832), 0x100u);
            if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_MAX_FILE_SIZE_REACHED) )
              EtwpEventWriteTemplateMaxFileSize(a1 + 168, v12, v13, a1 + 152, a1 + 168);
          }
          goto LABEL_16;
        }
        if ( (*(_DWORD *)(a1 + 836) & 1) == 0 )
        {
          EtwpGenerateFileName(
            (unsigned __int16 *)(a1 + 184),
            (volatile signed __int32 *)(a1 + 312),
            (UNICODE_STRING *)(a1 + 200));
          _InterlockedOr((volatile signed __int32 *)(a1 + 836), 1u);
        }
      }
    }
  }
  v8 = ZwWriteFile(*(HANDLE *)(a1 + 816), 0LL, 0LL, 0LL, &IoStatusBlock, a2, Length, (PLARGE_INTEGER)(a1 + 232), 0LL);
  if ( v8 < 0 )
  {
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_WRITE_FAILED) )
      EtwpEventWriteTemplateAdmin(
        a1 + 168,
        (unsigned int)&ETW_EVENT_WRITE_FAILED,
        v14,
        a1 + 152,
        a1 + 168,
        v8,
        *(_DWORD *)(a1 + 12));
  }
  else
  {
    *(_QWORD *)(a1 + 232) += Length;
    EtwSupport = KeGetCurrentPrcb()->EtwSupport;
    EtwSupport[354] += Length;
  }
  if ( v8 >= 0 )
  {
    ++*(_DWORD *)(a1 + 264);
    ++*(_DWORD *)(a1 + 220);
    return (unsigned int)v8;
  }
LABEL_16:
  ++*(_DWORD *)(a1 + 268);
  if ( v8 == -1073741670 )
    return 0;
  return (unsigned int)v8;
}
