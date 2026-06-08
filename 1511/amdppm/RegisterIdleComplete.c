/*
 * XREFs of RegisterIdleComplete @ 0x1C0016230
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C0002AA0 (RegisterKernelIdleStates.c)
 *     RegisterVmIdleStates @ 0x1C001AF54 (RegisterVmIdleStates.c)
 * Callees:
 *     RegisterKernelPlatformStates @ 0x1C00162D4 (RegisterKernelPlatformStates.c)
 *     RegisterKernelCoordinatedStates @ 0x1C001657C (RegisterKernelCoordinatedStates.c)
 *     PepRegisterSpmSettings @ 0x1C001C744 (PepRegisterSpmSettings.c)
 */

void __fastcall RegisterIdleComplete(__int64 a1)
{
  struct _IO_WORKITEM *WorkItem; // rax

  if ( ++dword_1C0009870 == dword_1C00093A4 )
  {
    IoWorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
    if ( IoWorkItem )
    {
      if ( (*(_QWORD *)(a1 + 248) & 0x200000200LL) != 0 )
      {
        RegisterKernelCoordinatedStates(a1);
        if ( (*(_QWORD *)(a1 + 248) & 0x200000200LL) != 0 && !qword_1C0009888 )
          RegisterKernelPlatformStates(a1);
      }
      PepRegisterSpmSettings(a1);
      WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
      if ( WorkItem )
        IoQueueWorkItem(WorkItem, PepRegisterBootVetoes, CriticalWorkQueue, WorkItem);
    }
  }
}
