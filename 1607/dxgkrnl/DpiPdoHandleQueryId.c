/*
 * XREFs of DpiPdoHandleQueryId @ 0x1C00EC870
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbPrintfW @ 0x1C000B6E0 (RtlStringCbPrintfW.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00C1EE4 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00C1F58 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiAppendNumberToString @ 0x1C00ECDF0 (DpiAppendNumberToString.c)
 *     DpiAppendStringToString @ 0x1C00ED344 (DpiAppendStringToString.c)
 *     MonitorNotifyDeviceNodeReady @ 0x1C00EE40C (MonitorNotifyDeviceNodeReady.c)
 */

__int64 __fastcall DpiPdoHandleQueryId(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  char *DeviceExtension; // rdi
  __int64 v4; // rcx
  __int64 appended; // rbx
  char v7; // si
  int v8; // edx
  __int64 v9; // r15
  int v10; // edx
  int v11; // edx
  int v12; // edx
  const WCHAR *v13; // rdx
  bool v14; // zf
  const WCHAR *v15; // rdx
  const WCHAR *v16; // rcx
  PVOID v17; // rax
  void *v18; // rdi
  void *v20; // rsi
  unsigned int v21; // r14d
  PVOID PoolWithTag; // rax
  __int64 v23; // rcx
  NTSTATUS v24; // eax
  __int64 v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  void *Src[2]; // [rsp+98h] [rbp+27h] BYREF

  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  *(void **)((char *)Src + 2) = 0LL;
  LOWORD(Src[0]) = 0;
  v4 = *(_QWORD *)(a2 + 184);
  *(_DWORD *)((char *)&Src[1] + 2) = 0;
  LODWORD(appended) = 0;
  HIWORD(Src[1]) = 0;
  v7 = 0;
  v8 = *(_DWORD *)(v4 + 8);
  v9 = *(_QWORD *)(*((_QWORD *)DeviceExtension + 4) + 64LL);
  if ( !v8 )
  {
    if ( *((_DWORD *)DeviceExtension + 124) != 1 || *((_WORD *)DeviceExtension + 256) )
    {
      v15 = (const WCHAR *)(DeviceExtension + 512);
      v16 = L"DISPLAY\\";
LABEL_15:
      LODWORD(appended) = DpiAppendStringToString(v16, v15, (PUNICODE_STRING)Src);
      if ( (int)appended < 0 )
        return (unsigned int)appended;
      goto LABEL_16;
    }
    v13 = L"DISPLAY\\Default_Monitor";
LABEL_28:
    RtlInitUnicodeString((PUNICODE_STRING)Src, v13);
    goto LABEL_17;
  }
  v10 = v8 - 1;
  if ( !v10 )
  {
    if ( !DeviceExtension[510] && *(_DWORD *)(v9 + 2600) >= 2u )
      IoInvalidateDeviceRelations(DeviceObject, PowerRelations);
    v14 = *((_DWORD *)DeviceExtension + 124) == 1;
    DeviceExtension[510] = 1;
    if ( !v14 )
    {
      v20 = 0LL;
      v21 = 0;
      do
      {
        if ( v20 )
          ExFreePoolWithTag(v20, 0);
        v21 += 256;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v21, 0x74727044u);
        v20 = PoolWithTag;
        if ( !PoolWithTag )
        {
          LODWORD(appended) = -1073741801;
          v31 = WdLogNewEntry5_WdLowResource(v23);
          *(_QWORD *)(v31 + 24) = -1073741801LL;
          WdLogEvent5_WdLowResource(v31);
          return (unsigned int)appended;
        }
        memset(PoolWithTag, 0, v21);
        v24 = RtlStringCbPrintfW(
                (NTSTRSAFE_PWSTR)v20,
                v21,
                L"VIDEO\\VEN_%04X&DEV_%04X&SUBSYS_%04X%04X&REV_%02X&%ws,VIDEO\\VEN_%04X&DEV_%04X&SUBSYS_%04X%04X&%ws,VIDEO"
                 "\\VEN_%04X&DEV_%04X&%ws,VIDEO\\%ws,,");
        v25 = v24;
      }
      while ( v24 == -2147483643 );
      if ( v24 < 0 )
      {
        ExFreePoolWithTag(v20, 0);
        LODWORD(appended) = -1073741823;
        v27 = WdLogNewEntry5_WdError(v26);
        *(_QWORD *)(v27 + 24) = v25;
LABEL_44:
        WdLogEvent5_WdError(v27);
        return (unsigned int)appended;
      }
      appended = (int)DpiAppendStringToString((PCWSTR)v20, L",,", (PUNICODE_STRING)Src);
      ExFreePoolWithTag(v20, 0);
      if ( (int)appended < 0 )
      {
        v27 = WdLogNewEntry5_WdError(v28);
        *(_QWORD *)(v27 + 24) = appended;
        goto LABEL_44;
      }
      if ( LOWORD(Src[0]) >> 1 )
      {
        v29 = 0LL;
        v30 = LOWORD(Src[0]) >> 1;
        do
        {
          if ( *(_WORD *)((char *)Src[1] + v29) == 44 )
            *(_WORD *)((char *)Src[1] + v29) = 0;
          v29 += 2LL;
          --v30;
        }
        while ( v30 );
      }
      goto LABEL_16;
    }
    LODWORD(appended) = DpiAcquireCoreSyncAccessSafe((__int64)DeviceObject, 1);
    if ( (int)appended >= 0 )
    {
      MonitorNotifyDeviceNodeReady(*(DXGADAPTER **)(v9 + 3688), *((_DWORD *)DeviceExtension + 126));
      DeviceExtension[944] = 1;
      DpiReleaseCoreSyncAccessSafe((__int64)DeviceObject, 1);
    }
    v15 = (const WCHAR *)(DeviceExtension + 512);
    if ( *((_WORD *)DeviceExtension + 256) )
    {
      v16 = L"MONITOR\\";
      goto LABEL_15;
    }
    v13 = L"MONITOR\\Default_Monitor";
    goto LABEL_28;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( *((_DWORD *)DeviceExtension + 124) != 1 || *((_WORD *)DeviceExtension + 358) )
      v13 = (const WCHAR *)(DeviceExtension + 716);
    else
      v13 = L"*PNP09FF";
    goto LABEL_28;
  }
  v12 = v11 - 1;
  if ( v12 )
  {
    if ( v12 != 2 || !*((_QWORD *)DeviceExtension + 121) )
    {
      LODWORD(appended) = *(_DWORD *)(a2 + 48);
      return (unsigned int)appended;
    }
    *(_OWORD *)Src = *((_OWORD *)DeviceExtension + 60);
    goto LABEL_17;
  }
  v13 = (const WCHAR *)(DeviceExtension + 614);
  if ( *((_WORD *)DeviceExtension + 307) )
    goto LABEL_28;
  DpiAppendNumberToString(L"UID", *((_DWORD *)DeviceExtension + 126), (PUNICODE_STRING)Src);
LABEL_16:
  v7 = 1;
LABEL_17:
  v17 = ExAllocatePoolWithTag(PagedPool, WORD1(Src[0]) + 2LL, 0x74727044u);
  v18 = v17;
  if ( v17 )
  {
    memset(v17, 0, WORD1(Src[0]) + 2LL);
    memmove(v18, Src[1], WORD1(Src[0]));
    *(_QWORD *)(a2 + 56) = v18;
  }
  else
  {
    LODWORD(appended) = -1073741801;
  }
  if ( v7 == 1 )
    RtlFreeUnicodeString((PUNICODE_STRING)Src);
  return (unsigned int)appended;
}
