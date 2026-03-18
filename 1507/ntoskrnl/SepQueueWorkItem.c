/*
 * XREFs of SepQueueWorkItem @ 0x140117380
 * Callers:
 *     SepAdtLogAuditRecord @ 0x140164DBC (SepAdtLogAuditRecord.c)
 *     SepInformLsaOfDeletedLogon @ 0x14052E598 (SepInformLsaOfDeletedLogon.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     PsGetServerSiloState @ 0x140117518 (PsGetServerSiloState.c)
 */

char __fastcall SepQueueWorkItem(__int64 a1, __int64 a2, _BYTE *a3)
{
  char v4; // bp
  char v5; // r15
  _BYTE *v8; // r8
  unsigned __int8 CurrentIrql; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rax
  __int64 (__fastcall *v12)(__int64); // rax
  _QWORD *v13; // rax
  struct _KTHREAD *v14; // rcx
  __int16 v15; // ax
  _QWORD *v17; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v4 = 0;
  v5 = 0;
  if ( (unsigned int)PsGetServerSiloState(*(_QWORD *)(a2 + 56)) == 1 )
  {
    if ( v8 )
      *v8 = 0;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql == 2 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
      v11 = *(_QWORD *)(a1 + 200);
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 32), 1u);
      v11 = *(_QWORD *)(a1 + 192);
    }
    if ( v11 )
    {
      if ( a3 )
        *a3 = 1;
    }
    else
    {
      v12 = *(__int64 (__fastcall **)(__int64))(a1 + 208);
      if ( v12 )
        v4 = v12(a2);
      else
        v4 = 1;
      if ( v4 )
      {
        *(_DWORD *)(a2 + 52) = _InterlockedIncrement((volatile signed __int32 *)(a1 + 180));
        if ( CurrentIrql == 2 )
        {
          v17 = *(_QWORD **)(a1 + 24);
          *(_QWORD *)a2 = a1 + 16;
          *(_QWORD *)(a2 + 8) = v17;
          if ( *v17 != a1 + 16 )
            __fastfail(3u);
          *v17 = a2;
          *(_QWORD *)(a1 + 24) = a2;
        }
        else
        {
          v13 = *(_QWORD **)(a1 + 8);
          *(_QWORD *)a2 = a1;
          *(_QWORD *)(a2 + 8) = v13;
          if ( *v13 != a1 )
            __fastfail(3u);
          *v13 = a2;
          *(_QWORD *)(a1 + 8) = a2;
        }
        if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 176)) == 1 )
          v5 = 1;
      }
    }
    if ( CurrentIrql == 2 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    else
    {
      ExReleaseResourceLite((PERESOURCE)(a1 + 32));
      v14 = KeGetCurrentThread();
      v15 = v14->KernelApcDisable + 1;
      v14->KernelApcDisable = v15;
      if ( !v15
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v14->ApcState.ApcListHead[0].Flink != &v14->152
        && !v14->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    if ( v5 )
    {
      *(_QWORD *)(a1 + 168) = a1;
      *(_QWORD *)(a1 + 160) = SepRmCallLsa;
      *(_QWORD *)(a1 + 144) = 0LL;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 144), DelayedWorkQueue);
    }
    return v4;
  }
  else
  {
    if ( v8 )
      *v8 = 1;
    return 0;
  }
}
