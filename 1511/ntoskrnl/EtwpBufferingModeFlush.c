/*
 * XREFs of EtwpBufferingModeFlush @ 0x140664ED8
 * Callers:
 *     EtwpFlushTrace @ 0x1404B5FCC (EtwpFlushTrace.c)
 * Callees:
 *     EtwpPrepareDirtyBuffer @ 0x14009C2E4 (EtwpPrepareDirtyBuffer.c)
 *     EtwpQueryUsedProcessorCount @ 0x14009CFC8 (EtwpQueryUsedProcessorCount.c)
 *     KeGetPrcb @ 0x14009DB9C (KeGetPrcb.c)
 *     EtwpLockUnlockBufferList @ 0x1400CFE24 (EtwpLockUnlockBufferList.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     EtwpWaitForBufferReferenceCount @ 0x1404B25D0 (EtwpWaitForBufferReferenceCount.c)
 *     EtwpFinalizeHeader @ 0x1404C75B0 (EtwpFinalizeHeader.c)
 *     EtwpCreateLogFile @ 0x1404CA224 (EtwpCreateLogFile.c)
 *     EtwpPrepareHeader @ 0x1404CAD9C (EtwpPrepareHeader.c)
 *     EtwpFlushBufferToLogfile @ 0x1404CB248 (EtwpFlushBufferToLogfile.c)
 *     EtwpFindAndLockBufferForFlushing @ 0x140665090 (EtwpFindAndLockBufferForFlushing.c)
 */

__int64 __fastcall EtwpBufferingModeFlush(unsigned int *a1)
{
  unsigned int v1; // r14d
  int LogFile; // ebp
  __int64 v3; // r15
  __int64 v5; // rcx
  ULONG UsedProcessorCount; // esi
  ULONG i; // edi
  _QWORD *v8; // r8
  unsigned __int64 v9; // rdx
  unsigned __int32 v10; // eax
  signed __int64 j; // rcx
  signed __int64 v12; // rax
  __int64 k; // rsi
  __int64 v14; // rax
  volatile __int32 *v15; // rdi
  void *v16; // rcx

  v1 = a1[1];
  LogFile = 0;
  v3 = *a1;
  UsedProcessorCount = EtwpQueryUsedProcessorCount((__int64)a1);
  if ( EtwpFileSystemReady )
    _InterlockedOr((volatile signed __int32 *)(v5 + 832), 4u);
  if ( *(_QWORD *)(v5 + 208) )
  {
    LogFile = EtwpCreateLogFile(v5, 0);
    if ( LogFile >= 0 )
    {
      for ( i = 0; i < UsedProcessorCount; ++i )
      {
        if ( (a1[3] & 0x10000000) != 0 )
          v8 = a1 + 36;
        else
          v8 = (_QWORD *)(*(_QWORD *)(KeGetPrcb(i) + 24536) + 8 * (v3 + 8));
        v9 = *v8 & 0xFFFFFFFFFFFFFFF0uLL;
        if ( v9 )
        {
          v10 = _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 8), v1);
          if ( v10 <= v1 )
            *(_DWORD *)(v9 + 4) = v10;
          _m_prefetchw(v8);
          for ( j = *v8; (v9 ^ j) <= 0xF; j = v12 )
          {
            v12 = _InterlockedCompareExchange64(v8, 0LL, j);
            if ( j == v12 )
              break;
          }
          if ( (j & 0xFFFFFFFFFFFFFFF0uLL) == v9 )
          {
            _InterlockedExchangeAdd((volatile signed __int32 *)((j & 0xFFFFFFFFFFFFFFF0uLL) + 12), -(j & 0xF));
            EtwpPrepareDirtyBuffer((__int64)a1, v9);
          }
        }
      }
      EtwpLockUnlockBufferList((__int64)a1);
      for ( k = *((_QWORD *)a1 + 103); ; --k )
      {
        v14 = EtwpFindAndLockBufferForFlushing(a1, k);
        v15 = (volatile __int32 *)v14;
        if ( !v14 )
          break;
        EtwpWaitForBufferReferenceCount(v14);
        if ( (unsigned int)EtwpPrepareHeader((__int64)a1, (__int64)v15, 0) != -2147483614 )
          LogFile = EtwpFlushBufferToLogfile((__int64)a1, (void *)v15);
        _InterlockedExchange(v15 + 11, 0);
        if ( LogFile < 0 )
          break;
      }
      EtwpFinalizeHeader((__int64)a1, *((void **)a1 + 102), 0);
      a1[66] = 0;
    }
    v16 = (void *)*((_QWORD *)a1 + 102);
    if ( v16 )
    {
      ZwClose(v16);
      *((_QWORD *)a1 + 102) = 0LL;
    }
    RtlFreeAnsiString((PUNICODE_STRING)(a1 + 42));
  }
  return (unsigned int)LogFile;
}
