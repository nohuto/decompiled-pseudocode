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

signed __int64 __fastcall RtlpRegisterStackTrace(unsigned int a1, const void *a2, unsigned int a3)
{
  __int64 v3; // r9
  __int64 v5; // rsi
  signed __int64 *v8; // r14
  signed __int64 v9; // rdi
  signed __int64 v10; // rbp
  __int64 v11; // r8
  __int64 v12; // r9
  signed __int64 v13; // rbx
  signed __int64 v14; // [rsp+68h] [rbp+20h] BYREF

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
  v8 = (signed __int64 *)(v3 + 16 * (a3 % 0x191 + 1LL));
  v9 = v8[1];
  if ( !v9
    || *(_DWORD *)(v9 + 8) != a3
    || *(_DWORD *)(v9 + 12) != (_DWORD)v5
    || RtlCompareMemory(a2, (const void *)(v9 + 16), 8 * v5) != 8 * v5 )
  {
    while ( 1 )
    {
      v10 = *v8;
      v14 = v10;
      v9 = v10;
      if ( v10 )
        break;
LABEL_15:
      if ( (int)RtlAllocateMemoryBlockLookaside(*(_QWORD *)RtlpHeapStackTraceLog, 8 * v5 + 16, &v14) < 0
        && ((int)RtlExtendMemoryZone(*(_QWORD *)(*(_QWORD *)RtlpHeapStackTraceLog + 16LL), (char *)0x10000, v11, v12) < 0
         || (int)RtlAllocateMemoryBlockLookaside(*(_QWORD *)RtlpHeapStackTraceLog, 8 * v5 + 16, &v14) < 0) )
      {
        return 0LL;
      }
      v13 = v14;
      *(_DWORD *)(v14 + 8) = a3;
      *(_DWORD *)(v13 + 12) = v5;
      *(_QWORD *)v13 = v10;
      memmove((void *)(v13 + 16), a2, 8 * v5);
      if ( v10 == _InterlockedCompareExchange64(v8, v13, v10) )
      {
        _InterlockedIncrement((volatile signed __int32 *)(RtlpHeapStackTraceLog + 8));
        return v14;
      }
      RtlFreeMemoryBlockLookaside(*(_QWORD *)RtlpHeapStackTraceLog, v14);
    }
    while ( *(_DWORD *)(v9 + 8) != a3
         || *(_DWORD *)(v9 + 12) != (_DWORD)v5
         || RtlCompareMemory(a2, (const void *)(v9 + 16), 8 * v5) != 8 * v5 )
    {
      v9 = *(_QWORD *)v9;
      v14 = v9;
      if ( !v9 )
        goto LABEL_15;
    }
    v8[1] = v9;
  }
  return v9;
}
