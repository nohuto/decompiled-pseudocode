/*
 * XREFs of MmCreateCacheManagerSection @ 0x1404B2EDC
 * Callers:
 *     CcInitializeCacheMap @ 0x140040D10 (CcInitializeCacheMap.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     MiCreateSection @ 0x1404B3940 (MiCreateSection.c)
 */

__int64 __fastcall MmCreateCacheManagerSection(int a1, int a2, __int64 a3, void *a4)
{
  char PreviousMode; // bl
  int SessionId; // eax
  __int64 v10; // [rsp+30h] [rbp-38h]
  char v11; // [rsp+80h] [rbp+18h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode == 1 )
    v11 = BYTE1(KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink);
  else
    v11 = 0;
  SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
  LOBYTE(v10) = v11;
  return MiCreateSection(a1, 0, 2, a2, 4, 0x8000000, v10, 0LL, a4, PreviousMode, SessionId);
}
