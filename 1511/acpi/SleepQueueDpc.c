/*
 * XREFs of SleepQueueDpc @ 0x1C0024AB0
 * Callers:
 *     <none>
 * Callees:
 *     RestartContext @ 0x1C0006440 (RestartContext.c)
 */

__int64 **SleepQueueDpc()
{
  __int64 v0; // rdx
  __int64 ***v1; // rax
  __int64 v2; // rcx
  __int64 ***v3; // rcx
  __int64 *v4; // rcx
  __int64 **result; // rax
  __int64 *v6; // rax
  __int64 *v7; // [rsp+20h] [rbp-10h] BYREF
  __int64 **v8; // [rsp+28h] [rbp-8h]

  v8 = &v7;
  v7 = (__int64 *)&v7;
  byte_1C005AB10 = KeAcquireSpinLockRaiseToDpc(&gmutSleep);
  v0 = MEMORY[0xFFFFF78000000008];
  while ( 1 )
  {
    v1 = (__int64 ***)SleepQueue;
    if ( (__int64 *)SleepQueue == &SleepQueue )
      break;
    if ( *(_QWORD *)(SleepQueue + 16) > v0 )
    {
      ExSetTimer(SleepTimer, v0 - *(_QWORD *)(SleepQueue + 16), 0LL, 0LL);
      break;
    }
    v2 = *(_QWORD *)SleepQueue;
    if ( *(__int64 **)(SleepQueue + 8) != &SleepQueue || *(_QWORD *)(v2 + 8) != SleepQueue )
      __fastfail(3u);
    SleepQueue = *(_QWORD *)SleepQueue;
    *(_QWORD *)(v2 + 8) = &SleepQueue;
    v3 = (__int64 ***)v8;
    *v1 = &v7;
    v1[1] = (__int64 **)v3;
    if ( *v3 != &v7 )
      __fastfail(3u);
    *v3 = (__int64 **)v1;
    v8 = (__int64 **)v1;
  }
  KeReleaseSpinLock(&gmutSleep, byte_1C005AB10);
  while ( 1 )
  {
    v4 = v7;
    result = &v7;
    if ( v7 == (__int64 *)&v7 )
      break;
    v6 = (__int64 *)*v7;
    if ( (__int64 **)v7[1] != &v7 || (__int64 *)v6[1] != v7 )
      __fastfail(3u);
    v7 = (__int64 *)*v7;
    v6[1] = (__int64)&v7;
    RestartContext((PSLIST_ENTRY)v4[3], (*(_DWORD *)(v4[3] + 64) & 0x100) == 0);
  }
  return result;
}
