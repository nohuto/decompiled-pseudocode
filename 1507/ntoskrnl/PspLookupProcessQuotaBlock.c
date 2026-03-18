/*
 * XREFs of PspLookupProcessQuotaBlock @ 0x140543C70
 * Callers:
 *     PspAssignProcessQuotaBlock @ 0x140543A18 (PspAssignProcessQuotaBlock.c)
 * Callees:
 *     RtlEqualSid @ 0x140014CF0 (RtlEqualSid.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     PspHashKeyValue @ 0x140543E10 (PspHashKeyValue.c)
 *     PspSafeReferenceQuotaBlock @ 0x140543F98 (PspSafeReferenceQuotaBlock.c)
 */

__int64 __fastcall PspLookupProcessQuotaBlock(void *a1, __int64 a2, int a3, __int64 a4)
{
  int v5; // r12d
  unsigned int v7; // eax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v9; // rbp
  unsigned __int64 *v10; // rdi
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // r14
  unsigned __int64 *i; // r14
  __int16 v16; // ax
  bool v17; // zf
  __int16 v19; // ax
  _QWORD *v21; // rbp
  __int64 v22; // rcx
  _QWORD *v23; // rax
  unsigned __int64 **v24; // rdx
  __int64 v25; // rax

  v5 = a3;
  v7 = PspHashKeyValue();
  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  v10 = (unsigned __int64 *)(PspQuotaBlockTable + 24LL * v7);
  --CurrentThread->KernelApcDisable;
  v12 = KeAbPreAcquire((ULONG_PTR)v10, 0LL, 0LL, v11);
  v14 = v12;
  if ( a4 )
  {
    if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
      ExfAcquirePushLockExclusiveEx(v10, v12, (ULONG_PTR)v10, v13);
  }
  else if ( _InterlockedCompareExchange64((volatile signed __int64 *)v10, 17LL, 0LL) )
  {
    ExfAcquirePushLockSharedEx(v10, v12, (ULONG_PTR)v10, v13);
  }
  if ( v14 )
    *(_BYTE *)(v14 + 26) |= 1u;
  if ( a1 )
  {
    for ( i = (unsigned __int64 *)v10[1]; i != v10 + 1; i = (unsigned __int64 *)*i )
    {
      if ( RtlEqualSid(a1, i + 7) )
      {
        v5 = a3;
        v9 = (__int64)(i - 65);
        goto LABEL_29;
      }
    }
  }
  else if ( v5 )
  {
    v9 = PspDefaultQuotaBlock;
LABEL_29:
    if ( v9 )
    {
      if ( (unsigned int)PspSafeReferenceQuotaBlock(v9) )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v9 + 516));
      }
      else
      {
        if ( a4 && !v5 )
        {
          v21 = (_QWORD *)(v9 + 520);
          v22 = *v21;
          v23 = (_QWORD *)v21[1];
          if ( *(_QWORD **)(*v21 + 8LL) != v21 || (_QWORD *)*v23 != v21 )
            __fastfail(3u);
          *v23 = v22;
          *(_QWORD *)(v22 + 8) = v23;
          *v21 = 0LL;
        }
        v9 = 0LL;
      }
    }
  }
  if ( a4 )
  {
    if ( !v9 )
    {
      if ( a3 )
      {
        PspDefaultQuotaBlock = a4;
        *(_QWORD *)(a4 + 520) = 1LL;
      }
      else
      {
        v24 = (unsigned __int64 **)v10[2];
        v25 = a4 + 520;
        *(_QWORD *)(a4 + 520) = v10 + 1;
        *(_QWORD *)(a4 + 528) = v24;
        if ( *v24 != v10 + 1 )
          __fastfail(3u);
        *v24 = (unsigned __int64 *)v25;
        v10[2] = v25;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v10);
    KeAbPostRelease((ULONG_PTR)v10);
    v19 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v19;
    if ( !v19 )
    {
      v17 = CurrentThread->ApcState.ApcListHead[0].Flink == CurrentThread->ApcState.ApcListHead;
      goto LABEL_14;
    }
  }
  else
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v10, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v10);
    KeAbPostRelease((ULONG_PTR)v10);
    v16 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v16;
    if ( !v16 )
    {
      v17 = CurrentThread->ApcState.ApcListHead[0].Flink == CurrentThread->ApcState.ApcListHead;
LABEL_14:
      if ( !v17 && !CurrentThread->SpecialApcDisable )
        KiCheckForKernelApcDelivery();
    }
  }
  return v9;
}
