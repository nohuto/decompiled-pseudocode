/*
 * XREFs of ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C00864FC
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x1C001E650 (DrvUpdateGraphicsDeviceList.c)
 * Callees:
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEAKPEAGKPEAJG@Z @ 0x1C0020430 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     PALLOCMEM2 @ 0x1C0020C1C (PALLOCMEM2.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C006157C (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     DrvCleanupOneGraphicsDevice @ 0x1C00647B0 (DrvCleanupOneGraphicsDevice.c)
 *     ?DrvAddAdapterLuid@@YAJU_LUID@@@Z @ 0x1C0064858 (-DrvAddAdapterLuid@@YAJU_LUID@@@Z.c)
 *     ?DrvRemoveAdapterLuid@@YAJU_LUID@@@Z @ 0x1C00648DC (-DrvRemoveAdapterLuid@@YAJU_LUID@@@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0068CE4 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     memset @ 0x1C00890C0 (memset.c)
 *     ?DrvAddEntryToGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00BA944 (-DrvAddEntryToGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 */

__int64 __fastcall DrvAddMirrorDriversToRemoteList(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  int v7; // r14d
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rcx
  char *v12; // rdi
  WCHAR *RegistryHandleFromDeviceMap; // rbx
  wchar_t *v14; // rcx
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r9
  unsigned int v19; // [rsp+48h] [rbp-C0h] BYREF
  NTSTATUS v20; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v21; // [rsp+50h] [rbp-B8h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp-B0h] BYREF
  PFILE_OBJECT FileObject; // [rsp+60h] [rbp-A8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-A0h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+78h] [rbp-90h] BYREF
  __int64 v26; // [rsp+B0h] [rbp-58h]
  int v27; // [rsp+B8h] [rbp-50h]
  __int64 v28; // [rsp+C0h] [rbp-48h]
  _BYTE v29[32]; // [rsp+C8h] [rbp-40h] BYREF
  WCHAR SourceString[40]; // [rsp+E8h] [rbp-20h] BYREF

  v19 = 0;
  DeviceObject = 0LL;
  v2 = 0;
  LODWORD(v21) = 0;
  v3 = WdLogNewEntry5_WdEvent(a1, a2);
  WdLogEvent5_WdEvent(v3);
  QueryTable.QueryRoutine = 0LL;
  QueryTable.Name = L"MaxObjectNumber";
  QueryTable.Flags = 288;
  QueryTable.EntryContext = &v19;
  QueryTable.DefaultType = 67108868;
  QueryTable.DefaultData = &v21;
  QueryTable.DefaultLength = 4;
  v26 = 0LL;
  v27 = 0;
  v28 = 0LL;
  memset(v29, 0, sizeof(v29));
  v4 = 65534LL;
  if ( ((gProtocolType + 1) & 0xFFFE) == 0 )
  {
LABEL_2:
    v5 = WdLogNewEntry5_WdTrace(v4);
    WdLogEvent5_WdTrace(v5);
    return 0LL;
  }
  if ( !gpRemoteMirrorGraphicsDevice )
  {
    RtlQueryRegistryValues(4u, L"VIDEO", &QueryTable, 0LL, 0LL);
    while ( 1 )
    {
      v7 = 0;
      if ( (int)StringCchPrintfW(SourceString, 36LL, L"\\Device\\Video%d", v2) < 0 )
        break;
      RtlInitUnicodeString(&DestinationString, SourceString);
      DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject);
      v10 = DeviceObjectPointer;
      v20 = DeviceObjectPointer;
      if ( DeviceObjectPointer < 0 )
      {
        v17 = WdLogNewEntry5_WdTrace(v9);
        *(_QWORD *)(v17 + 24) = v10;
        WdLogEvent5_WdTrace(v17);
        ++v2;
      }
      else
      {
        v12 = (char *)PALLOCMEM2(0x140uLL, 1986291527LL, 1);
        if ( v12 )
        {
          *((_DWORD *)v12 + 56) = 0;
          *((_QWORD *)v12 + 29) = 0LL;
          *((_DWORD *)v12 + 69) = 0;
          if ( DeviceObject )
          {
            *((_QWORD *)v12 + 17) = DeviceObject;
            *((_QWORD *)v12 + 30) = FileObject;
          }
          else
          {
            *((_QWORD *)v12 + 17) = 0LL;
            *((_QWORD *)v12 + 30) = 0LL;
          }
          *((_WORD *)v12 + 124) = gProtocolType;
          swprintf_s((wchar_t *)v12, 0x20uLL, L"\\Device\\Video%d", v2++);
          RegistryHandleFromDeviceMap = (WCHAR *)DrvGetRegistryHandleFromDeviceMap(
                                                   (unsigned __int16 *)v12,
                                                   0,
                                                   0LL,
                                                   0LL,
                                                   0,
                                                   &v20,
                                                   0);
          DrvGetDeviceConfigurationInformation((PDEVICE_OBJECT *)v12, RegistryHandleFromDeviceMap, 0);
          ZwClose(RegistryHandleFromDeviceMap);
          v14 = (wchar_t *)(v12 + 64);
          if ( (*((_DWORD *)v12 + 40) & 0x200008) == 0x200008 )
          {
            v18 = gcNextGlobalVirtualOutputNumber++;
            swprintf_s(v14, 0x20uLL, L"\\\\.\\DISPLAYV%d", v18);
            v7 = 1;
          }
          else
          {
            v15 = gcNextGlobalPhysicalOutputNumber++;
            swprintf_s(v14, 0x20uLL, L"\\\\.\\DISPLAY%d", v15);
          }
          if ( v20 >= 0 && v7 )
          {
            gpRemoteMirrorGraphicsDevice = (struct tagGRAPHICS_DEVICE *)v12;
            DrvAddEntryToGraphicsDeviceList((struct tagGRAPHICS_DEVICE *)v12);
            if ( (*((_DWORD *)v12 + 40) & 0x800000) != 0 )
              DrvAddAdapterLuid(*(struct _LUID *)(v12 + 264));
          }
          else
          {
            if ( (*((_DWORD *)v12 + 40) & 0x800000) != 0 )
              DrvRemoveAdapterLuid(*(struct _LUID *)(v12 + 264));
            DrvCleanupOneGraphicsDevice((__int64)v12);
            --gcNextGlobalPhysicalOutputNumber;
          }
        }
      }
      if ( v2 > v19 )
      {
        gpRemoteGraphicsDeviceList = (struct tagGRAPHICS_DEVICE *)gpGraphicsDeviceList;
        gpRemoteGraphicsDeviceListLast = gpGraphicsDeviceListLast;
        gcRemoteNextGlobalPhysicalOutputNumber = gcNextGlobalPhysicalOutputNumber;
        gcRemoteNextGlobalVirtualOutputNumber = gcNextGlobalVirtualOutputNumber;
        v16 = WdLogNewEntry5_WdTrace(v11);
        *(_QWORD *)(v16 + 24) = 1LL;
        WdLogEvent5_WdTrace(v16);
        return 1LL;
      }
    }
    goto LABEL_2;
  }
  return 1LL;
}
