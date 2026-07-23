/*
 * XREFs of EtwpCompressionProc @ 0x14022A434
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     EtwpCompressPendingBuffers @ 0x14022A2B4 (EtwpCompressPendingBuffers.c)
 *     EtwpRelinquishCompressionTarget @ 0x14022AC34 (EtwpRelinquishCompressionTarget.c)
 */

void __fastcall EtwpCompressionProc(unsigned int *a1)
{
  signed __int32 i; // eax
  bool v3; // zf
  unsigned int v4; // eax
  _BYTE *v5; // rax
  _BYTE *v6; // rbp

  for ( i = _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 236, 0xFFFFFFFF);
        ;
        i = _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 236, 0xFFFFFFFF) )
  {
    v3 = i == 2;
    v4 = a1[244];
    if ( !v3 )
      break;
    if ( v4 )
      EtwpCompressPendingBuffers((__int64)a1);
  }
  if ( !v4 )
  {
    v5 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)(a1 + 238), 0LL, 0);
    v6 = v5;
    if ( _interlockedbittestandset64((volatile signed __int32 *)a1 + 238, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)a1 + 119, v5, (ULONG_PTR)(a1 + 238));
    if ( v6 )
      v6[26] |= 1u;
    EtwpRelinquishCompressionTarget(a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 119, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)a1 + 119);
    KeAbPostRelease((ULONG_PTR)(a1 + 238));
  }
  ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*((_QWORD *)a1 + 113) + 8LL * *a1 + 400), 1u);
}
