/*
 * XREFs of PfpRpShutdown @ 0x1406AFA78
 * Callers:
 *     PfpParametersPropagate @ 0x1406B0108 (PfpParametersPropagate.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfWaitForRundownProtectionRelease @ 0x1400D4A70 (ExfWaitForRundownProtectionRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpRpShutdown(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  volatile signed __int64 *v5; // rcx
  unsigned __int64 v6; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rdi
  _QWORD **v11; // rcx
  _QWORD *v12; // rdi
  _BYTE *i; // rdi
  void *v14; // r10
  __int64 v15; // rdx
  _BYTE *j; // rdi
  void *v17; // rcx
  struct _KTHREAD *v18; // rcx
  __int16 v19; // ax
  __int64 v21; // [rsp+80h] [rbp+8h]

  *(_DWORD *)(a1 + 152) &= ~1u;
  v5 = (volatile signed __int64 *)(a1 + 136);
  v6 = _InterlockedCompareExchange64(v5, 1LL, 0LL);
  if ( v6 >= 2 )
    ExfWaitForRundownProtectionRelease(v5, v6);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = KeAbPreAcquire(a1 + 48, 0LL, 0LL, a4);
  v10 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 48), v8, a1 + 48, v9);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  v11 = *(_QWORD ***)(a1 + 8);
  if ( !v11 || (v12 = *v11, ((unsigned __int8)*v11 & 1) != 0) )
  {
    for ( i = v11 + 1; ; i += 8 )
    {
      if ( (unsigned __int64)i >= *(_QWORD *)(a1 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5) )
      {
        v12 = 0LL;
        goto LABEL_24;
      }
      if ( (*i & 1) == 0 )
        break;
    }
    v12 = *(_QWORD **)i;
  }
LABEL_24:
  while ( v12 )
  {
    v14 = v12;
    v21 = v12[1] & (-1LL << (*(_DWORD *)(a1 + 4) & 0x1F));
    v15 = *(_QWORD *)(a1 + 8)
        + 8LL
        * ((37
          * (BYTE6(v21)
           + 37
           * (BYTE5(v21)
            + 37
            * (BYTE4(v21)
             + 37 * (BYTE3(v21) + 37 * (BYTE2(v21) + 37 * (BYTE1(v21) + 37 * ((unsigned __int8)v21 + 11623883)))))))
          + HIBYTE(v21)) & (unsigned int)((*(_DWORD *)(a1 + 4) >> 5) - 1));
    if ( (*v12 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v15 = *(_QWORD *)(a1 + 8)
          + 8LL
          * ((37
            * (BYTE6(v21)
             + 37
             * (BYTE5(v21)
              + 37
              * (BYTE4(v21)
               + 37 * (BYTE3(v21) + 37 * (BYTE2(v21) + 37 * (BYTE1(v21) + 37 * ((unsigned __int8)v21 + 11623883)))))))
            + HIBYTE(v21)) & (unsigned int)((*(_DWORD *)(a1 + 4) >> 5) - 1));
    v12 = (_QWORD *)*v12;
    if ( ((unsigned __int8)v12 & 1) != 0 )
    {
      for ( j = (_BYTE *)(v15 + 8); ; j += 8 )
      {
        if ( (unsigned __int64)j >= *(_QWORD *)(a1 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5) )
        {
          v12 = 0LL;
          goto LABEL_23;
        }
        if ( (*j & 1) == 0 )
          break;
      }
      v12 = *(_QWORD **)j;
    }
LABEL_23:
    ExFreePoolWithTag(v14, 0);
  }
  v17 = *(void **)(a1 + 8);
  if ( v17 )
    ExFreePoolWithTag(v17, 0);
  *(_QWORD *)(a1 + 16) = a1 + 24;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 48), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 48));
  KeAbPostRelease(a1 + 48);
  v18 = KeGetCurrentThread();
  v19 = v18->KernelApcDisable + 1;
  v18->KernelApcDisable = v19;
  if ( !v19
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v18->ApcState.ApcListHead[0].Flink != &v18->152
    && !v18->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return PfpRpControlRequestReset(a1);
}
