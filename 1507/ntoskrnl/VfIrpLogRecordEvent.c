/*
 * XREFs of VfIrpLogRecordEvent @ 0x14074E138
 * Callers:
 *     IovpCallDriver1 @ 0x14073F69C (IovpCallDriver1.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     IovUtilIsDeviceObjectMarked @ 0x1407438BC (IovUtilIsDeviceObjectMarked.c)
 *     VfMajorBuildIrpLogEntry @ 0x140743C60 (VfMajorBuildIrpLogEntry.c)
 *     ViIrpLogDatabaseFindPointer @ 0x14074E73C (ViIrpLogDatabaseFindPointer.c)
 */

void __fastcall VfIrpLogRecordEvent(__int16 a1, _DWORD *a2, __int64 a3)
{
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  unsigned __int8 CurrentIrql; // si
  __int64 Pointer; // rax
  _DWORD *v8; // r14
  _DWORD *v9; // rbx
  int v10; // eax
  char *v11; // rax
  __int64 v12; // rdx
  int v13; // eax
  unsigned int v14; // edx
  __int64 v15; // rcx
  _DWORD *v16; // [rsp+20h] [rbp-68h] BYREF
  _OWORD v17[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v18; // [rsp+50h] [rbp-38h]
  __int64 retaddr; // [rsp+88h] [rbp+0h]

  if ( (a1 & 0x400) == 0 )
    return;
  if ( ViIrpLogDdiLock != 2 && !_InterlockedCompareExchange(&ViIrpLogDdiLock, 1, 0) )
  {
    PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x77496656u);
    if ( PoolWithTag )
    {
      PoolWithTag->List.Flink = 0LL;
      PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))ViIrpLogExposeWmiCallback;
      PoolWithTag->Parameter = PoolWithTag;
      ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
    }
    else
    {
      ViIrpLogDdiLock = 0;
    }
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)&ViIrpLogDatabaseLock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&ViIrpLogDatabaseLock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&ViIrpLogDatabaseLock);
  }
  if ( !(unsigned int)IovUtilIsDeviceObjectMarked((__int64)a2, 0) )
  {
    Pointer = ViIrpLogDatabaseFindPointer(a2, &v16);
    v8 = v16;
    v9 = (_DWORD *)Pointer;
    if ( !*v16 )
    {
      if ( Pointer )
      {
LABEL_18:
        v13 = v9[6];
        if ( (v13 & 6) == 0 )
        {
          v14 = v13 == 1 ? v9[8] : v9[9];
          if ( (unsigned int)VfMajorBuildIrpLogEntry(a3, v14, (__int64)&v9[10 * v9[9] + 10], (__int64)v17) )
          {
            v15 = 5 * ((unsigned int)v9[9] + 1LL);
            *(_OWORD *)&v9[2 * v15] = v17[0];
            *(_OWORD *)&v9[2 * v15 + 4] = v17[1];
            *(_QWORD *)&v9[2 * v15 + 8] = v18;
            if ( ++v9[9] == v9[8] )
            {
              v9[6] |= 1u;
              v9[9] = 0;
            }
          }
        }
        goto LABEL_25;
      }
      v9 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x348uLL, 0x65496656u);
      if ( v9 )
      {
        ObfReferenceObject(a2);
        v9[6] = 0;
        *(_QWORD *)v9 = a2;
        v10 = a2[18];
        v9[9] = 0;
        v9[7] = v10;
        v11 = (char *)(v9 + 2);
        v9[8] = 20;
        v12 = *((_QWORD *)v8 + 1);
        *((_QWORD *)v9 + 1) = v12;
        *((_QWORD *)v9 + 2) = v8 + 2;
        if ( *(_DWORD **)(v12 + 8) != v8 + 2 )
          __fastfail(3u);
        *(_QWORD *)(v12 + 8) = v11;
        *((_QWORD *)v8 + 1) = v11;
        goto LABEL_18;
      }
    }
  }
LABEL_25:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&ViIrpLogDatabaseLock, retaddr);
  else
    _InterlockedAnd64(&ViIrpLogDatabaseLock, 0LL);
  __writecr8(CurrentIrql);
}
