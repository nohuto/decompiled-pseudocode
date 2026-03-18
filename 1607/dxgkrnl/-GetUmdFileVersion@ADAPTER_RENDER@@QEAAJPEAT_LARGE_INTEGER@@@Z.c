/*
 * XREFs of ?GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C0092C70
 * Callers:
 *     DxgkQueryAdapterInfo @ 0x1C0090400 (DxgkQueryAdapterInfo.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00B4048 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::GetUmdFileVersion(union _LARGE_INTEGER *this, union _LARGE_INTEGER *a2)
{
  union _LARGE_INTEGER *v3; // rsi
  PVOID v4; // r14
  __int64 v5; // rdi
  union _LARGE_INTEGER v7; // rdi
  size_t v8; // rax
  size_t v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  size_t v15; // rax
  size_t v16; // rcx
  unsigned __int16 MaximumLength; // ax
  unsigned __int64 v18; // rcx
  _WORD *v19; // rdx
  NTSTATUS v20; // eax
  __int64 v21; // rcx
  NTSTATUS v22; // eax
  NTSTATUS v23; // eax
  __int64 CurrentProcess; // rax
  int v25; // eax
  int Resource; // eax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  struct _UNICODE_STRING Destination; // [rsp+50h] [rbp-A8h] BYREF
  int v35; // [rsp+60h] [rbp-98h]
  void *FileHandle; // [rsp+68h] [rbp-90h] BYREF
  __int64 v37; // [rsp+70h] [rbp-88h] BYREF
  void *SectionHandle; // [rsp+78h] [rbp-80h] BYREF
  PVOID Object; // [rsp+80h] [rbp-78h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-70h] BYREF
  __int64 v41; // [rsp+B8h] [rbp-40h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C0h] [rbp-38h] BYREF
  unsigned __int64 v43; // [rsp+110h] [rbp+18h] BYREF
  __int64 v44; // [rsp+118h] [rbp+20h] BYREF

  v3 = this;
  v37 = 0LL;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  FileHandle = 0LL;
  SectionHandle = 0LL;
  v4 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  if ( !a2 )
  {
    v29 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v29 + 24) = 2936LL;
    WdLogEvent5_WdAssertion(v29);
  }
  if ( v3[46].QuadPart != -1 )
  {
    LODWORD(v5) = 0;
LABEL_5:
    *a2 = v3[46];
    goto LABEL_6;
  }
  v7 = v3[2];
  v8 = 2
     * wcsnlen(*(const wchar_t **)(v7.QuadPart + 984), (unsigned __int64)*(unsigned __int16 *)(v7.QuadPart + 978) >> 1);
  v43 = v8;
  v9 = *(unsigned __int16 *)(v7.QuadPart + 978);
  if ( v8 >= v9 )
  {
    v30 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v30 + 24) = 2960LL;
    WdLogEvent5_WdAssertion(v30);
    LOWORD(v8) = v43;
  }
  Destination.Length = 0;
  Destination.MaximumLength = v8 + 12;
  Destination.Buffer = (wchar_t *)operator new[]((unsigned __int16)(v8 + 12), 0x4B677844u, PagedPool);
  if ( !Destination.Buffer )
    goto LABEL_43;
  RtlAppendUnicodeToString(&Destination, L"\\??\\");
  RtlAppendUnicodeToString(&Destination, *(PCWSTR *)(v7.QuadPart + 984));
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &Destination;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u) >= 0 )
    goto LABEL_33;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v12, v11, v13, v14) + 24) = 3002LL;
  v15 = 2
      * wcsnlen(*(const wchar_t **)(v7.QuadPart + 984), (unsigned __int64)*(unsigned __int16 *)(v7.QuadPart + 978) >> 1);
  v43 = v15;
  v16 = *(unsigned __int16 *)(v7.QuadPart + 978);
  if ( v15 >= v16 )
  {
    v32 = WdLogNewEntry5_WdAssertion(v16);
    *(_QWORD *)(v32 + 24) = 3008LL;
    WdLogEvent5_WdAssertion(v32);
    LOWORD(v15) = v43;
  }
  Destination.Length = 0;
  MaximumLength = v15 + 56;
  Destination.MaximumLength = MaximumLength;
  if ( Destination.Buffer )
  {
    operator delete(Destination.Buffer);
    Destination.Buffer = 0LL;
    MaximumLength = Destination.MaximumLength;
  }
  Destination.Buffer = (wchar_t *)operator new[](MaximumLength, 0x4B677844u, PagedPool);
  if ( !Destination.Buffer )
  {
LABEL_43:
    LODWORD(v5) = -1073741801;
    v31 = WdLogNewEntry5_WdLowResource(v10);
    *(union _LARGE_INTEGER *)(v31 + 24) = v3[2];
    WdLogEvent5_WdLowResource(v31);
    goto LABEL_41;
  }
  RtlAppendUnicodeToString(&Destination, L"\\Systemroot\\System32\\");
  RtlAppendUnicodeToString(&Destination, *(PCWSTR *)(v7.QuadPart + 984));
  v18 = v43 >> 1;
  if ( v43 >> 1 )
  {
    v19 = (_WORD *)(*(_QWORD *)(v7.QuadPart + 984) + 2 * (v18 - 1));
    do
    {
      if ( *v19 == 46 )
        break;
      --v19;
      --v18;
    }
    while ( v18 );
  }
  if ( !v18 )
    RtlAppendUnicodeToString(&Destination, L".DLL");
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &Destination;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v20 = ZwOpenFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
  v5 = v20;
  if ( v20 < 0 )
    goto LABEL_44;
LABEL_33:
  ObjectAttributes.ObjectName = 0LL;
  v22 = ZwCreateSection(&SectionHandle, 4u, &ObjectAttributes, 0LL, 2u, 0x1000000u, FileHandle);
  v5 = v22;
  if ( v22 < 0 )
    goto LABEL_44;
  v23 = ObReferenceObjectByHandle(SectionHandle, 4u, 0LL, 0, &Object, 0LL);
  v5 = v23;
  v4 = Object;
  if ( v23 < 0
    || (v43 = 0LL,
        v41 = 0LL,
        CurrentProcess = PsGetCurrentProcess(v21),
        v25 = MmMapViewOfSection(
                v4,
                CurrentProcess,
                &v44,
                0LL,
                0LL,
                &v41,
                &v43,
                1,
                0,
                2,
                *(_QWORD *)&Destination.Length),
        v5 = v25,
        v25 < 0) )
  {
LABEL_44:
    v33 = WdLogNewEntry5_WdError(v21);
    *(union _LARGE_INTEGER *)(v33 + 24) = v3[2];
    *(_QWORD *)(v33 + 32) = v5;
    WdLogEvent5_WdError(v33);
    goto LABEL_41;
  }
  v3[46].QuadPart = 0LL;
  Resource = LdrResFindResource(v44, 16LL, 1LL, 0LL, &v37, &v43, 0LL, 0LL, 16);
  v5 = Resource;
  v35 = Resource;
  if ( Resource < 0 )
  {
    v27 = WdLogNewEntry5_WdError(this);
    *(union _LARGE_INTEGER *)(v27 + 24) = v3[2];
    *(_QWORD *)(v27 + 32) = v5;
    WdLogEvent5_WdError(v27);
    LODWORD(v5) = 0;
    v35 = 0;
  }
  else if ( v43 >= 0x5C && !wcsncmp((const wchar_t *)(v37 + 6), L"VS_VERSION_INFO", 0x20uLL) )
  {
    this = (union _LARGE_INTEGER *)v37;
    v3[46].HighPart = *(_DWORD *)(v37 + 48);
    v3[46].LowPart = this[6].HighPart;
  }
LABEL_41:
  if ( (int)v5 >= 0 )
    goto LABEL_5;
LABEL_6:
  if ( v44 )
  {
    v28 = PsGetCurrentProcess(this);
    MmUnmapViewOfSection(v28, v44);
  }
  if ( v4 )
    ObfDereferenceObject(v4);
  if ( SectionHandle )
    ZwClose(SectionHandle);
  if ( FileHandle )
    ZwClose(FileHandle);
  if ( Destination.Buffer )
    operator delete(Destination.Buffer);
  return (unsigned int)v5;
}
