/*
 * XREFs of IopInsertLegacyBusDeviceNode @ 0x14054214C
 * Callers:
 *     PipCallDriverAddDevice @ 0x1404E68A0 (PipCallDriverAddDevice.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeReleaseSemaphore @ 0x140084230 (KeReleaseSemaphore.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 */

void __fastcall IopInsertLegacyBusDeviceNode(__int64 a1, unsigned int a2, unsigned int a3)
{
  int v4; // ebx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v7; // rcx
  _QWORD *i; // rdx
  unsigned int v9; // eax

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
      for ( i = (_QWORD *)*v7; i != v7; i = (_QWORD *)*i )
      {
        v9 = *((_DWORD *)i - 43);
        if ( v9 > a3 )
          break;
        if ( v9 == a3 )
          goto LABEL_11;
      }
      *(_QWORD *)(a1 + 632) = i[1];
      *(_QWORD *)(a1 + 624) = i;
      *(_QWORD *)i[1] = a1 + 624;
      i[1] = a1 + 624;
LABEL_11:
      KeReleaseSemaphore(&PpRegistrySemaphore, 0, 1, 0);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    }
  }
}
