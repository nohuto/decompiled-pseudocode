/*
 * XREFs of PopFxCreateEmergencyWorkerThread @ 0x14057B3F0
 * Callers:
 *     PopFxRegisterPluginEx @ 0x140203328 (PopFxRegisterPluginEx.c)
 *     PoFxInitPowerManagement @ 0x1407B8408 (PoFxInitPowerManagement.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     PsCreateSystemThread @ 0x1403E5D3C (PsCreateSystemThread.c)
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
