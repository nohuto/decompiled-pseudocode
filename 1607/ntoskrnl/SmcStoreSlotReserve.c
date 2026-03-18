/*
 * XREFs of SmcStoreSlotReserve @ 0x14069AF68
 * Callers:
 *     SmcStoreCreate @ 0x14069A590 (SmcStoreCreate.c)
 * Callees:
 *     SmAlloc @ 0x14000215C (SmAlloc.c)
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     MiDeleteSubsection @ 0x140087410 (MiDeleteSubsection.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 *     SmcStorePlacementGet @ 0x14069A9AC (SmcStorePlacementGet.c)
 *     SmcStoreSlotAbort @ 0x14069ADDC (SmcStoreSlotAbort.c)
 */

unsigned __int64 __fastcall SmcStoreSlotReserve(__int64 a1, __int64 a2, ULONG a3)
{
  unsigned __int64 v4; // r13
  SIZE_T v5; // rsi
  struct _PRIVILEGE_SET *v6; // rax
  struct _PRIVILEGE_SET *v7; // r14
  SIZE_T v8; // rsi
  struct _PRIVILEGE_SET *p_Control; // rdx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v11; // rdi
  _BYTE *v12; // rax
  _BYTE *v13; // rbp

  v4 = 0LL;
  v5 = 4 * (unsigned int)(((unsigned __int64)*(unsigned int *)(a1 + 8) + 31) >> 5);
  v6 = (struct _PRIVILEGE_SET *)SmAlloc(v5, 0x72436D73u);
  v7 = v6;
  if ( !v6 )
    return v4;
  v8 = v5 >> 2;
  p_Control = v6;
  if ( v8 )
  {
    if ( ((unsigned __int8)v6 & 4) != 0 )
    {
      v6->PrivilegeCount = -1;
      if ( !--v8 )
        goto LABEL_8;
      p_Control = (struct _PRIVILEGE_SET *)&v6->Control;
    }
    memset(p_Control, 0xFFu, 8 * (v8 >> 1));
    if ( (v8 & 1) != 0 )
      *((_DWORD *)p_Control + v8 - 1) = -1;
  }
LABEL_8:
  CurrentThread = KeGetCurrentThread();
  v11 = a1 + 168;
  --CurrentThread->KernelApcDisable;
  v12 = (_BYTE *)KeAbPreAcquire(a1 + 160, 0LL, 0);
  v13 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 160), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 160), v12, a1 + 160);
  if ( v13 )
    v13[26] |= 1u;
  while ( v11 < a1 + 552 )
  {
    if ( *(_DWORD *)v11 == -1 && (*(_DWORD *)(v11 + 4) & 4) == 0 )
    {
      *(_DWORD *)(v11 + 4) |= 4u;
      *(_QWORD *)(v11 + 8) = v7;
      v7 = 0LL;
      if ( (int)SmcStorePlacementGet(a1, a3, v11) >= 0 )
      {
        v4 = v11;
        v11 = 0LL;
      }
      if ( v11 )
      {
        SmcStoreSlotAbort(a1, v11, 1);
        return v4;
      }
      break;
    }
    v11 += 24LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 160), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 160));
  KeAbPostRelease(a1 + 160);
  KeLeaveCriticalRegion();
  if ( v7 )
    MiDeleteSubsection(v7);
  return v4;
}
