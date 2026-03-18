/*
 * XREFs of ReleaseASLMutex @ 0x1C0022260
 * Callers:
 *     RunContext @ 0x1C00028F0 (RunContext.c)
 *     Release @ 0x1C0005520 (Release.c)
 *     ParseAcquire @ 0x1C0014C50 (ParseAcquire.c)
 * Callees:
 *     ParseRelease @ 0x1C0014940 (ParseRelease.c)
 */

__int64 __fastcall ReleaseASLMutex(__int64 a1, __int64 a2, char a3)
{
  int v3; // eax
  _DWORD v5[8]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v6; // [rsp+40h] [rbp-28h]
  __int128 v7; // [rsp+48h] [rbp-20h]

  v6 = a2;
  v5[0] = 1179403602;
  v3 = 393216;
  if ( a3 )
    v3 = 458752;
  v5[4] = v3;
  v7 = 0LL;
  return ParseRelease(a1, (__int64)v5, 0);
}
