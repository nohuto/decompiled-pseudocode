/*
 * XREFs of MmAdjustWorkingSetSizeEx @ 0x1400AB9B4
 * Callers:
 *     MmAdjustWorkingSetSize @ 0x1401E296C (MmAdjustWorkingSetSize.c)
 *     NtSetSystemInformation @ 0x1403EB59C (NtSetSystemInformation.c)
 *     PspSetQuotaLimits @ 0x1404C28C8 (PspSetQuotaLimits.c)
 * Callees:
 *     MiEmptyWorkingSet @ 0x140015A54 (MiEmptyWorkingSet.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14001B870 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiGetAnyMultiplexedVm @ 0x14001CBDC (MiGetAnyMultiplexedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedWorkingSetList @ 0x140046BF0 (MiGetSharedWorkingSetList.c)
 *     MiReturnResidentAvailable @ 0x14004ED60 (MiReturnResidentAvailable.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 *     PsReturnProcessQuota @ 0x140075124 (PsReturnProcessQuota.c)
 *     MiCheckWsLimits @ 0x1400ABD78 (MiCheckWsLimits.c)
 *     MiChargeWsles @ 0x1400DF9C0 (MiChargeWsles.c)
 *     MiChargeResident @ 0x1401011D0 (MiChargeResident.c)
 *     PsChargeProcessQuota @ 0x140101338 (PsChargeProcessQuota.c)
 */

__int64 __fastcall MmAdjustWorkingSetSizeEx(
        unsigned __int64 a1,
        unsigned __int64 a2,
        int a3,
        char a4,
        int a5,
        _BYTE *a6)
{
  _KPROCESS *Process; // r13
  int v11; // ecx
  char *AnyMultiplexedVm; // rsi
  int *v13; // r15
  LONG *SharedVm; // rbx
  KIRQL v15; // al
  unsigned __int64 v16; // rdx
  int v17; // r14d
  ULONG_PTR *SharedWorkingSetList; // rax
  ULONG_PTR v19; // rcx
  ULONG_PTR v20; // rdi
  unsigned __int64 v21; // rbx
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rdx
  ULONG_PTR v25; // rax
  int v26; // ebx
  int v27; // eax
  ULONG_PTR v28; // [rsp+30h] [rbp-40h]
  ULONG_PTR v29; // [rsp+38h] [rbp-38h] BYREF
  unsigned __int64 v30; // [rsp+40h] [rbp-30h] BYREF
  ULONG_PTR *v31; // [rsp+48h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-20h] BYREF
  KIRQL v33; // [rsp+C0h] [rbp+50h]
  __int16 v35; // [rsp+D8h] [rbp+68h]

  Process = 0LL;
  *a6 = 0;
  if ( a3 )
  {
    switch ( a3 )
    {
      case 2:
        v11 = 0;
        break;
      case 3:
        v11 = 2;
        break;
      case 4:
        v11 = 1;
        break;
      default:
        return 3221225713LL;
    }
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(v11);
  }
  else
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    AnyMultiplexedVm = (char *)&Process[1].IdealNode[12];
  }
  if ( a1 == -1LL && a2 == -1LL )
    return MiEmptyWorkingSet((ULONG_PTR)AnyMultiplexedVm, 17, 0);
  v13 = MiPartitionIdToPointer(*((_WORD *)AnyMultiplexedVm + 82));
  SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
  v15 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v33 = v15;
  if ( a3 || (Process[1].DirectoryTableBase & 0x2000000000LL) == 0 )
  {
    if ( a1 )
      v29 = a1 >> 12;
    else
      v29 = *((_QWORD *)AnyMultiplexedVm + 13);
    if ( a2 )
      v30 = a2 >> 12;
    else
      v30 = *((_QWORD *)AnyMultiplexedVm + 18);
    v17 = MiCheckWsLimits((_DWORD)AnyMultiplexedVm, (unsigned int)&v29, (unsigned int)&v30, a5, 0);
    if ( (v17 & 0xC0000000) == 0xC0000000 )
      goto LABEL_72;
    SharedWorkingSetList = MiGetSharedWorkingSetList((__int64)AnyMultiplexedVm);
    v19 = v29;
    v16 = *((_QWORD *)AnyMultiplexedVm + 13);
    v31 = SharedWorkingSetList;
    v28 = v29;
    if ( v29 <= v16 )
    {
      v20 = v16 - v29;
      if ( v29 < SharedWorkingSetList[1] )
      {
        v17 = -1073741748;
        goto LABEL_72;
      }
    }
    else
    {
      v20 = v29 - v16;
      *a6 = 1;
      if ( !a4 )
      {
        v17 = -1073741727;
        goto LABEL_72;
      }
      if ( !a3 )
      {
        v17 = PsChargeProcessQuota(Process, v16, v19 - v16);
        if ( v17 < 0 )
          goto LABEL_72;
      }
      if ( !(unsigned int)MiChargeResident(v13, v20, 512LL) )
      {
        if ( a3 )
        {
LABEL_32:
          v17 = -1073741670;
          goto LABEL_72;
        }
LABEL_31:
        PsReturnProcessQuota((ULONG_PTR)Process, v16, v20);
        goto LABEL_32;
      }
      if ( !a3 && !(unsigned int)MiChargeWsles(AnyMultiplexedVm, v20) )
      {
        if ( v13 == MiSystemPartition )
          MiReturnResidentAvailable(v20);
        else
          _InterlockedExchangeAdd64((volatile signed __int64 *)v13 + 816, v20);
        goto LABEL_31;
      }
      SharedWorkingSetList = v31;
      v19 = v28;
    }
    v21 = v30;
    if ( v30 < *((_QWORD *)AnyMultiplexedVm + 14) && v30 < SharedWorkingSetList[3] )
    {
      if ( SharedWorkingSetList[1] + 6 >= v30 )
      {
        v17 = -1073741748;
        if ( *a6 == 1 )
        {
          if ( !a3 )
          {
            v22 = *((_QWORD *)AnyMultiplexedVm + 13);
            *((_QWORD *)AnyMultiplexedVm + 13) = v19;
            MiChargeWsles(AnyMultiplexedVm, -(__int64)v20);
            *((_QWORD *)AnyMultiplexedVm + 13) = v22;
            PsReturnProcessQuota((ULONG_PTR)Process, v23, v20);
          }
          if ( v13 == MiSystemPartition )
            MiReturnResidentAvailable(v20);
          else
            _InterlockedExchangeAdd64((volatile signed __int64 *)v13 + 816, v20);
        }
        goto LABEL_72;
      }
      AnyMultiplexedVm[187] |= 0x20u;
    }
    if ( !*a6 && v20 )
    {
      if ( !a3 )
      {
        MiChargeWsles(AnyMultiplexedVm, -(__int64)v20);
        PsReturnProcessQuota((ULONG_PTR)Process, v24, v20);
      }
      if ( v13 != MiSystemPartition )
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)v13 + 816, v20);
        v25 = v29;
        v21 = v30;
