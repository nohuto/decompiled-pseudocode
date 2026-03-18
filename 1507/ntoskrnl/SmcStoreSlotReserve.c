/*
 * XREFs of SmcStoreSlotReserve @ 0x1406DC350
 * Callers:
 *     SmcStoreCreate @ 0x1406DB7E4 (SmcStoreCreate.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     SmAlloc @ 0x1400D9FF4 (SmAlloc.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExFreePoolEx @ 0x140123144 (ExFreePoolEx.c)
 *     SmcStorePlacementGet @ 0x1406DBC88 (SmcStorePlacementGet.c)
 *     SmcStoreSlotAbort @ 0x1406DC14C (SmcStoreSlotAbort.c)
 */

unsigned __int64 __fastcall SmcStoreSlotReserve(__int64 a1, __int64 a2, ULONG a3)
{
  unsigned __int64 v4; // r13
  SIZE_T v5; // rsi
  struct _PRIVILEGE_SET *v6; // rax
  __int64 v7; // r9
  struct _PRIVILEGE_SET *v8; // r14
  SIZE_T v9; // rsi
  struct _PRIVILEGE_SET *p_Control; // rdx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // rbp
  struct _KTHREAD *v16; // rcx
  __int16 v17; // ax
  __int64 v19; // r9

  v4 = 0LL;
  v5 = 4 * (unsigned int)(((unsigned __int64)*(unsigned int *)(a1 + 8) + 31) >> 5);
  v6 = (struct _PRIVILEGE_SET *)SmAlloc(v5, 0x72436D73u);
  v8 = v6;
  if ( !v6 )
    return v4;
  v9 = v5 >> 2;
  p_Control = v6;
  if ( v9 )
  {
    if ( ((unsigned __int8)v6 & 4) != 0 )
    {
      v6->PrivilegeCount = -1;
      if ( !--v9 )
        goto LABEL_8;
      p_Control = (struct _PRIVILEGE_SET *)&v6->Control;
    }
    memset(p_Control, 0xFFu, 8 * (v9 >> 1));
    if ( (v9 & 1) != 0 )
      *((_DWORD *)p_Control + v9 - 1) = -1;
  }
LABEL_8:
  CurrentThread = KeGetCurrentThread();
  v12 = a1 + 168;
  --CurrentThread->KernelApcDisable;
  v13 = KeAbPreAcquire(a1 + 160, 0LL, 0LL, v7);
  v15 = v13;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 160), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 160), v13, a1 + 160, v14);
  if ( v15 )
    *(_BYTE *)(v15 + 26) |= 1u;
  while ( v12 < a1 + 552 )
  {
    if ( *(_DWORD *)v12 == -1 && (*(_DWORD *)(v12 + 4) & 4) == 0 )
    {
      *(_DWORD *)(v12 + 4) |= 4u;
      *(_QWORD *)(v12 + 8) = v8;
      v8 = 0LL;
      if ( (int)SmcStorePlacementGet(a1, a3, v12) >= 0 )
      {
        v4 = v12;
        v12 = 0LL;
      }
      if ( v12 )
      {
        SmcStoreSlotAbort(a1, v12, 1LL, v19);
        return v4;
      }
      break;
    }
    v12 += 24LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 160), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 160));
  KeAbPostRelease(a1 + 160);
  v16 = KeGetCurrentThread();
  v17 = v16->KernelApcDisable + 1;
  v16->KernelApcDisable = v17;
  if ( !v17
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v16->ApcState.ApcListHead[0].Flink != &v16->152
    && !v16->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( v8 )
    ExFreePoolEx(v8);
  return v4;
}
