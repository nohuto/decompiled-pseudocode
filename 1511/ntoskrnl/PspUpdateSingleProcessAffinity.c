/*
 * XREFs of PspUpdateSingleProcessAffinity @ 0x14063F640
 * Callers:
 *     PspSetProcessAffinityUpdateMode @ 0x140517F80 (PspSetProcessAffinityUpdateMode.c)
 *     PsUpdateActiveProcessAffinity @ 0x14063EF08 (PsUpdateActiveProcessAffinity.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     PspWritePebAffinityInfo @ 0x1404645DC (PspWritePebAffinityInfo.c)
 *     PspSetProcessAffinitySafe @ 0x14063F50C (PspSetProcessAffinitySafe.c)
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
    v8 = KeAbPreAcquire(a2 + 728, 0LL, 0LL);
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
