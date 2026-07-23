/*
 * XREFs of AlpcpDispatchNewMessage @ 0x14044A430
 * Callers:
 *     AlpcpSendMessage @ 0x140449750 (AlpcpSendMessage.c)
 *     AlpcpDispatchMessage @ 0x14049F988 (AlpcpDispatchMessage.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ObReferenceObjectSafe @ 0x14008BCA0 (ObReferenceObjectSafe.c)
 *     PsGetProcessJob @ 0x1400A620C (PsGetProcessJob.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     PsGetJobEffectiveFreezeCount @ 0x140171E20 (PsGetJobEffectiveFreezeCount.c)
 *     AlpcpUnlockMessage @ 0x1404080A8 (AlpcpUnlockMessage.c)
 *     AlpcpSetOwnerPortMessage @ 0x14044A830 (AlpcpSetOwnerPortMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x14044A860 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo @ 0x1404AEE6C (AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo.c)
 */

__int64 __fastcall AlpcpDispatchNewMessage(__int64 *a1)
{
  __int64 v1; // rax
  ULONG_PTR v3; // rsi
  __int64 *v4; // r14
  struct _KTHREAD *CurrentThread; // r13
  int v6; // ebx
  __int64 v7; // rdi
  int v8; // ebx
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rbp
  __int64 v12; // rbp
  __int64 v13; // rcx
  __int64 ProcessJob; // rax
  __int16 v16; // cx
  __int16 v17; // cx
  int v18; // [rsp+60h] [rbp+8h]
  __int64 v19; // [rsp+68h] [rbp+10h]

  v1 = *a1;
  v3 = a1[1];
  v18 = *((_DWORD *)a1 + 12);
  a1[4] = 0LL;
  a1[3] = 0LL;
  a1[5] = 0LL;
  v4 = *(__int64 **)(v1 + 16);
  CurrentThread = KeGetCurrentThread();
  v19 = v1;
  v6 = (*(_DWORD *)(v1 + 416) >> 1) & 3;
  v7 = KeAbPreAcquire((ULONG_PTR)(v4 - 2), 0LL, 0);
  if ( _InterlockedCompareExchange64(v4 - 2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)v4 - 2, v7, (ULONG_PTR)(v4 - 2));
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  v8 = v6 - 1;
  if ( !v8 )
  {
    v9 = *v4;
    goto LABEL_10;
  }
  if ( v8 != 1 )
  {
    v9 = v4[2];
LABEL_10:
    v10 = v9;
    goto LABEL_11;
  }
  v9 = *v4;
  v10 = v4[1];
LABEL_11:
  if ( v9 && !ObReferenceObjectSafe(v9) )
    v9 = 0LL;
  if ( v10 && !ObReferenceObjectSafe(v10) )
    v10 = 0LL;
  if ( !v9 || !v10 )
  {
    if ( _InterlockedCompareExchange64(v4 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v4 - 2);
    KeAbPostRelease((ULONG_PTR)(v4 - 2));
    if ( v9 )
      ObfDereferenceObject((PVOID)v9);
    if ( v10 )
      ObfDereferenceObject((PVOID)v10);
    goto LABEL_60;
  }
  v11 = KeAbPreAcquire(v9 + 352, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 352), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)(v9 + 352), v11, v9 + 352);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  if ( v10 != v9 )
  {
    v12 = KeAbPreAcquire(v10 + 352, 0LL, 0);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 352), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)(v10 + 352), v12, v10 + 352);
    if ( v12 )
      *(_BYTE *)(v12 + 26) |= 1u;
  }
  if ( (*(_DWORD *)(v9 + 416) & 0x20) != 0
    || (*(_DWORD *)(v10 + 416) & 0x20) != 0
    || (*(_DWORD *)(v19 + 416) & 0x20) != 0 && (*(_DWORD *)(v19 + 256) & 0x1000) == 0 )
  {
    AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo(v4, v9, v10);
LABEL_60:
    AlpcpUnlockMessage(v3);
    return 3221225527LL;
  }
  if ( (*(_DWORD *)(*a1 + 256) & 0x800000) != 0
    && (*(_DWORD *)(a1[1] + 40) & 0x200) == 0
    && (v13 = *(_QWORD *)(v9 + 24), (v13 & 1) == 0)
    && v13
    && (ProcessJob = PsGetProcessJob(v13)) != 0
    && (unsigned int)PsGetJobEffectiveFreezeCount(ProcessJob) )
  {
    AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo(v4, v9, v10);
    AlpcpUnlockMessage(v3);
    return 3221225526LL;
  }
  else if ( (*(_DWORD *)(v9 + 256) & 0x20000) != 0 )
  {
    if ( (unsigned __int64)*((unsigned __int16 *)a1 + 26) <= *(_QWORD *)(v9 + 272) )
    {
      *(_QWORD *)(v3 + 200) = 0LL;
      *(_WORD *)(v3 + 234) = *((_WORD *)a1 + 26);
      *(_WORD *)(v3 + 232) = *((_WORD *)a1 + 26) - 40;
      v16 = *((_WORD *)a1 + 27);
      *(_WORD *)(v3 + 236) = v16;
      *(_WORD *)(v3 + 238) = *((_WORD *)a1 + 28);
      *(_OWORD *)(v3 + 240) = *(_OWORD *)&CurrentThread[1].CurrentRunTime;
      if ( (v18 & 0x10000) != 0 )
      {
        *(_DWORD *)(v3 + 40) |= 0x200u;
        v17 = v16 & 0xDFFF;
      }
      else
      {
        *(_DWORD *)(v3 + 40) &= ~0x200u;
        v17 = v16 | 0x2000;
      }
      *(_WORD *)(v3 + 236) = v17;
      AlpcpSetOwnerPortMessage(v3, v19);
      *(_DWORD *)(v3 + 44) = _InterlockedIncrement((volatile signed __int32 *)(v10 + 400));
      *(_QWORD *)(v3 + 120) = *(_QWORD *)(v10 + 56);
      *(_QWORD *)(v3 + 184) = v4;
      *(_QWORD *)(v3 + 192) = *v4;
      if ( v10 != v9 )
      {
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 352), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v10 + 352));
        KeAbPostRelease(v10 + 352);
      }
      if ( (v18 & 0x20000) != 0 )
      {
        *(_DWORD *)(v3 + 40) &= ~0x100u;
        *(_QWORD *)(v3 + 32) = CurrentThread;
        *(_WORD *)(v3 - 30) += 2;
        _InterlockedExchange64((volatile __int64 *)&CurrentThread[1].Teb, v3);
      }
      a1[4] = v9;
      a1[2] = (__int64)v4;
      AlpcpCompleteDispatchMessage(a1);
      ObfDereferenceObject((PVOID)v10);
      return 0LL;
    }
    else
    {
      AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo(v4, v9, v10);
      AlpcpUnlockMessage(v3);
      return 3221225507LL;
    }
  }
  else
  {
    AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo(v4, v9, v10);
    AlpcpUnlockMessage(v3);
    return 3221227271LL;
  }
}
