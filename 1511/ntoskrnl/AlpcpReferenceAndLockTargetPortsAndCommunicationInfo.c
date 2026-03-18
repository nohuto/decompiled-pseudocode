/*
 * XREFs of AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x14047FBB0
 * Callers:
 *     AlpcpDispatchCloseMessage @ 0x14047FA24 (AlpcpDispatchCloseMessage.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ObReferenceObjectSafe @ 0x1400C8410 (ObReferenceObjectSafe.c)
 *     AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo @ 0x1404826FC (AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo.c)
 */

__int64 __fastcall AlpcpReferenceAndLockTargetPortsAndCommunicationInfo(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 *v3; // r14
  int v6; // ebx
  __int64 v7; // rdi
  int v8; // ebx
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 result; // rax

  v3 = *(__int64 **)(a1 + 16);
  v6 = (*(_DWORD *)(a1 + 416) >> 1) & 3;
  v7 = KeAbPreAcquire((ULONG_PTR)(v3 - 2), 0LL, 0LL);
  if ( _InterlockedCompareExchange64(v3 - 2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)v3 - 2, v7, (ULONG_PTR)(v3 - 2));
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  v8 = v6 - 1;
  if ( v8 )
  {
    if ( v8 == 1 )
    {
      v9 = *v3;
      v10 = v3[1];
      goto LABEL_8;
    }
    v9 = v3[2];
  }
  else
  {
    v9 = *v3;
  }
  v10 = v9;
LABEL_8:
  if ( v9 )
    v9 &= -(__int64)(ObReferenceObjectSafe(v9) != 0);
  if ( v10 )
    v10 &= -(__int64)(ObReferenceObjectSafe(v10) != 0);
  if ( v9 && v10 )
  {
    v11 = KeAbPreAcquire(v9 + 352, 0LL, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 352), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)(v9 + 352), v11, v9 + 352);
    if ( v11 )
      *(_BYTE *)(v11 + 26) |= 1u;
    if ( v10 != v9 )
    {
      v12 = KeAbPreAcquire(v10 + 352, 0LL, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 352), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((unsigned __int64 *)(v10 + 352), v12, v10 + 352);
      if ( v12 )
        *(_BYTE *)(v12 + 26) |= 1u;
    }
    if ( (*(_DWORD *)(v9 + 416) & 0x20) == 0 && (*(_DWORD *)(v10 + 416) & 0x20) == 0 )
    {
      *a2 = v9;
      result = 0LL;
      *a3 = v10;
      return result;
    }
    AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo(v3, v9, v10);
  }
  else
  {
    if ( _InterlockedCompareExchange64(v3 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v3 - 2);
    KeAbPostRelease((ULONG_PTR)(v3 - 2));
    if ( v9 )
      ObfDereferenceObject((PVOID)v9);
    if ( v10 )
      ObfDereferenceObject((PVOID)v10);
  }
  return 3221225527LL;
}
