/*
 * XREFs of PspRemoveQuotaBlock @ 0x1406BEF4C
 * Callers:
 *     ObpFreeObject @ 0x14048AE10 (ObpFreeObject.c)
 *     PspDereferenceQuotaBlock @ 0x1404D0058 (PspDereferenceQuotaBlock.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     PspHashKeyValue @ 0x140543E10 (PspHashKeyValue.c)
 */

void __fastcall PspRemoveQuotaBlock(__int64 a1)
{
  _QWORD *v1; // rsi
  int v3; // r12d
  __int64 v4; // rcx
  struct _KTHREAD *CurrentThread; // r14
  __int64 v6; // rcx
  ULONG_PTR v7; // rax
  unsigned __int64 *v8; // rbp
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // r13
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int16 v15; // ax

  v1 = (_QWORD *)(a1 + 520);
  if ( *(_QWORD *)(a1 + 520) == 1LL )
  {
    v3 = 1;
    v4 = 0LL;
  }
  else
  {
    v3 = 0;
    v4 = a1 + 576;
  }
  CurrentThread = KeGetCurrentThread();
  v6 = (unsigned int)PspHashKeyValue(v4, 0LL);
  v7 = PspQuotaBlockTable;
  --CurrentThread->KernelApcDisable;
  v8 = (unsigned __int64 *)(v7 + 24 * v6);
  v10 = KeAbPreAcquire((ULONG_PTR)v8, 0LL, 0LL, v9);
  v12 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
    ExfAcquirePushLockExclusiveEx(v8, v10, (ULONG_PTR)v8, v11);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  if ( v3 )
  {
    if ( a1 == PspDefaultQuotaBlock )
      PspDefaultQuotaBlock = 0LL;
  }
  else if ( *v1 )
  {
    v13 = *v1;
    v14 = (_QWORD *)v1[1];
    if ( *(_QWORD **)(*v1 + 8LL) != v1 || (_QWORD *)*v14 != v1 )
      __fastfail(3u);
    *v14 = v13;
    *(_QWORD *)(v13 + 8) = v14;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v8);
  KeAbPostRelease((ULONG_PTR)v8);
  v15 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v15;
  if ( !v15
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
