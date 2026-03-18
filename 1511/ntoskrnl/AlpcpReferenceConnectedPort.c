/*
 * XREFs of AlpcpReferenceConnectedPort @ 0x140425270
 * Callers:
 *     AlpcpImpersonateMessage @ 0x140425640 (AlpcpImpersonateMessage.c)
 *     AlpcpExposeHandleAttribute @ 0x1404292E0 (AlpcpExposeHandleAttribute.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x14048C178 (AlpcpPortQueryConnectedSidInfo.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1406203B4 (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ObReferenceObjectSafe @ 0x1400C8410 (ObReferenceObjectSafe.c)
 */

__int64 __fastcall AlpcpReferenceConnectedPort(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rbp
  int v5; // eax

  v2 = 0LL;
  if ( (*(_DWORD *)(a1 + 416) & 6) != 2 )
  {
    v3 = *(_QWORD *)(a1 + 16);
    if ( !v3 )
      return v2;
    v4 = KeAbPreAcquire(v3 - 16, 0LL, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v3 - 16), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)(v3 - 16), v4, v3 - 16);
    if ( v4 )
      *(_BYTE *)(v4 + 26) |= 1u;
    v5 = (*(_DWORD *)(a1 + 416) >> 1) & 3;
    if ( v5 == 2 )
    {
      v2 = *(_QWORD *)(v3 + 8);
    }
    else
    {
      if ( v5 != 3 )
      {
LABEL_13:
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v3 - 16), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v3 - 16));
        KeAbPostRelease(v3 - 16);
        return v2;
      }
      v2 = *(_QWORD *)(v3 + 16);
    }
    if ( v2 && !ObReferenceObjectSafe(v2) )
      v2 = 0LL;
    goto LABEL_13;
  }
  ObfReferenceObject((PVOID)a1);
  return a1;
}
