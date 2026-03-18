/*
 * XREFs of AlpcpDispatchNewMessage @ 0x14042A040
 * Callers:
 *     AlpcpSendMessage @ 0x140429460 (AlpcpSendMessage.c)
 *     AlpcpDispatchMessage @ 0x14047E334 (AlpcpDispatchMessage.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ObReferenceObjectSafe @ 0x1400C8410 (ObReferenceObjectSafe.c)
 *     PsGetProcessJob @ 0x1400E836C (PsGetProcessJob.c)
 *     PsGetJobEffectiveFreezeCount @ 0x140166FC8 (PsGetJobEffectiveFreezeCount.c)
 *     AlpcpCompleteDispatchMessage @ 0x1404069A0 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpUnlockMessage @ 0x140423364 (AlpcpUnlockMessage.c)
 *     AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo @ 0x1404826FC (AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo.c)
 */

__int64 __fastcall AlpcpDispatchNewMessage(__int64 a1)
{
  __int64 v1; // r13
  ULONG_PTR v3; // rbx
  __int64 *v4; // r15
  int v5; // esi
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rbp
  __int64 v10; // rbp
  __int16 v11; // cx
  __int16 v12; // cx
  int v13; // edx
  __int64 v15; // rcx
  __int64 ProcessJob; // rax
  int v17; // [rsp+60h] [rbp+8h]
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp+10h]

  v1 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 8);
  v17 = *(_DWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v4 = *(__int64 **)(v1 + 16);
  CurrentThread = KeGetCurrentThread();
  v5 = (*(_DWORD *)(v1 + 416) >> 1) & 3;
  v6 = KeAbPreAcquire((ULONG_PTR)(v4 - 2), 0LL, 0LL);
  if ( _InterlockedCompareExchange64(v4 - 2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)v4 - 2, v6, (ULONG_PTR)(v4 - 2));
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  if ( v5 == 2 )
  {
    v7 = *v4;
    v8 = v4[1];
  }
  else if ( v5 == 1 )
  {
    v7 = *v4;
    v8 = *v4;
  }
  else
  {
    v7 = v4[2];
    v8 = v7;
  }
  if ( v7 && !ObReferenceObjectSafe(v7) )
    v7 = 0LL;
  if ( v8 && !ObReferenceObjectSafe(v8) )
    v8 = 0LL;
  if ( v7 && v8 )
  {
    v9 = KeAbPreAcquire(v7 + 352, 0LL, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 352), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)(v7 + 352), v9, v7 + 352);
    if ( v9 )
      *(_BYTE *)(v9 + 26) |= 1u;
    if ( v8 != v7 )
    {
      v10 = KeAbPreAcquire(v8 + 352, 0LL, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 352), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((unsigned __int64 *)(v8 + 352), v10, v8 + 352);
      if ( v10 )
        *(_BYTE *)(v10 + 26) |= 1u;
    }
    if ( (*(_DWORD *)(v7 + 416) & 0x20) != 0
      || (*(_DWORD *)(v8 + 416) & 0x20) != 0
      || (*(_DWORD *)(v1 + 416) & 0x20) != 0 && (*(_DWORD *)(v1 + 256) & 0x1000) == 0 )
    {
      AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo(v4, v7, v8);
      AlpcpUnlockMessage(v3);
      return 3221225527LL;
    }
    else if ( (*(_DWORD *)(*(_QWORD *)a1 + 256LL) & 0x800000) != 0
           && (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 40LL) & 0x200) == 0
           && (v15 = *(_QWORD *)(v7 + 24), (v15 & 1) == 0)
           && v15
           && (ProcessJob = PsGetProcessJob(v15)) != 0
           && (unsigned int)PsGetJobEffectiveFreezeCount(ProcessJob) )
    {
      AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo(v4, v7, v8);
      AlpcpUnlockMessage(v3);
      return 3221225526LL;
    }
    else if ( (*(_DWORD *)(v7 + 256) & 0x20000) != 0 )
    {
      if ( (unsigned __int64)*(unsigned __int16 *)(a1 + 52) > *(_QWORD *)(v7 + 272) )
      {
        AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo(v4, v7, v8);
        AlpcpUnlockMessage(v3);
        return 3221225507LL;
      }
      else
      {
        *(_QWORD *)(v3 + 192) = 0LL;
        *(_WORD *)(v3 + 226) = *(_WORD *)(a1 + 52);
        *(_WORD *)(v3 + 224) = *(_WORD *)(a1 + 52) - 40;
        v11 = *(_WORD *)(a1 + 54);
        *(_WORD *)(v3 + 228) = v11;
        *(_WORD *)(v3 + 230) = *(_WORD *)(a1 + 56);
        *(_OWORD *)(v3 + 232) = *(_OWORD *)&CurrentThread[1].CurrentRunTime;
        if ( (v17 & 0x10000) != 0 )
        {
          *(_DWORD *)(v3 + 40) |= 0x200u;
          v12 = v11 & 0xDFFF;
        }
        else
        {
          *(_DWORD *)(v3 + 40) &= ~0x200u;
          v12 = v11 | 0x2000;
        }
        v13 = *(_DWORD *)(v3 + 40);
        *(_WORD *)(v3 + 228) = v12;
        if ( (_bittest((const signed __int32 *)(v1 + 416), 0xDu) & ((v13 & 0x200) != 0)) != 0 )
        {
          *(_DWORD *)(v3 + 40) = v13 & 0xFFFFEFFF;
        }
        else
        {
          ObfReferenceObject((PVOID)v1);
          *(_DWORD *)(v3 + 40) |= 0x1000u;
        }
        *(_QWORD *)(v3 + 24) = v1;
        *(_DWORD *)(v3 + 44) = _InterlockedIncrement((volatile signed __int32 *)(v8 + 400));
        *(_QWORD *)(v3 + 120) = *(_QWORD *)(v8 + 56);
        *(_QWORD *)(v3 + 176) = v4;
        *(_QWORD *)(v3 + 184) = *v4;
        if ( v8 != v7 )
        {
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 352), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(v8 + 352));
          KeAbPostRelease(v8 + 352);
        }
        if ( (v17 & 0x20000) != 0 )
        {
          *(_DWORD *)(v3 + 40) &= ~0x100u;
          *(_QWORD *)(v3 + 32) = CurrentThread;
          *(_WORD *)(v3 - 30) += 2;
          _InterlockedExchange64((volatile __int64 *)&CurrentThread[1].RelativeTimerBias, v3);
        }
        *(_QWORD *)(a1 + 32) = v7;
        *(_QWORD *)(a1 + 16) = v4;
        AlpcpCompleteDispatchMessage(a1);
        ObfDereferenceObject((PVOID)v8);
        return 0LL;
      }
    }
    else
    {
      AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo(v4, v7, v8);
      AlpcpUnlockMessage(v3);
      return 3221227271LL;
    }
  }
  else
  {
    if ( _InterlockedCompareExchange64(v4 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v4 - 2);
    KeAbPostRelease((ULONG_PTR)(v4 - 2));
    if ( v7 )
      ObfDereferenceObject((PVOID)v7);
    if ( v8 )
      ObfDereferenceObject((PVOID)v8);
    AlpcpUnlockMessage(v3);
    return 3221225527LL;
  }
}
