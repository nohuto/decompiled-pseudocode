/*
 * XREFs of EtwpBufferingModeFlush @ 0x1406E7FB0
 * Callers:
 *     EtwpFlushTrace @ 0x14054D090 (EtwpFlushTrace.c)
 * Callees:
 *     EtwpPrepareDirtyBuffer @ 0x14006364C (EtwpPrepareDirtyBuffer.c)
 *     EtwpLockUnlockBufferList @ 0x140065B9C (EtwpLockUnlockBufferList.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     EtwpPrepareHeader @ 0x1404A2090 (EtwpPrepareHeader.c)
 *     EtwpWaitForBufferReferenceCount @ 0x1404A210C (EtwpWaitForBufferReferenceCount.c)
 *     EtwpFinalizeHeader @ 0x1404AB82C (EtwpFinalizeHeader.c)
 *     EtwpCreateLogFile @ 0x1404AC23C (EtwpCreateLogFile.c)
 *     EtwpFlushBufferToLogfile @ 0x14054B75C (EtwpFlushBufferToLogfile.c)
 *     EtwpFindAndLockBufferForFlushing @ 0x1406E8188 (EtwpFindAndLockBufferForFlushing.c)
 */

__int64 __fastcall EtwpBufferingModeFlush(unsigned int *a1)
{
  unsigned int v2; // r15d
  int LogFile; // ebp
  __int64 v4; // r12
  unsigned int v5; // esi
  unsigned __int64 v6; // rdx
  _QWORD *v7; // r8
  __int64 v8; // r9
  unsigned int v9; // edi
  __int64 *v10; // r14
  __int64 v11; // rax
  unsigned __int32 v12; // eax
  signed __int64 i; // rcx
  signed __int64 v14; // rax
  __int64 j; // rsi
  __int64 v16; // rax
  volatile __int32 *v17; // rdi
  void *v18; // rcx

  v2 = a1[1];
  LogFile = 0;
  v4 = *a1;
  v5 = 1;
  if ( (a1[3] & 0x10000000) == 0 )
    v5 = KeNumberProcessors_0;
  if ( EtwpFileSystemReady )
    a1[208] |= 4u;
  if ( *((_QWORD *)a1 + 26) )
  {
    LogFile = EtwpCreateLogFile((__int64)a1, 0);
    if ( LogFile >= 0 )
    {
      v9 = 0;
      if ( v5 )
      {
        v10 = KiProcessorBlock;
        do
        {
          if ( (a1[3] & 0x10000000) != 0 )
          {
            v7 = a1 + 36;
          }
          else
          {
            if ( v9 >= (unsigned int)KeNumberProcessors_0 )
              v11 = 0LL;
            else
              v11 = *v10;
            v7 = (_QWORD *)(*(_QWORD *)(v11 + 24536) + 8 * (v4 + 8));
          }
          v6 = *v7 & 0xFFFFFFFFFFFFFFF0uLL;
          if ( v6 )
          {
            v12 = _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 8), v2);
            if ( v12 <= v2 )
              *(_DWORD *)(v6 + 4) = v12;
            _m_prefetchw(v7);
            for ( i = *v7; (v6 ^ i) <= 0xF; i = v14 )
            {
              v14 = _InterlockedCompareExchange64(v7, 0LL, i);
              if ( i == v14 )
                break;
            }
            if ( (i & 0xFFFFFFFFFFFFFFF0uLL) == v6 )
            {
              _InterlockedExchangeAdd((volatile signed __int32 *)((i & 0xFFFFFFFFFFFFFFF0uLL) + 12), -(i & 0xF));
              EtwpPrepareDirtyBuffer((__int64)a1, v6);
            }
          }
          ++v9;
          ++v10;
        }
        while ( v9 < v5 );
      }
      EtwpLockUnlockBufferList((__int64)a1, v6, (__int64)v7, v8);
      for ( j = *((_QWORD *)a1 + 103); ; --j )
      {
        v16 = EtwpFindAndLockBufferForFlushing(a1, j);
        v17 = (volatile __int32 *)v16;
        if ( !v16 )
          break;
        EtwpWaitForBufferReferenceCount(v16);
        if ( (unsigned int)EtwpPrepareHeader((__int64)a1, (__int64)v17, 0) != -2147483614 )
          LogFile = EtwpFlushBufferToLogfile((__int64)a1, (void *)v17);
        _InterlockedExchange(v17 + 11, 0);
        if ( LogFile < 0 )
          break;
      }
      EtwpFinalizeHeader((__int64)a1, *((void **)a1 + 102), 0);
      a1[66] = 0;
    }
    v18 = (void *)*((_QWORD *)a1 + 102);
    if ( v18 )
    {
      ZwClose(v18);
      *((_QWORD *)a1 + 102) = 0LL;
    }
    RtlFreeAnsiString((PUNICODE_STRING)(a1 + 42));
  }
  return (unsigned int)LogFile;
}
