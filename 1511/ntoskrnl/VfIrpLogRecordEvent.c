/*
 * XREFs of VfIrpLogRecordEvent @ 0x1406CAA5C
 * Callers:
 *     IovpCallDriver1 @ 0x1406BE838 (IovpCallDriver1.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     IovUtilIsDeviceObjectMarked @ 0x1406C201C (IovUtilIsDeviceObjectMarked.c)
 *     VfMajorBuildIrpLogEntry @ 0x1406C23C0 (VfMajorBuildIrpLogEntry.c)
 *     ViIrpLogDatabaseFindPointer @ 0x1406CAFCC (ViIrpLogDatabaseFindPointer.c)
 */

void __fastcall VfIrpLogRecordEvent(__int16 a1, _DWORD *a2, __int64 a3)
{
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  KIRQL v6; // si
  __int64 Pointer; // rax
  _DWORD *v8; // rbp
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

  if ( (a1 & 0x400) != 0 )
  {
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
    v6 = KeAcquireSpinLockRaiseToDpc(&ViIrpLogDatabaseLock);
    if ( (unsigned int)IovUtilIsDeviceObjectMarked((__int64)a2, 0) )
      goto LABEL_21;
    Pointer = ViIrpLogDatabaseFindPointer(a2, &v16);
    v8 = v16;
    v9 = (_DWORD *)Pointer;
    if ( *v16 )
      goto LABEL_21;
    if ( !Pointer )
    {
      v9 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x348uLL, 0x65496656u);
      if ( !v9 )
      {
LABEL_21:
        KeReleaseSpinLock(&ViIrpLogDatabaseLock, v6);
        return;
      }
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
    }
    v13 = v9[6];
    if ( (v13 & 6) == 0 )
    {
      if ( v13 == 1 )
        v14 = v9[8];
      else
        v14 = v9[9];
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
    goto LABEL_21;
  }
}
