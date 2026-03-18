/*
 * XREFs of AlpcpDispatchConnectionRequest @ 0x14052A624
 * Callers:
 *     NtSecureConnectPort @ 0x140529588 (NtSecureConnectPort.c)
 *     AlpcpProcessConnectionRequest @ 0x140529D38 (AlpcpProcessConnectionRequest.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObReferenceObjectSafe @ 0x140075130 (ObReferenceObjectSafe.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     AlpcpCompleteDispatchMessage @ 0x14049B070 (AlpcpCompleteDispatchMessage.c)
 */

__int64 __fastcall AlpcpDispatchConnectionRequest(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // r13
  __int64 v5; // rdi
  int v7; // r12d
  __int64 *v8; // r14
  __int64 v9; // rbx
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // r9
  volatile signed __int64 *v14; // rbx
  __int64 v15; // rbp
  __int64 v16; // r9
  struct _KTHREAD *CurrentThread; // rcx
  signed __int32 v18; // eax
  unsigned int v20; // ebx

  v4 = *(_QWORD **)a1;
  v5 = *(_QWORD *)(a1 + 8);
  v7 = *(_DWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v8 = (__int64 *)v4[2];
  v9 = KeAbPreAcquire((ULONG_PTR)(v8 - 2), 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(v8 - 2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)v8 - 2, v9, (ULONG_PTR)(v8 - 2), v10);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  if ( *v8 && (v11 = *v8, (v12 = v11 & -(__int64)(ObReferenceObjectSafe(*v8) != 0)) != 0) )
  {
    v14 = (volatile signed __int64 *)(v12 + 352);
    v15 = KeAbPreAcquire(v12 + 352, 0LL, 0LL, v13);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 352), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)(v12 + 352), v15, v12 + 352, v16);
    if ( v15 )
      *(_BYTE *)(v15 + 26) |= 1u;
    if ( (*(_DWORD *)(v12 + 416) & 0x20) != 0 )
    {
      if ( _InterlockedCompareExchange64(v8 - 2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v8 - 2);
      KeAbPostRelease((ULONG_PTR)(v8 - 2));
      if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v12 + 352));
      KeAbPostRelease(v12 + 352);
      v20 = -1073741769;
    }
    else if ( (unsigned __int64)*(unsigned __int16 *)(v5 + 226) > *(_QWORD *)(v12 + 272) )
    {
      if ( _InterlockedCompareExchange64(v8 - 2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v8 - 2);
      KeAbPostRelease((ULONG_PTR)(v8 - 2));
      if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v12 + 352));
      KeAbPostRelease(v12 + 352);
      v20 = -1073741789;
    }
    else
    {
      if ( (v7 & 0x20000) == 0 )
      {
LABEL_16:
        *(_DWORD *)(v5 + 40) &= ~0x200u;
        *(_WORD *)(v5 + 228) |= 0x2000u;
        v18 = _InterlockedIncrement((volatile signed __int32 *)(v12 + 400));
        *(_QWORD *)(v5 + 120) = 0LL;
        *(_DWORD *)(v5 + 44) = v18;
        *(_QWORD *)(v5 + 176) = v8;
        *(_QWORD *)(v5 + 184) = v12;
        ObfReferenceObject(v4);
        *(_DWORD *)(v5 + 40) |= 0x1000u;
        *(_QWORD *)(v5 + 24) = v4;
        *(_QWORD *)(a1 + 32) = v12;
        *(_QWORD *)(a1 + 16) = v8;
        AlpcpCompleteDispatchMessage(a1);
        return 0LL;
      }
      CurrentThread = KeGetCurrentThread();
      if ( ((__int64)CurrentThread[1].Queue & 8) == 0 )
      {
        ++*(_WORD *)(v5 - 30);
        _InterlockedExchange64((volatile __int64 *)&CurrentThread[1].RelativeTimerBias, v5);
        ++*(_WORD *)(v5 - 30);
        *(_QWORD *)(v5 + 32) = CurrentThread;
        goto LABEL_16;
      }
      if ( _InterlockedCompareExchange64(v8 - 2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v8 - 2);
      KeAbPostRelease((ULONG_PTR)(v8 - 2));
      if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v12 + 352));
      KeAbPostRelease(v12 + 352);
      v20 = -1073741823;
    }
    ObfDereferenceObject((PVOID)v12);
    return v20;
  }
  else
  {
    if ( _InterlockedCompareExchange64(v8 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v8 - 2);
    KeAbPostRelease((ULONG_PTR)(v8 - 2));
    return 3221225527LL;
  }
}
