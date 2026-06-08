/*
 * XREFs of RegisterIdleComplete @ 0x1C0015AE4
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C0001750 (RegisterKernelIdleStates.c)
 *     RegisterVmIdleStates @ 0x1C001CD8C (RegisterVmIdleStates.c)
 * Callees:
 *     PepRegisterSpmSettings @ 0x1C0015E78 (PepRegisterSpmSettings.c)
 *     RegisterKernelCoordinatedStates @ 0x1C001F694 (RegisterKernelCoordinatedStates.c)
 *     RegisterKernelPlatformStates @ 0x1C002034C (RegisterKernelPlatformStates.c)
 */

void __fastcall RegisterIdleComplete(__int64 a1)
{
  struct _IO_WORKITEM *WorkItem; // rax

  if ( ++dword_1C000DE90 == dword_1C000D9C4 )
  {
    IoWorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
    if ( IoWorkItem )
    {
      if ( (*(_QWORD *)(a1 + 248) & 0x200000200LL) != 0 )
      {
        RegisterKernelCoordinatedStates(a1);
        if ( (*(_QWORD *)(a1 + 248) & 0x200000200LL) != 0 && !qword_1C000DEA8 )
          RegisterKernelPlatformStates(a1);
      }
      PepRegisterSpmSettings(a1);
      WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
      if ( WorkItem )
        IoQueueWorkItem(WorkItem, PepRegisterBootVetoes, CriticalWorkQueue, WorkItem);
    }
  }
}
