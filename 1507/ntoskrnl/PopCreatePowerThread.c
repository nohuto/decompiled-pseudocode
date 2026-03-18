/*
 * XREFs of PopCreatePowerThread @ 0x140159900
 * Callers:
 *     PopCreateDynamicIrpWorker @ 0x140159898 (PopCreateDynamicIrpWorker.c)
 *     PopInitializeIrpWorkers @ 0x1407E6434 (PopInitializeIrpWorkers.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x140009C20 (KeSetActualBasePriorityThread.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     PsCreateSystemThread @ 0x1404F923C (PsCreateSystemThread.c)
 */

NTSTATUS __fastcall PopCreatePowerThread(KSTART_ROUTINE *a1, void *a2)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // ebx
  OBJECT_ATTRIBUTES v4; // [rsp+40h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+18h] BYREF
  PVOID Object; // [rsp+98h] [rbp+20h] BYREF

  v4.RootDirectory = 0LL;
  v4.ObjectName = 0LL;
  v4.Length = 48;
  v4.Attributes = 512;
  *(_OWORD *)&v4.SecurityDescriptor = 0LL;
  result = PsCreateSystemThread(&Handle, 0x1FFFFFu, &v4, 0LL, 0LL, a1, a2);
  if ( result >= 0 )
  {
    v3 = ObReferenceObjectByHandle(Handle, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
    ZwClose(Handle);
    if ( v3 >= 0 )
    {
      KeSetActualBasePriorityThread((__int64)Object, 0xDu);
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
    }
    return 0;
  }
  return result;
}
