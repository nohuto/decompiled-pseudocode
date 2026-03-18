/*
 * XREFs of CmpLockTwoSecurityCachesExclusiveShared @ 0x1404B3F04
 * Callers:
 *     CmpCopyKeyPartial @ 0x1404B3BE4 (CmpCopyKeyPartial.c)
 *     CmpSyncKeyValues @ 0x14050F5B0 (CmpSyncKeyValues.c)
 *     CmpReplicateKeyToVirtual @ 0x1405E29D0 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

signed __int64 __fastcall CmpLockTwoSecurityCachesExclusiveShared(unsigned __int64 a1, unsigned __int64 a2)
{
  volatile signed __int32 *v4; // rdi
  signed __int64 result; // rax
  __int64 v6; // rbx
  unsigned __int64 *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rbx
  volatile signed __int64 *v10; // rdi
  unsigned __int64 *v11; // rdi
  __int64 v12; // rbx
  volatile signed __int32 *v13; // rsi
  ULONG_PTR v14; // r8
  unsigned __int64 *v15; // rcx

  if ( a1 < a2 )
  {
    v7 = (unsigned __int64 *)(a1 + 2952);
    v8 = KeAbPreAcquire(a1 + 2952, 0LL, 0LL);
    v9 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
      ExfAcquirePushLockExclusiveEx(v7, v8, (ULONG_PTR)v7);
    if ( v9 )
      *(_BYTE *)(v9 + 26) |= 1u;
    v10 = (volatile signed __int64 *)(a2 + 2952);
    v6 = KeAbPreAcquire((ULONG_PTR)v10, 0LL, 0LL);
    result = _InterlockedCompareExchange64(v10, 17LL, 0LL);
    if ( result )
      result = ExfAcquirePushLockSharedEx((unsigned __int64 *)v10, v6, (ULONG_PTR)v10);
  }
  else
  {
    if ( a1 <= a2 )
    {
      v4 = (volatile signed __int32 *)(a2 + 2952);
      result = KeAbPreAcquire(a2 + 2952, 0LL, 0LL);
      v6 = result;
      if ( !_interlockedbittestandset64(v4, 0LL) )
        goto LABEL_4;
      v14 = (ULONG_PTR)v4;
      v15 = (unsigned __int64 *)v4;
      goto LABEL_20;
    }
    v11 = (unsigned __int64 *)(a2 + 2952);
    v12 = KeAbPreAcquire(a2 + 2952, 0LL, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v11, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v11, v12, (ULONG_PTR)v11);
    if ( v12 )
      *(_BYTE *)(v12 + 26) |= 1u;
    v13 = (volatile signed __int32 *)(a1 + 2952);
    result = KeAbPreAcquire((ULONG_PTR)v13, 0LL, 0LL);
    v6 = result;
    if ( _interlockedbittestandset64(v13, 0LL) )
    {
      v14 = (ULONG_PTR)v13;
      v15 = (unsigned __int64 *)v13;
LABEL_20:
      result = ExfAcquirePushLockExclusiveEx(v15, result, v14);
    }
  }
LABEL_4:
  if ( v6 )
  {
    result = *(_QWORD *)(v6 + 32);
    *(_BYTE *)(v6 + 26) |= 1u;
  }
  return result;
}
