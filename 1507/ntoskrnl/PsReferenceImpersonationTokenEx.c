/*
 * XREFs of PsReferenceImpersonationTokenEx @ 0x140486000
 * Callers:
 *     SepReferenceTokenByHandle @ 0x140045160 (SepReferenceTokenByHandle.c)
 *     SeCaptureSubjectContext @ 0x140485EB0 (SeCaptureSubjectContext.c)
 *     ObInsertObjectEx @ 0x140487BC0 (ObInsertObjectEx.c)
 *     ObpLookupObjectName @ 0x140491C10 (ObpLookupObjectName.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 */

void *__fastcall PsReferenceImpersonationTokenEx(__int64 a1, char a2, _BYTE *a3, bool *a4, int *a5, _BYTE *a6)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v12; // r13
  unsigned __int64 *v13; // r12
  __int64 v14; // rbp
  __int64 v15; // r9
  void *v16; // rdi
  __int16 v17; // ax

  if ( (*(_DWORD *)(a1 + 1724) & 8) == 0 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v12 = *(_QWORD *)(a1 + 544);
  --CurrentThread->KernelApcDisable;
  v13 = (unsigned __int64 *)(a1 + 1704);
  v14 = KeAbPreAcquire(a1 + 1704, 0LL, 0LL, (__int64)a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v13, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v13, v14, (ULONG_PTR)v13, v15);
  if ( v14 )
    *(_BYTE *)(v14 + 26) |= 1u;
  if ( (*(_DWORD *)(a1 + 1724) & 8) != 0 )
  {
    if ( (a2 & 1) != 0 && (v16 = *(void **)(a1 + 1888)) != 0LL )
    {
      *a3 = 0;
    }
    else
    {
      v16 = (void *)(*(_QWORD *)(a1 + 1624) & 0xFFFFFFFFFFFFFFF8uLL);
      *a3 = BYTE1(*(_DWORD *)(a1 + 1724)) & 1;
    }
    ObfReferenceObject(v16);
    *a5 = *(_DWORD *)(a1 + 1624) & 3;
    *a4 = (*(_BYTE *)(a1 + 1624) & 4) != 0;
    if ( a6 )
      *a6 = *(_BYTE *)(v12 + 1714);
  }
  else
  {
    v16 = 0LL;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v13, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v13);
  KeAbPostRelease((ULONG_PTR)v13);
  v17 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v17;
  if ( !v17
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v16;
}
