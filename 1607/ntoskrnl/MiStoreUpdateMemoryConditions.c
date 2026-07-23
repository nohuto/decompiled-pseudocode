/*
 * XREFs of MiStoreUpdateMemoryConditions @ 0x1400BCED8
 * Callers:
 *     MiAdjustModifiedPageLoad @ 0x1400BC8E0 (MiAdjustModifiedPageLoad.c)
 *     MiModifiedPageWriter @ 0x140142A78 (MiModifiedPageWriter.c)
 * Callees:
 *     ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@@Z @ 0x1400032A8 (-SmUpdateMemoryConditions@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@@Z.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeQueryEffectiveBasePriorityThread @ 0x1400BCFC8 (KeQueryEffectiveBasePriorityThread.c)
 *     MiGetAvailablePagesBelowPriority @ 0x1400BE0E0 (MiGetAvailablePagesBelowPriority.c)
 *     KeSetActualBasePriorityThread @ 0x1400D06E0 (KeSetActualBasePriorityThread.c)
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

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 4352), &LockHandle);
  v2 = *(_QWORD *)(a1 + 6464);
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
      if ( AvailablePagesBelowPriority < 3LL * *(_QWORD *)(*(_QWORD *)(a1 + 6248) + 2408LL) )
      {
        v7 = 2;
      }
      else
      {
        v6 = *(_QWORD *)(a1 + 7344);
        if ( v6 >= AvailablePagesBelowPriority + 0x2000 )
          v7 = (v6 < AvailablePagesBelowPriority + 0x2000 + AvailablePagesBelowPriority) + 2;
        else
          v7 = 4;
      }
    }
  }
  if ( (unsigned int)KeQueryEffectiveBasePriorityThread(*(_QWORD *)(a1 + 1088)) != v4 )
    KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 1088), v4);
  if ( v3 )
    KeSetEvent((PRKEVENT)(a1 + 1096), 0, 0);
  if ( dword_1403BF130 != v7 || v7 <= 0 )
  {
    dword_1403BF130 = v7;
    _InterlockedOr(v8, 0);
    SMKM_STORE_MGR<SM_TRAITS>::SmUpdateMemoryConditions((__int64)&SmGlobals, v7);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
