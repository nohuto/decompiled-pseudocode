/*
 * XREFs of AlpcpReferenceConnectedPort @ 0x14051FCC0
 * Callers:
 *     AlpcpImpersonateMessage @ 0x140479ED0 (AlpcpImpersonateMessage.c)
 *     AlpcpExposeHandleAttribute @ 0x14047CDC0 (AlpcpExposeHandleAttribute.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x14051FAF8 (AlpcpPortQueryConnectedSidInfo.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x14069F5B0 (NtAlpcImpersonateClientContainerOfPort.c)
 *     AlpcpPortQueryServerSessionInfo @ 0x14069FD0C (AlpcpPortQueryServerSessionInfo.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObReferenceObjectSafe @ 0x140075130 (ObReferenceObjectSafe.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall AlpcpReferenceConnectedPort(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // r9
  int v9; // eax

  v5 = 0LL;
  if ( (*(_DWORD *)(a1 + 416) & 6) != 2 )
  {
    v6 = *(_QWORD *)(a1 + 16);
    if ( !v6 )
      return v5;
    v7 = KeAbPreAcquire(v6 - 16, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v6 - 16), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)(v6 - 16), v7, v6 - 16, v8);
    if ( v7 )
      *(_BYTE *)(v7 + 26) |= 1u;
    v9 = (*(_DWORD *)(a1 + 416) >> 1) & 3;
    if ( v9 == 2 )
    {
      v5 = *(_QWORD *)(v6 + 8);
    }
    else
    {
      if ( v9 != 3 )
      {
LABEL_13:
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v6 - 16), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v6 - 16));
        KeAbPostRelease(v6 - 16);
        return v5;
      }
      v5 = *(_QWORD *)(v6 + 16);
    }
    if ( v5 && !ObReferenceObjectSafe(v5) )
      v5 = 0LL;
    goto LABEL_13;
  }
  ObfReferenceObject((PVOID)a1);
  return a1;
}
