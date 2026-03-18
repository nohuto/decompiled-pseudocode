/*
 * XREFs of PspUpdateSingleProcessAffinity @ 0x1406C085C
 * Callers:
 *     PspSetProcessAffinityUpdateMode @ 0x14058B36C (PspSetProcessAffinityUpdateMode.c)
 *     PsUpdateActiveProcessAffinity @ 0x1406BFE5C (PsUpdateActiveProcessAffinity.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     PspWritePebAffinityInfo @ 0x1404668C8 (PspWritePebAffinityInfo.c)
 *     PspSetProcessAffinitySafe @ 0x1406C0654 (PspSetProcessAffinitySafe.c)
 */

void __fastcall PspUpdateSingleProcessAffinity(__int64 a1, __int64 a2, __int16 *a3, __int64 a4)
{
  unsigned __int64 *v7; // rbx
  int v8; // ebp
  __int64 v9; // rsi
  __int64 v10; // r9
  int v11; // [rsp+68h] [rbp+10h] BYREF

  if ( (*(_DWORD *)(a2 + 768) & 0x80000) != 0 )
  {
    v7 = (unsigned __int64 *)(a2 + 728);
    v11 = 0;
    v8 = 0;
    v9 = KeAbPreAcquire(a2 + 728, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v7, v9, (ULONG_PTR)v7, v10);
    if ( v9 )
      *(_BYTE *)(v9 + 26) |= 1u;
    if ( (*(_DWORD *)(a2 + 768) & 0x80000) != 0 )
      v8 = PspSetProcessAffinitySafe(a2, 2, a3, 0LL, &v11);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v7);
    KeAbPostRelease((ULONG_PTR)v7);
    if ( v8 >= 0 )
    {
      if ( v11 )
        PspWritePebAffinityInfo(a1, a2);
    }
  }
}
