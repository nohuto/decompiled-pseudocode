/*
 * XREFs of ACPIInitializeWorker @ 0x1C00A8D2C
 * Callers:
 *     DriverEntry @ 0x1C00A8520 (DriverEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS ACPIInitializeWorker()
{
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF
  void *ThreadHandle; // [rsp+80h] [rbp+8h] BYREF
  PVOID Object; // [rsp+88h] [rbp+10h] BYREF

  KeInitializeSpinLock(&ACPIWorkerQueueSpinLock);
  ACPIWorkItem.Parameter = 0LL;
  ACPIWorkItem.List.Flink = 0LL;
  ACPIWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ACPIDeviceWorkerThread;
  qword_1C00737D8 = (__int64)&ACPIDeviceWorkQueue;
  ACPIDeviceWorkQueue = (__int64)&ACPIDeviceWorkQueue;
  KeInitializeEvent(&ACPIProcessWorkQueueEvent, NotificationEvent, 0);
  KeInitializeEvent(&ACPITerminateEvent, NotificationEvent, 0);
  memset(&ObjectAttributes.RootDirectory, 0, 20);
  qword_1C00737C8 = (__int64)&ACPIWorkQueue;
  ACPIWorkQueue = (__int64)&ACPIWorkQueue;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( PsCreateSystemThread(
         &ThreadHandle,
         0x1FFFFFu,
         &ObjectAttributes,
         0LL,
         0LL,
         (PKSTART_ROUTINE)ACPIWorkerThread,
         0LL) )
  {
    KeBugCheckEx(0xA3u, 1uLL, 0xE0062uLL, 0LL, 0LL);
  }
  if ( ObReferenceObjectByHandle(ThreadHandle, 0x1FFFFFu, 0LL, 0, &Object, 0LL) )
    KeBugCheckEx(0xA3u, 1uLL, 0xE006EuLL, 0LL, 0LL);
  return ZwClose(ThreadHandle);
}
