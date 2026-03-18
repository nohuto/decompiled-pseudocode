/*
 * XREFs of ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C006C948
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x1C0020D10 (DrvUpdateGraphicsDeviceList.c)
 * Callees:
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEAKPEAGKPEAJG@Z @ 0x1C00328A8 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     PALLOCMEM2 @ 0x1C004C24C (PALLOCMEM2.c)
 *     DrvCleanupOneGraphicsDevice @ 0x1C006CCB0 (DrvCleanupOneGraphicsDevice.c)
 *     ?DrvRemoveAdapterLuid@@YAJU_LUID@@@Z @ 0x1C006CD60 (-DrvRemoveAdapterLuid@@YAJU_LUID@@@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C007EF98 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C007F188 (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     ?DrvAddAdapterLuid@@YAJU_LUID@@@Z @ 0x1C0083CC0 (-DrvAddAdapterLuid@@YAJU_LUID@@@Z.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     memset @ 0x1C0085E40 (memset.c)
 *     ?DrvAddEntryToGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00B8A34 (-DrvAddEntryToGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 */

__int64 __fastcall DrvAddMirrorDriversToRemoteList(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rax
  int v9; // r14d
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  char *v17; // rdi
  __int64 v18; // r8
  WCHAR *RegistryHandleFromDeviceMap; // rbx
  wchar_t *v20; // rcx
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r9
  unsigned int v25; // [rsp+48h] [rbp-C0h] BYREF
  NTSTATUS v26; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v27; // [rsp+50h] [rbp-B8h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp-B0h] BYREF
  PFILE_OBJECT FileObject; // [rsp+60h] [rbp-A8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-A0h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+78h] [rbp-90h] BYREF
  __int64 v32; // [rsp+B0h] [rbp-58h]
  int v33; // [rsp+B8h] [rbp-50h]
  __int64 v34; // [rsp+C0h] [rbp-48h]
  _BYTE v35[32]; // [rsp+C8h] [rbp-40h] BYREF
  WCHAR SourceString[40]; // [rsp+E8h] [rbp-20h] BYREF

  v25 = 0;
  DeviceObject = 0LL;
  v2 = 0;
  LODWORD(v27) = 0;
  v3 = WdLogNewEntry5_WdEvent(a1, a2);
  WdLogEvent5_WdEvent(v3);
  QueryTable.QueryRoutine = 0LL;
  QueryTable.Name = L"MaxObjectNumber";
  QueryTable.Flags = 32;
  QueryTable.EntryContext = &v25;
  QueryTable.DefaultType = 4;
  QueryTable.DefaultData = &v27;
  QueryTable.DefaultLength = 4;
  v32 = 0LL;
  v33 = 0;
  v34 = 0LL;
  memset(v35, 0, sizeof(v35));
  v6 = 65534LL;
  if ( ((gProtocolType + 1) & 0xFFFE) == 0 )
  {
LABEL_2:
    v7 = WdLogNewEntry5_WdTrace(v6, v4, v5);
    WdLogEvent5_WdTrace(v7);
    return 0LL;
  }
  if ( !gpRemoteMirrorGraphicsDevice )
  {
    RtlQueryRegistryValues(4u, L"VIDEO", &QueryTable, 0LL, 0LL);
    while ( 1 )
    {
      v9 = 0;
      if ( (int)StringCchPrintfW(SourceString, 0x24uLL, L"\\Device\\Video%d", v2) < 0 )
        break;
      RtlInitUnicodeString(&DestinationString, SourceString);
      DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject);
      v14 = DeviceObjectPointer;
      v26 = DeviceObjectPointer;
      if ( DeviceObjectPointer < 0 )
      {
        v23 = WdLogNewEntry5_WdTrace(v12, v11, v13);
        *(_QWORD *)(v23 + 24) = v14;
        WdLogEvent5_WdTrace(v23);
        ++v2;
      }
      else
      {
        v17 = (char *)PALLOCMEM2(0x140uLL, 1986291527LL, 1);
        if ( v17 )
        {
          *((_DWORD *)v17 + 56) = 0;
          *((_QWORD *)v17 + 29) = 0LL;
          *((_DWORD *)v17 + 69) = 0;
          if ( DeviceObject )
          {
            *((_QWORD *)v17 + 17) = DeviceObject;
            *((_QWORD *)v17 + 30) = FileObject;
          }
          else
          {
            *((_QWORD *)v17 + 17) = 0LL;
            *((_QWORD *)v17 + 30) = 0LL;
          }
          *((_WORD *)v17 + 124) = gProtocolType;
          swprintf_s((wchar_t *)v17, 0x20uLL, L"\\Device\\Video%d", v2++);
          RegistryHandleFromDeviceMap = (WCHAR *)DrvGetRegistryHandleFromDeviceMap(
                                                   (unsigned __int16 *)v17,
                                                   0LL,
                                                   0LL,
                                                   0LL,
                                                   0,
                                                   &v26,
                                                   0);
          DrvGetDeviceConfigurationInformation(v17, RegistryHandleFromDeviceMap, 0);
          ZwClose(RegistryHandleFromDeviceMap);
          v20 = (wchar_t *)(v17 + 64);
          if ( (*((_DWORD *)v17 + 40) & 0x200008) == 0x200008 )
          {
            v24 = gcNextGlobalVirtualOutputNumber++;
            swprintf_s(v20, 0x20uLL, L"\\\\.\\DISPLAYV%d", v24);
            v9 = 1;
          }
          else
          {
            v21 = gcNextGlobalPhysicalOutputNumber++;
            swprintf_s(v20, 0x20uLL, L"\\\\.\\DISPLAY%d", v21);
          }
          if ( v26 >= 0 && v9 )
          {
            gpRemoteMirrorGraphicsDevice = (struct tagGRAPHICS_DEVICE *)v17;
            DrvAddEntryToGraphicsDeviceList((struct tagGRAPHICS_DEVICE *)v17);
            if ( (*((_DWORD *)v17 + 40) & 0x800000) != 0 )
              DrvAddAdapterLuid(*(struct _LUID *)(v17 + 264));
          }
          else
          {
            if ( (*((_DWORD *)v17 + 40) & 0x800000) != 0 )
              DrvRemoveAdapterLuid(*(struct _LUID *)(v17 + 264));
            DrvCleanupOneGraphicsDevice(v17);
            --gcNextGlobalPhysicalOutputNumber;
          }
        }
      }
      if ( v2 > v25 )
      {
        gpRemoteGraphicsDeviceList = (struct tagGRAPHICS_DEVICE *)gpGraphicsDeviceList;
        gpRemoteGraphicsDeviceListLast = gpGraphicsDeviceListLast;
        gcRemoteNextGlobalPhysicalOutputNumber = gcNextGlobalPhysicalOutputNumber;
        gcRemoteNextGlobalVirtualOutputNumber = gcNextGlobalVirtualOutputNumber;
        v22 = WdLogNewEntry5_WdTrace(v16, v15, v18);
        *(_QWORD *)(v22 + 24) = 1LL;
        WdLogEvent5_WdTrace(v22);
        return 1LL;
      }
    }
    goto LABEL_2;
  }
  return 1LL;
}
