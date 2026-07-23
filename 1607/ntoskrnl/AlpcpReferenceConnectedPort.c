/*
 * XREFs of AlpcpReferenceConnectedPort @ 0x1404EF890
 * Callers:
 *     AlpcpExposeHandleAttribute @ 0x140449390 (AlpcpExposeHandleAttribute.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x140475EB8 (AlpcpPortQueryConnectedSidInfo.c)
 *     AlpcpImpersonateMessage @ 0x1404F1060 (AlpcpImpersonateMessage.c)
 *     AlpcpPortQueryServerSessionInfo @ 0x14065641C (AlpcpPortQueryServerSessionInfo.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ObReferenceObjectSafe @ 0x14008BCA0 (ObReferenceObjectSafe.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
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
    v4 = KeAbPreAcquire(v3 - 16, 0LL, 0);
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
