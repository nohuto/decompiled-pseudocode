/*
 * XREFs of DrvUpdateGraphicsDeviceList @ 0x1C0020D10
 * Callers:
 *     UpdateGraphicsDeviceList @ 0x1C0020CC0 (UpdateGraphicsDeviceList.c)
 *     DrvInitConsole @ 0x1C007E24C (DrvInitConsole.c)
 *     ?PnpNotifyForRemoteSession@@YAJPEAX@Z @ 0x1C00A49C4 (-PnpNotifyForRemoteSession@@YAJPEAX@Z.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z @ 0x1C00A4B70 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z.c)
 * Callees:
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C001AC14 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C0021838 (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEAKPEAGKPEAJG@Z @ 0x1C00328A8 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     PALLOCMEM2 @ 0x1C004C24C (PALLOCMEM2.c)
 *     bSetDeviceSessionUsage @ 0x1C0066360 (bSetDeviceSessionUsage.c)
 *     GreDeviceIoControlEx @ 0x1C00665F0 (GreDeviceIoControlEx.c)
 *     ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C006C948 (-DrvAddMirrorDriversToRemoteList@@YAHXZ.c)
 *     DrvCleanupOneGraphicsDevice @ 0x1C006CCB0 (DrvCleanupOneGraphicsDevice.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C007EF98 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C007F188 (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     ?DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C00827F4 (-DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?DrvSortGraphicsDeviceList@@YAXXZ @ 0x1C00832D4 (-DrvSortGraphicsDeviceList@@YAXXZ.c)
 *     ?DrvAddAdapterLuid@@YAJU_LUID@@@Z @ 0x1C0083CC0 (-DrvAddAdapterLuid@@YAJU_LUID@@@Z.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0085E40 (memset.c)
 *     ?DrvUpdateRemoteFxDeviceNameFromLuid@@YAJXZ @ 0x1C00B9F34 (-DrvUpdateRemoteFxDeviceNameFromLuid@@YAJXZ.c)
 */

