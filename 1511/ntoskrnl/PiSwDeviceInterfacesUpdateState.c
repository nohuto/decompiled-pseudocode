/*
 * XREFs of PiSwDeviceInterfacesUpdateState @ 0x140494BAC
 * Callers:
 *     PiSwPdoPnPDispatch @ 0x14049479C (PiSwPdoPnPDispatch.c)
 *     PiSwProcessRemove @ 0x140494C74 (PiSwProcessRemove.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PnpAllocatePWSTR @ 0x14043FAE0 (PnpAllocatePWSTR.c)
 *     IoSetDeviceInterfaceState @ 0x140454BA4 (IoSetDeviceInterfaceState.c)
 *     _CmSetDeviceInterfacePathFormat @ 0x1404DDC2C (_CmSetDeviceInterfacePathFormat.c)
 */

__int64 __fastcall PiSwDeviceInterfacesUpdateState(__int64 a1, BOOLEAN a2)
{
  __int64 *v2; // r14
  WCHAR *v3; // rbx
  __int64 *v4; // rdi
  NTSTATUS v5; // esi
  int PWSTR; // eax
  __int64 v8; // rcx
  __int64 v9; // r8
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  PCWSTR SourceString; // [rsp+50h] [rbp+8h] BYREF

  v2 = (__int64 *)(a1 + 184);
  v3 = 0LL;
  v4 = *(__int64 **)(a1 + 184);
  v5 = 0;
  SourceString = 0LL;
  if ( v4 == (__int64 *)(a1 + 184) )
    return (unsigned int)v5;
  while ( !*((_BYTE *)v4 + 36) )
  {
LABEL_7:
    v4 = (__int64 *)*v4;
    if ( v4 == v2 )
      goto LABEL_8;
  }
  PWSTR = PnpAllocatePWSTR((NTSTRSAFE_PCWSTR)v4[2], 0x7FFFFFFFuLL, 0x57706E50u, (PVOID *)&SourceString);
  v3 = (WCHAR *)SourceString;
  v5 = PWSTR;
  if ( PWSTR >= 0 )
  {
    LOBYTE(v9) = 1;
    v5 = CmSetDeviceInterfacePathFormat(v8, SourceString, v9);
    if ( v5 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, v3);
      v5 = IoSetDeviceInterfaceState(&DestinationString, a2);
      if ( v5 >= 0 )
      {
        ExFreePoolWithTag(v3, 0x57706E50u);
        v3 = 0LL;
        SourceString = 0LL;
        goto LABEL_7;
      }
    }
  }
LABEL_8:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x57706E50u);
  return (unsigned int)v5;
}
