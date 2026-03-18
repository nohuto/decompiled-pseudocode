/*
 * XREFs of ?DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00873A0
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x1C001E650 (DrvUpdateGraphicsDeviceList.c)
 *     DrvUpdateRemoteGraphicsDeviceList @ 0x1C00BE368 (DrvUpdateRemoteGraphicsDeviceList.c)
 * Callees:
 *     GreDeviceIoControlEx @ 0x1C0061C70 (GreDeviceIoControlEx.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00715F0 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C0079250 (-DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

__int64 __fastcall DrvUpdateRemoteAdapterInfo(struct tagGRAPHICS_DEVICE *a1)
{
  int v1; // ebx
  int v2; // esi
  unsigned int v3; // edi
  PVOID P; // [rsp+40h] [rbp-79h] BYREF
  PFILE_OBJECT FileObject; // [rsp+48h] [rbp-71h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-69h] BYREF
  _BYTE v8[16]; // [rsp+60h] [rbp-59h] BYREF
  __int64 v9; // [rsp+70h] [rbp-49h]
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+80h] [rbp-39h] BYREF
  __int64 v11; // [rsp+B8h] [rbp-1h]
  int v12; // [rsp+C0h] [rbp+7h]
  __int64 v13; // [rsp+C8h] [rbp+Fh]
  _BYTE v14[32]; // [rsp+D0h] [rbp+17h] BYREF
  __int64 v15; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 v16; // [rsp+130h] [rbp+77h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+138h] [rbp+7Fh] BYREF

  v1 = 0;
  P = 0LL;
  v2 = 0;
  DeviceObject = 0LL;
  FileObject = 0LL;
  LODWORD(v15) = 0;
  if ( !dword_1C0104870 )
  {
    if ( Object )
      return (unsigned int)v1;
    qword_1C0104874 = *((_QWORD *)a1 + 38);
    Object = (PVOID)*((_QWORD *)a1 + 39);
  }
  QueryTable.QueryRoutine = 0LL;
  QueryTable.Flags = 288;
  QueryTable.Name = L"MaxObjectNumber";
  QueryTable.DefaultType = 0x4000000;
  QueryTable.EntryContext = &v15;
  QueryTable.DefaultData = 0LL;
  QueryTable.DefaultLength = 4;
  v11 = 0LL;
  v12 = 0;
  v13 = 0LL;
  memset(v14, 0, sizeof(v14));
  v1 = RtlQueryRegistryValues(4u, L"VIDEO", &QueryTable, 0LL, 0LL);
  if ( v1 >= 0 )
  {
    v3 = 0;
    while ( 1 )
    {
      v1 = RtlStringCchPrintfW(Dest, 32LL, L"\\Device\\Video%d", v3);
      if ( v1 < 0 )
        break;
      RtlInitUnicodeString(&DestinationString, Dest);
      if ( IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject) >= 0 )
      {
        v1 = GreDeviceIoControlEx(DeviceObject, 0x232033u, 0LL, 0, v8, 0x18u, &v16, 1u);
        if ( v1 >= 0 && v9 == qword_1C0104874 )
        {
          if ( dword_1C0104870 )
          {
            v1 = DrvForceChildDeviceReenumeration(DeviceObject, (struct _DEVICE_RELATIONS **)&P);
            if ( v1 >= 0 )
            {
              Object = (PVOID)*((_QWORD *)P + 1);
              ExFreePoolWithTag(P, 0);
            }
          }
          v2 = 1;
        }
        ObfDereferenceObject(FileObject);
        if ( v2 )
          goto LABEL_13;
      }
      if ( ++v3 > (unsigned int)v15 )
      {
        v1 = -1073741772;
LABEL_13:
        if ( v1 < 0 )
          break;
        return (unsigned int)v1;
      }
    }
  }
  memset(Dest, 0, 0x20uLL);
  if ( Object )
  {
    if ( dword_1C0104870 )
    {
      ObfDereferenceObject(Object);
    }
    else
    {
      v15 = 0LL;
      qword_1C0104874 = 0LL;
    }
    Object = 0LL;
  }
  return (unsigned int)v1;
}
