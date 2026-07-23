/*
 * XREFs of SepCleanupLUIDDeviceMapDirectory @ 0x14054A1B4
 * Callers:
 *     SepDeReferenceLogonSession @ 0x1404C7CF8 (SepDeReferenceLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x1405335D4 (SepDeleteLogonSessionTrack.c)
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x1400098A0 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1400098C0 (PsAttachSiloToCurrentThread.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x14006A940 (ObReferenceObjectSafeWithTag.c)
 *     PsGetServerSiloServiceSessionId @ 0x1400860B0 (PsGetServerSiloServiceSessionId.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     wcscmp @ 0x14014F524 (wcscmp.c)
 *     swprintf_s @ 0x140151F20 (swprintf_s.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x14015ACF0 (ZwOpenDirectoryObject.c)
 *     ZwMakeTemporaryObject @ 0x14015C250 (ZwMakeTemporaryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x14015C5B0 (ZwOpenSymbolicLinkObject.c)
 *     ZwQueryDirectoryObject @ 0x14015C810 (ZwQueryDirectoryObject.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepCleanupLUIDDeviceMapDirectory(_DWORD *a1, __int64 a2)
{
  __int64 v4; // rdi
  UNICODE_STRING *v5; // rbx
  unsigned int v6; // r13d
  char v7; // r12
  unsigned int ServerSiloServiceSessionId; // eax
  __int64 v9; // r15
  NTSTATUS v10; // esi
  HANDLE *PoolWithTag; // r14
  BOOLEAN RestartScan; // r15
  SIZE_T v13; // rsi
  HANDLE *v14; // r15
  __int64 v15; // rcx
  HANDLE *v17; // rsi
  ULONG BufferLength; // [rsp+40h] [rbp-C0h]
  HANDLE DirectoryHandle; // [rsp+48h] [rbp-B8h] BYREF
  ULONG Context; // [rsp+50h] [rbp-B0h] BYREF
  ULONG ReturnLength; // [rsp+54h] [rbp-ACh] BYREF
  HANDLE LinkHandle; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A0h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v26[56]; // [rsp+A8h] [rbp-58h] BYREF
  wchar_t Dst[64]; // [rsp+E0h] [rbp-20h] BYREF

  Context = 0;
  v4 = 0LL;
  v5 = 0LL;
  BufferLength = 0;
  v6 = 100;
  if ( !a1 )
    return 3221225485LL;
  v7 = ObReferenceObjectSafeWithTag((__int64)KeGetCurrentThread()->ApcState.Process);
  if ( v7 )
    ObfDereferenceObjectWithTag(KeGetCurrentThread()->ApcState.Process, 0x4D526553u);
  else
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v26);
  ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(a2);
  swprintf_s(Dst, 0x40uLL, L"\\Sessions\\%d\\DosDevices\\%08x-%08x", ServerSiloServiceSessionId, a1[1], *a1);
  RtlInitUnicodeString(&DestinationString, Dst);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 576;
  v23 = PsAttachSiloToCurrentThread(a2);
  v9 = v23;
  v10 = ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes);
  if ( v10 < 0 )
  {
    v15 = v9;
LABEL_20:
    PsDetachSiloFromCurrentThread(v15);
    if ( !v7 )
      KiUnstackDetachProcess((struct _KTHREAD *)v26, 0);
    return (unsigned int)v10;
  }
  PoolWithTag = (HANDLE *)ExAllocatePoolWithTag(PagedPool, 0x320uLL, 0x61486553u);
  if ( PoolWithTag )
  {
LABEL_6:
    RestartScan = 1;
    while ( 1 )
    {
      LODWORD(v13) = BufferLength;
      while ( 1 )
      {
        v10 = ZwQueryDirectoryObject(DirectoryHandle, v5, v13, 1u, RestartScan, &Context, &ReturnLength);
        if ( v10 != -1073741789 )
          break;
        v13 = ReturnLength;
        BufferLength = ReturnLength;
        if ( v5 )
          ExFreePoolWithTag(v5, 0);
        v5 = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, v13, 0x62446553u);
        if ( !v5 )
        {
          v10 = -1073741670;
          break;
        }
      }
      RestartScan = 0;
      if ( v10 < 0 )
        break;
      if ( !wcscmp(v5[1].Buffer, L"SymbolicLink") )
      {
        if ( (unsigned int)v4 >= v6 )
        {
          if ( (_DWORD)v4 )
          {
            v17 = PoolWithTag;
            do
            {
              ZwClose(*v17++);
              --v4;
            }
            while ( v4 );
          }
          v4 = 0LL;
          v6 += 20;
          ExFreePoolWithTag(PoolWithTag, 0);
          PoolWithTag = (HANDLE *)ExAllocatePoolWithTag(PagedPool, 8LL * v6, 0x61486553u);
          if ( !PoolWithTag )
          {
            v9 = v23;
            goto LABEL_41;
          }
          goto LABEL_6;
        }
        ObjectAttributes.RootDirectory = DirectoryHandle;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        ObjectAttributes.ObjectName = v5;
        if ( ZwOpenSymbolicLinkObject(&LinkHandle, 0xF0001u, &ObjectAttributes) >= 0 )
        {
          if ( ZwMakeTemporaryObject(LinkHandle) < 0 )
          {
            ZwClose(LinkHandle);
          }
          else
          {
            PoolWithTag[v4] = LinkHandle;
            v4 = (unsigned int)(v4 + 1);
          }
        }
      }
    }
    if ( v10 == -2147483622 )
      v10 = 0;
    if ( (_DWORD)v4 )
    {
      v14 = PoolWithTag;
      do
      {
        ZwClose(*v14++);
        --v4;
      }
      while ( v4 );
    }
    ExFreePoolWithTag(PoolWithTag, 0);
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    if ( DirectoryHandle )
      ZwClose(DirectoryHandle);
    v15 = v23;
    goto LABEL_20;
  }
LABEL_41:
  ZwClose(DirectoryHandle);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  PsDetachSiloFromCurrentThread(v9);
  if ( !v7 )
    KiUnstackDetachProcess((struct _KTHREAD *)v26, 0);
  return 3221225495LL;
}
