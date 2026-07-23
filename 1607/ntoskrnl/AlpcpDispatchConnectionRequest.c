/*
 * XREFs of AlpcpDispatchConnectionRequest @ 0x14049CF64
 * Callers:
 *     NtSecureConnectPort @ 0x14049C42C (NtSecureConnectPort.c)
 *     AlpcpProcessConnectionRequest @ 0x14049CAB4 (AlpcpProcessConnectionRequest.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ObReferenceObjectSafe @ 0x14008BCA0 (ObReferenceObjectSafe.c)
 *     PsGetProcessJob @ 0x1400A620C (PsGetProcessJob.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     PsGetJobEffectiveFreezeCount @ 0x140171E20 (PsGetJobEffectiveFreezeCount.c)
 *     AlpcpSetOwnerPortMessage @ 0x14044A830 (AlpcpSetOwnerPortMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x14044A860 (AlpcpCompleteDispatchMessage.c)
 */

__int64 __fastcall AlpcpDispatchConnectionRequest(__int64 a1)
{
  _QWORD *v1; // r13
  __int64 v2; // rdi
  int v4; // r12d
  __int64 *v5; // r14
  __int64 v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // rsi
  volatile signed __int64 *v9; // rbx
  __int64 v10; // rbp
  struct _KTHREAD *CurrentThread; // rcx
  signed __int32 v12; // eax
  unsigned int v14; // ebx
  __int64 v15; // rcx
  __int64 ProcessJob; // rax

  v1 = *(_QWORD **)a1;
  v2 = *(_QWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v5 = (__int64 *)v1[2];
  v6 = KeAbPreAcquire((ULONG_PTR)(v5 - 2), 0LL, 0);
  if ( _InterlockedCompareExchange64(v5 - 2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)v5 - 2, v6, (ULONG_PTR)(v5 - 2));
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  if ( *v5 )
  {
    v7 = *v5;
    v8 = v7 & -(__int64)(ObReferenceObjectSafe(*v5) != 0);
    if ( v8 )
    {
      v9 = (volatile signed __int64 *)(v8 + 352);
      v10 = KeAbPreAcquire(v8 + 352, 0LL, 0);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 352), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((unsigned __int64 *)(v8 + 352), v10, v8 + 352);
      if ( v10 )
        *(_BYTE *)(v10 + 26) |= 1u;
      if ( (*(_DWORD *)(v8 + 416) & 0x20) != 0 )
      {
        if ( _InterlockedCompareExchange64(v5 - 2, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v5 - 2);
        KeAbPostRelease((ULONG_PTR)(v5 - 2));
        if ( _InterlockedCompareExchange64(v9, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v8 + 352));
        KeAbPostRelease(v8 + 352);
        v14 = -1073741769;
        goto LABEL_43;
      }
      if ( (*(_DWORD *)(*(_QWORD *)a1 + 256LL) & 0x800000) != 0
        && (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 40LL) & 0x200) == 0 )
      {
        v15 = *(_QWORD *)(v8 + 24);
        if ( (v15 & 1) == 0 )
        {
          if ( v15 )
          {
            ProcessJob = PsGetProcessJob(v15);
            if ( ProcessJob )
            {
              if ( (unsigned int)PsGetJobEffectiveFreezeCount(ProcessJob) )
              {
                if ( _InterlockedCompareExchange64(v5 - 2, 0LL, 17LL) != 17 )
                  ExfReleasePushLockShared(v5 - 2);
                KeAbPostRelease((ULONG_PTR)(v5 - 2));
                if ( _InterlockedCompareExchange64(v9, 0LL, 17LL) != 17 )
                  ExfReleasePushLockShared((signed __int64 *)(v8 + 352));
                KeAbPostRelease(v8 + 352);
                v14 = -1073741770;
LABEL_43:
                ObfDereferenceObject((PVOID)v8);
                return v14;
              }
            }
          }
        }
      }
      if ( (unsigned __int64)*(unsigned __int16 *)(v2 + 234) > *(_QWORD *)(v8 + 272) )
      {
        if ( _InterlockedCompareExchange64(v5 - 2, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v5 - 2);
        KeAbPostRelease((ULONG_PTR)(v5 - 2));
        if ( _InterlockedCompareExchange64(v9, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v8 + 352));
        KeAbPostRelease(v8 + 352);
        v14 = -1073741789;
        goto LABEL_43;
      }
      if ( (v4 & 0x20000) != 0 )
      {
        CurrentThread = KeGetCurrentThread();
        if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0x20) != 0 )
        {
          if ( _InterlockedCompareExchange64(v5 - 2, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v5 - 2);
          KeAbPostRelease((ULONG_PTR)(v5 - 2));
          if ( _InterlockedCompareExchange64(v9, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(v8 + 352));
          KeAbPostRelease(v8 + 352);
          v14 = -1073741823;
          goto LABEL_43;
        }
        ++*(_WORD *)(v2 - 30);
        _InterlockedExchange64((volatile __int64 *)&CurrentThread[1].Teb, v2);
        ++*(_WORD *)(v2 - 30);
        *(_QWORD *)(v2 + 32) = CurrentThread;
      }
      *(_DWORD *)(v2 + 40) &= ~0x200u;
      *(_WORD *)(v2 + 236) |= 0x2000u;
      v12 = _InterlockedIncrement((volatile signed __int32 *)(v8 + 400));
      *(_QWORD *)(v2 + 120) = 0LL;
      *(_DWORD *)(v2 + 44) = v12;
      *(_QWORD *)(v2 + 184) = v5;
      *(_QWORD *)(v2 + 192) = v8;
      AlpcpSetOwnerPortMessage(v2, v1);
      *(_QWORD *)(a1 + 32) = v8;
      *(_QWORD *)(a1 + 16) = v5;
      AlpcpCompleteDispatchMessage(a1);
      return 0LL;
    }
  }
  if ( _InterlockedCompareExchange64(v5 - 2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v5 - 2);
  KeAbPostRelease((ULONG_PTR)(v5 - 2));
  return 3221225527LL;
}
