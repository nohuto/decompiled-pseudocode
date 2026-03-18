/*
 * XREFs of ExpGetGlobalLocaleSection @ 0x140464988
 * Callers:
 *     NtInitializeNlsFiles @ 0x1404625A4 (NtInitializeNlsFiles.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x140002AB0 (RtlStringCchCopyW.c)
 *     RtlStringCchCatW @ 0x140002BC8 (RtlStringCchCatW.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenKey @ 0x140150860 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x140150900 (ZwQueryValueKey.c)
 *     ZwOpenFile @ 0x140150C80 (ZwOpenFile.c)
 *     ZwCreateSection @ 0x140150F60 (ZwCreateSection.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall ExpGetGlobalLocaleSection(_QWORD *a1)
{
  PVOID v1; // rsi
  int v3; // r14d
  NTSTATUS result; // eax
  HANDLE v5; // rax
  NTSTATUS v6; // ebx
  struct _KTHREAD *CurrentThread; // r15
  __int64 v8; // rax
  __int64 v9; // rdi
  PVOID v10; // rdi
  PVOID v11; // rdi
  NTSTATUS v12; // eax
  HANDLE v13; // rcx
  HANDLE FileHandle; // [rsp+48h] [rbp-C0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B8h] BYREF
  PVOID Object; // [rsp+80h] [rbp-88h] BYREF
  HANDLE SectionHandle; // [rsp+88h] [rbp-80h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp-78h] BYREF
  ULONG ResultLength; // [rsp+98h] [rbp-70h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+C0h] [rbp-48h] BYREF
  int v23; // [rsp+C4h] [rbp-44h]
  int v24; // [rsp+C8h] [rbp-40h]
  int v25; // [rsp+CCh] [rbp-3Ch]
  wchar_t pszDest[264]; // [rsp+D8h] [rbp-30h] BYREF

  v1 = NlsLocaleSectionPointer;
  FileHandle = 0LL;
  v3 = 0;
  if ( (unsigned __int64)NlsLocaleSectionPointer > 1 )
  {
    ObfReferenceObject(NlsLocaleSectionPointer);
LABEL_3:
    *a1 = v1;
    return 0;
  }
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"ln";
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0 )
  {
    if ( ZwQueryValueKey(
           KeyHandle,
           (PUNICODE_STRING)&NlsTableVersionKeyName,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x14u,
           &ResultLength) >= 0
      && v23 == 4
      && v24 == 4 )
    {
      v3 = v25;
      if ( v25 == 5243136
        && RtlStringCchCopyW(pszDest, 0x104uLL, L"\\SystemRoot\\System32\\") >= 0
        && RtlStringCchCatW(pszDest, 0x104uLL, L"loc2008.nls") >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, pszDest);
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v12 = ZwOpenFile(&FileHandle, 0x100000u, &ObjectAttributes, &IoStatusBlock, 1u, 0);
        v13 = FileHandle;
        if ( v12 < 0 )
          v13 = 0LL;
        FileHandle = v13;
      }
    }
    ZwClose(KeyHandle);
  }
  v5 = FileHandle;
  if ( FileHandle )
  {
LABEL_11:
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v6 = ZwCreateSection(&SectionHandle, 4u, &ObjectAttributes, 0LL, 2u, 0x8000000u, v5);
    ZwClose(FileHandle);
    if ( v6 < 0 )
      return v6;
    v6 = ObReferenceObjectByHandle(SectionHandle, 0xF001Fu, MmSectionObjectType, 0, &Object, 0LL);
    v1 = Object;
    ZwClose(SectionHandle);
    if ( v6 < 0 )
      return v6;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v8 = KeAbPreAcquire((ULONG_PTR)&NlsSectionLock, 0LL, 0LL);
    v9 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&NlsSectionLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&NlsSectionLock, v8, (ULONG_PTR)&NlsSectionLock);
    if ( v9 )
      *(_BYTE *)(v9 + 26) |= 1u;
    v10 = NlsLocaleSectionPointer;
    if ( NlsLocaleSectionPointer == (PVOID)1 )
    {
      v11 = Object;
      NlsTableVersion = v3;
      ObfReferenceObject(Object);
      NlsLocaleSectionPointer = v11;
    }
    else if ( NlsLocaleSectionPointer )
    {
      ObfDereferenceObject(Object);
      v1 = v10;
      ObfReferenceObject(v10);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&NlsSectionLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&NlsSectionLock);
    KeAbPostRelease((ULONG_PTR)&NlsSectionLock);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
    goto LABEL_3;
  }
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L">@";
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenFile(&FileHandle, 0x100000u, &ObjectAttributes, &IoStatusBlock, 1u, 0);
  if ( result >= 0 )
  {
    v5 = FileHandle;
    v3 = 263424;
    goto LABEL_11;
  }
  return result;
}
