/*
 * XREFs of PspStorageGetObject @ 0x1402103E8
 * Callers:
 *     PsGetSiloContext @ 0x14020F60C (PsGetSiloContext.c)
 *     PsFreeSiloContextSlot @ 0x14067DE7C (PsFreeSiloContextSlot.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C8280 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C8640 (ExfReleasePushLockShared.c)
 *     ObfReferenceObjectWithTag @ 0x1400EE4F0 (ObfReferenceObjectWithTag.c)
 */

__int64 __fastcall PspStorageGetObject(__int64 a1, unsigned int a2, unsigned __int64 *a3)
{
  unsigned __int64 *v4; // rbx
  __int64 v5; // rdi
  unsigned __int64 v6; // rdi

  if ( a2 < 0x20 )
    goto LABEL_4;
  a2 -= 32;
  if ( a2 < 0x100 )
  {
    a1 = *(_QWORD *)(a1 + 512);
    if ( !a1 )
      return 3221226021LL;
LABEL_4:
    v4 = (unsigned __int64 *)(a1 + 16LL * a2);
    v5 = KeAbPreAcquire((ULONG_PTR)v4, 0LL, 0);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v4, v5, (ULONG_PTR)v4);
    if ( v5 )
      *(_BYTE *)(v5 + 26) |= 1u;
    v6 = v4[1] & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v6 )
      ObfReferenceObjectWithTag((PVOID)(v4[1] & 0xFFFFFFFFFFFFFFFEuLL), 0x746C6644u);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v4);
    KeAbPostRelease((ULONG_PTR)v4);
    if ( v6 )
    {
      *a3 = v6;
      return 0LL;
    }
    return 3221226021LL;
  }
  return 3221225485LL;
}
