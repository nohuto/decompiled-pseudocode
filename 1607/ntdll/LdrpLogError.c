/*
 * XREFs of LdrpLogError @ 0x180086104
 * Callers:
 *     LdrpProcessWork @ 0x18000E18C (LdrpProcessWork.c)
 *     LdrpCallInitRoutine @ 0x1800188B4 (LdrpCallInitRoutine.c)
 *     LdrpLoadDllInternal @ 0x180018D20 (LdrpLoadDllInternal.c)
 *     LdrUnlockLoaderLock @ 0x180029EB0 (LdrUnlockLoaderLock.c)
 *     LdrpMapDllNtFileName @ 0x18002D39C (LdrpMapDllNtFileName.c)
 *     LdrpReleaseLoaderLock @ 0x18002D54C (LdrpReleaseLoaderLock.c)
 *     LdrpMapImage @ 0x18002F43C (LdrpMapImage.c)
 *     LdrpSnapModule @ 0x180033F90 (LdrpSnapModule.c)
 * Callees:
 *     LdrpLogEtwEvent @ 0x1800D15F8 (LdrpLogEtwEvent.c)
 */

struct _PEB *__fastcall LdrpLogError(int a1, char a2, int a3, __int64 a4)
{
  struct _PEB *result; // rax
  __int64 v5; // [rsp+20h] [rbp-18h]

  if ( MEMORY[0x7FFE0384] )
  {
    result = NtCurrentPeb();
    if ( (result->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
    {
      v5 = a4;
      LOBYTE(a4) = a3;
      LOBYTE(a3) = a2;
      return (struct _PEB *)LdrpLogEtwEvent(5284, a1, a3, a4, v5, 0LL);
    }
  }
  return result;
}
