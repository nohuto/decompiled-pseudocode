/*
 * XREFs of PoSetThermalPassiveCooling @ 0x1406B1EC4
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     PopPropogateCoolingChange @ 0x140236B60 (PopPropogateCoolingChange.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140565CEC (PopThermalUpdatePassiveTimeTracking.c)
 *     PoGetThermalRequestSupport @ 0x1405C61B4 (PoGetThermalRequestSupport.c)
 *     PopDiagTraceThermalRequestPassiveUpdate @ 0x1406BA048 (PopDiagTraceThermalRequestPassiveUpdate.c)
 */

__int64 __fastcall PoSetThermalPassiveCooling(__int64 a1, unsigned __int8 a2)
{
  __int64 v4; // r9
  unsigned int v5; // edi
  __int64 v6; // r14
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r9
  __int64 v12; // rsi
  __int64 v13; // rdx
  signed __int64 v14; // rax
  signed __int64 v15; // rcx
  signed __int64 v16; // rtt
  struct _KTHREAD *v17; // rdx
  __int16 v18; // ax

  if ( PoGetThermalRequestSupport(a1, 0) )
  {
    if ( a2 <= 0x64u )
    {
      v6 = *(_QWORD *)(a1 + 32);
      CurrentThread = KeGetCurrentThread();
      v8 = (signed __int64 *)(v6 + 32);
      --CurrentThread->KernelApcDisable;
      v9 = KeAbPreAcquire(v6 + 32, 0LL, 0LL, v4);
      v12 = v9;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 32), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 32), v9, v6 + 32, v11);
      if ( v12 )
        *(_BYTE *)(v12 + 26) |= 1u;
      *(_QWORD *)(v6 + 40) = KeGetCurrentThread();
      if ( *(_BYTE *)(a1 + 18) )
      {
        LOBYTE(v10) = *(_BYTE *)(a1 + 16);
        if ( (_BYTE)v10 != a2 )
        {
          PopThermalUpdatePassiveTimeTracking(a1 + 40, v10);
          *(_BYTE *)(a1 + 16) = a2;
          PopDiagTraceThermalRequestPassiveUpdate(a1);
          PopPropogateCoolingChange(v6, v13);
        }
        v5 = 0;
      }
      else
      {
        v5 = -1073741431;
      }
      if ( *(_QWORD *)(v6 + 40) )
        *(_QWORD *)(v6 + 40) = 0LL;
      _m_prefetchw(v8);
      v14 = *v8;
      v15 = *v8 - 16;
      if ( (*v8 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v15 = 0LL;
      if ( (v14 & 2) != 0 || (v16 = *v8, v16 != _InterlockedCompareExchange64(v8, v15, v14)) )
        ExfReleasePushLock((_QWORD *)(v6 + 32), v10);
      KeAbPostRelease(v6 + 32);
      v17 = KeGetCurrentThread();
      v18 = v17->KernelApcDisable + 1;
      v17->KernelApcDisable = v18;
      if ( !v18
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v17->ApcState.ApcListHead[0].Flink != &v17->152
        && !v17->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v5;
}
