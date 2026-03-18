/*
 * XREFs of PopFxCreateEmergencyWorkerThread @ 0x1405BC428
 * Callers:
 *     PopFxRegisterPluginEx @ 0x14023891C (PopFxRegisterPluginEx.c)
 *     PoFxInitPowerManagement @ 0x1407E2C8C (PoFxInitPowerManagement.c)
 * Callees:
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     PsCreateSystemThread @ 0x1404F923C (PsCreateSystemThread.c)
 */

__int64 __fastcall PopFxCreateEmergencyWorkerThread(void *a1)
{
  NTSTATUS v1; // ebx
  OBJECT_ATTRIBUTES v3; // [rsp+40h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+10h] BYREF

  v3.Length = 48;
  v3.RootDirectory = 0LL;
  v3.Attributes = 512;
  v3.ObjectName = 0LL;
  *(_OWORD *)&v3.SecurityDescriptor = 0LL;
  v1 = PsCreateSystemThread(&Handle, 0x1FFFFFu, &v3, 0LL, 0LL, (PKSTART_ROUTINE)PopFxEmergencyWorker, a1);
  if ( v1 >= 0 )
    ZwClose(Handle);
  return (unsigned int)v1;
}
