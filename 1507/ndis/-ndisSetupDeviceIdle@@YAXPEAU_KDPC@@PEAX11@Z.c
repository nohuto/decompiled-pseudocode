/*
 * XREFs of ?ndisSetupDeviceIdle@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C006F4E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ndisSetupDeviceIdle(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  struct _IO_REMOVE_LOCK *v4; // rbx

  v4 = (struct _IO_REMOVE_LOCK *)(DeferredContext + 192);
  DeferredContext[18] = 1;
  if ( IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)DeferredContext + 6, 0LL, &File, 1u, 0x20u) >= 0
    && PoRequestPowerIrp(*((PDEVICE_OBJECT *)DeferredContext + 3), 2u, (POWER_STATE)4, ndisSetupDxComplete, 0LL, 0LL) < 0 )
  {
    IoReleaseRemoveLockEx(v4, 0LL, 0x20u);
  }
}
