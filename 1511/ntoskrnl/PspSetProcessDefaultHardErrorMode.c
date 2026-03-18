/*
 * XREFs of PspSetProcessDefaultHardErrorMode @ 0x1404520A4
 * Callers:
 *     NtSetInformationProcess @ 0x1404507B0 (NtSetInformationProcess.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KeSetAutoAlignmentProcess @ 0x140452180 (KeSetAutoAlignmentProcess.c)
 */

__int64 __fastcall PspSetProcessDefaultHardErrorMode(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rsi
  bool v9; // al

  --*(_WORD *)(a2 + 484);
  v6 = (unsigned __int64 *)(a1 + 728);
  v7 = KeAbPreAcquire(a1 + 728, 0LL, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx(v6, v7, (ULONG_PTR)v6);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  if ( *(_DWORD *)(a1 + 1184) != a3 )
  {
    *(_DWORD *)(a1 + 1184) = a3;
    v9 = (a3 & 4) != 0;
    if ( *(_QWORD *)(a1 + 1064) )
      v9 = 1;
    KeSetAutoAlignmentProcess(a1, v9);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v6);
  KeAbPostRelease((ULONG_PTR)v6);
  return KeLeaveCriticalRegionThread(a2);
}
