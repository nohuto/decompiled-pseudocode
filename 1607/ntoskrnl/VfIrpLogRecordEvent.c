/*
 * XREFs of VfIrpLogRecordEvent @ 0x14071946C
 * Callers:
 *     IovpCallDriver1 @ 0x14070A8C0 (IovpCallDriver1.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     IovUtilIsDeviceObjectMarked @ 0x14070E0DC (IovUtilIsDeviceObjectMarked.c)
 *     VfMajorBuildIrpLogEntry @ 0x14070E480 (VfMajorBuildIrpLogEntry.c)
 *     ViIrpLogDatabaseFindPointer @ 0x1407199DC (ViIrpLogDatabaseFindPointer.c)
 */

void __fastcall VfIrpLogRecordEvent(__int16 a1, _DWORD *a2, __int64 a3)
{
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  KIRQL v6; // si
  __int64 Pointer; // rax
  _DWORD *v8; // rbp
  char *v9; // rbx
  _QWORD *v10; // rcx
  int v11; // eax
  _QWORD *v12; // rax
  __int64 v13; // rdx
  int v14; // eax
  unsigned int v15; // edx
  __int64 v16; // rcx
  _DWORD *v17; // [rsp+28h] [rbp-60h] BYREF
  _OWORD v18[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v19; // [rsp+50h] [rbp-38h]

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
    Pointer = ViIrpLogDatabaseFindPointer(a2, &v17);
    v8 = v17;
    v9 = (char *)Pointer;
    if ( *v17 )
      goto LABEL_21;
    if ( !Pointer )
    {
      v9 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x348uLL, 0x65496656u);
      if ( !v9 )
      {
LABEL_21:
        KeReleaseSpinLock(&ViIrpLogDatabaseLock, v6);
        return;
      }
      ObfReferenceObject(a2);
      *((_DWORD *)v9 + 6) = 0;
      v10 = v8 + 2;
      *(_QWORD *)v9 = a2;
      v11 = a2[18];
      *((_DWORD *)v9 + 9) = 0;
      *((_DWORD *)v9 + 7) = v11;
      v12 = v9 + 8;
      *((_DWORD *)v9 + 8) = 20;
      v13 = *((_QWORD *)v8 + 1);
      if ( *(_DWORD **)(v13 + 8) != v8 + 2 )
        __fastfail(3u);
      *v12 = v13;
      *((_QWORD *)v9 + 2) = v10;
      *(_QWORD *)(v13 + 8) = v12;
      *v10 = v12;
    }
    v14 = *((_DWORD *)v9 + 6);
    if ( (v14 & 6) == 0 )
    {
      if ( v14 == 1 )
        v15 = *((_DWORD *)v9 + 8);
      else
        v15 = *((_DWORD *)v9 + 9);
      if ( (unsigned int)VfMajorBuildIrpLogEntry(
                           a3,
                           v15,
                           (__int64)&v9[40 * *((unsigned int *)v9 + 9) + 40],
                           (__int64)v18) )
      {
        v16 = 5 * (*((unsigned int *)v9 + 9) + 1LL);
        *(_OWORD *)&v9[8 * v16] = v18[0];
        *(_OWORD *)&v9[8 * v16 + 16] = v18[1];
        *(_QWORD *)&v9[8 * v16 + 32] = v19;
        if ( ++*((_DWORD *)v9 + 9) == *((_DWORD *)v9 + 8) )
        {
          *((_DWORD *)v9 + 6) |= 1u;
          *((_DWORD *)v9 + 9) = 0;
        }
      }
    }
    goto LABEL_21;
  }
}
