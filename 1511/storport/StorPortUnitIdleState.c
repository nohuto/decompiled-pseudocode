/*
 * XREFs of StorPortUnitIdleState @ 0x1C002E960
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C000792C (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 * Callees:
 *     RaidAdapterPoFxActivateComponent @ 0x1C00077E0 (RaidAdapterPoFxActivateComponent.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C00078B0 (RaidAdapterPoFxIdleComponent.c)
 *     StorUpdateCrashDumpPowerReady @ 0x1C0008808 (StorUpdateCrashDumpPowerReady.c)
 *     RaidIsUnitControlSupported @ 0x1C00102BC (RaidIsUnitControlSupported.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0011408 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidGetStorPoFxComponent @ 0x1C0029344 (RaidGetStorPoFxComponent.c)
 *     RaidUnitSendPoFxIdleStateToMiniport @ 0x1C002DB6C (RaidUnitSendPoFxIdleStateToMiniport.c)
 *     Template_pqcccqq @ 0x1C002F57C (Template_pqcccqq.c)
 */

void __fastcall StorPortUnitIdleState(__int64 a1, unsigned int a2, unsigned int a3)
{
  int v6; // r8d
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // ebp
  char *StorPoFxComponent; // rax
  __int64 v11; // rcx
  char v12; // al
  __int64 v13; // rcx
  int v14; // r8d
  void *v15; // rdx
  __int64 v16; // rcx
  char v17; // al
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF

  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
      Template_pqcccqq(
        *(_QWORD *)(a1 + 24),
        (unsigned int)&EventUnitIdleStateStart,
        v6,
        **(_QWORD **)(a1 + 1456),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_BYTE *)(a1 + 88),
        *(_BYTE *)(a1 + 89),
        *(_BYTE *)(a1 + 90),
        a2,
        a3);
    if ( a3 )
    {
      *(_QWORD *)(a1 + 1712) = MEMORY[0xFFFFF78000000008];
      v8 = *(_QWORD *)(a1 + 1456);
      if ( *(char *)(*(_QWORD *)(a1 + 24) + 108LL) >= 0 )
        *(_DWORD *)(v8 + 32) &= ~0x40u;
      else
        *(_DWORD *)(v8 + 32) |= 0x40u;
    }
    else
    {
      ++*(_DWORD *)(a1 + 1764);
      if ( *(_QWORD *)(a1 + 1712) )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1456) + 32LL) & 0x40) != 0 || *(char *)(*(_QWORD *)(a1 + 24) + 108LL) < 0 )
        {
          v7 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 1712);
          *(_QWORD *)(a1 + 1720) += v7 / 0x2710;
          if ( v7 / 0x2710 >= 0x2710 )
            ++*(_DWORD *)(a1 + 1772);
        }
        *(_QWORD *)(a1 + 1712) = 0LL;
      }
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 1456) + 16LL) = a3;
    if ( *(_DWORD *)(a1 + 656) && a3 )
      StorUpdateCrashDumpPowerReady(*(_QWORD *)(a1 + 24));
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1456) + 32LL) & 4) != 0 && RaidIsUnitControlSupported(a1, 7) )
    {
      v9 = 1;
      StorPoFxComponent = RaidGetStorPoFxComponent(*(int **)(*(_QWORD *)(a1 + 1456) + 8LL), a2);
      if ( StorPoFxComponent && *(_DWORD *)StorPoFxComponent == 2 )
        v9 = *((_DWORD *)StorPoFxComponent + 8);
      if ( a3 <= v9 )
      {
        v11 = *(_QWORD *)(a1 + 24);
        if ( *(_QWORD *)(v11 + 5088) )
        {
          v12 = *(_BYTE *)(a1 + 145);
          if ( (v12 & 8) == 0 )
          {
            *(_BYTE *)(a1 + 145) = v12 | 8;
            if ( !(unsigned __int8)RaidAdapterPoFxActivateComponent(v11, 0LL, 0LL) )
            {
              KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 24) + 80LL), &LockHandle);
              v13 = *(_QWORD *)(a1 + 24);
              if ( *(int *)(v13 + 268) > 1 )
              {
                *(_BYTE *)(a1 + 1624) = 1;
                *(_DWORD *)(a1 + 1628) = a3;
                ExpInterlockedPushEntrySList((PSLIST_HEADER)(v13 + 5072), (PSLIST_ENTRY)(a1 + 1648));
                KeReleaseInStackQueuedSpinLock(&LockHandle);
                if ( !StorEtwLoggingEnabled || ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) == 0 )
                  goto LABEL_43;
                v15 = &EventUnitIdleStateQueued;
LABEL_42:
                Template_pqcccqq(
                  *(_QWORD *)(a1 + 24),
                  (_DWORD)v15,
                  v14,
                  **(_QWORD **)(a1 + 1456),
                  *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
                  *(_BYTE *)(a1 + 88),
                  *(_BYTE *)(a1 + 89),
                  *(_BYTE *)(a1 + 90),
                  a2,
                  a3);
LABEL_43:
                ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1448));
                return;
              }
              KeReleaseInStackQueuedSpinLock(&LockHandle);
            }
          }
        }
      }
      RaidUnitSendPoFxIdleStateToMiniport(a1);
      if ( a3 > v9 )
      {
        v16 = *(_QWORD *)(a1 + 24);
        if ( *(_QWORD *)(v16 + 5088) )
        {
          v17 = *(_BYTE *)(a1 + 145);
          if ( (v17 & 8) != 0 )
          {
            *(_BYTE *)(a1 + 145) = v17 & 0xF7;
            RaidAdapterPoFxIdleComponent(v16, 0LL, 0LL);
          }
        }
      }
    }
    if ( *(_DWORD *)(a1 + 656) && !a3 )
      StorUpdateCrashDumpPowerReady(*(_QWORD *)(a1 + 24));
    PoFxCompleteIdleState(**(_QWORD **)(a1 + 1456), a2);
    if ( !StorEtwLoggingEnabled || ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) == 0 )
      goto LABEL_43;
    v15 = &EventUnitIdleStateStop;
    goto LABEL_42;
  }
}
