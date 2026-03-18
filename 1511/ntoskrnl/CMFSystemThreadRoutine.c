/*
 * XREFs of CMFSystemThreadRoutine @ 0x140676B60
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchPrintfW @ 0x140003C28 (RtlStringCchPrintfW.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwWaitForSingleObject @ 0x1401506A0 (ZwWaitForSingleObject.c)
 *     ZwReadFile @ 0x1401506E0 (ZwReadFile.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x140150B20 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x140150B60 (ZwUnmapViewOfSection.c)
 *     ZwOpenFile @ 0x140150C80 (ZwOpenFile.c)
 *     ZwCreateEvent @ 0x140150F20 (ZwCreateEvent.c)
 *     ZwCreateSection @ 0x140150F60 (ZwCreateSection.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     CMFCreateSecurityDescriptor @ 0x140675F40 (CMFCreateSecurityDescriptor.c)
 *     CMFGetFileSizeEx @ 0x140676748 (CMFGetFileSizeEx.c)
 *     CMFGetLargePageSectionSize @ 0x1406767A8 (CMFGetLargePageSectionSize.c)
 *     CMFReadCompressedSegment @ 0x140676858 (CMFReadCompressedSegment.c)
 */

void __fastcall CMFSystemThreadRoutine(int *StartContext)
{
  void *v1; // rsi
  _DWORD *v2; // r15
  PVOID v3; // r13
  int v5; // eax
  const char *v6; // r12
  const wchar_t *v7; // r8
  ULONG Length; // r14d
  _DWORD *PoolWithTag; // rax
  int v10; // ebx
  NTSTATUS v11; // eax
  NTSTATUS v12; // eax
  int v13; // eax
  ULONG_PTR LowPart; // r14
  LARGE_INTEGER *p_MaximumSize; // r12
  int v16; // eax
  HANDLE v17; // r12
  int v18; // eax
  NTSTATUS v19; // eax
  PVOID v20; // rdx
  NTSTATUS v21; // eax
  _QWORD *v22; // rax
  struct _KEVENT *v23; // rcx
  ULONG Buffer; // [rsp+30h] [rbp-D8h]
  char v25; // [rsp+58h] [rbp-B0h]
  LARGE_INTEGER MaximumSize; // [rsp+60h] [rbp-A8h] BYREF
  PVOID v27; // [rsp+68h] [rbp-A0h]
  PVOID BaseAddress; // [rsp+70h] [rbp-98h] BYREF
  HANDLE FileHandle; // [rsp+78h] [rbp-90h] BYREF
  HANDLE v30; // [rsp+80h] [rbp-88h]
  HANDLE SectionHandle; // [rsp+88h] [rbp-80h] BYREF
  HANDLE EventHandle; // [rsp+90h] [rbp-78h] BYREF
  PVOID Object; // [rsp+98h] [rbp-70h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-68h] BYREF
  PVOID v35; // [rsp+D0h] [rbp-38h]
  ULONG_PTR ViewSize; // [rsp+D8h] [rbp-30h] BYREF
  unsigned int v37; // [rsp+E0h] [rbp-28h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+E8h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v40[16]; // [rsp+108h] [rbp+0h] BYREF
  wchar_t pszDest[264]; // [rsp+118h] [rbp+10h] BYREF

  v1 = 0LL;
  v25 = 0;
  SectionHandle = 0LL;
  v2 = 0LL;
  EventHandle = 0LL;
  v3 = 0LL;
  FileHandle = 0LL;
  BaseAddress = 0LL;
  v27 = 0LL;
  Object = 0LL;
  if ( !StartContext )
    return;
  v5 = StartContext[12];
  if ( v5 == 16 )
  {
    v6 = "RESCDIR";
    v7 = L"%s\\rc%04u\\rescache.dir";
LABEL_10:
    v35 = v40;
    Length = 8;
    v30 = v40;
    v11 = RtlStringCchPrintfW(pszDest, 0x104uLL, v7, L"\\SystemRoot\\Rescache", StartContext[1]);
LABEL_11:
    v10 = v11;
    if ( (v11 & 0xC0000000) == 0xC0000000 )
    {
LABEL_14:
      v1 = 0LL;
      goto LABEL_62;
    }
    RtlInitUnicodeString(&DestinationString, pszDest);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v10 = ZwOpenFile(&FileHandle, 0xC0000000, &ObjectAttributes, &IoStatusBlock, 7u, 0);
    if ( (v10 & 0xC0000000) == 0xC0000000 )
    {
      FileHandle = 0LL;
      goto LABEL_14;
    }
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v10 = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, SynchronizationEvent, 0);
    if ( (v10 & 0xC0000000) == 0xC0000000 )
      goto LABEL_14;
    MaximumSize.QuadPart = 0LL;
    v10 = ZwReadFile(FileHandle, EventHandle, 0LL, 0LL, &IoStatusBlock, v35, Length, &MaximumSize, 0LL);
    if ( v10 < 0 )
      goto LABEL_14;
    v12 = ZwWaitForSingleObject(EventHandle, 0, 0LL);
    v10 = v12;
    if ( v12 )
    {
      if ( v12 >= 0 )
      {
        v10 = -1073741823;
        goto LABEL_14;
      }
    }
    else
    {
      if ( *(_QWORD *)v30 != *(_QWORD *)v6 )
      {
        v10 = -1073700864;
        goto LABEL_14;
      }
      v13 = StartContext[12];
      if ( v13 == 32 && v2[19] )
      {
        StartContext[6] |= 4u;
        v25 = 1;
        *((_BYTE *)StartContext + 12) = 1;
      }
      LowPart = 0LL;
      p_MaximumSize = 0LL;
      v30 = FileHandle;
      if ( *((_BYTE *)StartContext + 12) )
      {
        v30 = 0LL;
        MaximumSize.QuadPart = 0LL;
        if ( v13 == 16 || v13 == 256 )
        {
          v10 = CMFGetFileSizeEx(FileHandle, &MaximumSize);
          if ( (v10 & 0xC0000000) == 0xC0000000 )
            goto LABEL_14;
          LowPart = MaximumSize.LowPart;
        }
        else
        {
          LowPart = (unsigned int)v2[8];
          MaximumSize.QuadPart = (unsigned int)LowPart;
        }
        if ( (int)CMFGetLargePageSectionSize((__int64 *)&MaximumSize, (__int64)&v37) < 0 || *StartContext >= 0 )
        {
          *StartContext &= ~0x80000000;
          p_MaximumSize = &MaximumSize;
          ViewSize = LowPart;
        }
        else
        {
          p_MaximumSize = (LARGE_INTEGER *)&v37;
          ViewSize = v37;
        }
      }
      if ( StartContext[12] == 256
        || (v16 = CMFCreateSecurityDescriptor(&Object, 0LL), v3 = Object, v10 = v16, (v16 & 0xC0000000) != 0xC0000000) )
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.ObjectName = 0LL;
        ObjectAttributes.SecurityQualityOfService = 0LL;
        Buffer = *StartContext;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.SecurityDescriptor = v3;
        v10 = ZwCreateSection(&SectionHandle, 6u, &ObjectAttributes, p_MaximumSize, 4u, Buffer, v30);
        if ( v10 < 0 )
        {
          v17 = v30;
          while ( *((_BYTE *)StartContext + 12) )
          {
            v18 = *StartContext;
            if ( *StartContext >= 0 )
              break;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.ObjectName = 0LL;
            ObjectAttributes.SecurityQualityOfService = 0LL;
            *StartContext = v18 & 0x7FFFFFFF;
            ViewSize = LowPart;
            ObjectAttributes.Length = 48;
            ObjectAttributes.Attributes = 576;
            ObjectAttributes.SecurityDescriptor = v3;
            v10 = ZwCreateSection(&SectionHandle, 6u, &ObjectAttributes, &MaximumSize, 4u, v18 & 0x7FFFFFFF, v17);
            if ( v10 >= 0 )
              goto LABEL_42;
          }
          SectionHandle = 0LL;
          goto LABEL_45;
        }
LABEL_42:
        v19 = ObReferenceObjectByHandle(SectionHandle, 0xF001Fu, MmSectionObjectType, 0, &Object, 0LL);
        v20 = Object;
        v10 = v19;
        v27 = Object;
        if ( (v19 & 0xC0000000) == 0xC0000000 )
        {
          v1 = 0LL;
          goto LABEL_62;
        }
        if ( *((_BYTE *)StartContext + 12) )
        {
          BaseAddress = 0LL;
          MaximumSize.QuadPart = 0LL;
          v10 = ZwMapViewOfSection(
                  SectionHandle,
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  &BaseAddress,
                  0LL,
                  0LL,
                  &MaximumSize,
                  &ViewSize,
                  ViewUnmap,
                  0x400000u,
                  4u);
          if ( (v10 & 0xC0000000) == 0xC0000000 )
          {
            BaseAddress = 0LL;
            goto LABEL_45;
          }
          if ( v25 )
          {
            v2[19] = 0;
            v10 = CMFReadCompressedSegment(FileHandle, (__int64)BaseAddress, LowPart, v2);
            if ( v10 < 0 )
              goto LABEL_45;
          }
          else
          {
            MaximumSize.QuadPart = 0LL;
            v10 = ZwReadFile(FileHandle, EventHandle, 0LL, 0LL, &IoStatusBlock, BaseAddress, LowPart, &MaximumSize, 0LL);
            if ( v10 < 0 )
              goto LABEL_45;
            v21 = ZwWaitForSingleObject(EventHandle, 0, 0LL);
            v10 = v21;
            if ( v21 )
            {
              if ( v21 >= 0 )
                v10 = -1073741823;
              goto LABEL_45;
            }
          }
          ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
          BaseAddress = 0LL;
          v20 = v27;
        }
        v22 = (_QWORD *)*((_QWORD *)StartContext + 5);
        if ( v22 )
        {
          *v22 = v20;
          if ( StartContext[12] == 16 && CMFCacheIndex == 10000 )
          {
            CMFFlagsCache |= StartContext[6] & 0xF;
            CMFCacheIndex = StartContext[1];
          }
          v1 = 0LL;
          goto LABEL_62;
        }
      }
    }
