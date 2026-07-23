/*
 * XREFs of PiSwDeviceInterfacesUpdateState @ 0x140483938
 * Callers:
 *     PiSwPdoPnPDispatch @ 0x1403F0544 (PiSwPdoPnPDispatch.c)
 *     PiSwProcessRemove @ 0x140483A18 (PiSwProcessRemove.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     IoSetDeviceInterfaceState @ 0x1403EFF24 (IoSetDeviceInterfaceState.c)
 *     _CmSetDeviceInterfacePathFormat @ 0x1404D9D6C (_CmSetDeviceInterfacePathFormat.c)
 *     PnpAllocatePWSTR @ 0x1404E4D00 (PnpAllocatePWSTR.c)
 */

__int64 __fastcall PiSwDeviceInterfacesUpdateState(__int64 a1, BOOLEAN a2)
{
  __int64 *v2; // r14
  __int64 *v3; // rdi
  NTSTATUS PWSTR; // esi
  __int64 v7; // rcx
  __int64 v8; // r8
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF

  v2 = (__int64 *)(a1 + 184);
  v3 = *(__int64 **)(a1 + 184);
  PWSTR = 0;
  if ( v3 != (__int64 *)(a1 + 184) )
  {
    do
    {
      if ( *((_BYTE *)v3 + 36) )
      {
        PWSTR = PnpAllocatePWSTR((NTSTRSAFE_PCWSTR)v3[2]);
        if ( PWSTR < 0 )
          return (unsigned int)PWSTR;
        LOBYTE(v8) = 1;
        PWSTR = CmSetDeviceInterfacePathFormat(v7, 0LL, v8);
        if ( PWSTR < 0 )
          return (unsigned int)PWSTR;
        RtlInitUnicodeString(&DestinationString, 0LL);
        PWSTR = IoSetDeviceInterfaceState(&DestinationString, a2);
        if ( PWSTR < 0 )
          return (unsigned int)PWSTR;
        ExFreePoolWithTag(0LL, 0x57706E50u);
      }
      v3 = (__int64 *)*v3;
    }
    while ( v3 != v2 );
  }
  return (unsigned int)PWSTR;
}
