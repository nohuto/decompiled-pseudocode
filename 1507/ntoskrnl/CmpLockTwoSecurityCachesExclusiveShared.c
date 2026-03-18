/*
 * XREFs of CmpLockTwoSecurityCachesExclusiveShared @ 0x1404F300C
 * Callers:
 *     CmpCopyKeyPartial @ 0x1404F2C38 (CmpCopyKeyPartial.c)
 *     CmpSyncKeyValues @ 0x140585640 (CmpSyncKeyValues.c)
 *     CmpDoBuildVirtualStack @ 0x1406584F0 (CmpDoBuildVirtualStack.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 */

signed __int64 __fastcall CmpLockTwoSecurityCachesExclusiveShared(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4)
{
  volatile signed __int32 *v6; // rdi
  signed __int64 result; // rax
  __int64 v8; // r9
  __int64 v9; // rbx
  unsigned __int64 *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // rbx
  volatile signed __int64 *v14; // rdi
  __int64 v15; // r9
  unsigned __int64 *v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // r9
  volatile signed __int32 *v19; // rsi
  ULONG_PTR v20; // r8
  unsigned __int64 *v21; // rcx

  if ( a1 < a2 )
  {
    v10 = (unsigned __int64 *)(a1 + 2952);
    v11 = KeAbPreAcquire(a1 + 2952, 0LL, 0LL, a4);
    v13 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
      ExfAcquirePushLockExclusiveEx(v10, v11, (ULONG_PTR)v10, v12);
    if ( v13 )
      *(_BYTE *)(v13 + 26) |= 1u;
    v14 = (volatile signed __int64 *)(a2 + 2952);
    v9 = KeAbPreAcquire((ULONG_PTR)v14, 0LL, 0LL, v12);
    result = _InterlockedCompareExchange64(v14, 17LL, 0LL);
    if ( result )
      result = ExfAcquirePushLockSharedEx((unsigned __int64 *)v14, v9, (ULONG_PTR)v14, v15);
  }
  else
  {
    if ( a1 <= a2 )
    {
      v6 = (volatile signed __int32 *)(a2 + 2952);
      result = KeAbPreAcquire(a2 + 2952, 0LL, 0LL, a4);
      v9 = result;
      if ( !_interlockedbittestandset64(v6, 0LL) )
        goto LABEL_4;
      v20 = (ULONG_PTR)v6;
      v21 = (unsigned __int64 *)v6;
      goto LABEL_20;
    }
    v16 = (unsigned __int64 *)(a2 + 2952);
    v17 = KeAbPreAcquire(a2 + 2952, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v16, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v16, v17, (ULONG_PTR)v16, v18);
    if ( v17 )
      *(_BYTE *)(v17 + 26) |= 1u;
    v19 = (volatile signed __int32 *)(a1 + 2952);
    result = KeAbPreAcquire((ULONG_PTR)v19, 0LL, 0LL, v18);
    v9 = result;
    if ( _interlockedbittestandset64(v19, 0LL) )
    {
      v20 = (ULONG_PTR)v19;
      v21 = (unsigned __int64 *)v19;
LABEL_20:
      result = ExfAcquirePushLockExclusiveEx(v21, result, v20, v8);
    }
  }
LABEL_4:
  if ( v9 )
  {
    result = *(_QWORD *)(v9 + 32);
    *(_BYTE *)(v9 + 26) |= 1u;
  }
  return result;
}