LABEL_58:
        *((_QWORD *)AnyMultiplexedVm + 18) = v21;
        *((_QWORD *)AnyMultiplexedVm + 13) = v25;
        if ( !a5 )
          goto LABEL_72;
        v26 = 0;
        KeAcquireInStackQueuedSpinLockAtDpcLevel(&qword_140327780, &LockHandle);
        v27 = *((_DWORD *)AnyMultiplexedVm + 46);
        v35 = v27;
        if ( (a5 & 4) != 0 )
        {
          LOBYTE(v27) = v27 | 0x80;
        }
        else
        {
          if ( (a5 & 8) == 0 )
            goto LABEL_65;
          LOBYTE(v27) = v27 & 0x7F;
        }
        v26 = 1;
        LOBYTE(v35) = v27;
LABEL_65:
        if ( (a5 & 1) != 0 )
        {
          LOBYTE(v35) = v27 | 0x40;
        }
        else
        {
          if ( (a5 & 2) != 0 )
          {
            v26 = 1;
            LOBYTE(v35) = v27 & 0xBF;
          }
          if ( !v26 )
            goto LABEL_71;
        }
        *((_WORD *)AnyMultiplexedVm + 92) = v35;
LABEL_71:
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        goto LABEL_72;
      }
      MiReturnResidentAvailable(v20);
    }
    v25 = v28;
    goto LABEL_58;
  }
  v17 = -1073741558;
LABEL_72:
  LOBYTE(v16) = v33;
  MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v16);
  return (unsigned int)v17;
}
