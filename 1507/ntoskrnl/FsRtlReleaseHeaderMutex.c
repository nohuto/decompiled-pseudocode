/*
 * XREFs of FsRtlReleaseHeaderMutex @ 0x14004F830
 * Callers:
 *     <none>
 * Callees:
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 */

__int64 __fastcall FsRtlReleaseHeaderMutex(__int64 a1)
{
  ULONG_PTR v1; // rbx
  unsigned __int8 v2; // di
  unsigned __int32 v3; // eax

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  v2 = *(_BYTE *)(v1 + 48);
  *(_QWORD *)(v1 + 8) = 0LL;
  v3 = _InterlockedCompareExchange((volatile signed __int32 *)v1, 1, 0);
  if ( v3 )
    ExpReleaseFastMutexContended(v1, v3);
  __writecr8(v2);
  return KeAbPostRelease(v1);
}