LABEL_45:
    v1 = v27;
    goto LABEL_62;
  }
  if ( v5 != 32 )
  {
    if ( v5 != 256 )
    {
      v10 = -1073741811;
      goto LABEL_62;
    }
    v6 = "RESCHIT";
    v7 = L"%s\\rc%04u\\rescache.hit";
    goto LABEL_10;
  }
  Length = 4192;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1060uLL, 0x636D6650u);
  v2 = PoolWithTag;
  if ( PoolWithTag )
  {
    v35 = PoolWithTag;
    v30 = PoolWithTag;
    v6 = "RESCSEG";
    v11 = RtlStringCchPrintfW(
            pszDest,
            0x104uLL,
            L"%s\\rc%04u\\segment%u.cmf",
            L"\\SystemRoot\\Rescache",
            StartContext[1],
            StartContext[7]);
    goto LABEL_11;
  }
  v10 = -1073741801;
LABEL_62:
  if ( EventHandle )
    ZwClose(EventHandle);
  if ( BaseAddress )
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  if ( SectionHandle )
    ZwClose(SectionHandle);
  if ( FileHandle )
    ZwClose(FileHandle);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( v1 )
    ObfDereferenceObject(v1);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  v23 = (struct _KEVENT *)*((_QWORD *)StartContext + 2);
  StartContext[9] = v10;
  if ( v23 )
    KeSetEvent(v23, 1, 0);
}
