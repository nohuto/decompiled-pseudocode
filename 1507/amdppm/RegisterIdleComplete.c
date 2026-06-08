/*
 * XREFs of RegisterIdleComplete @ 0x1C0016218
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C0002E50 (RegisterKernelIdleStates.c)
 *     RegisterVmIdleStates @ 0x1C001AF74 (RegisterVmIdleStates.c)
 * Callees:
 *     RegisterKernelPlatformStates @ 0x1C00162BC (RegisterKernelPlatformStates.c)
 *     RegisterKernelCoordinatedStates @ 0x1C0016564 (RegisterKernelCoordinatedStates.c)
 *     PepRegisterSpmSettings @ 0x1C001C6D8 (PepRegisterSpmSettings.c)
 */

void __fastcall RegisterIdleComplete(__int64 a1)
{
  struct _IO_WORKITEM *WorkItem; // rax

  if ( ++dword_1C0009860 == dword_1C0009394 )
  {
    IoWorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
    if ( IoWorkItem )
    {
      if ( (*(_QWORD *)(a1 + 248) & 0x200000200LL) != 0 )
      {
        RegisterKernelCoordinatedStates(a1);
        if ( (*(_QWORD *)(a1 + 248) & 0x200000200LL) != 0 && !qword_1C0009878 )
          RegisterKernelPlatformStates(a1);
      }
      PepRegisterSpmSettings(a1);
      WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
      if ( WorkItem )
        IoQueueWorkItem(WorkItem, PepRegisterBootVetoes, CriticalWorkQueue, WorkItem);
    }
  }
}
