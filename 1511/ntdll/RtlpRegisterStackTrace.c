/*
 * XREFs of RtlpRegisterStackTrace @ 0x1800F2078
 * Callers:
 *     RtlpStackTraceDatabaseLogPrefix @ 0x1800F2290 (RtlpStackTraceDatabaseLogPrefix.c)
 * Callees:
 *     RtlCompareMemory @ 0x1800A9270 (RtlCompareMemory.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 *     RtlExtendMemoryZone @ 0x1800DA390 (RtlExtendMemoryZone.c)
 *     RtlpInitializeStackTraceLog @ 0x1800F0FD4 (RtlpInitializeStackTraceLog.c)
 *     RtlAllocateMemoryBlockLookaside @ 0x1800FD010 (RtlAllocateMemoryBlockLookaside.c)
 *     RtlFreeMemoryBlockLookaside @ 0x1800FD150 (RtlFreeMemoryBlockLookaside.c)
 */

_DWORD *__fastcall RtlpRegisterStackTrace(unsigned int a1, const void *a2, unsigned int a3)
{
  __int64 v3; // r9
  __int64 v5; // rsi
  __int64 v8; // r14
  _DWORD *v9; // rdi
  void *v10; // rbp
  _DWORD *v11; // rbx
  PVOID Block; // [rsp+68h] [rbp+20h] BYREF

  v3 = RtlpHeapStackTraceLog;
  v5 = a1;
  if ( !RtlpHeapStackTraceLog )
  {
    RtlpInitializeStackTraceLog();
    v3 = RtlpHeapStackTraceLog;
    if ( !RtlpHeapStackTraceLog )
      return 0LL;
  }
  if ( !(_DWORD)v5 )
    return 0LL;
  v8 = v3 + 16 * (a3 % 0x191 + 1LL);
  v9 = *(_DWORD **)(v8 + 8);
  if ( !v9 || v9[2] != a3 || v9[3] != (_DWORD)v5 || RtlCompareMemory(a2, v9 + 4, 8 * v5) != 8 * v5 )
  {
    while ( 1 )
    {
      v10 = *(void **)v8;
      Block = v10;
      v9 = v10;
      if ( v10 )
        break;
LABEL_15:
      if ( RtlAllocateMemoryBlockLookaside(*(PVOID *)RtlpHeapStackTraceLog, 8 * v5 + 16, &Block) < 0
        && ((int)RtlExtendMemoryZone(*(_QWORD *)(*(_QWORD *)RtlpHeapStackTraceLog + 16LL), 0x10000LL) < 0
         || RtlAllocateMemoryBlockLookaside(*(PVOID *)RtlpHeapStackTraceLog, 8 * v5 + 16, &Block) < 0) )
      {
        return 0LL;
      }
      v11 = Block;
      *((_DWORD *)Block + 2) = a3;
      v11[3] = v5;
      *(_QWORD *)v11 = v10;
      memmove(v11 + 4, a2, 8 * v5);
      if ( v10 == (void *)_InterlockedCompareExchange64(
                            (volatile signed __int64 *)v8,
                            (signed __int64)v11,
                            (signed __int64)v10) )
      {
        _InterlockedIncrement((volatile signed __int32 *)(RtlpHeapStackTraceLog + 8));
        return Block;
      }
      RtlFreeMemoryBlockLookaside(*(PVOID *)RtlpHeapStackTraceLog, Block);
    }
    while ( v9[2] != a3 || v9[3] != (_DWORD)v5 || RtlCompareMemory(a2, v9 + 4, 8 * v5) != 8 * v5 )
    {
      v9 = *(_DWORD **)v9;
      Block = v9;
      if ( !v9 )
        goto LABEL_15;
    }
    *(_QWORD *)(v8 + 8) = v9;
  }
  return v9;
}
