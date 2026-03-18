/*
 * XREFs of PoSetThermalActiveCooling @ 0x1406B1D70
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     PopPropogateCoolingChange @ 0x140236B60 (PopPropogateCoolingChange.c)
 *     PoGetThermalRequestSupport @ 0x1405C61B4 (PoGetThermalRequestSupport.c)
 *     PopDiagTraceThermalRequestActiveUpdate @ 0x1406B9F8C (PopDiagTraceThermalRequestActiveUpdate.c)
 */

__int64 __fastcall PoSetThermalActiveCooling(__int64 a1, char a2)
{
  __int64 v4; // r9
  unsigned int v5; // edi
  __int64 v6; // r14
  struct _KTHREAD *CurrentThread; // rax
  char v8; // bp
  signed __int64 *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // rsi
  __int64 v14; // rdx
  signed __int64 v15; // rax
  signed __int64 v16; // rcx
  signed __int64 v17; // rtt
  struct _KTHREAD *v18; // rdx
  __int16 v19; // ax

  if ( PoGetThermalRequestSupport(a1, 1) )
  {
    v6 = *(_QWORD *)(a1 + 32);
    CurrentThread = KeGetCurrentThread();
    v8 = a2 != 0;
    v9 = (signed __int64 *)(v6 + 32);
    --CurrentThread->KernelApcDisable;
    v10 = KeAbPreAcquire(v6 + 32, 0LL, 0LL, v4);
    v13 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 32), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 32), v10, v6 + 32, v12);
    if ( v13 )
      *(_BYTE *)(v13 + 26) |= 1u;
    *(_QWORD *)(v6 + 40) = KeGetCurrentThread();
    if ( *(_BYTE *)(a1 + 18) )
    {
      if ( *(_BYTE *)(a1 + 17) != v8 )
      {
        *(_BYTE *)(a1 + 17) = v8;
        PopDiagTraceThermalRequestActiveUpdate(a1);
        PopPropogateCoolingChange(v6, v14);
      }
      v5 = 0;
    }
    else
    {
      v5 = -1073741431;
    }
    if ( *(_QWORD *)(v6 + 40) )
      *(_QWORD *)(v6 + 40) = 0LL;
    _m_prefetchw(v9);
    v15 = *v9;
    v16 = *v9 - 16;
    if ( (*v9 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v16 = 0LL;
    if ( (v15 & 2) != 0 || (v17 = *v9, v17 != _InterlockedCompareExchange64(v9, v16, v15)) )
      ExfReleasePushLock((_QWORD *)(v6 + 32), v11);
    KeAbPostRelease(v6 + 32);
    v18 = KeGetCurrentThread();
    v19 = v18->KernelApcDisable + 1;
    v18->KernelApcDisable = v19;
    if ( !v19
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v18->ApcState.ApcListHead[0].Flink != &v18->152
      && !v18->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v5;
}
