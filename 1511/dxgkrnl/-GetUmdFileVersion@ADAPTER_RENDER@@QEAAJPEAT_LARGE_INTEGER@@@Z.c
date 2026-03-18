/*
 * XREFs of ?GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C006A1CC
 * Callers:
 *     DxgkQueryAdapterInfo @ 0x1C008BD90 (DxgkQueryAdapterInfo.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::GetUmdFileVersion(ADAPTER_RENDER *this, union _LARGE_INTEGER *a2)
{
  PVOID v4; // r14
  __int64 v5; // rdi
  __int64 v7; // rdi
  size_t v8; // rax
  size_t v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rcx
  _WORD *v15; // rdx
  NTSTATUS v16; // eax
  __int64 v17; // rcx
  NTSTATUS v18; // eax
  NTSTATUS v19; // eax
  __int64 CurrentProcess; // rax
  int v21; // eax
  int Resource; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
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
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C0h] [rbp-38h] BYREF
  unsigned __int64 v39; // [rsp+110h] [rbp+18h] BYREF
  __int64 v40; // [rsp+118h] [rbp+20h] BYREF

  v33 = 0LL;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  FileHandle = 0LL;
  SectionHandle = 0LL;
  v4 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  if ( !a2 )
  {
    v27 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v27 + 24) = 22626LL;
    WdLogEvent5_WdAssertion(v27);
  }
  if ( *((_QWORD *)this + 49) != -1LL )
  {
    LODWORD(v5) = 0;
LABEL_5:
    *a2 = *(union _LARGE_INTEGER *)((char *)this + 392);
    goto LABEL_6;
  }
  v7 = *((_QWORD *)this + 2);
  v8 = 2 * wcsnlen(*(const wchar_t **)(v7 + 896), (unsigned __int64)*(unsigned __int16 *)(v7 + 890) >> 1);
  v39 = v8;
  v9 = *(unsigned __int16 *)(v7 + 890);
  if ( v8 >= v9 )
  {
    v28 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v28 + 24) = 22649LL;
    WdLogEvent5_WdAssertion(v28);
    LOWORD(v8) = v39;
  }
  Destination.Length = 0;
  Destination.MaximumLength = v8 + 56;
  Destination.Buffer = (wchar_t *)operator new[]((unsigned __int16)(v8 + 56), 0x4B677844u, PagedPool);
  if ( Destination.Buffer )
  {
    RtlAppendUnicodeToString(&Destination, L"\\Systemroot\\System32\\");
    RtlAppendUnicodeToString(&Destination, *(PCWSTR *)(v7 + 896));
    v14 = v39 >> 1;
    if ( v39 >> 1 )
    {
      v15 = (_WORD *)(*(_QWORD *)(v7 + 896) + 2 * (v14 - 1));
      do
      {
        if ( *v15 == 46 )
          break;
        --v15;
        --v14;
      }
      while ( v14 );
    }
    if ( !v14 )
      RtlAppendUnicodeToString(&Destination, L".DLL");
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = &Destination;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v16 = ZwOpenFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
    v5 = v16;
    if ( v16 < 0 )
      goto LABEL_38;
    ObjectAttributes.ObjectName = 0LL;
    v18 = ZwCreateSection(&SectionHandle, 4u, &ObjectAttributes, 0LL, 2u, 0x1000000u, FileHandle);
    v5 = v18;
    if ( v18 < 0 )
      goto LABEL_38;
    v19 = ObReferenceObjectByHandle(SectionHandle, 4u, 0LL, 0, &Object, 0LL);
    v5 = v19;
    v4 = Object;
    if ( v19 < 0
      || (v39 = 0LL,
          v36 = 0LL,
          CurrentProcess = PsGetCurrentProcess(),
          v21 = MmMapViewOfSection(v4, CurrentProcess, &v40, 0LL, 0LL, &v36, &v39, 1, 0, 2),
          v5 = v21,
          v21 < 0) )
    {
LABEL_38:
      v30 = WdLogNewEntry5_WdError(v17);
      *(_QWORD *)(v30 + 24) = *((_QWORD *)this + 2);
      *(_QWORD *)(v30 + 32) = v5;
      WdLogEvent5_WdError(v30);
    }
    else
    {
      *((_QWORD *)this + 49) = 0LL;
      Resource = LdrResFindResource(v40, 16LL, 1LL, 0LL, &v33, &v39, 0LL, 0LL, 16);
      v5 = Resource;
      if ( Resource < 0 )
      {
        v25 = WdLogNewEntry5_WdError(v23);
        *(_QWORD *)(v25 + 24) = *((_QWORD *)this + 2);
        *(_QWORD *)(v25 + 32) = v5;
        WdLogEvent5_WdError(v25);
        LODWORD(v5) = 0;
      }
      else if ( v39 >= 0x5C && !wcsncmp((const wchar_t *)(v33 + 6), L"VS_VERSION_INFO", 0x20uLL) )
      {
        v24 = v33;
        *((_DWORD *)this + 99) = *(_DWORD *)(v33 + 48);
        *((_DWORD *)this + 98) = *(_DWORD *)(v24 + 52);
      }
    }
  }
  else
  {
    LODWORD(v5) = -1073741801;
    v29 = WdLogNewEntry5_WdLowResource(v11, v10, v12, v13);
    *(_QWORD *)(v29 + 24) = *((_QWORD *)this + 2);
    WdLogEvent5_WdLowResource(v29);
  }
  if ( (int)v5 >= 0 )
    goto LABEL_5;
LABEL_6:
  if ( v40 )
  {
    v26 = PsGetCurrentProcess();
    MmUnmapViewOfSection(v26, v40);
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
