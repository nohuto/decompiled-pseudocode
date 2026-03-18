/*
 * XREFs of EtwpFlushBufferToLogfile @ 0x14054B75C
 * Callers:
 *     EtwpFlushBuffer @ 0x1404A1FE0 (EtwpFlushBuffer.c)
 *     EtwpBufferingModeFlush @ 0x1406E7FB0 (EtwpBufferingModeFlush.c)
 * Callees:
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     ZwWriteFile @ 0x14017F0F0 (ZwWriteFile.c)
 *     EtwpGenerateFileName @ 0x14055BC88 (EtwpGenerateFileName.c)
 *     EtwpEventWriteTemplateAdmin @ 0x1406E6870 (EtwpEventWriteTemplateAdmin.c)
 *     EtwpEventWriteTemplateMaxFileSize @ 0x1406E69C4 (EtwpEventWriteTemplateMaxFileSize.c)
 */

__int64 __fastcall EtwpFlushBufferToLogfile(__int64 a1, void *a2)
{
  __int64 Length; // r14
  unsigned int v4; // ecx
  int v6; // ebp
  unsigned __int64 v7; // rsi
  NTSTATUS v8; // edi
  _QWORD *EtwSupport; // rdx
  int v10; // eax
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v15; // r8d
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-28h] BYREF

  Length = *(unsigned int *)(a1 + 4);
  v4 = *(_DWORD *)(a1 + 308);
  if ( v4 )
  {
    v6 = *(_DWORD *)(a1 + 12);
    v7 = (v6 & 0x2000) != 0 ? (unsigned __int64)v4 << 10 : (unsigned __int64)v4 << 20;
    if ( Length * (unsigned __int64)*(unsigned int *)(a1 + 220) >= v7 )
    {
      if ( (v6 & 2) != 0 )
      {
        *(_QWORD *)(a1 + 232) = Length;
        *(_DWORD *)(a1 + 220) = 1;
      }
      else
      {
        if ( (v6 & 8) == 0 )
        {
          v10 = *(_DWORD *)(a1 + 832);
          v8 = -1073741432;
          if ( (v10 & 0x100) == 0 )
          {
            *(_DWORD *)(a1 + 832) = v10 | 0x100;
            if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_MAX_FILE_SIZE_REACHED) )
              EtwpEventWriteTemplateMaxFileSize(v12, v11, v13, a1 + 152, a1 + 168);
          }
          goto LABEL_16;
        }
        if ( (*(_DWORD *)(a1 + 836) & 1) == 0 )
        {
          EtwpGenerateFileName(a1 + 184, a1 + 312, a1 + 200);
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
        v15,
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
