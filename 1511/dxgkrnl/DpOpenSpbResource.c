/*
 * XREFs of DpOpenSpbResource @ 0x1C0173290
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbPrintfW @ 0x1C000A560 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     RtlUnicodeStringPrintf @ 0x1C0028828 (RtlUnicodeStringPrintf.c)
 *     DpiCreateSpbResourceRecord @ 0x1C0173B30 (DpiCreateSpbResourceRecord.c)
 */

__int64 __fastcall DpOpenSpbResource(
        __int64 a1,
        void *a2,
        const UNICODE_STRING *a3,
        __int64 a4,
        ULONG ShareAccess,
        ULONG OpenOptions,
        _QWORD *a7)
{
  const UNICODE_STRING *v7; // r14
  unsigned int v8; // ebx
  __int64 v9; // rdi
  _QWORD *v10; // rax
  __int64 v11; // rbx
  __int64 v13; // rsi
  _DWORD *v14; // rdx
  __int64 v15; // rdi
  unsigned int v16; // r10d
  unsigned int v17; // r11d
  __int64 v18; // rax
  ACCESS_MASK v19; // r13d
  unsigned __int16 Length; // ax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rax
  NTSTATUS v28; // eax
  __int64 v29; // rcx
  NTSTATUS (__stdcall *v30)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, PIO_STATUS_BLOCK, ULONG, ULONG); // rcx
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-A1h] BYREF
  ACCESS_MASK DesiredAccess[2]; // [rsp+40h] [rbp-91h]
  void *FileHandle; // [rsp+48h] [rbp-89h] BYREF
  __int64 v38; // [rsp+50h] [rbp-81h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-79h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-49h] BYREF
  wchar_t pszDest[20]; // [rsp+98h] [rbp-39h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  v7 = a3;
  DestinationString.Buffer = 0LL;
  v8 = (unsigned int)a2;
  DesiredAccess[0] = a4;
  v9 = a1;
  FileHandle = a2;
  if ( KeGetCurrentIrql() )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2, a3);
    LODWORD(v11) = -1073741811;
    v10[5] = &DpOpenSpbResource;
    v10[3] = 275LL;
    v10[4] = 21LL;
    v10[6] = 0LL;
    v10[7] = -1073741811LL;
    WdLogEvent5_WdCriticalError(v10);
    return (unsigned int)v11;
  }
  if ( a1
    && (v13 = *(_QWORD *)(a1 + 64)) != 0
    && *(_DWORD *)(v13 + 16) == 1953656900
    && (unsigned int)(*(_DWORD *)(v13 + 20) - 2) <= 1 )
  {
    v14 = *(_DWORD **)(v13 + 1104);
    LOBYTE(a3) = 0;
    v15 = SHIDWORD(FileHandle);
    if ( v14 )
    {
      a1 = 0LL;
      do
      {
        if ( (unsigned int)a1 >= *v14 )
          break;
        v16 = 0;
        a4 = 9LL * (unsigned int)a1;
        v17 = v14[9 * (unsigned int)a1 + 4];
        if ( v17 )
        {
          v18 = (__int64)&v14[9 * (unsigned int)a1 + 8];
          while ( *(_BYTE *)(v18 - 12) != 0x84 || *(_QWORD *)(v18 - 4) != __PAIR64__(HIDWORD(FileHandle), v8) )
          {
            ++v16;
            v18 += 20LL;
            if ( v16 >= v17 )
              goto LABEL_17;
          }
          LOBYTE(a3) = 1;
        }
LABEL_17:
        a1 = (unsigned int)(a1 + 1);
      }
      while ( !(_BYTE)a3 );
      v19 = DesiredAccess[0];
      if ( (_BYTE)a3 )
      {
        DestinationString.Length = 0;
        if ( v7 )
          Length = v7->Length;
        else
          Length = 0;
        DestinationString.MaximumLength = Length + 80;
        DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(
                                                PagedPool,
                                                (unsigned __int16)(Length + 80),
                                                0x74727044u);
        if ( !DestinationString.Buffer )
        {
          v25 = (_QWORD *)WdLogNewEntry5_WdLowResource(v22, v21, v23, v24);
          LODWORD(v11) = -1073741801;
          v25[3] = &DpOpenSpbResource;
          v25[4] = ExAllocatePoolWithTag;
          v25[5] = -1073741801LL;
          WdLogEvent5_WdLowResource(v25);
          return (unsigned int)v11;
        }
        *(_QWORD *)DesiredAccess = __PAIR64__(HIDWORD(FileHandle), v8);
        LODWORD(v11) = RtlStringCbPrintfW(pszDest, 0x22uLL, L"%0*I64x");
        if ( (int)v11 >= 0 )
          LODWORD(v11) = RtlUnicodeStringPrintf(&DestinationString, L"%s%s", L"\\Device\\RESOURCE_HUB\\", pszDest);
        if ( (int)v11 >= 0 )
        {
          if ( v7 )
          {
            if ( *v7->Buffer != 92 )
              RtlAppendUnicodeToString(&DestinationString, L"\\");
            RtlAppendUnicodeStringToString(&DestinationString, v7);
          }
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = &DestinationString;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v28 = ZwOpenFile(&FileHandle, v19, &ObjectAttributes, &IoStatusBlock, ShareAccess, OpenOptions);
          v11 = v28;
          if ( v28 >= 0 )
          {
            v31 = DpiCreateSpbResourceRecord(v13, FileHandle, &v38);
            v11 = v31;
            if ( v31 >= 0 )
            {
              *a7 = v38;
LABEL_39:
              if ( DestinationString.Buffer )
                ExFreePoolWithTag(DestinationString.Buffer, 0);
              return (unsigned int)v11;
            }
            v27 = (_QWORD *)WdLogNewEntry5_WdError(v32);
            v27[3] = &DpOpenSpbResource;
            v30 = (NTSTATUS (__stdcall *)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, PIO_STATUS_BLOCK, ULONG, ULONG))DpiCreateSpbResourceRecord;
          }
          else
          {
            v27 = (_QWORD *)WdLogNewEntry5_WdError(v29);
            v27[3] = &DpOpenSpbResource;
            v30 = ZwOpenFile;
          }
          v27[4] = v30;
          v27[5] = v11;
        }
        else
        {
          v27 = (_QWORD *)WdLogNewEntry5_WdError(v26);
          v27[3] = &DpOpenSpbResource;
          v27[5] = (int)v11;
          v27[4] = 0LL;
        }
        WdLogEvent5_WdError(v27);
        goto LABEL_39;
      }
    }
    v33 = WdLogNewEntry5_WdWarning(a1, v14, a3, a4);
    *(_QWORD *)(v33 + 24) = &DpOpenSpbResource;
    *(_QWORD *)(v33 + 32) = v15;
    WdLogEvent5_WdWarning(v33);
    return 3221225712LL;
  }
  else
  {
    v34 = WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
    *(_QWORD *)(v34 + 24) = &DpOpenSpbResource;
    *(_QWORD *)(v34 + 32) = v9;
    WdLogEvent5_WdWarning(v34);
    return 3221225711LL;
  }
}
