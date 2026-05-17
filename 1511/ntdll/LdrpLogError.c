/*
 * XREFs of LdrpLogError @ 0x180003CE8
 * Callers:
 *     LdrUnlockLoaderLock @ 0x180006690 (LdrUnlockLoaderLock.c)
 *     LdrpMapDllNtFileName @ 0x180007960 (LdrpMapDllNtFileName.c)
 *     LdrpProcessWork @ 0x18000928C (LdrpProcessWork.c)
 *     LdrpReleaseLoaderLock @ 0x18000A454 (LdrpReleaseLoaderLock.c)
 *     LdrpMapImage @ 0x18000E70C (LdrpMapImage.c)
 *     LdrpLoadDllInternal @ 0x180011D2C (LdrpLoadDllInternal.c)
 *     LdrpCallInitRoutine @ 0x18001527C (LdrpCallInitRoutine.c)
 *     LdrpSnapModule @ 0x180033FC0 (LdrpSnapModule.c)
 * Callees:
 *     LdrpLogEtwEvent @ 0x1800CA054 (LdrpLogEtwEvent.c)
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
      return (struct _PEB *)LdrpLogEtwEvent(5284, a1, a3, a4, v5);
    }
  }
  return result;
}
