/*
 * XREFs of RegisterIdleComplete @ 0x1C0014C00
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C0001A20 (RegisterKernelIdleStates.c)
 *     RegisterVmIdleStates @ 0x1C001E27C (RegisterVmIdleStates.c)
 * Callees:
 *     PepRegisterSpmSettings @ 0x1C00177C4 (PepRegisterSpmSettings.c)
 *     RegisterKernelCoordinatedStates @ 0x1C0020AD4 (RegisterKernelCoordinatedStates.c)
 *     RegisterKernelPlatformStates @ 0x1C00217CC (RegisterKernelPlatformStates.c)
 */

void __fastcall RegisterIdleComplete(__int64 a1)
{
  struct _IO_WORKITEM *WorkItem; // rax

  if ( ++dword_1C000F218 == dword_1C000ECF4 )
  {
    IoWorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
    if ( IoWorkItem )
    {
      if ( (*(_QWORD *)(a1 + 248) & 0x200000200LL) != 0 )
      {
        RegisterKernelCoordinatedStates(a1);
        if ( (*(_QWORD *)(a1 + 248) & 0x200000200LL) != 0 && !qword_1C000F230 )
          RegisterKernelPlatformStates(a1);
      }
      PepRegisterSpmSettings(a1);
      WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
      if ( WorkItem )
        IoQueueWorkItem(WorkItem, PepRegisterBootVetoes, CriticalWorkQueue, WorkItem);
    }
  }
}
