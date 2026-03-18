/*
 * XREFs of AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x1404A4A40
 * Callers:
 *     AlpcpDispatchCloseMessage @ 0x1404A48A4 (AlpcpDispatchCloseMessage.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObReferenceObjectSafe @ 0x140075130 (ObReferenceObjectSafe.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo @ 0x1404A4EA8 (AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo.c)
 */

__int64 __fastcall AlpcpReferenceAndLockTargetPortsAndCommunicationInfo(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4)
{
  __int64 *v4; // r14
  int v7; // ebx
  __int64 v8; // rdi
  __int64 v9; // r9
  int v10; // ebx
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // r9
  __int64 v15; // rsi
  __int64 v16; // r9
  __int64 result; // rax

  v4 = *(__int64 **)(a1 + 16);
  v7 = (*(_DWORD *)(a1 + 416) >> 1) & 3;
  v8 = KeAbPreAcquire((ULONG_PTR)(v4 - 2), 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(v4 - 2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)v4 - 2, v8, (ULONG_PTR)(v4 - 2), v9);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  v10 = v7 - 1;
  if ( v10 )
  {
    if ( v10 == 1 )
    {
      v11 = *v4;
      v12 = v4[1];
      goto LABEL_8;
    }
    v11 = v4[2];
  }
  else
  {
    v11 = *v4;
  }
  v12 = v11;
LABEL_8:
  if ( v11 )
    v11 &= -(__int64)(ObReferenceObjectSafe(v11) != 0);
  if ( v12 )
    v12 &= -(__int64)(ObReferenceObjectSafe(v12) != 0);
  if ( v11 && v12 )
  {
    v13 = KeAbPreAcquire(v11 + 352, 0LL, 0LL, v9);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 352), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)(v11 + 352), v13, v11 + 352, v14);
    if ( v13 )
      *(_BYTE *)(v13 + 26) |= 1u;
    if ( v12 != v11 )
    {
      v15 = KeAbPreAcquire(v12 + 352, 0LL, 0LL, v14);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 352), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((unsigned __int64 *)(v12 + 352), v15, v12 + 352, v16);
      if ( v15 )
        *(_BYTE *)(v15 + 26) |= 1u;
    }
    if ( (*(_DWORD *)(v11 + 416) & 0x20) == 0 && (*(_DWORD *)(v12 + 416) & 0x20) == 0 )
    {
      *a2 = v11;
      result = 0LL;
      *a3 = v12;
      return result;
    }
    AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo(v4, v11, v12);
  }
  else
  {
    if ( _InterlockedCompareExchange64(v4 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v4 - 2);
    KeAbPostRelease((ULONG_PTR)(v4 - 2));
    if ( v11 )
      ObfDereferenceObject((PVOID)v11);
    if ( v12 )
      ObfDereferenceObject((PVOID)v12);
  }
  return 3221225527LL;
}
