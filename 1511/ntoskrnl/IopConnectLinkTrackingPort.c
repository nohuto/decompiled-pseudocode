/*
 * XREFs of IopConnectLinkTrackingPort @ 0x1405F758C
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     NtConnectPort @ 0x140481D68 (NtConnectPort.c)
 *     NtClose @ 0x1404DAF00 (NtClose.c)
 */

LONG __fastcall IopConnectLinkTrackingPort(__int64 a1)
{
  NTSTATUS v1; // ebx
  HANDLE PortHandle; // [rsp+40h] [rbp-40h] BYREF
  ULONG MaxMessageLength[2]; // [rsp+48h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-30h] BYREF
  struct _SECURITY_QUALITY_OF_SERVICE SecurityQos; // [rsp+60h] [rbp-20h] BYREF

  v1 = 0;
  if ( !IopLinkTrackingServiceObject )
  {
    if ( *(_DWORD *)(IopLinkTrackingServiceEvent + 4) )
    {
      SecurityQos.ImpersonationLevel = SecurityImpersonation;
      *(_WORD *)&SecurityQos.ContextTrackingMode = 257;
      RtlInitUnicodeString(&DestinationString, L"\\Security\\TRKWKS_PORT");
      v1 = NtConnectPort(&PortHandle, &DestinationString, &SecurityQos, 0LL, 0LL, MaxMessageLength, 0LL, 0LL);
      if ( v1 >= 0 )
      {
        if ( MaxMessageLength[0] - 128 > 0x80 )
        {
          NtClose(PortHandle);
          v1 = -1073741811;
        }
        else
        {
          v1 = ObReferenceObjectByHandle(PortHandle, 0, LpcPortObjectType, 0, (PVOID *)MaxMessageLength, 0LL);
          IopLinkTrackingServiceObject = *(PVOID *)MaxMessageLength;
          NtClose(PortHandle);
        }
      }
    }
    else
    {
      v1 = -1073741772;
    }
  }
  *(_DWORD *)(a1 + 56) = v1;
  return KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
}
