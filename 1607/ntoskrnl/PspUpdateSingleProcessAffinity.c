/*
 * XREFs of PspUpdateSingleProcessAffinity @ 0x14067DD8C
 * Callers:
 *     PspSetProcessAffinityUpdateMode @ 0x14054C7D4 (PspSetProcessAffinityUpdateMode.c)
 *     PsUpdateActiveProcessAffinity @ 0x14067D570 (PsUpdateActiveProcessAffinity.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C8280 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C8640 (ExfReleasePushLockShared.c)
 *     PspWritePebAffinityInfo @ 0x14051ACD0 (PspWritePebAffinityInfo.c)
 *     PspSetProcessAffinitySafe @ 0x14067DC5C (PspSetProcessAffinitySafe.c)
 */

void __fastcall PspUpdateSingleProcessAffinity(__int64 a1, __int64 a2, __int16 *a3)
{
  unsigned __int64 *v6; // rbx
  int v7; // ebp
  __int64 v8; // rsi
  int v9; // [rsp+68h] [rbp+10h] BYREF

  if ( (*(_DWORD *)(a2 + 768) & 0x80000) != 0 )
  {
    v6 = (unsigned __int64 *)(a2 + 728);
    v9 = 0;
    v7 = 0;
    v8 = KeAbPreAcquire(a2 + 728, 0LL, 0);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v6, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v6, v8, (ULONG_PTR)v6);
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    if ( (*(_DWORD *)(a2 + 768) & 0x80000) != 0 )
      v7 = PspSetProcessAffinitySafe(a2, 2, a3, 0LL, &v9);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v6);
    KeAbPostRelease((ULONG_PTR)v6);
    if ( v7 >= 0 )
    {
      if ( v9 )
        PspWritePebAffinityInfo(a1, a2);
    }
  }
}
