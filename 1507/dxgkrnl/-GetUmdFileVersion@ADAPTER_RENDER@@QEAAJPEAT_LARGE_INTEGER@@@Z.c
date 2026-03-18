/*
 * XREFs of ?GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C0093798
 * Callers:
 *     DxgkQueryAdapterInfo @ 0x1C00908E0 (DxgkQueryAdapterInfo.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::GetUmdFileVersion(
        union _LARGE_INTEGER *this,
        union _LARGE_INTEGER *a2,
        __int64 a3,
        __int64 a4)
{
  union _LARGE_INTEGER *v5; // rsi
  PVOID v6; // r14
  __int64 v7; // rdi
  union _LARGE_INTEGER v9; // rdi
  size_t v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  size_t v14; // rcx
  __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  _WORD *v17; // rdx
  NTSTATUS v18; // eax
  __int64 v19; // rcx
  NTSTATUS v20; // eax
  NTSTATUS v21; // eax
  __int64 CurrentProcess; // rax
  int v23; // eax
  int Resource; // eax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  struct _UNICODE_STRING Destination; // [rsp+58h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+68h] [rbp-90h] BYREF
  __int64 v33; // [rsp+70h] [rbp-88h] BYREF
  void *SectionHandle; // [rsp+78h] [rbp-80h] BYREF
  void *FileHandle; // [rsp+80h] [rbp-78h] BYREF
  __int64 v36; // [rsp+88h] [rbp-70h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-68h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C0h] [rbp-38h] BYREF
  unsigned __int64 v39; // [rsp+110h] [rbp+18h] BYREF
  __int64 v40; // [rsp+118h] [rbp+20h] BYREF

  v5 = this;
  v33 = 0LL;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  FileHandle = 0LL;
  SectionHandle = 0LL;
  v6 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  if ( !a2 )
  {
    v27 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    *(_QWORD *)(v27 + 24) = 22118LL;
    WdLogEvent5_WdAssertion(v27);
  }
  if ( v5[46].QuadPart != -1 )
  {
    LODWORD(v7) = 0;
LABEL_5:
    *a2 = v5[46];
    goto LABEL_6;
  }
  v9 = v5[2];
  v10 = 2
      * wcsnlen(*(const wchar_t **)(v9.QuadPart + 888), (unsigned __int64)*(unsigned __int16 *)(v9.QuadPart + 882) >> 1);
  v39 = v10;
  v14 = *(unsigned __int16 *)(v9.QuadPart + 882);
  if ( v10 >= v14 )
  {
    v28 = WdLogNewEntry5_WdAssertion(v14, v11, v12, v13);
    *(_QWORD *)(v28 + 24) = 22141LL;
    WdLogEvent5_WdAssertion(v28);
    LOWORD(v10) = v39;
  }
  Destination.Length = 0;
  Destination.MaximumLength = v10 + 56;
  Destination.Buffer = (wchar_t *)operator new[]((unsigned __int16)(v10 + 56), 0x4B677844u, PagedPool);
  if ( Destination.Buffer )
  {
    RtlAppendUnicodeToString(&Destination, L"\\Systemroot\\System32\\");
    RtlAppendUnicodeToString(&Destination, *(PCWSTR *)(v9.QuadPart + 888));
    v16 = v39 >> 1;
    if ( v39 >> 1 )
    {
      v17 = (_WORD *)(*(_QWORD *)(v9.QuadPart + 888) + 2 * (v16 - 1));
      do
      {
        if ( *v17 == 46 )
          break;
        --v17;
        --v16;
      }
      while ( v16 );
    }
    if ( !v16 )
      RtlAppendUnicodeToString(&Destination, L".DLL");
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = &Destination;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v18 = ZwOpenFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
    v7 = v18;
    if ( v18 < 0 )
      goto LABEL_38;
    ObjectAttributes.ObjectName = 0LL;
    v20 = ZwCreateSection(&SectionHandle, 4u, &ObjectAttributes, 0LL, 2u, 0x1000000u, FileHandle);
    v7 = v20;
    if ( v20 < 0 )
      goto LABEL_38;
    v21 = ObReferenceObjectByHandle(SectionHandle, 4u, 0LL, 0, &Object, 0LL);
    v7 = v21;
    v6 = Object;
    if ( v21 < 0
      || (v39 = 0LL,
          v36 = 0LL,
          CurrentProcess = PsGetCurrentProcess(v19),
          v23 = MmMapViewOfSection(v6, CurrentProcess, &v40, 0LL, 0LL, &v36, &v39, 1, 0, 2),
          v7 = v23,
          v23 < 0) )
    {
LABEL_38:
      v30 = WdLogNewEntry5_WdError(v19);
      *(union _LARGE_INTEGER *)(v30 + 24) = v5[2];
      *(_QWORD *)(v30 + 32) = v7;
      WdLogEvent5_WdError(v30);
    }
    else
    {
      v5[46].QuadPart = 0LL;
      Resource = LdrResFindResource(v40, 16LL, 1LL, 0LL, &v33, &v39, 0LL, 0LL, 16);
      v7 = Resource;
      if ( Resource < 0 )
      {
        v25 = WdLogNewEntry5_WdError(this);
        *(union _LARGE_INTEGER *)(v25 + 24) = v5[2];
        *(_QWORD *)(v25 + 32) = v7;
        WdLogEvent5_WdError(v25);
        LODWORD(v7) = 0;
      }
      else if ( v39 >= 0x5C && !wcsncmp((const wchar_t *)(v33 + 6), L"VS_VERSION_INFO", 0x20uLL) )
      {
        this = (union _LARGE_INTEGER *)v33;
        v5[46].HighPart = *(_DWORD *)(v33 + 48);
        v5[46].LowPart = this[6].HighPart;
      }
    }
  }
  else
  {
    LODWORD(v7) = -1073741801;
    v29 = WdLogNewEntry5_WdLowResource(v15);
    *(union _LARGE_INTEGER *)(v29 + 24) = v5[2];
    WdLogEvent5_WdLowResource(v29);
  }
  if ( (int)v7 >= 0 )
    goto LABEL_5;
LABEL_6:
  if ( v40 )
  {
    v26 = PsGetCurrentProcess(this);
    MmUnmapViewOfSection(v26, v40);
  }
  if ( v6 )
    ObfDereferenceObject(v6);
  if ( SectionHandle )
    ZwClose(SectionHandle);
  if ( FileHandle )
    ZwClose(FileHandle);
  if ( Destination.Buffer )
    operator delete(Destination.Buffer);
  return (unsigned int)v7;
}
