/*
 * XREFs of DrvUpdateGraphicsDeviceList @ 0x1C00163D0
 * Callers:
 *     UpdateGraphicsDeviceList @ 0x1C001611C (UpdateGraphicsDeviceList.c)
 *     DrvInitConsole @ 0x1C0089470 (DrvInitConsole.c)
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B1F74 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B290C (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C0016160 (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEAKPEAGKPEAJG@Z @ 0x1C0037320 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     PALLOCMEM2 @ 0x1C0037A4C (PALLOCMEM2.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00541D4 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     bSetDeviceSessionUsage @ 0x1C005E280 (bSetDeviceSessionUsage.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C005F3FC (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     GreDeviceIoControlEx @ 0x1C005FB00 (GreDeviceIoControlEx.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C005FDC0 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvCleanupOneGraphicsDevice @ 0x1C006E340 (DrvCleanupOneGraphicsDevice.c)
 *     ?DrvAddAdapterLuid@@YAJU_LUID@@@Z @ 0x1C006E3E8 (-DrvAddAdapterLuid@@YAJU_LUID@@@Z.c)
 *     ?DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C007CAB4 (-DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?DrvSortGraphicsDeviceList@@YAXXZ @ 0x1C0081458 (-DrvSortGraphicsDeviceList@@YAXXZ.c)
 *     ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C0087894 (-DrvAddMirrorDriversToRemoteList@@YAHXZ.c)
 *     ?DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0088460 (-DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

__int64 __fastcall DrvUpdateGraphicsDeviceList(int a1, int a2)
{
  __int64 v2; // rsi
  __int64 v3; // r14
  int v4; // r13d
  __int64 v5; // rax
  char v6; // di
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int64 i; // rcx
  __int64 v10; // rax
  int v12; // eax
  struct tagGRAPHICS_DEVICE *v13; // rsi
  wchar_t *v14; // rdi
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rbx
  int v19; // r15d
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rdi
  int v23; // eax
  struct _DEVICE_OBJECT *v24; // rcx
  __int64 v25; // rax
  int v26; // esi
  struct _DEVICE_OBJECT *v27; // r12
  __int64 v28; // rdi
  __int64 v29; // r9
  __int64 v30; // r8
  PVOID v31; // rdx
  wchar_t *v32; // rcx
  __int64 v33; // r9
  bool v34; // zf
  __int64 v35; // rax
  wchar_t *v36; // rdx
  __int64 v37; // r9
  __int64 v38; // r8
  wchar_t *v39; // rcx
  unsigned int v40; // r8d
  int v41; // edx
  unsigned int v42; // edx
  __int64 v43; // rax
  void *RegistryHandleFromDeviceMap; // rax
  __int64 v45; // rax
  void *v46; // rax
  int updated; // eax
  __int64 v48; // rax
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  struct _DEVICE_OBJECT *v52; // rcx
  __int64 v53; // r9
  __int64 v54; // rax
  PVOID Environment; // [rsp+20h] [rbp-E0h]
  int v56; // [rsp+30h] [rbp-D0h]
  char v57; // [rsp+40h] [rbp-C0h]
  NTSTATUS v58; // [rsp+44h] [rbp-BCh] BYREF
  int v59; // [rsp+48h] [rbp-B8h]
  PVOID v60; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v61; // [rsp+58h] [rbp-A8h] BYREF
  void *DeviceRegKey; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v63; // [rsp+68h] [rbp-98h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+70h] [rbp-90h] BYREF
  PFILE_OBJECT FileObject; // [rsp+78h] [rbp-88h] BYREF
  _QWORD InputBuffer[5]; // [rsp+80h] [rbp-80h] BYREF
  PVOID P; // [rsp+A8h] [rbp-58h] BYREF
  _DWORD v68[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v69; // [rsp+B8h] [rbp-48h]
  __int64 v70; // [rsp+C0h] [rbp-40h]
  struct _UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-38h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v73; // [rsp+118h] [rbp+18h]
  int v74; // [rsp+120h] [rbp+20h]
  _BYTE v75[40]; // [rsp+128h] [rbp+28h] BYREF

  v2 = a1;
  v3 = a2;
  v59 = a1;
  v63 = 0;
  DeviceObject = 0LL;
  v4 = 1;
  DeviceRegKey = 0LL;
  v5 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v5 + 24) = v2;
  *(_QWORD *)(v5 + 32) = v3;
  WdLogEvent5_WdEvent(v5);
  v57 = 0;
  v6 = 0;
  if ( (_DWORD)v3 )
  {
    gcNextGlobalDeviceNumber = WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey;
    gpGraphicsDeviceList = (wchar_t *)gpLocalGraphicsDeviceList;
    gpGraphicsDeviceListLast = gpLocalGraphicsDeviceListLast;
    gcNextGlobalPhysicalOutputNumber = gcLocalNextGlobalPhysicalOutputNumber;
    gcNextGlobalVirtualOutputNumber = gcLocalNextGlobalVirtualOutputNumber;
    QueryTable.Name = L"MaxObjectNumber";
    QueryTable.EntryContext = &v63;
    QueryTable.DefaultData = &v61;
    LODWORD(v61) = 0;
    QueryTable.QueryRoutine = 0LL;
    QueryTable.Flags = 288;
    QueryTable.DefaultType = 67108868;
    QueryTable.DefaultLength = 4;
    v73 = 0LL;
    v74 = 0;
    memset(v75, 0, sizeof(v75));
    RtlQueryRegistryValues(4u, L"VIDEO", &QueryTable, 0LL, 0LL);
  }
  else
  {
    gcNextGlobalDeviceNumber = gcRemoteNextGlobalDeviceNumber;
    gpGraphicsDeviceList = (wchar_t *)gpRemoteGraphicsDeviceList;
    gpGraphicsDeviceListLast = gpRemoteGraphicsDeviceListLast;
    gcNextGlobalPhysicalOutputNumber = gcRemoteNextGlobalPhysicalOutputNumber;
    gcNextGlobalVirtualOutputNumber = gcRemoteNextGlobalVirtualOutputNumber;
    if ( gProtocolType != -1 )
      v63 = gRemoteContext - 1;
    if ( dword_1C011BC70 )
    {
      updated = DrvUpdateRemoteAdapterInfo(0LL);
      if ( updated < 0 )
        return 0LL;
    }
  }
  while ( 2 )
  {
    if ( gProtocolType != -1 && gcNextGlobalDeviceNumber <= v63 )
    {
      if ( (_DWORD)v2 )
      {
        if ( (_DWORD)v3 )
        {
          v12 = StringCchPrintfW(
                  (wchar_t *)&QueryTable,
                  0x32uLL,
                  L"\\Device\\Video%d",
                  (unsigned int)gcNextGlobalDeviceNumber);
        }
        else
        {
          LODWORD(Environment) = gcNextGlobalDeviceNumber;
          v12 = StringCchPrintfW((wchar_t *)&QueryTable, 0x32uLL, L"\\Device\\%s%d", qword_1C011BC68, Environment);
        }
        if ( v12 >= 0 )
        {
          v13 = gpRemoteGraphicsDeviceListLast;
          v14 = gpGraphicsDeviceList;
          if ( (_DWORD)v3 )
            v13 = gpLocalGraphicsDeviceListLast;
          while ( v14 )
          {
            if ( !wcsncmp((const wchar_t *)&QueryTable, v14, 0x40uLL) )
              goto LABEL_79;
            if ( v14 == (wchar_t *)v13 )
              break;
            v14 = (wchar_t *)*((_QWORD *)v14 + 16);
          }
          RtlInitUnicodeString(&DestinationString, (PCWSTR)&QueryTable);
          DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject);
          v17 = DeviceObjectPointer;
          if ( DeviceObjectPointer < 0 )
          {
            if ( (_DWORD)v3 || gRemoteContext != 1 )
            {
              v35 = WdLogNewEntry5_WdTrace(v16);
              *(_QWORD *)(v35 + 24) = v17;
              WdLogEvent5_WdTrace(v35);
LABEL_79:
              ++gcNextGlobalDeviceNumber;
              goto LABEL_80;
            }
            FileObject = ::FileObject;
            if ( !::FileObject
              || (RelatedDeviceObject = IoGetRelatedDeviceObject(::FileObject),
                  DeviceObject = RelatedDeviceObject,
                  !FileObject)
              || !RelatedDeviceObject )
            {
              v6 = v57;
LABEL_86:
              v39 = gpGraphicsDeviceList;
              v40 = 0;
              while ( v39 )
              {
                v41 = *((_DWORD *)v39 + 40);
                if ( (v41 & 0x4000000) != 0 )
                {
                  v42 = v41 & 0xFFFFFFFB;
                  *((_DWORD *)v39 + 40) = v42;
                  *((_DWORD *)v39 + 69) = v40 < gRemoteContext;
                  if ( v40 == dword_1C011BC34 )
                    *((_DWORD *)v39 + 40) = v42 | 4;
                  ++v40;
                }
                v39 = (wchar_t *)*((_QWORD *)v39 + 16);
              }
              goto LABEL_6;
            }
            FileObject = 0LL;
          }
          v6 = v57;
          v18 = PALLOCMEM2(0x140uLL);
          LODWORD(v2) = v59;
          if ( !v18 )
            continue;
          *(_DWORD *)(v18 + 224) = 0;
          *(_QWORD *)(v18 + 232) = 0LL;
          *(_QWORD *)(v18 + 136) = DeviceObject;
          *(_WORD *)(v18 + 248) = gProtocolType;
          *(_QWORD *)(v18 + 288) = 0LL;
          if ( !(_DWORD)v3 )
            *(_DWORD *)(v18 + 160) |= 0x4000000u;
          *(_QWORD *)(v18 + 240) = FileObject;
          if ( (_DWORD)v3 )
            *(_DWORD *)(v18 + 276) = 0;
          v19 = 0;
          if ( (_DWORD)v3 )
          {
            memset(InputBuffer, 0, sizeof(InputBuffer));
            InputBuffer[1] = VideoPortCallout;
            InputBuffer[0] = v18;
            v20 = GreDeviceIoControlEx(
                    *(PDEVICE_OBJECT *)(v18 + 136),
                    0x23201Fu,
                    InputBuffer,
                    0x28u,
                    InputBuffer,
                    0x28u,
                    (__int64)&v61,
                    1u);
            v22 = v20;
            if ( v20 < 0 )
            {
              v50 = WdLogNewEntry5_WdTrace(v21);
              *(_QWORD *)(v50 + 24) = v22;
              WdLogEvent5_WdTrace(v50);
LABEL_134:
              DrvCleanupOneGraphicsDevice(v18);
              goto LABEL_79;
            }
            if ( LODWORD(InputBuffer[2]) )
              *(_DWORD *)(v18 + 160) |= 0x40000000u;
            v23 = InputBuffer[4];
            if ( (InputBuffer[4] & 1) != 0 )
            {
              *(_DWORD *)(v18 + 160) |= 0x20u;
              v23 = InputBuffer[4];
            }
            if ( (v23 & 0xC0000000) != 0 )
            {
              *(_DWORD *)(v18 + 160) |= 0x20000000u;
              v23 = InputBuffer[4];
              if ( SLODWORD(InputBuffer[4]) < 0 )
              {
                *(_DWORD *)(v18 + 160) |= 0x400000u;
                v23 = InputBuffer[4];
              }
            }
            if ( (v23 & 0x20000000) != 0 )
              *(_DWORD *)(v18 + 160) |= 0x100000u;
            v24 = *(struct _DEVICE_OBJECT **)(v18 + 136);
            *(_QWORD *)(v18 + 144) = InputBuffer[3];
            *(_DWORD *)(v18 + 272) = 0;
            if ( (int)GreDeviceIoControlEx(v24, 0x232033u, 0LL, 0, v68, 0x18u, (__int64)&v61, 1u) >= 0 )
            {
              if ( v68[0] != 2 )
              {
                v51 = ((__int64 (*)(void))WdLogNewEntry5_WdAssertion)();
                WdLogEvent5_WdAssertion(v51);
              }
              v25 = v69;
              if ( v69 )
              {
                *(_DWORD *)(v18 + 160) |= 0x800000u;
                *(_QWORD *)(v18 + 256) = v25;
                *(_DWORD *)(v18 + 272) = v68[1];
                *(_QWORD *)(v18 + 264) = v70;
                goto LABEL_42;
              }
              goto LABEL_134;
            }
          }
          else
          {
            *(_QWORD *)(v18 + 264) = 0xFFFFFFFFLL;
            *(_DWORD *)(v18 + 272) = gcNextGlobalDeviceNumber;
            *(_QWORD *)(v18 + 256) = 0LL;
          }
LABEL_42:
          v58 = DrvForceChildDeviceReenumeration(DeviceObject, (struct _DEVICE_RELATIONS **)&P);
          v26 = v58;
          if ( v58 < 0 )
          {
            if ( (*(_DWORD *)(v18 + 160) & 0x20000000) != 0 )
            {
              v52 = *(struct _DEVICE_OBJECT **)(v18 + 144);
              if ( v52 )
              {
                v58 = IoOpenDeviceRegistryKey(v52, 2u, 0x2000000u, &DeviceRegKey);
                v26 = v58;
                if ( v58 >= 0 )
                {
                  DrvGetDeviceConfigurationInformation((PVOID)v18, (PCWSTR)DeviceRegKey, 1);
                  ZwClose(DeviceRegKey);
                }
              }
            }
          }
          else
          {
            v27 = (struct _DEVICE_OBJECT *)*((_QWORD *)P + 1);
            ExFreePoolWithTag(P, 0);
            v58 = IoOpenDeviceRegistryKey(v27, 2u, 0x2000000u, &DeviceRegKey);
            v26 = v58;
            if ( v58 >= 0 )
            {
              v60 = 0LL;
              LODWORD(v28) = 0;
              if ( (int)GreDeviceIoControlEx(DeviceObject, 0x23201Bu, 0LL, 0, &v60, 8u, (__int64)&v61, 1u) >= 0 )
              {
                if ( v60 )
                {
                  v19 = 1;
                  if ( (*(_DWORD *)v60 & 0x20000000) != 0 )
                  {
                    do
                      v28 = (unsigned int)(v28 + 1);
                    while ( (*((_DWORD *)v60 + 5 * v28) & 0x20000000) != 0 );
                  }
                }
              }
              DrvGetDeviceConfigurationInformation((PVOID)v18, (PCWSTR)DeviceRegKey, 1);
              if ( v19 )
              {
                if ( (_DWORD)v28 )
                {
                  *(_DWORD *)(v18 + 224) = v28;
                  *(_QWORD *)(v18 + 232) = PALLOCMEM2((unsigned int)(20 * v28));
                  v29 = (unsigned int)v28;
                  v30 = 0LL;
                  do
                  {
                    *(_DWORD *)(v30 + *(_QWORD *)(v18 + 232)) = 0;
                    v31 = v60;
                    if ( (*(_DWORD *)((_BYTE *)v60 + v30) & 1) != 0 )
                    {
                      *(_DWORD *)(*(_QWORD *)(v18 + 232) + v30) |= 1u;
                      v31 = v60;
                    }
                    if ( (*(_DWORD *)((_BYTE *)v31 + v30) & 2) == 0 )
                    {
                      *(_DWORD *)(*(_QWORD *)(v18 + 232) + v30) |= 2u;
                      v31 = v60;
                    }
                    if ( *(int *)((char *)v31 + v30) >= 0 )
                    {
                      *(_DWORD *)(*(_QWORD *)(v18 + 232) + v30) |= 0x80000000;
                      v31 = v60;
                    }
                    if ( (*(_DWORD *)((_BYTE *)v31 + v30) & 0x40000000) == 0 )
                    {
                      *(_DWORD *)(*(_QWORD *)(v18 + 232) + v30) |= 0x40000000u;
                      v31 = v60;
                    }
                    *(_DWORD *)(*(_QWORD *)(v18 + 232) + v30 + 4) = *(_DWORD *)((char *)v31 + v30 + 4);
                    *(_QWORD *)(*(_QWORD *)(v18 + 232) + v30 + 8) = *(_QWORD *)((char *)v60 + v30 + 8);
                    *(_BYTE *)(*(_QWORD *)(v18 + 232) + v30 + 16) = *((_BYTE *)v60 + v30 + 16);
                    v30 += 20LL;
                    --v29;
                  }
                  while ( v29 );
                }
                ExFreePoolWithTag(v60, 0);
              }
              ZwClose(DeviceRegKey);
            }
            ObfDereferenceObject(v27);
          }
          swprintf_s((wchar_t *)v18, 0x20uLL, (const wchar_t *)&QueryTable);
          ++gcNextGlobalDeviceNumber;
          if ( v26 < 0 )
          {
            LOWORD(v56) = gProtocolType;
            RegistryHandleFromDeviceMap = (void *)DrvGetRegistryHandleFromDeviceMap(v18, 0LL, 0LL, 0LL, 0, &v58, v56);
            v26 = v58;
            DeviceRegKey = RegistryHandleFromDeviceMap;
            if ( v58 < 0 )
            {
LABEL_65:
              v32 = (wchar_t *)(v18 + 64);
              if ( (*(_DWORD *)(v18 + 160) & 8) != 0 )
              {
                v53 = gcNextGlobalVirtualOutputNumber++;
                swprintf_s(v32, 0x20uLL, L"\\\\.\\DISPLAYV%d", v53);
              }
              else
              {
                v33 = gcNextGlobalPhysicalOutputNumber++;
                swprintf_s(v32, 0x20uLL, L"\\\\.\\DISPLAY%d", v33);
              }
              if ( (unsigned int)DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)v18) )
                *(_DWORD *)(v18 + 160) &= ~0x80000u;
              else
                *(_DWORD *)(v18 + 160) |= 0x80000u;
              if ( (unsigned int)bSetDeviceSessionUsage(v18, 1LL) )
              {
                if ( (_DWORD)v3 )
                {
LABEL_71:
                  if ( gpGraphicsDeviceList )
                    *((_QWORD *)gpGraphicsDeviceListLast + 16) = v18;
                  else
                    gpGraphicsDeviceList = (wchar_t *)v18;
                  v34 = (*(_DWORD *)(v18 + 160) & 0x800000) == 0;
                  gpGraphicsDeviceListLast = (struct tagGRAPHICS_DEVICE *)v18;
                  if ( !v34 )
                    DrvAddAdapterLuid(*(struct _LUID *)(v18 + 264));
                  v6 = 1;
                  v57 = 1;
                  goto LABEL_76;
                }
                goto LABEL_117;
              }
              if ( !(_DWORD)v3 )
              {
LABEL_117:
                *(_QWORD *)(v18 + 296) = 0LL;
                *(_QWORD *)(v18 + 304) = 0LL;
                *(_QWORD *)(v18 + 312) = 0LL;
                if ( (int)((__int64 (*)(void))qword_1C011B5C0)() >= 0 )
                  DrvUpdateRemoteAdapterInfo((struct tagGRAPHICS_DEVICE *)v18);
                if ( v26 >= 0 )
                  goto LABEL_71;
                DrvCleanupOneGraphicsDevice(v18);
                --gcNextGlobalPhysicalOutputNumber;
                v4 = 0;
                v6 = v57;
LABEL_76:
                LODWORD(v2) = v59;
                continue;
              }
              DrvCleanupOneGraphicsDevice(v18);
LABEL_80:
              v6 = v57;
              goto LABEL_76;
            }
            DrvGetDeviceConfigurationInformation((PVOID)v18, (PCWSTR)RegistryHandleFromDeviceMap, 0);
            ZwClose(DeviceRegKey);
          }
          if ( !*(_QWORD *)(v18 + 216) )
          {
            v45 = PALLOCMEM2(0x20uLL);
            *(_QWORD *)(v18 + 216) = v45;
            if ( v45 )
            {
              LOWORD(v56) = gProtocolType;
              v46 = (void *)DrvGetRegistryHandleFromDeviceMap(v18, 0LL, 0LL, v45, 16, &v58, v56);
              DeviceRegKey = v46;
              if ( v46 )
                ZwClose(v46);
              v26 = v58;
            }
            else
            {
              v26 = -1073741670;
            }
          }
          goto LABEL_65;
        }
      }
      else
      {
        v48 = WdLogNewEntry5_WdTrace(0xFFFFLL);
        WdLogEvent5_WdTrace(v48);
      }
      return 0LL;
    }
    break;
  }
  if ( !(_DWORD)v3 )
    goto LABEL_86;
LABEL_6:
  DrvSetDisconnectedGraphicsDevice(v3);
  v8 = WdLogNewEntry5_WdTrace(v7);
  WdLogEvent5_WdTrace(v8);
  if ( v6 )
    DrvSortGraphicsDeviceList();
  if ( (_DWORD)v3 )
  {
    WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey = gcNextGlobalDeviceNumber;
    gpLocalGraphicsDeviceList = (struct tagGRAPHICS_DEVICE *)gpGraphicsDeviceList;
    gpLocalGraphicsDeviceListLast = gpGraphicsDeviceListLast;
    gcLocalNextGlobalPhysicalOutputNumber = gcNextGlobalPhysicalOutputNumber;
    gcLocalNextGlobalVirtualOutputNumber = gcNextGlobalVirtualOutputNumber;
  }
  else
  {
    v36 = gpGraphicsDeviceList;
    v37 = 0LL;
    gcRemoteNextGlobalDeviceNumber = gcNextGlobalDeviceNumber;
    v38 = 0LL;
    gpRemoteGraphicsDeviceListLast = gpGraphicsDeviceListLast;
    gcRemoteNextGlobalPhysicalOutputNumber = gcNextGlobalPhysicalOutputNumber;
    gcRemoteNextGlobalVirtualOutputNumber = gcNextGlobalVirtualOutputNumber;
    gpRemoteGraphicsDeviceList = (struct tagGRAPHICS_DEVICE *)gpGraphicsDeviceList;
    while ( v36 )
    {
      if ( (*((_DWORD *)v36 + 40) & 0x4000000) != 0 )
      {
        i = *((unsigned int *)v36 + 68);
        v37 = (unsigned int)(v37 + 1);
        if ( (unsigned int)i > 0x10 || ((1 << i) & (unsigned int)v38) != 0 )
          goto LABEL_146;
        v38 = (1 << i) | (unsigned int)v38;
      }
      v36 = (wchar_t *)*((_QWORD *)v36 + 16);
    }
    i = (unsigned int)v37;
    if ( (_DWORD)v38 == (1 << v37) - 1 )
      goto LABEL_10;
LABEL_146:
    v54 = WdLogNewEntry5_WdAssertion(i, v36, v38, v37);
    WdLogEvent5_WdAssertion(v54);
  }
LABEL_10:
  if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
  {
    DrvAddMirrorDriversToRemoteList();
    if ( !gbVideoInitialized )
    {
      v43 = WdLogNewEntry5_WdEvent();
      WdLogEvent5_WdEvent(v43);
      if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
      {
        for ( i = (unsigned __int64)gpGraphicsDeviceList; i; i = *(_QWORD *)(i + 128) )
        {
          if ( (*(_DWORD *)(i + 160) & 8) != 0 )
            *(_DWORD *)(i + 276) = 0;
        }
      }
    }
  }
  v10 = WdLogNewEntry5_WdTrace(i);
  *(_QWORD *)(v10 + 24) = v4;
  WdLogEvent5_WdTrace(v10);
  return (unsigned int)v4;
}
