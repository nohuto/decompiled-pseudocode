/*
 * XREFs of AlpcpDispatchConnectionRequest @ 0x14047FE08
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x1404807A4 (AlpcpProcessConnectionRequest.c)
 *     NtSecureConnectPort @ 0x140481DB0 (NtSecureConnectPort.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ObReferenceObjectSafe @ 0x1400C8410 (ObReferenceObjectSafe.c)
 *     PsGetProcessJob @ 0x1400E836C (PsGetProcessJob.c)
 *     PsGetJobEffectiveFreezeCount @ 0x140166FC8 (PsGetJobEffectiveFreezeCount.c)
 *     AlpcpCompleteDispatchMessage @ 0x1404069A0 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpSetOwnerPortMessage @ 0x140480024 (AlpcpSetOwnerPortMessage.c)
 *     PsDereferencePrimaryToken @ 0x1404B252C (PsDereferencePrimaryToken.c)
 *     AlpcpUnlockCommunicationInfoShared @ 0x1406201F8 (AlpcpUnlockCommunicationInfoShared.c)
 *     AlpcpUnlockPortShared @ 0x140620224 (AlpcpUnlockPortShared.c)
 */

__int64 __fastcall AlpcpDispatchConnectionRequest(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // rbx
  int v4; // r12d
  __int64 *v5; // r15
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // r8
  unsigned int v11; // ebx
  __int64 v12; // rcx
  __int64 ProcessJob; // rax
  struct _KTHREAD *CurrentThread; // rdx
  signed __int32 v16; // eax

  v1 = *(_QWORD *)a1;
  v2 = *(_QWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v5 = *(__int64 **)(v1 + 16);
  v6 = KeAbPreAcquire((ULONG_PTR)(v5 - 2), 0LL, 0LL);
  if ( _InterlockedCompareExchange64(v5 - 2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)v5 - 2, v6, (ULONG_PTR)(v5 - 2));
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  if ( *v5 && (v7 = *v5, (v8 = v7 & -(__int64)(ObReferenceObjectSafe(*v5) != 0)) != 0) )
  {
    v9 = KeAbPreAcquire(v8 + 352, 0LL, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 352), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)(v8 + 352), v9, v8 + 352);
    if ( v9 )
      *(_BYTE *)(v9 + 26) |= 1u;
    if ( (*(_DWORD *)(v8 + 416) & 0x20) != 0 )
    {
      v11 = -1073741769;
LABEL_25:
      AlpcpUnlockCommunicationInfoShared(v5);
      AlpcpUnlockPortShared(v8);
      PsDereferencePrimaryToken((PACCESS_TOKEN)v8);
      return v11;
    }
    if ( (*(_DWORD *)(*(_QWORD *)a1 + 256LL) & 0x800000) != 0 && (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 40LL) & 0x200) == 0 )
    {
      v12 = *(_QWORD *)(v8 + 24);
      if ( (v12 & 1) == 0 )
      {
        if ( v12 )
        {
          ProcessJob = PsGetProcessJob(v12);
          if ( ProcessJob )
          {
            if ( (unsigned int)PsGetJobEffectiveFreezeCount(ProcessJob) )
            {
              v11 = -1073741770;
              goto LABEL_25;
            }
          }
        }
      }
    }
    if ( (unsigned __int64)*(unsigned __int16 *)(v2 + 226) > *(_QWORD *)(v8 + 272) )
    {
      v11 = -1073741789;
      goto LABEL_25;
    }
    if ( (v4 & 0x20000) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( ((__int64)CurrentThread[1].Queue & 0x10) != 0 )
      {
        v11 = -1073741823;
        goto LABEL_25;
      }
      ++*(_WORD *)(v2 - 30);
      _InterlockedExchange64((volatile __int64 *)&CurrentThread[1].RelativeTimerBias, v2);
      ++*(_WORD *)(v2 - 30);
      *(_QWORD *)(v2 + 32) = CurrentThread;
    }
    *(_DWORD *)(v2 + 40) &= ~0x200u;
    *(_WORD *)(v2 + 228) |= 0x2000u;
    v16 = _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 400), 1u);
    *(_QWORD *)(v2 + 120) = 0LL;
    LOBYTE(v10) = 1;
    *(_DWORD *)(v2 + 44) = v16 + 1;
    *(_QWORD *)(v2 + 176) = v5;
    *(_QWORD *)(v2 + 184) = v8;
    AlpcpSetOwnerPortMessage(v2, v1, v10);
    *(_QWORD *)(a1 + 32) = v8;
    *(_QWORD *)(a1 + 16) = v5;
    AlpcpCompleteDispatchMessage(a1);
    return 0LL;
  }
  else
  {
    AlpcpUnlockCommunicationInfoShared(v5);
    return 3221225527LL;
  }
}
