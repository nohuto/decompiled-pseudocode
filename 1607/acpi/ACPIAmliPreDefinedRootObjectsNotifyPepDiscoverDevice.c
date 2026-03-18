/*
 * XREFs of ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice @ 0x1C0005180
 * Callers:
 *     ACPIRootInitialize @ 0x1C0081114 (ACPIRootInitialize.c)
 * Callees:
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C000526C (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 *     AMLIReferenceHandleEx @ 0x1C000E210 (AMLIReferenceHandleEx.c)
 */

__int64 ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice()
{
  __int64 v0; // rsi
  __int64 v1; // rdx
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rax
  _QWORD v11[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v12; // [rsp+40h] [rbp-28h]
  struct _KEVENT Event; // [rsp+48h] [rbp-20h] BYREF

  v0 = RootDeviceExtension;
  v1 = 0LL;
  v2 = 5LL;
  do
  {
    AMLIReferenceHandleEx(*(_QWORD *)((char *)&AmliGlobalPreDefinedRootObjects + v1) + 120LL);
    *(_QWORD *)((char *)&AcpiAmliPreDefinedRootAcpiObjects + v3) = v4;
    v1 = v3 + 8;
  }
  while ( v5 != 1 );
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v6 = 0LL;
  do
  {
    v7 = *(_QWORD *)((char *)&AcpiAmliPreDefinedRootAcpiObjects + v6);
    if ( v7 == *(_QWORD *)(v0 + 712) )
    {
      v9 = *(_QWORD *)(v0 + 896);
LABEL_12:
      *(_QWORD *)((char *)&AcpiAmliPreDefinedRootNativeHandles + v6) = v9;
      goto LABEL_9;
    }
    v11[0] = 0LL;
    v11[1] = &Event;
    v12 = 3221225473LL;
    v8 = AcpiNotifyPlExtDiscoverDeviceAsync(v7, ACPIRootDeviceDiscoverDeviceCompletion, v11);
    if ( v8 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v8 = v12;
    }
    if ( v8 >= 0 )
    {
      v9 = v11[0];
      if ( v11[0] )
        goto LABEL_12;
    }
LABEL_9:
    v6 += 8LL;
    --v2;
  }
  while ( v2 );
  return 0LL;
}
