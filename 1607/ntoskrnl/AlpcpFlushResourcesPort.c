/*
 * XREFs of AlpcpFlushResourcesPort @ 0x140409934
 * Callers:
 *     AlpcpDoPortCleanup @ 0x140409A64 (AlpcpDoPortCleanup.c)
 *     AlpcpAcceptConnectPort @ 0x14049EE08 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     AlpcpReferenceBlob @ 0x14040AC0C (AlpcpReferenceBlob.c)
 *     AlpcpDeleteBlob @ 0x14040AC68 (AlpcpDeleteBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14040B134 (AlpcpDereferenceBlobEx.c)
 */

unsigned __int64 __fastcall AlpcpFlushResourcesPort(__int64 a1)
{
  unsigned __int64 *v1; // rdi
  __int64 **v2; // r14
  _BYTE *v3; // rax
  _BYTE *v4; // rbx
  __int64 *v5; // rax
  __int64 v7; // rcx
  ULONG_PTR v8; // rsi
  _BYTE *v9; // rax
  _BYTE *v10; // rsi

  v1 = (unsigned __int64 *)(a1 + 328);
  v2 = (__int64 **)(a1 + 336);
  v3 = (_BYTE *)KeAbPreAcquire(a1 + 328, 0LL, 0);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    ExfAcquirePushLockExclusiveEx(v1, v3, (ULONG_PTR)v1);
  if ( v4 )
    v4[26] |= 1u;
  while ( 1 )
  {
    v5 = *v2;
    if ( *v2 == (__int64 *)v2 )
      break;
    v7 = *v5;
    if ( (__int64 **)v5[1] != v2 || *(__int64 **)(v7 + 8) != v5 )
      __fastfail(3u);
    *v2 = (__int64 *)v7;
    v8 = (ULONG_PTR)(v5 + 6);
    *(_QWORD *)(v7 + 8) = v2;
    v5[1] = (__int64)v5;
    *v5 = (__int64)v5;
    if ( AlpcpReferenceBlob((ULONG_PTR)(v5 + 6)) )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v1);
      KeAbPostRelease((ULONG_PTR)v1);
      if ( (unsigned __int8)AlpcpDeleteBlob(v8) )
        AlpcpDereferenceBlobEx(v8);
      AlpcpDereferenceBlobEx(v8);
      v9 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v1, 0LL, 0);
      v10 = v9;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
        ExfAcquirePushLockExclusiveEx(v1, v9, (ULONG_PTR)v1);
      if ( v10 )
        v10[26] |= 1u;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v1);
  return KeAbPostRelease((ULONG_PTR)v1);
}