__int64 __fastcall DrvUpdateGraphicsDeviceList(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // r14
  int v4; // r13d
  __int64 v5; // rax
  __int64 v6; // rcx
  char v7; // di
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  wchar_t *v13; // rdx
  unsigned __int64 i; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  int v18; // eax
  struct tagGRAPHICS_DEVICE *v19; // rsi
  wchar_t *v20; // rdi
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdi
  __int64 v26; // rbx
  int v27; // r15d
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdi
  int v33; // eax
  struct _DEVICE_OBJECT *v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rax
  int v37; // esi
  struct _DEVICE_OBJECT *v38; // r12
  __int64 v39; // rdi
  __int64 v40; // r9
  __int64 v41; // r8
  PVOID v42; // rdx
  wchar_t *v43; // rcx
  __int64 v44; // r9
  bool v45; // zf
  __int64 v46; // rax
  unsigned int v47; // r9d
  wchar_t *v48; // rcx
  unsigned int v49; // r8d
  int v50; // edx
  unsigned int v51; // edx
  __int64 v52; // rax
  void *RegistryHandleFromDeviceMap; // rax
  __int64 v54; // rax
  void *v55; // rax
  int updated; // eax
  __int64 v57; // rax
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  struct _DEVICE_OBJECT *v61; // rcx
  __int64 v62; // r9
  __int64 v63; // rax
  PVOID Environment; // [rsp+28h] [rbp-E0h]
  int v65; // [rsp+38h] [rbp-D0h]
  char v66; // [rsp+48h] [rbp-C0h]
  NTSTATUS v67; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v68; // [rsp+50h] [rbp-B8h]
  PVOID v69; // [rsp+58h] [rbp-B0h] BYREF
  void *DeviceRegKey; // [rsp+60h] [rbp-A8h] BYREF
  int v71; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v72; // [rsp+6Ch] [rbp-9Ch] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+70h] [rbp-98h] BYREF
  PFILE_OBJECT FileObject; // [rsp+78h] [rbp-90h] BYREF
  _QWORD InputBuffer[5]; // [rsp+80h] [rbp-88h] BYREF
  PVOID P; // [rsp+A8h] [rbp-60h] BYREF
  _DWORD v77[2]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v78; // [rsp+B8h] [rbp-50h]
  __int64 v79; // [rsp+C0h] [rbp-48h]
  struct _UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-40h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v82; // [rsp+110h] [rbp+8h]
  int v83; // [rsp+118h] [rbp+10h]
  __int64 v84; // [rsp+120h] [rbp+18h]
  _BYTE v85[32]; // [rsp+128h] [rbp+20h] BYREF

  v2 = (int)a1;
  v3 = (int)a2;
  LODWORD(v68) = a1;
  v72 = 0;
  DeviceObject = 0LL;
  v4 = 1;
  DeviceRegKey = 0LL;
  v5 = WdLogNewEntry5_WdEvent(a1, a2);
  *(_QWORD *)(v5 + 24) = v2;
  *(_QWORD *)(v5 + 32) = v3;
  WdLogEvent5_WdEvent(v5);
  v66 = 0;
  v6 = 32LL;
  v7 = 0;
  v8 = 4LL;
  if ( (_DWORD)v3 )
  {
    gcNextGlobalDeviceNumber = gcLocalNextGlobalDeviceNumber;
    gpGraphicsDeviceList = (wchar_t *)gpLocalGraphicsDeviceList;
    gpGraphicsDeviceListLast = gpLocalGraphicsDeviceListLast;
    gcNextGlobalPhysicalOutputNumber = gcLocalNextGlobalPhysicalOutputNumber;
    gcNextGlobalVirtualOutputNumber = gcLocalNextGlobalVirtualOutputNumber;
    QueryTable.Name = L"MaxObjectNumber";
    QueryTable.EntryContext = &v72;
    QueryTable.Flags = 32;
    QueryTable.DefaultType = 4;
    QueryTable.DefaultLength = 4;
    QueryTable.DefaultData = &v71;
    v71 = 0;
    QueryTable.QueryRoutine = 0LL;
    v82 = 0LL;
    v83 = 0;
    v84 = 0LL;
    memset(v85, 0, sizeof(v85));
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
      v72 = gRemoteContext - 1;
    if ( dword_1C0102080 )
    {
      updated = DrvUpdateRemoteFxDeviceNameFromLuid();
      if ( updated < 0 )
        return 0LL;
    }
  }
  while ( 2 )
  {
    if ( gProtocolType != -1 && gcNextGlobalDeviceNumber <= v72 )
    {
      if ( (_DWORD)v2 )
      {
        if ( (_DWORD)v3 )
        {
          v18 = StringCchPrintfW(
                  (wchar_t *)&QueryTable,
                  0x32uLL,
                  L"\\Device\\Video%d",
                  (unsigned int)gcNextGlobalDeviceNumber);
        }
        else
        {
          LODWORD(Environment) = gcNextGlobalDeviceNumber;
          v18 = StringCchPrintfW((wchar_t *)&QueryTable, 0x32uLL, L"\\Device\\%s%d", qword_1C0102078, Environment);
        }
        if ( v18 >= 0 )
        {
          v19 = gpRemoteGraphicsDeviceListLast;
          v20 = gpGraphicsDeviceList;
          if ( (_DWORD)v3 )
            v19 = gpLocalGraphicsDeviceListLast;
          while ( v20 )
          {
            if ( !wcsncmp((const wchar_t *)&QueryTable, v20, 0x40uLL) )
              goto LABEL_79;
            if ( v20 == (wchar_t *)v19 )
              break;
            v20 = (wchar_t *)*((_QWORD *)v20 + 16);
          }
          RtlInitUnicodeString(&DestinationString, (PCWSTR)&QueryTable);
          DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject);
          v25 = DeviceObjectPointer;
          if ( DeviceObjectPointer < 0 )
          {
            if ( (_DWORD)v3 || gRemoteContext != 1 )
            {
              v46 = WdLogNewEntry5_WdTrace(v23, v22, v24);
              *(_QWORD *)(v46 + 24) = v25;
              WdLogEvent5_WdTrace(v46);
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
              v7 = v66;
LABEL_86:
              v48 = gpGraphicsDeviceList;
              v49 = 0;
              while ( v48 )
              {
                v50 = *((_DWORD *)v48 + 40);
                if ( (v50 & 0x4000000) != 0 )
                {
                  v51 = v50 & 0xFFFFFFFB;
                  *((_DWORD *)v48 + 40) = v51;
                  *((_DWORD *)v48 + 69) = v49 < gRemoteContext;
                  if ( v49 == dword_1C0102044 )
                    *((_DWORD *)v48 + 40) = v51 | 4;
                  ++v49;
                }
                v48 = (wchar_t *)*((_QWORD *)v48 + 16);
              }
              goto LABEL_6;
            }
            FileObject = 0LL;
          }
          v7 = v66;
          v26 = PALLOCMEM2(0x140uLL);
          LODWORD(v2) = v68;
          if ( !v26 )
            continue;
          *(_DWORD *)(v26 + 224) = 0;
          *(_QWORD *)(v26 + 232) = 0LL;
          *(_QWORD *)(v26 + 136) = DeviceObject;
          *(_WORD *)(v26 + 248) = gProtocolType;
          *(_QWORD *)(v26 + 288) = 0LL;
          if ( !(_DWORD)v3 )
            *(_DWORD *)(v26 + 160) |= 0x4000000u;
          *(_QWORD *)(v26 + 240) = FileObject;
          if ( (_DWORD)v3 )
            *(_DWORD *)(v26 + 276) = 0;
          v27 = 0;
          if ( (_DWORD)v3 )
          {
            memset(InputBuffer, 0, sizeof(InputBuffer));
            InputBuffer[1] = VideoPortCallout;
            InputBuffer[0] = v26;
            v28 = GreDeviceIoControlEx(
                    *(PDEVICE_OBJECT *)(v26 + 136),
                    0x23201Fu,
                    InputBuffer,
                    0x28u,
                    InputBuffer,
                    0x28u,
                    (__int64)&v71,
                    1u);
            v32 = v28;
            if ( v28 < 0 )
            {
              v59 = WdLogNewEntry5_WdTrace(v30, v29, v31);
              *(_QWORD *)(v59 + 24) = v32;
              WdLogEvent5_WdTrace(v59);
LABEL_132:
              DrvCleanupOneGraphicsDevice(v26);
              goto LABEL_79;
            }
            if ( LODWORD(InputBuffer[2]) )
              *(_DWORD *)(v26 + 160) |= 0x40000000u;
            v33 = InputBuffer[4];
            if ( (InputBuffer[4] & 1) != 0 )
            {
              *(_DWORD *)(v26 + 160) |= 0x20u;
              v33 = InputBuffer[4];
            }
            if ( (v33 & 0xC0000000) != 0 )
            {
              *(_DWORD *)(v26 + 160) |= 0x20000000u;
              v33 = InputBuffer[4];
              if ( SLODWORD(InputBuffer[4]) < 0 )
              {
                *(_DWORD *)(v26 + 160) |= 0x400000u;
                v33 = InputBuffer[4];
              }
            }
            if ( (v33 & 0x20000000) != 0 )
              *(_DWORD *)(v26 + 160) |= 0x100000u;
            v34 = *(struct _DEVICE_OBJECT **)(v26 + 136);
            *(_QWORD *)(v26 + 144) = InputBuffer[3];
            *(_DWORD *)(v26 + 272) = 0;
            if ( (int)GreDeviceIoControlEx(v34, 0x232033u, 0LL, 0, v77, 0x18u, (__int64)&v71, 1u) >= 0 )
            {
              if ( v77[0] != 2 )
              {
                v60 = WdLogNewEntry5_WdAssertion(v35);
                WdLogEvent5_WdAssertion(v60);
              }
              v36 = v78;
              if ( v78 )
              {
                *(_DWORD *)(v26 + 160) |= 0x800000u;
                *(_QWORD *)(v26 + 256) = v36;
                *(_DWORD *)(v26 + 272) = v77[1];
                *(_QWORD *)(v26 + 264) = v79;
                goto LABEL_42;
              }
              goto LABEL_132;
            }
          }
          else
          {
            *(_QWORD *)(v26 + 264) = 0xFFFFFFFFLL;
            *(_DWORD *)(v26 + 272) = gcNextGlobalDeviceNumber;
            *(_QWORD *)(v26 + 256) = 0LL;
          }
LABEL_42:
          v67 = DrvForceChildDeviceReenumeration(DeviceObject, (struct _DEVICE_RELATIONS **)&P);
          v37 = v67;
          if ( v67 < 0 )
          {
            if ( (*(_DWORD *)(v26 + 160) & 0x20000000) != 0 )
            {
              v61 = *(struct _DEVICE_OBJECT **)(v26 + 144);
              if ( v61 )
              {
                v67 = IoOpenDeviceRegistryKey(v61, 2u, 0x2000000u, &DeviceRegKey);
                v37 = v67;
                if ( v67 >= 0 )
                {
                  DrvGetDeviceConfigurationInformation((PVOID)v26, (PCWSTR)DeviceRegKey, 1);
                  ZwClose(DeviceRegKey);
                }
              }
            }
          }
          else
          {
            v38 = (struct _DEVICE_OBJECT *)*((_QWORD *)P + 1);
            ExFreePoolWithTag(P, 0);
            v67 = IoOpenDeviceRegistryKey(v38, 2u, 0x2000000u, &DeviceRegKey);
            v37 = v67;
            if ( v67 >= 0 )
            {
              v69 = 0LL;
              LODWORD(v39) = 0;
              if ( (int)GreDeviceIoControlEx(DeviceObject, 0x23201Bu, 0LL, 0, &v69, 8u, (__int64)&v71, 1u) >= 0 )
              {
                if ( v69 )
                {
                  v27 = 1;
                  if ( (*(_DWORD *)v69 & 0x20000000) != 0 )
                  {
                    do
                      v39 = (unsigned int)(v39 + 1);
                    while ( (*((_DWORD *)v69 + 5 * v39) & 0x20000000) != 0 );
                  }
                }
              }
              DrvGetDeviceConfigurationInformation((PVOID)v26, (PCWSTR)DeviceRegKey, 1);
              if ( v27 )
              {
                if ( (_DWORD)v39 )
                {
                  *(_DWORD *)(v26 + 224) = v39;
                  *(_QWORD *)(v26 + 232) = PALLOCMEM2((unsigned int)(20 * v39));
                  v40 = (unsigned int)v39;
                  v41 = 0LL;
                  do
                  {
                    *(_DWORD *)(v41 + *(_QWORD *)(v26 + 232)) = 0;
                    v42 = v69;
                    if ( (*(_DWORD *)((_BYTE *)v69 + v41) & 1) != 0 )
                    {
                      *(_DWORD *)(*(_QWORD *)(v26 + 232) + v41) |= 1u;
                      v42 = v69;
                    }
                    if ( (*(_DWORD *)((_BYTE *)v42 + v41) & 2) == 0 )
                    {
                      *(_DWORD *)(*(_QWORD *)(v26 + 232) + v41) |= 2u;
                      v42 = v69;
                    }
                    if ( *(int *)((char *)v42 + v41) >= 0 )
                    {
                      *(_DWORD *)(*(_QWORD *)(v26 + 232) + v41) |= 0x80000000;
                      v42 = v69;
                    }
                    if ( (*(_DWORD *)((_BYTE *)v42 + v41) & 0x40000000) == 0 )
                    {
                      *(_DWORD *)(*(_QWORD *)(v26 + 232) + v41) |= 0x40000000u;
                      v42 = v69;
                    }
                    *(_DWORD *)(*(_QWORD *)(v26 + 232) + v41 + 4) = *(_DWORD *)((char *)v42 + v41 + 4);
                    *(_QWORD *)(*(_QWORD *)(v26 + 232) + v41 + 8) = *(_QWORD *)((char *)v69 + v41 + 8);
                    *(_BYTE *)(*(_QWORD *)(v26 + 232) + v41 + 16) = *((_BYTE *)v69 + v41 + 16);
                    v41 += 20LL;
                    --v40;
                  }
                  while ( v40 );
                }
                ExFreePoolWithTag(v69, 0);
              }
              ZwClose(DeviceRegKey);
            }
            ObfDereferenceObject(v38);
          }
          swprintf_s((wchar_t *)v26, 0x20uLL, (const wchar_t *)&QueryTable);
          ++gcNextGlobalDeviceNumber;
          if ( v37 < 0 )
          {
            LOWORD(v65) = gProtocolType;
            RegistryHandleFromDeviceMap = (void *)DrvGetRegistryHandleFromDeviceMap(v26, 0LL, 0LL, 0LL, 0, &v67, v65);
            v37 = v67;
            DeviceRegKey = RegistryHandleFromDeviceMap;
            if ( v67 < 0 )
            {
LABEL_65:
              v43 = (wchar_t *)(v26 + 64);
              if ( (*(_DWORD *)(v26 + 160) & 8) != 0 )
              {
                v62 = gcNextGlobalVirtualOutputNumber++;
                swprintf_s(v43, 0x20uLL, L"\\\\.\\DISPLAYV%d", v62);
              }
              else
              {
                v44 = gcNextGlobalPhysicalOutputNumber++;
                swprintf_s(v43, 0x20uLL, L"\\\\.\\DISPLAY%d", v44);
              }
              if ( (unsigned int)DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)v26) )
                *(_DWORD *)(v26 + 160) &= ~0x80000u;
              else
                *(_DWORD *)(v26 + 160) |= 0x80000u;
              if ( (unsigned int)bSetDeviceSessionUsage(v26, 1LL) )
              {
                if ( (_DWORD)v3 )
                {
LABEL_71:
                  if ( gpGraphicsDeviceList )
                    *((_QWORD *)gpGraphicsDeviceListLast + 16) = v26;
                  else
                    gpGraphicsDeviceList = (wchar_t *)v26;
                  v45 = (*(_DWORD *)(v26 + 160) & 0x800000) == 0;
                  gpGraphicsDeviceListLast = (struct tagGRAPHICS_DEVICE *)v26;
                  if ( !v45 )
                    DrvAddAdapterLuid(*(struct _LUID *)(v26 + 264));
                  v7 = 1;
                  v66 = 1;
                  goto LABEL_76;
                }
                goto LABEL_117;
              }
              if ( !(_DWORD)v3 )
              {
LABEL_117:
                *(_QWORD *)(v26 + 296) = 0LL;
                *(_QWORD *)(v26 + 304) = 0LL;
                *(_QWORD *)(v26 + 312) = 0LL;
                ((void (*)(void))qword_1C0101458)();
                if ( v37 >= 0 )
                  goto LABEL_71;
                DrvCleanupOneGraphicsDevice(v26);
                --gcNextGlobalPhysicalOutputNumber;
                v4 = 0;
                v7 = v66;
LABEL_76:
                LODWORD(v2) = v68;
                continue;
              }
              DrvCleanupOneGraphicsDevice(v26);
LABEL_80:
              v7 = v66;
              goto LABEL_76;
            }
            DrvGetDeviceConfigurationInformation((PVOID)v26, (PCWSTR)RegistryHandleFromDeviceMap, 0);
            ZwClose(DeviceRegKey);
          }
          if ( !*(_QWORD *)(v26 + 216) )
          {
            v54 = PALLOCMEM2(0x20uLL);
            *(_QWORD *)(v26 + 216) = v54;
            if ( v54 )
            {
              LOWORD(v65) = gProtocolType;
              v55 = (void *)DrvGetRegistryHandleFromDeviceMap(v26, 0LL, 0LL, v54, 16, &v67, v65);
              DeviceRegKey = v55;
              if ( v55 )
                ZwClose(v55);
              v37 = v67;
            }
            else
            {
              v37 = -1073741670;
            }
          }
          goto LABEL_65;
        }
      }
      else
      {
        v57 = WdLogNewEntry5_WdTrace(v6, v8, 0xFFFFLL);
        WdLogEvent5_WdTrace(v57);
      }
      return 0LL;
    }
    break;
  }
  if ( !(_DWORD)v3 )
    goto LABEL_86;
