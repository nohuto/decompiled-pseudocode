/*
 * XREFs of DpiPdoDestroyPdo @ 0x1C016D9A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DpiPdoDestroyPdo(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  PVOID DeviceExtension; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  void *v7; // rcx
  void *v8; // rcx
  __int64 v9; // rax

  DeviceExtension = DeviceObject->DeviceExtension;
  if ( *((_QWORD *)DeviceExtension + 117) )
    RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 58);
  IoFreeWorkItem(*((PIO_WORKITEM *)DeviceExtension + 115));
  ExDeleteResourceLite(*((PERESOURCE *)DeviceExtension + 21));
  v7 = (void *)*((_QWORD *)DeviceExtension + 21);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0);
    *((_QWORD *)DeviceExtension + 21) = 0LL;
  }
  v8 = (void *)*((_QWORD *)DeviceExtension + 112);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0);
    *((_QWORD *)DeviceExtension + 112) = 0LL;
  }
  v9 = WdLogNewEntry5_WdEvent(v8, v4, v5, v6);
  *(_QWORD *)(v9 + 24) = DpiPdoDestroyPdo;
  *(_QWORD *)(v9 + 32) = DeviceObject;
  WdLogEvent5_WdEvent(v9);
  IoDeleteDevice(DeviceObject);
}
