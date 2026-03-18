/*
 * XREFs of EtwpGetNextGuidEntry @ 0x14040C2A4
 * Callers:
 *     EtwpDisableTraceProviders @ 0x14040B4EC (EtwpDisableTraceProviders.c)
 *     EtwpEnumerateTraceGuids @ 0x1405288C8 (EtwpEnumerateTraceGuids.c)
 *     EtwpGetTraceGroupList @ 0x1406A04D4 (EtwpGetTraceGroupList.c)
 *     EtwpGetTraceGuidList @ 0x1406A056C (EtwpGetTraceGuidList.c)
 *     EtwpEventTracingCounterSetCallback @ 0x1406E84EC (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C8280 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C8640 (ExfReleasePushLockShared.c)
 *     EtwpReferenceGuidEntry @ 0x14040E5A0 (EtwpReferenceGuidEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x14040ED4C (EtwpUnreferenceGuidEntry.c)
 */

unsigned __int64 *__fastcall EtwpGetNextGuidEntry(__int64 a1, unsigned __int64 **a2, int a3)
{
  __int64 v3; // rbp
  unsigned __int64 **v4; // rdi
  char v5; // r12
  unsigned __int64 *v6; // r15
  __int64 v7; // rbx
  unsigned __int64 *v8; // r14
  unsigned __int64 *v9; // rbx
  __int64 i; // r13
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // rsi
  unsigned __int64 *v13; // rsi

  v3 = a1 + 1424;
  v4 = a2;
  v5 = 0;
  v6 = 0LL;
  if ( a2 )
    v7 = v3 + 56LL * ((*((_DWORD *)a2 + 6) ^ *((_DWORD *)a2 + 7) ^ *((_DWORD *)a2 + 9) ^ *((_DWORD *)a2 + 8)) & 0x3F);
  else
    v7 = a1 + 1424;
  v8 = (unsigned __int64 *)(v7 + 16LL * a3);
  v9 = (unsigned __int64 *)(v7 + 48);
  for ( i = 2 * (a3 - 3LL); ; v8 = &v9[i] )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v12 = KeAbPreAcquire((ULONG_PTR)v9, 0LL, 0);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v9, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v9, v12, (ULONG_PTR)v9);
    if ( v12 )
      *(_BYTE *)(v12 + 26) |= 1u;
    if ( v4 )
      v13 = *v4;
    else
      v13 = (unsigned __int64 *)*v8;
    while ( v13 != v8 )
    {
      v6 = v13;
      if ( (unsigned __int8)EtwpReferenceGuidEntry((ULONG_PTR)v13) )
      {
        v5 = 1;
        break;
      }
      v13 = (unsigned __int64 *)*v13;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v9, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v9);
    KeAbPostRelease((ULONG_PTR)v9);
    KeLeaveCriticalRegion();
    if ( v4 )
      EtwpUnreferenceGuidEntry((ULONG_PTR)v4);
    if ( v5 )
      return v6;
    v9 += 7;
    if ( v9 - 6 == (unsigned __int64 *)(v3 + 3584) )
      break;
    v4 = 0LL;
  }
  return 0LL;
}
