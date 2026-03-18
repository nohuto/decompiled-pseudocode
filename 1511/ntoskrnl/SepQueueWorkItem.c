/*
 * XREFs of SepQueueWorkItem @ 0x1400D52DC
 * Callers:
 *     SepAdtLogAuditRecord @ 0x14013C4E0 (SepAdtLogAuditRecord.c)
 *     SepInformLsaOfDeletedLogon @ 0x14049B860 (SepInformLsaOfDeletedLogon.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     PsGetServerSiloState @ 0x1400D5430 (PsGetServerSiloState.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 */

char __fastcall SepQueueWorkItem(__int64 a1, __int64 a2, _BYTE *a3)
{
  char v6; // bp
  char v7; // r15
  unsigned __int8 CurrentIrql; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rax
  __int64 (__fastcall *v11)(__int64); // rax
  _QWORD *v12; // rax
  _QWORD *v14; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v6 = 0;
  v7 = 0;
  if ( (unsigned int)PsGetServerSiloState(*(_QWORD *)(a2 + 56)) == 1 )
  {
    if ( a3 )
      *a3 = 0;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql == 2 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
      v10 = *(_QWORD *)(a1 + 200);
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 32), 1u);
      v10 = *(_QWORD *)(a1 + 192);
    }
    if ( v10 )
    {
      if ( a3 )
        *a3 = 1;
    }
    else
    {
      v11 = *(__int64 (__fastcall **)(__int64))(a1 + 208);
      if ( v11 )
        v6 = v11(a2);
      else
        v6 = 1;
      if ( v6 )
      {
        *(_DWORD *)(a2 + 52) = _InterlockedIncrement((volatile signed __int32 *)(a1 + 180));
        if ( CurrentIrql == 2 )
        {
          v14 = *(_QWORD **)(a1 + 24);
          *(_QWORD *)a2 = a1 + 16;
          *(_QWORD *)(a2 + 8) = v14;
          if ( *v14 != a1 + 16 )
            __fastfail(3u);
          *v14 = a2;
          *(_QWORD *)(a1 + 24) = a2;
        }
        else
        {
          v12 = *(_QWORD **)(a1 + 8);
          *(_QWORD *)a2 = a1;
          *(_QWORD *)(a2 + 8) = v12;
          if ( *v12 != a1 )
            __fastfail(3u);
          *v12 = a2;
          *(_QWORD *)(a1 + 8) = a2;
        }
        if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 176)) == 1 )
          v7 = 1;
      }
    }
    if ( CurrentIrql == 2 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    else
    {
      ExReleaseResourceLite((PERESOURCE)(a1 + 32));
      KeLeaveCriticalRegion();
    }
    if ( v7 )
    {
      *(_QWORD *)(a1 + 144) = 0LL;
      *(_QWORD *)(a1 + 160) = SepRmCallLsa;
      *(_QWORD *)(a1 + 168) = a1;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 144), DelayedWorkQueue);
    }
    return v6;
  }
  else
  {
    if ( a3 )
      *a3 = 1;
    return 0;
  }
}
