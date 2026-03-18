/*
 * XREFs of MiStoreUpdateMemoryConditions @ 0x140014BC8
 * Callers:
 *     MiAdjustModifiedPageLoad @ 0x14001373C (MiAdjustModifiedPageLoad.c)
 *     MiModifiedPageWriter @ 0x1401384BC (MiModifiedPageWriter.c)
 * Callees:
 *     KeQueryEffectiveBasePriorityThread @ 0x140014CB8 (KeQueryEffectiveBasePriorityThread.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     MiGetAvailablePagesBelowPriority @ 0x14007CA30 (MiGetAvailablePagesBelowPriority.c)
 *     KeSetActualBasePriorityThread @ 0x14007D1E0 (KeSetActualBasePriorityThread.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@@Z @ 0x1400FF69C (-SmUpdateMemoryConditions@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@@Z.c)
 */

void __fastcall MiStoreUpdateMemoryConditions(__int64 a1)
{
  unsigned __int64 v2; // rax
  int v3; // ebp
  unsigned int v4; // esi
  unsigned __int64 AvailablePagesBelowPriority; // rax
  unsigned __int64 v6; // rcx
  int v7; // ebx
  signed __int32 v8[8]; // [rsp+0h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 4224), &LockHandle);
  v2 = *(_QWORD *)(a1 + 5888);
  if ( v2 < 0xA0 )
  {
    v7 = 0;
    v4 = 18;
    v3 = 1;
  }
  else
  {
    v3 = 0;
    if ( v2 < 0x420 )
    {
      v7 = 1;
      v4 = 18;
    }
    else
    {
      v4 = 8;
      AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(a1, 6LL);
      if ( AvailablePagesBelowPriority < 3LL * *(_QWORD *)(*(_QWORD *)(a1 + 5616) + 2408LL) )
      {
        v7 = 2;
      }
      else
      {
        v6 = *(_QWORD *)(a1 + 6128);
        if ( v6 >= AvailablePagesBelowPriority + 0x2000 )
          v7 = (v6 < AvailablePagesBelowPriority + 0x2000 + AvailablePagesBelowPriority) + 2;
        else
          v7 = 4;
      }
    }
  }
  if ( (unsigned int)KeQueryEffectiveBasePriorityThread(*(_QWORD *)(a1 + 1104)) != v4 )
    KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 1104), v4);
  if ( v3 )
    KeSetEvent((PRKEVENT)(a1 + 1112), 0, 0);
  if ( dword_140304FA0 != v7 || v7 <= 0 )
  {
    dword_140304FA0 = v7;
    _InterlockedOr(v8, 0);
    SMKM_STORE_MGR<SM_TRAITS>::SmUpdateMemoryConditions(&SmGlobals, (unsigned int)v7);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
