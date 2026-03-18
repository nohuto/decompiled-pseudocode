/*
 * XREFs of MmEnforceWorkingSetLimit @ 0x140021C18
 * Callers:
 *     PspApplyWorkingSetLimitsToProcess @ 0x1403E9200 (PspApplyWorkingSetLimitsToProcess.c)
 *     PspSetQuotaLimits @ 0x1404524F0 (PspSetQuotaLimits.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x140641D50 (PspAddProcessToWorkingSetChangeList.c)
 *     PspApplyWorkingSetLimits @ 0x140641E10 (PspApplyWorkingSetLimits.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400B1BD0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall MmEnforceWorkingSetLimit(_KPROCESS *a1, char a2)
{
  char v2; // di
  volatile LONG *v3; // rbx
  char v4; // al
  int v5; // r14d
  unsigned int v6; // esi
  KIRQL v7; // bp
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  char v12; // cl
  __int64 v13; // rdx
  char v15; // [rsp+20h] [rbp-78h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-70h] BYREF
  char v17[48]; // [rsp+40h] [rbp-58h] BYREF

  v2 = a2;
  v3 = (volatile LONG *)&a1[1].IdealNode[12];
  v4 = 0;
  v5 = 0;
  v15 = 0;
  v6 = 0;
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
  v7 = ExAcquireSpinLockExclusive(v3);
  KeAcquireInStackQueuedSpinLockAtDpcLevel(&SpinLock, &LockHandle);
  if ( (v2 & 8) != 0 )
    *((_BYTE *)v3 + 216) &= ~0x80u;
  if ( (v2 & 2) != 0 )
    *((_BYTE *)v3 + 216) &= ~0x40u;
  v11 = *((_DWORD *)v3 + 54);
  v12 = v15;
  if ( (v11 & 0x80u) != 0 )
    v12 = v15 | 0x80;
  if ( (v11 & 0x40) != 0 )
    v12 |= 0x40u;
  if ( v12 < 0 && (v12 & 0x40) != 0 && (unsigned __int64)(*((_QWORD *)v3 + 12) + 6LL) >= *((_QWORD *)v3 + 17) )
  {
    v6 = -1073741748;
    v2 &= 0xFAu;
  }
  if ( (v2 & 4) != 0 )
    *((_BYTE *)v3 + 216) |= 0x80u;
  if ( (v2 & 1) != 0 )
    *((_BYTE *)v3 + 216) |= 0x40u;
  KxReleaseQueuedSpinLock(&LockHandle, v8, v9, v10);
  LOBYTE(v13) = v7;
  MiUnlockWorkingSetExclusive(v3, v13);
  if ( v5 )
    KiUnstackDetachProcess(v17, 0LL);
  return v6;
}
