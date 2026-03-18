/*
 * XREFs of ExpGetGlobalLocaleSection @ 0x140464DB4
 * Callers:
 *     NtInitializeNlsFiles @ 0x140465080 (NtInitializeNlsFiles.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     RtlStringCchCopyW @ 0x14011BAF4 (RtlStringCchCopyW.c)
 *     RtlStringCchCatW @ 0x140166888 (RtlStringCchCatW.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14017F2D0 (ZwQueryValueKey.c)
 *     ZwOpenFile @ 0x14017F650 (ZwOpenFile.c)
 *     ZwCreateSection @ 0x14017F930 (ZwCreateSection.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall ExpGetGlobalLocaleSection(_QWORD *a1)
{
  PVOID v1; // rsi
  int v3; // r15d
  NTSTATUS result; // eax
  HANDLE v5; // rax
  NTSTATUS v6; // ebx
  __int64 v7; // r9
  struct _KTHREAD *CurrentThread; // r14
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rdi
  PVOID v12; // rdi
  PVOID v13; // rdi
  __int16 v14; // ax
  NTSTATUS v15; // eax
  HANDLE v16; // rcx
  HANDLE FileHandle; // [rsp+48h] [rbp-C0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B8h] BYREF
  PVOID Object; // [rsp+80h] [rbp-88h] BYREF
  HANDLE SectionHandle; // [rsp+88h] [rbp-80h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp-78h] BYREF
  ULONG ResultLength; // [rsp+98h] [rbp-70h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+C0h] [rbp-48h] BYREF
  int v26; // [rsp+C4h] [rbp-44h]
  int v27; // [rsp+C8h] [rbp-40h]
  int v28; // [rsp+CCh] [rbp-3Ch]
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
      && v26 == 4
      && v27 == 4 )
    {
      v3 = v28;
      if ( v28 == 5243136
        && RtlStringCchCopyW(pszDest, 0x104uLL, L"\\SystemRoot\\System32\\") >= 0
        && RtlStringCchCatW(pszDest, 0x104uLL, L"loc2008.nls") >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, pszDest);
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v15 = ZwOpenFile(&FileHandle, 0x100000u, &ObjectAttributes, &IoStatusBlock, 1u, 0);
        v16 = FileHandle;
        if ( v15 < 0 )
          v16 = 0LL;
        FileHandle = v16;
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
    v9 = KeAbPreAcquire((ULONG_PTR)&NlsSectionLock, 0LL, 0LL, v7);
    v11 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&NlsSectionLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&NlsSectionLock, v9, (ULONG_PTR)&NlsSectionLock, v10);
    if ( v11 )
      *(_BYTE *)(v11 + 26) |= 1u;
    v12 = NlsLocaleSectionPointer;
    if ( NlsLocaleSectionPointer == (PVOID)1 )
    {
      v13 = Object;
      NlsTableVersion = v3;
      ObfReferenceObject(Object);
      NlsLocaleSectionPointer = v13;
    }
    else if ( NlsLocaleSectionPointer )
    {
      ObfDereferenceObject(Object);
      v1 = v12;
      ObfReferenceObject(v12);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&NlsSectionLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&NlsSectionLock);
    KeAbPostRelease((ULONG_PTR)&NlsSectionLock);
    v14 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v14;
    if ( !v14
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
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