LABEL_6:
  DrvSetDisconnectedGraphicsDevice(v3);
  v12 = WdLogNewEntry5_WdTrace(v10, v9, v11);
  WdLogEvent5_WdTrace(v12);
  if ( v7 )
    DrvSortGraphicsDeviceList();
  if ( (_DWORD)v3 )
  {
    gcLocalNextGlobalDeviceNumber = gcNextGlobalDeviceNumber;
    gpLocalGraphicsDeviceList = (struct tagGRAPHICS_DEVICE *)gpGraphicsDeviceList;
    gpLocalGraphicsDeviceListLast = gpGraphicsDeviceListLast;
    gcLocalNextGlobalPhysicalOutputNumber = gcNextGlobalPhysicalOutputNumber;
    gcLocalNextGlobalVirtualOutputNumber = gcNextGlobalVirtualOutputNumber;
  }
  else
  {
    v13 = gpGraphicsDeviceList;
    v47 = 0;
    gcRemoteNextGlobalDeviceNumber = gcNextGlobalDeviceNumber;
    v15 = 0LL;
    gpRemoteGraphicsDeviceListLast = gpGraphicsDeviceListLast;
    gcRemoteNextGlobalPhysicalOutputNumber = gcNextGlobalPhysicalOutputNumber;
    gcRemoteNextGlobalVirtualOutputNumber = gcNextGlobalVirtualOutputNumber;
    gpRemoteGraphicsDeviceList = (struct tagGRAPHICS_DEVICE *)gpGraphicsDeviceList;
    while ( v13 )
    {
      if ( (*((_DWORD *)v13 + 40) & 0x4000000) != 0 )
      {
        i = *((unsigned int *)v13 + 68);
        ++v47;
        if ( (unsigned int)i > 0x10 || ((1 << i) & (unsigned int)v15) != 0 )
          goto LABEL_144;
        v15 = (1 << i) | (unsigned int)v15;
      }
      v13 = (wchar_t *)*((_QWORD *)v13 + 16);
    }
    i = v47;
    if ( (_DWORD)v15 == (1 << v47) - 1 )
      goto LABEL_10;
LABEL_144:
    v63 = WdLogNewEntry5_WdAssertion(i);
    WdLogEvent5_WdAssertion(v63);
  }
LABEL_10:
  if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
  {
    DrvAddMirrorDriversToRemoteList();
    if ( !gbVideoInitialized )
    {
      v52 = WdLogNewEntry5_WdEvent(i, v13);
      WdLogEvent5_WdEvent(v52);
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
  v16 = WdLogNewEntry5_WdTrace(i, v13, v15);
  *(_QWORD *)(v16 + 24) = v4;
  WdLogEvent5_WdTrace(v16);
  return (unsigned int)v4;
}
