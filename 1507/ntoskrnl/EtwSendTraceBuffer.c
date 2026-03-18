/*
 * XREFs of EtwSendTraceBuffer @ 0x14025C988
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140006E40 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x14001A6C0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     KeAreInterruptsEnabled @ 0x140048A30 (KeAreInterruptsEnabled.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KiInsertQueueDpc @ 0x1400A48A0 (KiInsertQueueDpc.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 */

__int64 __fastcall EtwSendTraceBuffer(unsigned __int16 a1, signed __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdi
  unsigned int v9; // ebp
  char v11; // bl
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v13; // rcx
  __int16 v14; // ax
  __int64 v15; // r15
  __int64 v16; // rdi
  int v17; // ecx
  __int64 v18; // rcx
  bool v19; // zf
  signed __int64 v20; // rcx
  struct _KTHREAD *v21; // rdx
  __int16 v22; // ax

  v5 = a1;
  v9 = 0;
  if ( a1 >= 0x40u )
    return 3221225480LL;
  v11 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( !ExAcquireRundownProtectionCacheAwareEx((PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[a1], 1u) )
    {
LABEL_5:
      v13 = KeGetCurrentThread();
      v14 = v13->KernelApcDisable + 1;
      v13->KernelApcDisable = v14;
      if ( !v14
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v13->ApcState.ApcListHead[0].Flink != &v13->152
        && !v13->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      return 3221226134LL;
    }
    v11 = 1;
  }
  _mm_lfence();
  v15 = v5;
  v16 = WmipLoggerContext[v5];
  if ( (v16 & 1) != 0 )
  {
    if ( v11 )
    {
      ExReleaseRundownProtectionCacheAwareEx((PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[v15], 1u);
      goto LABEL_5;
    }
    return 3221226134LL;
  }
  if ( !v16 )
    return 3221226134LL;
  if ( *(_DWORD *)(v16 + 336) )
  {
    if ( (*(_DWORD *)(v16 + 12) & 0x40000) != 0 )
    {
      if ( a3 )
        _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 256), a3);
      v17 = *(_DWORD *)(a2 + 48);
      *(_DWORD *)(a2 + 4) = v17;
      v18 = (unsigned int)(*(_DWORD *)a2 + v17);
      v19 = (*(_BYTE *)(a2 + 52) & 0x20) == 0;
      *(_DWORD *)(a2 + 8) = v18;
      *(_DWORD *)(a2 + 44) = 3;
      *(_WORD *)(a2 + 54) = 5;
      if ( v19 )
        *(_WORD *)(a2 + 40) = *(unsigned __int8 *)(a2 + 40);
      *(_QWORD *)(a2 + 64) = a5;
      *(_QWORD *)(a2 + 56) = a4;
      *(_QWORD *)(a2 + 16) = (*(__int64 (__fastcall **)(__int64, signed __int64, unsigned __int64))(v16 + 40))(
                               v18,
                               a2,
                               0x140000000uLL);
      _m_prefetchw((const void *)(v16 + 144));
      do
      {
        v20 = *(_QWORD *)(v16 + 144);
        *(_QWORD *)(a2 + 32) = v20;
      }
      while ( v20 != _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 144), a2, v20) );
      if ( !v20 )
      {
        if ( (unsigned __int8)KeAreInterruptsEnabled() && KeGetCurrentIrql() <= 2u )
        {
          KeSetEvent((PRKEVENT)(v16 + 496), 0, 0);
        }
        else if ( !_interlockedbittestandset((volatile signed __int32 *)(v16 + 836), 8u) )
        {
          KiInsertQueueDpc(v16 + 584, 0LL, 0LL, 0LL, 0);
        }
      }
    }
    else
    {
      v9 = -1073741816;
    }
  }
  else
  {
    v9 = -1073741054;
  }
  if ( v11 )
  {
    ExReleaseRundownProtectionCacheAwareEx((PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[v15], 1u);
    v21 = KeGetCurrentThread();
    v22 = v21->KernelApcDisable + 1;
    v21->KernelApcDisable = v22;
    if ( !v22
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v21->ApcState.ApcListHead[0].Flink != &v21->152
      && !v21->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return v9;
}
