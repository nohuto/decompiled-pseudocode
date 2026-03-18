/*
 * XREFs of SeGetTokenDeviceMap @ 0x1404A7BCC
 * Callers:
 *     ObpLookupObjectName @ 0x14040E3D0 (ObpLookupObjectName.c)
 *     ObpReferenceDeviceMap @ 0x14041CF70 (ObpReferenceDeviceMap.c)
 *     ObSetCurrentProcessDeviceMap @ 0x1404A7A38 (ObSetCurrentProcessDeviceMap.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     PsGetServerSiloGlobals @ 0x140102754 (PsGetServerSiloGlobals.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     swprintf_s @ 0x1401485D0 (swprintf_s.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwCreateDirectoryObject @ 0x140151980 (ZwCreateDirectoryObject.c)
 *     ZwCreateSymbolicLinkObject @ 0x140151C80 (ZwCreateSymbolicLinkObject.c)
 *     ObfDereferenceDeviceMap @ 0x14041D3D4 (ObfDereferenceDeviceMap.c)
 *     ObSetDirectoryDeviceMap @ 0x1404A7D9C (ObSetDirectoryDeviceMap.c)
 */

__int64 __fastcall SeGetTokenDeviceMap(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  unsigned int *ServerSiloGlobals; // rax
  NTSTATUS v8; // edi
  int v9; // [rsp+20h] [rbp-E0h]
  int v10; // [rsp+28h] [rbp-D8h]
  PVOID P; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE DirectoryHandle; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE SymbolicLinkHandle; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING v16; // [rsp+88h] [rbp-78h] BYREF
  wchar_t Dst[64]; // [rsp+A0h] [rbp-60h] BYREF

  P = 0LL;
  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( (*(_DWORD *)(a1 + 200) & 0x20) != 0 )
    return 3221225567LL;
  v4 = *(_QWORD *)(a1 + 216);
  if ( !v4 )
    return 3221225567LL;
  v5 = *(_QWORD *)(v4 + 40);
  if ( v5 )
  {
    *a2 = v5;
    return 0LL;
  }
  else
  {
    ServerSiloGlobals = (unsigned int *)PsGetServerSiloGlobals(*(_QWORD **)(v4 + 160));
    v10 = *(_DWORD *)(a1 + 24);
    v9 = *(_DWORD *)(a1 + 28);
    swprintf_s(Dst, 0x40uLL, L"\\Sessions\\%d\\DosDevices\\%08x-%08x", *ServerSiloGlobals, v9, v10);
    RtlInitUnicodeString(&DestinationString, Dst);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 704;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v8 = ZwCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes);
    if ( v8 >= 0 )
    {
      v8 = ObSetDirectoryDeviceMap(&P, DirectoryHandle);
      if ( v8 >= 0 )
      {
        RtlInitUnicodeString(&v16, L"Global");
        RtlInitUnicodeString(&DestinationString, L"\\Global??");
        ObjectAttributes.RootDirectory = DirectoryHandle;
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &v16;
        ObjectAttributes.Attributes = 720;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v8 = ZwCreateSymbolicLinkObject(&SymbolicLinkHandle, 0xF0001u, &ObjectAttributes, &DestinationString);
        if ( v8 < 0 )
        {
          ObfDereferenceDeviceMap(P);
        }
        else
        {
          ZwClose(SymbolicLinkHandle);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 40), (signed __int64)P, 0LL) )
            ObfDereferenceDeviceMap(P);
          *a2 = *(_QWORD *)(v4 + 40);
        }
      }
      ZwClose(DirectoryHandle);
    }
    return (unsigned int)v8;
  }
}
