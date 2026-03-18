/*
 * XREFs of IopInsertLegacyBusDeviceNode @ 0x1405B8508
 * Callers:
 *     PipCallDriverAddDevice @ 0x1404E231C (PipCallDriverAddDevice.c)
 * Callees:
 *     KeReleaseSemaphore @ 0x140048A40 (KeReleaseSemaphore.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 */

void __fastcall IopInsertLegacyBusDeviceNode(__int64 a1, unsigned int a2, unsigned int a3)
{
  int v4; // ebx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v7; // rcx
  _QWORD *i; // rdx
  unsigned int v9; // eax
  __int64 v10; // rax
  struct _KTHREAD *v11; // rcx
  __int16 v12; // ax
  __int16 v13; // ax

  if ( a2 <= 0x11 )
  {
    v4 = a2;
    if ( a2 != 15 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( a2 == 2 )
        v4 = 1;
      --CurrentThread->KernelApcDisable;
      KeWaitForSingleObject(&PpRegistrySemaphore, DelayExecution, 0, 0, 0LL);
      v7 = (_QWORD *)((char *)&IopLegacyBusInformationTable + 16 * v4);
      for ( i = (_QWORD *)*v7; ; i = (_QWORD *)*i )
      {
        if ( i == v7 || (v9 = *((_DWORD *)i - 43), v9 > a3) )
        {
          v10 = i[1];
          *(_QWORD *)(a1 + 624) = i;
          *(_QWORD *)(a1 + 632) = v10;
          *(_QWORD *)i[1] = a1 + 624;
          i[1] = a1 + 624;
          KeReleaseSemaphore(&PpRegistrySemaphore, 0, 1, 0);
          v11 = KeGetCurrentThread();
          v12 = v11->KernelApcDisable + 1;
          v11->KernelApcDisable = v12;
          if ( v12 )
            return;
          goto LABEL_14;
        }
        if ( v9 == a3 )
          break;
      }
      KeReleaseSemaphore(&PpRegistrySemaphore, 0, 1, 0);
      v11 = KeGetCurrentThread();
      v13 = v11->KernelApcDisable + 1;
      v11->KernelApcDisable = v13;
      if ( v13 )
        return;
LABEL_14:
      if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v11->ApcState.ApcListHead[0].Flink != &v11->152
        && !v11->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
  }
}
