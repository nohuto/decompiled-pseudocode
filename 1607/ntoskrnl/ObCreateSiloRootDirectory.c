/*
 * XREFs of ObCreateSiloRootDirectory @ 0x1406E6004
 * Callers:
 *     NtSetInformationJobObject @ 0x140464BD8 (NtSetInformationJobObject.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140002DFC (xHalTimerWatchdogStop.c)
 *     PsDetachSiloFromCurrentThread @ 0x140009D20 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x140009D40 (PsAttachSiloToCurrentThread.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x14015A780 (ZwOpenDirectoryObject.c)
 *     ZwCreateDirectoryObjectEx @ 0x14015B020 (ZwCreateDirectoryObjectEx.c)
 *     RtlIntegerToUnicodeString @ 0x1403F5E20 (RtlIntegerToUnicodeString.c)
 *     ObReferenceObjectByHandle @ 0x140450D40 (ObReferenceObjectByHandle.c)
 *     PsInsertPermanentSiloContext @ 0x14055FA14 (PsInsertPermanentSiloContext.c)
 *     ObpInitializeRootNamespace @ 0x140579974 (ObpInitializeRootNamespace.c)
 *     PsGetSiloIdentifier @ 0x140581118 (PsGetSiloIdentifier.c)
 *     ObpGetSilosRootDirectory @ 0x1406E63A0 (ObpGetSilosRootDirectory.c)
 */

__int64 __fastcall ObCreateSiloRootDirectory(__int64 a1, int a2)
{
  char v2; // di
  PVOID v4; // rsi
  __int64 v6; // rbx
  __int64 v7; // r15
  ULONG SiloIdentifier; // eax
  int SilosRootDirectory; // ebx
  NTSTATUS v10; // eax
  HANDLE Handle; // [rsp+30h] [rbp-59h] BYREF
  HANDLE v12; // [rsp+38h] [rbp-51h] BYREF
  HANDLE v13; // [rsp+40h] [rbp-49h] BYREF
  HANDLE DirectoryHandle; // [rsp+48h] [rbp-41h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-39h] BYREF
  UNICODE_STRING String; // [rsp+80h] [rbp-9h] BYREF
  PVOID Object; // [rsp+90h] [rbp+7h] BYREF
  char v18; // [rsp+98h] [rbp+Fh] BYREF

  v2 = a2;
  v12 = 0LL;
  v13 = 0LL;
  v4 = 0LL;
  Handle = 0LL;
  DirectoryHandle = 0LL;
  if ( (a2 & 0xFFFFFFF8) != 0 || (a2 & 6) == 4 )
    return 3221225485LL;
  v6 = *(_QWORD *)(a1 + 1064);
  if ( v6 != xHalTimerWatchdogStop() )
    return 3221227289LL;
  v7 = PsAttachSiloToCurrentThread(v6);
  *(_DWORD *)&String.Length = 1441792;
  String.Buffer = (wchar_t *)&v18;
  SiloIdentifier = PsGetSiloIdentifier(a1);
  SilosRootDirectory = RtlIntegerToUnicodeString(SiloIdentifier, 0xAu, &String);
  if ( SilosRootDirectory >= 0 )
  {
    SilosRootDirectory = ObpGetSilosRootDirectory(&v13);
    if ( SilosRootDirectory >= 0 )
    {
      if ( (v2 & 1) == 0
        || (ObjectAttributes.Length = 48,
            ObjectAttributes.ObjectName = (PUNICODE_STRING)&ObpRootDirectoryName,
            ObjectAttributes.RootDirectory = 0LL,
            ObjectAttributes.Attributes = 512,
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
            SilosRootDirectory = ZwOpenDirectoryObject(&DirectoryHandle, 3u, &ObjectAttributes),
            SilosRootDirectory >= 0) )
      {
        ObjectAttributes.RootDirectory = v13;
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &String;
        ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
        ObjectAttributes.Attributes = 592;
        ObjectAttributes.SecurityQualityOfService = 0LL;
        SilosRootDirectory = ZwCreateDirectoryObjectEx((__int64)&Handle, 983055LL, (__int64)&ObjectAttributes);
        if ( SilosRootDirectory >= 0 )
        {
          v10 = ObReferenceObjectByHandle(Handle, 0xF000Fu, ObpDirectoryObjectType, 0, &Object, 0LL);
          v4 = Object;
          SilosRootDirectory = v10;
          if ( v10 >= 0 )
          {
            SilosRootDirectory = PsInsertPermanentSiloContext(a1, PsObjectDirectorySiloContextSlot, (__int64)Object);
            if ( SilosRootDirectory >= 0 && (v2 & 2) != 0 )
            {
              if ( (v2 & 4) == 0
                || (ObjectAttributes.Length = 48,
                    ObjectAttributes.ObjectName = (PUNICODE_STRING)&ObpGlobalDosDevicesShortName,
                    ObjectAttributes.RootDirectory = 0LL,
                    ObjectAttributes.Attributes = 512,
                    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
                    SilosRootDirectory = ZwOpenDirectoryObject(&v12, 3u, &ObjectAttributes),
                    SilosRootDirectory >= 0) )
              {
                SilosRootDirectory = ObpInitializeRootNamespace(a1, Handle, (__int64)v12);
              }
            }
          }
        }
      }
    }
  }
  if ( v12 )
    ZwClose(v12);
  if ( v13 )
    ZwClose(v13);
  if ( Handle )
    ZwClose(Handle);
  if ( v4 )
    ObfDereferenceObject(v4);
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  PsDetachSiloFromCurrentThread(v7);
  return (unsigned int)SilosRootDirectory;
}
