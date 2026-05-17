/*
 * XREFs of LdrpLogError @ 0x180075B80
 * Callers:
 *     LdrpSnapModule @ 0x1800156C0 (LdrpSnapModule.c)
 *     LdrpLoadDllInternal @ 0x180020AC4 (LdrpLoadDllInternal.c)
 *     LdrpCallInitRoutine @ 0x180024024 (LdrpCallInitRoutine.c)
 *     LdrpReleaseLoaderLock @ 0x180038398 (LdrpReleaseLoaderLock.c)
 *     LdrpProcessWork @ 0x18003913C (LdrpProcessWork.c)
 *     LdrpMapDllNtFileName @ 0x18003F1F8 (LdrpMapDllNtFileName.c)
 *     LdrpMapImage @ 0x180040760 (LdrpMapImage.c)
 *     LdrUnlockLoaderLock @ 0x180070A40 (LdrUnlockLoaderLock.c)
 * Callees:
 *     LdrpLogEtwEvent @ 0x1800BD334 (LdrpLogEtwEvent.c)
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
