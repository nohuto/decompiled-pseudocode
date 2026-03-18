/*
 * XREFs of DpiPdoHandleQueryId @ 0x1C00D6720
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbPrintfW @ 0x1C0008790 (RtlStringCbPrintfW.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C0061D64 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C0061DDC (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiAppendNumberToString @ 0x1C00D6C90 (DpiAppendNumberToString.c)
 *     DpiAppendStringToString @ 0x1C00D7200 (DpiAppendStringToString.c)
 *     MonitorNotifyDeviceNodeReady @ 0x1C00D7524 (MonitorNotifyDeviceNodeReady.c)
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
  __int64 v23; // rcx
  NTSTATUS v24; // eax
  __int64 v25; // rdi
  __int64 v26; // rcx
  _QWORD *v27; // rax
  NTSTATUS (*v28)(NTSTRSAFE_PWSTR, size_t, NTSTRSAFE_PCWSTR, ...); // rcx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  _QWORD *v32; // rax
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
    if ( *(_DWORD *)(v2 + 464) != 1 || *(_WORD *)(v2 + 480) )
    {
      v15 = (const WCHAR *)(v2 + 480);
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
    v14 = *(_DWORD *)(v2 + 464) == 1;
    *(_BYTE *)(v2 + 478) = 1;
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
          v32 = (_QWORD *)WdLogNewEntry5_WdLowResource(v23);
          v32[3] = DpiPdoHandleQueryId;
          v32[4] = ExAllocatePoolWithTag;
          v32[5] = -1073741801LL;
          WdLogEvent5_WdLowResource(v32);
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
        v27 = (_QWORD *)WdLogNewEntry5_WdError(v26);
        v27[3] = DpiPdoHandleQueryId;
        v28 = RtlStringCbPrintfW;
        v27[5] = v25;
LABEL_41:
        v27[4] = v28;
        WdLogEvent5_WdError(v27);
        return (unsigned int)appended;
      }
      appended = (int)DpiAppendStringToString((PCWSTR)v20, L",,", (PUNICODE_STRING)Src);
      ExFreePoolWithTag(v20, 0);
      if ( (int)appended < 0 )
      {
        v27 = (_QWORD *)WdLogNewEntry5_WdError(v29);
        v27[3] = DpiPdoHandleQueryId;
        v28 = (NTSTATUS (*)(NTSTRSAFE_PWSTR, size_t, NTSTRSAFE_PCWSTR, ...))DpiAppendStringToString;
        v27[5] = appended;
        goto LABEL_41;
      }
      if ( LOWORD(Src[0]) >> 1 )
      {
        v30 = 0LL;
        v31 = LOWORD(Src[0]) >> 1;
        do
        {
          if ( *(_WORD *)((char *)Src[1] + v30) == 44 )
            *(_WORD *)((char *)Src[1] + v30) = 0;
          v30 += 2LL;
          --v31;
        }
        while ( v31 );
      }
      goto LABEL_13;
    }
    LODWORD(appended) = DpiAcquireCoreSyncAccessSafe(a1, 1);
    if ( (int)appended >= 0 )
    {
      MonitorNotifyDeviceNodeReady(*(DXGADAPTER **)(v9 + 2504), *(_DWORD *)(v2 + 472));
      *(_BYTE *)(v2 + 912) = 1;
      DpiReleaseCoreSyncAccessSafe(a1, 1);
    }
    v15 = (const WCHAR *)(v2 + 480);
    if ( *(_WORD *)(v2 + 480) )
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
    if ( *(_DWORD *)(v2 + 464) != 1 || *(_WORD *)(v2 + 684) )
      v13 = (const WCHAR *)(v2 + 684);
    else
      v13 = L"*PNP09FF";
    goto LABEL_25;
  }
  v12 = v11 - 1;
  if ( v12 )
  {
    if ( v12 != 2 || !*(_QWORD *)(v2 + 936) )
    {
      LODWORD(appended) = *(_DWORD *)(a2 + 48);
      return (unsigned int)appended;
    }
    *(_OWORD *)Src = *(_OWORD *)(v2 + 928);
    goto LABEL_14;
  }
  v13 = (const WCHAR *)(v2 + 582);
  if ( *(_WORD *)(v2 + 582) )
    goto LABEL_25;
  DpiAppendNumberToString(L"UID", *(_DWORD *)(v2 + 472), (PUNICODE_STRING)Src);
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
