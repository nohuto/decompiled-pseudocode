/*
 * XREFs of ?DrvUpdateRemoteFxDeviceNameFromLuid@@YAJXZ @ 0x1C00B9F34
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x1C0020D10 (DrvUpdateGraphicsDeviceList.c)
 * Callees:
 *     GreDeviceIoControlEx @ 0x1C00665F0 (GreDeviceIoControlEx.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C007E44C (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C00827F4 (-DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

__int64 DrvUpdateRemoteFxDeviceNameFromLuid(void)
{
  int v0; // esi
  int v1; // ebx
  unsigned int v2; // edi
  PFILE_OBJECT FileObject; // [rsp+40h] [rbp-79h] BYREF
  _BYTE v5[4]; // [rsp+48h] [rbp-71h] BYREF
  int v6; // [rsp+4Ch] [rbp-6Dh]
  __int64 v7; // [rsp+58h] [rbp-61h]
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-59h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+70h] [rbp-49h] BYREF
  __int64 v10; // [rsp+A8h] [rbp-11h]
  int v11; // [rsp+B0h] [rbp-9h]
  __int64 v12; // [rsp+B8h] [rbp-1h]
  _BYTE v13[32]; // [rsp+C0h] [rbp+7h] BYREF
  unsigned int v14; // [rsp+120h] [rbp+67h] BYREF
  __int64 v15; // [rsp+128h] [rbp+6Fh] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+130h] [rbp+77h] BYREF
  PVOID P; // [rsp+138h] [rbp+7Fh] BYREF

  QueryTable.Name = L"MaxObjectNumber";
  P = 0LL;
  DeviceObject = 0LL;
  FileObject = 0LL;
  v14 = 0;
  QueryTable.QueryRoutine = 0LL;
  v0 = 0;
  QueryTable.Flags = 32;
  QueryTable.EntryContext = &v14;
  QueryTable.DefaultType = 0;
  QueryTable.DefaultData = 0LL;
  QueryTable.DefaultLength = 4;
  v10 = 0LL;
  v11 = 0;
  v12 = 0LL;
  memset(v13, 0, sizeof(v13));
  v1 = RtlQueryRegistryValues(4u, L"VIDEO", &QueryTable, 0LL, 0LL);
  if ( v1 >= 0 )
  {
    v2 = 0;
    while ( 1 )
    {
      v1 = RtlStringCchPrintfW(Dest, 32LL, L"\\Device\\Video%d", v2);
      if ( v1 < 0 )
        break;
      RtlInitUnicodeString(&DestinationString, Dest);
      if ( IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject) >= 0 )
      {
        v1 = GreDeviceIoControlEx(DeviceObject, 0x232033u, 0LL, 0, v5, 0x18u, &v15, 1u);
        if ( v1 >= 0 && v7 == qword_1C0102084 )
        {
          dword_1C01020D8 = v6;
          if ( (int)DrvForceChildDeviceReenumeration(DeviceObject, (struct _DEVICE_RELATIONS **)&P) >= 0 )
          {
            Object = (PVOID)*((_QWORD *)P + 1);
            ExFreePoolWithTag(P, 0);
          }
          v0 = 1;
        }
        ObfReferenceObject(DeviceObject);
        ObfDereferenceObject(FileObject);
        if ( v0 )
          goto LABEL_13;
      }
      if ( ++v2 > v14 )
      {
        v1 = -1073741772;
LABEL_13:
        if ( v1 >= 0 )
          return (unsigned int)v1;
        break;
      }
    }
  }
  memset(Dest, 0, 0x20uLL);
  if ( Object )
  {
    ObfDereferenceObject(Object);
    Object = 0LL;
  }
  dword_1C01020D8 = 0;
  return (unsigned int)v1;
}
