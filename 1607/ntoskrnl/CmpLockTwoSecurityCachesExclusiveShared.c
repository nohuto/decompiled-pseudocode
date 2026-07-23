/*
 * XREFs of CmpLockTwoSecurityCachesExclusiveShared @ 0x1404CE120
 * Callers:
 *     CmpCopyKeyPartial @ 0x1404CDE74 (CmpCopyKeyPartial.c)
 *     CmpDoBuildVirtualStack @ 0x140600C9C (CmpDoBuildVirtualStack.c)
 *     CmpSyncKeyValues @ 0x14060990C (CmpSyncKeyValues.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 */

_BYTE *__fastcall CmpLockTwoSecurityCachesExclusiveShared(unsigned __int64 a1, unsigned __int64 a2)
{
  volatile signed __int32 *v4; // rdi
  _BYTE *result; // rax
  __int64 v6; // rbx
  unsigned __int64 *v7; // rsi
  _BYTE *v8; // rax
  _BYTE *v9; // rbx
  volatile signed __int64 *v10; // rdi
  unsigned __int64 *v11; // rdi
  __int64 v12; // rbx
  volatile signed __int32 *v13; // rsi
  ULONG_PTR v14; // r8
  unsigned __int64 *v15; // rcx

  if ( a1 < a2 )
  {
    v7 = (unsigned __int64 *)(a1 + 2952);
    v8 = (_BYTE *)KeAbPreAcquire(a1 + 2952, 0LL, 0);
    v9 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
      ExfAcquirePushLockExclusiveEx(v7, v8, (ULONG_PTR)v7);
    if ( v9 )
      v9[26] |= 1u;
    v10 = (volatile signed __int64 *)(a2 + 2952);
    v6 = KeAbPreAcquire((ULONG_PTR)v10, 0LL, 0);
    result = (_BYTE *)_InterlockedCompareExchange64(v10, 17LL, 0LL);
    if ( result )
      result = (_BYTE *)ExfAcquirePushLockSharedEx((unsigned __int64 *)v10, v6, (ULONG_PTR)v10);
  }
  else
  {
    if ( a1 <= a2 )
    {
      v4 = (volatile signed __int32 *)(a2 + 2952);
      result = (_BYTE *)KeAbPreAcquire(a2 + 2952, 0LL, 0);
      v6 = (__int64)result;
      if ( !_interlockedbittestandset64(v4, 0LL) )
        goto LABEL_4;
      v14 = (ULONG_PTR)v4;
      v15 = (unsigned __int64 *)v4;
      goto LABEL_20;
    }
    v11 = (unsigned __int64 *)(a2 + 2952);
    v12 = KeAbPreAcquire(a2 + 2952, 0LL, 0);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v11, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v11, v12, (ULONG_PTR)v11);
    if ( v12 )
      *(_BYTE *)(v12 + 26) |= 1u;
    v13 = (volatile signed __int32 *)(a1 + 2952);
    result = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v13, 0LL, 0);
    v6 = (__int64)result;
    if ( _interlockedbittestandset64(v13, 0LL) )
    {
      v14 = (ULONG_PTR)v13;
      v15 = (unsigned __int64 *)v13;
LABEL_20:
      result = (_BYTE *)ExfAcquirePushLockExclusiveEx(v15, result, v14);
    }
  }
LABEL_4:
  if ( v6 )
  {
    result = *(_BYTE **)(v6 + 32);
    *(_BYTE *)(v6 + 26) |= 1u;
  }
  return result;
}
