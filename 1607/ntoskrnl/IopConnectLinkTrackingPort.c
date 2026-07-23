/*
 * XREFs of IopConnectLinkTrackingPort @ 0x140621348
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     NtConnectPort @ 0x14049C3E4 (NtConnectPort.c)
 *     NtClose @ 0x1404EE070 (NtClose.c)
 */

LONG __fastcall IopConnectLinkTrackingPort(__int64 a1)
{
  NTSTATUS v1; // ebx
  ULONG MaxMessageLength[2]; // [rsp+40h] [rbp-40h] BYREF
  HANDLE PortHandle; // [rsp+48h] [rbp-38h] BYREF
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
