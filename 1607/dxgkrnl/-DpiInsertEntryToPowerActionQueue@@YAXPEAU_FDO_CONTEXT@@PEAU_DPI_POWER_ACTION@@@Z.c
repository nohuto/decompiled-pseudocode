/*
 * XREFs of ?DpiInsertEntryToPowerActionQueue@@YAXPEAU_FDO_CONTEXT@@PEAU_DPI_POWER_ACTION@@@Z @ 0x1C000EF88
 * Callers:
 *     DpiRequestIoPowerState @ 0x1C00E0898 (DpiRequestIoPowerState.c)
 * Callees:
 *     <none>
 */

void __fastcall DpiInsertEntryToPowerActionQueue(KSPIN_LOCK *a1, struct _DPI_POWER_ACTION *a2)
{
  char *v4; // rbx
  char **v5; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(a1 + 483, &LockHandle);
  v4 = (char *)(a1 + 469);
  v5 = (char **)*((_QWORD *)v4 + 1);
  if ( *v5 != v4 )
    __fastfail(3u);
  *(_QWORD *)a2 = v4;
  *((_QWORD *)a2 + 1) = v5;
  *v5 = (char *)a2;
  *((_QWORD *)v4 + 1) = a2;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
