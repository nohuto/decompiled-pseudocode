/*
 * XREFs of PspSetProcessDefaultHardErrorMode @ 0x140427A30
 * Callers:
 *     NtSetInformationProcess @ 0x1404248E0 (NtSetInformationProcess.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     KeSetAutoAlignmentProcess @ 0x140427B10 (KeSetAutoAlignmentProcess.c)
 */

__int64 __fastcall PspSetProcessDefaultHardErrorMode(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 *v6; // rdi
  _BYTE *v7; // rax
  _BYTE *v8; // rbx
  bool v9; // al
  bool v10; // zf

  --*(_WORD *)(a2 + 484);
  v6 = (unsigned __int64 *)(a1 + 728);
  v7 = (_BYTE *)KeAbPreAcquire(a1 + 728, 0LL, 0);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx(v6, v7, (ULONG_PTR)v6);
  if ( v8 )
    v8[26] |= 1u;
  if ( *(_DWORD *)(a1 + 1184) != a3 )
  {
    v9 = (a3 & 4) != 0;
    v10 = *(_QWORD *)(a1 + 1064) == 0LL;
    *(_DWORD *)(a1 + 1184) = a3;
    if ( !v10 )
      v9 = 1;
    KeSetAutoAlignmentProcess(a1, v9);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v6);
  KeAbPostRelease((ULONG_PTR)v6);
  return KeLeaveCriticalRegionThread(a2);
}
