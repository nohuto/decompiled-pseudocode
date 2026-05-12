/*
 * XREFs of StorPortUnitIdleState @ 0x1C002CD30
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0005C7C (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 * Callees:
 *     StorUpdateCrashDumpPowerReady @ 0x1C0006AB4 (StorUpdateCrashDumpPowerReady.c)
 *     RaidIsUnitControlSupported @ 0x1C000E04C (RaidIsUnitControlSupported.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000F038 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C0021C84 (RaidAdapterPoFxActivateComponent.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C0021CDC (RaidAdapterPoFxIdleComponent.c)
 *     RaidGetStorPoFxComponent @ 0x1C00270A0 (RaidGetStorPoFxComponent.c)
 *     RaidUnitSendPoFxIdleStateToMiniport @ 0x1C002BDF8 (RaidUnitSendPoFxIdleStateToMiniport.c)
 *     Template_pqcccqq @ 0x1C002D948 (Template_pqcccqq.c)
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
        **(_QWORD **)(a1 + 1440),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_BYTE *)(a1 + 88),
        *(_BYTE *)(a1 + 89),
        *(_BYTE *)(a1 + 90),
        a2,
        a3);
    if ( a3 )
    {
      *(_QWORD *)(a1 + 1696) = MEMORY[0xFFFFF78000000008];
      v8 = *(_QWORD *)(a1 + 1440);
      if ( *(char *)(*(_QWORD *)(a1 + 24) + 108LL) >= 0 )
        *(_DWORD *)(v8 + 32) &= ~0x40u;
      else
        *(_DWORD *)(v8 + 32) |= 0x40u;
    }
    else
    {
      ++*(_DWORD *)(a1 + 1748);
      if ( *(_QWORD *)(a1 + 1696) )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1440) + 32LL) & 0x40) != 0 || *(char *)(*(_QWORD *)(a1 + 24) + 108LL) < 0 )
        {
          v7 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 1696);
          *(_QWORD *)(a1 + 1704) += v7 / 0x2710;
          if ( v7 / 0x2710 >= 0x2710 )
            ++*(_DWORD *)(a1 + 1756);
        }
        *(_QWORD *)(a1 + 1696) = 0LL;
      }
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 1440) + 16LL) = a3;
    if ( *(_DWORD *)(a1 + 632) && a3 )
      StorUpdateCrashDumpPowerReady(*(_QWORD *)(a1 + 24));
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1440) + 32LL) & 4) != 0 && RaidIsUnitControlSupported(a1, 7) )
    {
      v9 = 1;
      StorPoFxComponent = RaidGetStorPoFxComponent(*(int **)(*(_QWORD *)(a1 + 1440) + 8LL), a2);
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
                *(_BYTE *)(a1 + 1608) = 1;
                *(_DWORD *)(a1 + 1612) = a3;
                ExpInterlockedPushEntrySList((PSLIST_HEADER)(v13 + 5072), (PSLIST_ENTRY)(a1 + 1632));
                KeReleaseInStackQueuedSpinLock(&LockHandle);
                if ( !StorEtwLoggingEnabled || ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) == 0 )
                  goto LABEL_43;
                v15 = &EventUnitIdleStateQueued;
LABEL_42:
                Template_pqcccqq(
                  *(_QWORD *)(a1 + 24),
                  (_DWORD)v15,
                  v14,
                  **(_QWORD **)(a1 + 1440),
                  *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
                  *(_BYTE *)(a1 + 88),
                  *(_BYTE *)(a1 + 89),
                  *(_BYTE *)(a1 + 90),
                  a2,
                  a3);
LABEL_43:
                ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1432));
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
    if ( *(_DWORD *)(a1 + 632) && !a3 )
      StorUpdateCrashDumpPowerReady(*(_QWORD *)(a1 + 24));
    PoFxCompleteIdleState(**(_QWORD **)(a1 + 1440), a2);
    if ( !StorEtwLoggingEnabled || ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) == 0 )
      goto LABEL_43;
    v15 = &EventUnitIdleStateStop;
    goto LABEL_42;
  }
}
