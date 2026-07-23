/*
 * XREFs of MmEnforceWorkingSetLimit @ 0x140076D74
 * Callers:
 *     PspApplyWorkingSetLimitsToProcess @ 0x140469428 (PspApplyWorkingSetLimitsToProcess.c)
 *     PspSetQuotaLimits @ 0x1404C28C8 (PspSetQuotaLimits.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x140680278 (PspAddProcessToWorkingSetChangeList.c)
 *     PspApplyWorkingSetLimits @ 0x140680338 (PspApplyWorkingSetLimits.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14001B870 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall MmEnforceWorkingSetLimit(_KPROCESS *a1, char a2)
{
  char v2; // di
  __int64 v3; // r14
  char v4; // al
  int v5; // r12d
  unsigned int v6; // r15d
  int v7; // esi
  LONG *SharedVm; // rbx
  KIRQL v9; // al
  KIRQL v10; // r13
  char v11; // cl
  char v12; // al
  __int64 v13; // rdx
  char v15; // [rsp+20h] [rbp-60h]
  int v16; // [rsp+24h] [rbp-5Ch]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-58h] BYREF
  _BYTE v18[48]; // [rsp+40h] [rbp-40h] BYREF

  v2 = a2;
  v3 = (__int64)&a1[1].IdealNode[12];
  v4 = 0;
  v5 = 0;
  v15 = 0;
  v6 = 0;
  v7 = 0;
  if ( (a2 & 4) != 0 )
  {
    v2 = a2 & 0xF7;
    v4 = 0x80;
    v15 = 0x80;
  }
  if ( (v2 & 1) != 0 )
  {
    v2 &= ~2u;
    v15 = v4 | 0x40;
  }
  if ( KeGetCurrentThread()->ApcState.Process != a1 )
  {
    v5 = 1;
    KiStackAttachProcess((ULONG_PTR)a1);
  }
  SharedVm = MiGetSharedVm(v3);
  v9 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v10 = v9;
  KeAcquireInStackQueuedSpinLockAtDpcLevel(&qword_140327780, &LockHandle);
  v11 = *(_DWORD *)(v3 + 184);
  v16 = *(_DWORD *)(v3 + 184);
  if ( (v2 & 8) != 0 )
  {
    v11 &= ~0x80u;
    v7 = 1;
    LOBYTE(v16) = v11;
  }
  if ( (v2 & 2) != 0 )
  {
    v11 &= ~0x40u;
    v7 = 1;
    LOBYTE(v16) = v11;
  }
  v12 = v15;
  if ( v11 < 0 )
    v12 = v15 | 0x80;
  if ( (v11 & 0x40) != 0 )
    v12 |= 0x40u;
  if ( v12 < 0 && (v12 & 0x40) != 0 && (unsigned __int64)(*(_QWORD *)(v3 + 104) + 6LL) >= *(_QWORD *)(v3 + 144) )
  {
    v6 = -1073741748;
    v2 &= 0xFAu;
  }
  if ( (v2 & 4) != 0 )
  {
    v11 |= 0x80u;
    v7 = 1;
    LOBYTE(v16) = v11;
  }
  if ( (v2 & 1) != 0 )
  {
    v7 = 1;
    LOBYTE(v16) = v11 | 0x40;
  }
  if ( v7 )
    *(_WORD *)(v3 + 184) = v16;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  LOBYTE(v13) = v10;
  MiUnlockWorkingSetExclusive(v3, v13);
  if ( v5 )
    KiUnstackDetachProcess(v18, 0LL);
  return v6;
}
