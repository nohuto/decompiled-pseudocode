/*
 * XREFs of DpiPdoHandleQueryId @ 0x1C00CEBE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbPrintfW @ 0x1C000A560 (RtlStringCbPrintfW.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00A9EA8 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00A9F1C (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiAppendNumberToString @ 0x1C00CF150 (DpiAppendNumberToString.c)
 *     DpiAppendStringToString @ 0x1C00CF6C0 (DpiAppendStringToString.c)
 *     MonitorNotifyDeviceNodeReady @ 0x1C00E372C (MonitorNotifyDeviceNodeReady.c)
 */

__int64 __fastcall DpiPdoHandleQueryId(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rcx
  __int64 appended; // rbx
  char v7; // si
  int v8; // edx
  __int64 v9; // r13
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
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  NTSTATUS v27; // eax
  __int64 v28; // rdi
  __int64 v29; // rcx
  _QWORD *v30; // rax
  NTSTATUS (*v31)(NTSTRSAFE_PWSTR, size_t, NTSTRSAFE_PCWSTR, ...); // rcx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  _QWORD *v35; // rax
  void *Src[2]; // [rsp+98h] [rbp+27h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  *(void **)((char *)Src + 2) = 0LL;
  LOWORD(Src[0]) = 0;
  v4 = *(_QWORD *)(a2 + 184);
  *(_DWORD *)((char *)&Src[1] + 2) = 0;
  LODWORD(appended) = 0;
  HIWORD(Src[1]) = 0;
  v7 = 0;
  v8 = *(_DWORD *)(v4 + 8);
  v9 = *(_QWORD *)(*(_QWORD *)(v2 + 32) + 64LL);
  if ( !v8 )
  {
    if ( *(_DWORD *)(v2 + 496) != 1 || *(_WORD *)(v2 + 512) )
    {
      v15 = (const WCHAR *)(v2 + 512);
      v16 = L"DISPLAY\\";
LABEL_12:
      LODWORD(appended) = DpiAppendStringToString(v16, v15, (PUNICODE_STRING)Src);
      if ( (int)appended < 0 )
        return (unsigned int)appended;
      goto LABEL_13;
    }
    v13 = L"DISPLAY\\Default_Monitor";
LABEL_25:
    RtlInitUnicodeString((PUNICODE_STRING)Src, v13);
    goto LABEL_14;
  }
  v10 = v8 - 1;
  if ( !v10 )
  {
    v14 = *(_DWORD *)(v2 + 496) == 1;
    *(_BYTE *)(v2 + 510) = 1;
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
          v35 = (_QWORD *)WdLogNewEntry5_WdLowResource(v24, v23, v25, v26);
          v35[3] = DpiPdoHandleQueryId;
          v35[4] = ExAllocatePoolWithTag;
          v35[5] = -1073741801LL;
          WdLogEvent5_WdLowResource(v35);
          return (unsigned int)appended;
        }
        memset(PoolWithTag, 0, v21);
        v27 = RtlStringCbPrintfW(
                (NTSTRSAFE_PWSTR)v20,
                v21,
                L"VIDEO\\VEN_%04X&DEV_%04X&SUBSYS_%04X%04X&REV_%02X&%ws,VIDEO\\VEN_%04X&DEV_%04X&SUBSYS_%04X%04X&%ws,VIDEO"
                 "\\VEN_%04X&DEV_%04X&%ws,VIDEO\\%ws,,");
        v28 = v27;
      }
      while ( v27 == -2147483643 );
      if ( v27 < 0 )
      {
        ExFreePoolWithTag(v20, 0);
        LODWORD(appended) = -1073741823;
        v30 = (_QWORD *)WdLogNewEntry5_WdError(v29);
        v30[3] = DpiPdoHandleQueryId;
        v31 = RtlStringCbPrintfW;
        v30[5] = v28;
LABEL_41:
        v30[4] = v31;
        WdLogEvent5_WdError(v30);
        return (unsigned int)appended;
      }
      appended = (int)DpiAppendStringToString((PCWSTR)v20, L",,", (PUNICODE_STRING)Src);
      ExFreePoolWithTag(v20, 0);
      if ( (int)appended < 0 )
      {
        v30 = (_QWORD *)WdLogNewEntry5_WdError(v32);
        v30[3] = DpiPdoHandleQueryId;
        v31 = (NTSTATUS (*)(NTSTRSAFE_PWSTR, size_t, NTSTRSAFE_PCWSTR, ...))DpiAppendStringToString;
        v30[5] = appended;
        goto LABEL_41;
      }
      if ( LOWORD(Src[0]) >> 1 )
      {
        v33 = 0LL;
        v34 = LOWORD(Src[0]) >> 1;
        do
        {
          if ( *(_WORD *)((char *)Src[1] + v33) == 44 )
            *(_WORD *)((char *)Src[1] + v33) = 0;
          v33 += 2LL;
          --v34;
        }
        while ( v34 );
      }
      goto LABEL_13;
    }
    LODWORD(appended) = DpiAcquireCoreSyncAccessSafe(a1, 1);
    if ( (int)appended >= 0 )
    {
      MonitorNotifyDeviceNodeReady(*(DXGADAPTER **)(v9 + 2544), *(_DWORD *)(v2 + 504));
      *(_BYTE *)(v2 + 944) = 1;
      DpiReleaseCoreSyncAccessSafe(a1, 1);
    }
    v15 = (const WCHAR *)(v2 + 512);
    if ( *(_WORD *)(v2 + 512) )
    {
      v16 = L"MONITOR\\";
      goto LABEL_12;
    }
    v13 = L"MONITOR\\Default_Monitor";
    goto LABEL_25;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( *(_DWORD *)(v2 + 496) != 1 || *(_WORD *)(v2 + 716) )
      v13 = (const WCHAR *)(v2 + 716);
    else
      v13 = L"*PNP09FF";
    goto LABEL_25;
  }
  v12 = v11 - 1;
  if ( v12 )
  {
    if ( v12 != 2 || !*(_QWORD *)(v2 + 968) )
    {
      LODWORD(appended) = *(_DWORD *)(a2 + 48);
      return (unsigned int)appended;
    }
    *(_OWORD *)Src = *(_OWORD *)(v2 + 960);
    goto LABEL_14;
  }
  v13 = (const WCHAR *)(v2 + 614);
  if ( *(_WORD *)(v2 + 614) )
    goto LABEL_25;
  DpiAppendNumberToString(L"UID", *(_DWORD *)(v2 + 504), (PUNICODE_STRING)Src);
LABEL_13:
  v7 = 1;
LABEL_14:
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
