/*
 * XREFs of AlpcpFlushResourcesPort @ 0x14047ED3C
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x14047D9CC (AlpcpAcceptConnectPort.c)
 *     AlpcpDoPortCleanup @ 0x14047EB1C (AlpcpDoPortCleanup.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     AlpcpDereferenceBlobEx @ 0x1404243CC (AlpcpDereferenceBlobEx.c)
 *     AlpcpReferenceBlob @ 0x14047CD18 (AlpcpReferenceBlob.c)
 *     AlpcpDeleteBlob @ 0x14047CE68 (AlpcpDeleteBlob.c)
 */

void __fastcall AlpcpFlushResourcesPort(__int64 a1)
{
  unsigned __int64 *v1; // rdi
  __int64 **v2; // r14
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 *v5; // rax
  __int64 v6; // rcx
  ULONG_PTR v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rsi

  v1 = (unsigned __int64 *)(a1 + 328);
  v2 = (__int64 **)(a1 + 336);
  v3 = KeAbPreAcquire(a1 + 328, 0LL, 0LL);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    ExfAcquirePushLockExclusiveEx(v1, v3, (ULONG_PTR)v1);
  if ( v4 )
    *(_BYTE *)(v4 + 26) |= 1u;
  while ( 1 )
  {
    v5 = *v2;
    if ( *v2 == (__int64 *)v2 )
      break;
    v6 = *v5;
    if ( (__int64 **)v5[1] != v2 || *(__int64 **)(v6 + 8) != v5 )
      __fastfail(3u);
    *v2 = (__int64 *)v6;
    v7 = (ULONG_PTR)(v5 + 6);
    *(_QWORD *)(v6 + 8) = v2;
    v5[1] = (__int64)v5;
    *v5 = (__int64)v5;
    if ( AlpcpReferenceBlob((ULONG_PTR)(v5 + 6)) )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v1);
      KeAbPostRelease((ULONG_PTR)v1);
      if ( AlpcpDeleteBlob(v7) )
        AlpcpDereferenceBlobEx(v7, 1);
      AlpcpDereferenceBlobEx(v7, 1);
      v8 = KeAbPreAcquire((ULONG_PTR)v1, 0LL, 0LL);
      v9 = v8;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
        ExfAcquirePushLockExclusiveEx(v1, v8, (ULONG_PTR)v1);
      if ( v9 )
        *(_BYTE *)(v9 + 26) |= 1u;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v1);
  KeAbPostRelease((ULONG_PTR)v1);
}
