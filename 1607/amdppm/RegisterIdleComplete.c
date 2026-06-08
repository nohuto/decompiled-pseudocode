/*
 * XREFs of RegisterIdleComplete @ 0x1C00179D4
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C0003830 (RegisterKernelIdleStates.c)
 *     RegisterVmIdleStates @ 0x1C001DBF4 (RegisterVmIdleStates.c)
 * Callees:
 *     RegisterKernelPlatformStates @ 0x1C0017A78 (RegisterKernelPlatformStates.c)
 *     RegisterKernelCoordinatedStates @ 0x1C0017D40 (RegisterKernelCoordinatedStates.c)
 *     PepRegisterSpmSettings @ 0x1C001CBE0 (PepRegisterSpmSettings.c)
 */

void __fastcall RegisterIdleComplete(__int64 a1)
{
  struct _IO_WORKITEM *WorkItem; // rax

  if ( ++dword_1C00098C8 == dword_1C00093A4 )
  {
    IoWorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
    if ( IoWorkItem )
    {
      if ( (*(_QWORD *)(a1 + 248) & 0x200000200LL) != 0 )
      {
        RegisterKernelCoordinatedStates(a1);
        if ( (*(_QWORD *)(a1 + 248) & 0x200000200LL) != 0 && !qword_1C00098E0 )
          RegisterKernelPlatformStates(a1);
      }
      PepRegisterSpmSettings(a1);
      WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
      if ( WorkItem )
        IoQueueWorkItem(WorkItem, (PIO_WORKITEM_ROUTINE)PepRegisterBootVetoes, CriticalWorkQueue, WorkItem);
    }
  }
}
