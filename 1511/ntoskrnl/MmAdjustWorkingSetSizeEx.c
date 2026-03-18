/*
 * XREFs of MmAdjustWorkingSetSizeEx @ 0x140096B2C
 * Callers:
 *     MmAdjustWorkingSetSize @ 0x1401D2A7C (MmAdjustWorkingSetSize.c)
 *     PspSetQuotaLimits @ 0x1404524F0 (PspSetQuotaLimits.c)
 *     NtSetSystemInformation @ 0x1404D4654 (NtSetSystemInformation.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     PsChargeProcessQuota @ 0x140018A2C (PsChargeProcessQuota.c)
 *     PsReturnProcessQuota @ 0x14001C2A4 (PsReturnProcessQuota.c)
 *     MiEmptyWorkingSet @ 0x14001F584 (MiEmptyWorkingSet.c)
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiChargeWsles @ 0x140061CF0 (MiChargeWsles.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 *     MiCheckWsLimits @ 0x140096D9C (MiCheckWsLimits.c)
 *     MiGetVmPartition @ 0x1400A8E60 (MiGetVmPartition.c)
 *     MiChargeResident @ 0x1400AA260 (MiChargeResident.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400B1BD0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 */

__int64 __fastcall MmAdjustWorkingSetSizeEx(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        char a4,
        int a5,
        _BYTE *a6)
{
  _KPROCESS *Process; // r14
  int v7; // r13d
  unsigned __int64 v8; // rsi
  LONG *v10; // rdi
  __int64 VmPartition; // r15
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // r14d
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rcx
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rdx
  struct _KPROCESS *v23; // [rsp+30h] [rbp-40h]
  unsigned __int64 v24; // [rsp+38h] [rbp-38h] BYREF
  unsigned __int64 v25; // [rsp+40h] [rbp-30h] BYREF
  __int64 v26; // [rsp+48h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-20h] BYREF
  KIRQL v28; // [rsp+C0h] [rbp+50h]

  Process = 0LL;
  v23 = 0LL;
  v7 = a3;
  v8 = a2;
  *a6 = 0;
  switch ( (_DWORD)a3 )
  {
    case 0:
      Process = KeGetCurrentThread()->ApcState.Process;
      v23 = Process;
      v10 = (LONG *)&Process[1].IdealNode[12];
LABEL_3:
      if ( a1 == -1LL && a2 == -1LL )
      {
        LOBYTE(a2) = 17;
        return MiEmptyWorkingSet(v10, a2, 0);
      }
      VmPartition = MiGetVmPartition(v10, a2, a3);
      v28 = ExAcquireSpinLockExclusive(v10);
      if ( !v7 && (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
      {
        v14 = -1073741558;
        goto LABEL_23;
      }
      if ( a1 )
        v24 = a1 >> 12;
      else
        v24 = *((_QWORD *)v10 + 12);
      if ( v8 )
        v25 = v8 >> 12;
      else
        v25 = *((_QWORD *)v10 + 17);
      v14 = MiCheckWsLimits((_DWORD)v10, (unsigned int)&v24, (unsigned int)&v25, a5, 0);
      if ( (v14 & 0xC0000000) == 0xC0000000 )
        goto LABEL_23;
      v15 = *((_QWORD *)v10 + 12);
      v16 = v24;
      v12 = *((_QWORD *)v10 + 23);
      v26 = v12;
      if ( v24 <= v15 )
      {
        v17 = v15 - v24;
        if ( v24 < *(_QWORD *)(v12 + 8) )
        {
          v14 = -1073741748;
          goto LABEL_23;
        }
        goto LABEL_13;
      }
      v17 = v24 - v15;
      *a6 = 1;
      if ( !a4 )
      {
        v14 = -1073741727;
        goto LABEL_23;
      }
      if ( !v7 )
      {
        v14 = PsChargeProcessQuota(v23, v12, v17);
        if ( v14 < 0 )
          goto LABEL_23;
      }
      if ( (unsigned int)MiChargeResident(VmPartition, v17, 512LL) )
      {
        if ( (int *)VmPartition == &MiSystemPartition )
        {
          _InterlockedExchangeAdd64(&qword_1402FF398, v17);
          v16 = v24;
        }
        if ( v7 || (unsigned int)MiChargeWsles((ULONG_PTR)v10, v17, 1LL) )
        {
          v12 = v26;
LABEL_13:
          v18 = v25;
          if ( v25 < *((_QWORD *)v10 + 13) && v25 < *(_QWORD *)(v12 + 32) )
          {
            if ( *(_QWORD *)(v12 + 8) + 6LL >= v25 )
            {
              v14 = -1073741748;
              if ( *a6 == 1 )
              {
                if ( !v7 )
                {
                  v20 = *((_QWORD *)v10 + 12);
                  *((_QWORD *)v10 + 12) = v16;
                  MiChargeWsles((ULONG_PTR)v10, -(__int64)v17, 1LL);
                  *((_QWORD *)v10 + 12) = v20;
                  PsReturnProcessQuota(v23, v21, v17);
                }
                if ( (int *)VmPartition == &MiSystemPartition )
                {
                  MiReturnResidentAvailable(v17);
                  _InterlockedExchangeAdd64(&qword_1402FF3A8, v17);
                }
                else
                {
                  _InterlockedExchangeAdd64((volatile signed __int64 *)(VmPartition + 5952), v17);
                }
              }
              goto LABEL_23;
            }
            *((_BYTE *)v10 + 219) |= 0x20u;
          }
          if ( !*a6 && v17 )
          {
            if ( !v7 )
            {
              MiChargeWsles((ULONG_PTR)v10, -(__int64)v17, 1LL);
              PsReturnProcessQuota(v23, v22, v17);
            }
            if ( (int *)VmPartition == &MiSystemPartition )
            {
              MiReturnResidentAvailable(v17);
              _InterlockedExchangeAdd64(&qword_1402FF3B0, v17);
            }
            else
            {
              _InterlockedExchangeAdd64((volatile signed __int64 *)(VmPartition + 5952), v17);
            }
            v18 = v25;
            v16 = v24;
          }
          *((_QWORD *)v10 + 17) = v18;
          *((_QWORD *)v10 + 12) = v16;
          if ( a5 )
          {
            KeAcquireInStackQueuedSpinLockAtDpcLevel(&SpinLock, &LockHandle);
            if ( (a5 & 4) != 0 )
            {
              *((_BYTE *)v10 + 216) |= 0x80u;
            }
            else if ( (a5 & 8) != 0 )
            {
              *((_BYTE *)v10 + 216) &= ~0x80u;
            }
            if ( (a5 & 1) != 0 )
            {
              *((_BYTE *)v10 + 216) |= 0x40u;
            }
            else if ( (a5 & 2) != 0 )
            {
              *((_BYTE *)v10 + 216) &= ~0x40u;
            }
            KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
          }
LABEL_23:
          LOBYTE(v12) = v28;
          MiUnlockWorkingSetExclusive((__int64)v10, v12, v13);
          return (unsigned int)v14;
        }
        if ( (int *)VmPartition == &MiSystemPartition )
        {
          MiReturnResidentAvailable(v17);
          _InterlockedExchangeAdd64(&qword_1402FF3A0, v17);
        }
        else
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(VmPartition + 5952), v17);
        }
      }
      else if ( v7 )
      {
        goto LABEL_55;
      }
      PsReturnProcessQuota(v23, v12, v17);
LABEL_55:
      v14 = -1073741670;
      goto LABEL_23;
    case 2:
      v10 = &dword_1402FF880;
      goto LABEL_3;
    case 3:
      v10 = &dword_1402FF980;
      goto LABEL_3;
    case 4:
      v10 = &dword_1402FFA80;
      goto LABEL_3;
  }
  return 3221225713LL;
}
