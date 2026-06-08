/*
 * XREFs of RegisterIdleComplete @ 0x1C0015AE4
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C0001B00 (RegisterKernelIdleStates.c)
 *     RegisterVmIdleStates @ 0x1C001CE9C (RegisterVmIdleStates.c)
 * Callees:
 *     PepRegisterSpmSettings @ 0x1C0015E78 (PepRegisterSpmSettings.c)
 *     RegisterKernelCoordinatedStates @ 0x1C001F784 (RegisterKernelCoordinatedStates.c)
 *     RegisterKernelPlatformStates @ 0x1C002043C (RegisterKernelPlatformStates.c)
 */

void __fastcall RegisterIdleComplete(__int64 a1)
{
  struct _IO_WORKITEM *WorkItem; // rax

  if ( ++dword_1C000E1D0 == dword_1C000DD04 )
  {
    IoWorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
    if ( IoWorkItem )
    {
      if ( (*(_QWORD *)(a1 + 248) & 0x200000200LL) != 0 )
      {
        RegisterKernelCoordinatedStates(a1);
        if ( (*(_QWORD *)(a1 + 248) & 0x200000200LL) != 0 && !qword_1C000E1E8 )
          RegisterKernelPlatformStates(a1);
      }
      PepRegisterSpmSettings(a1);
      WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
      if ( WorkItem )
        IoQueueWorkItem(WorkItem, PepRegisterBootVetoes, CriticalWorkQueue, WorkItem);
    }
  }
}
