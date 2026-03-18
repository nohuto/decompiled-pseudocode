/*
 * XREFs of PiSwDeviceInterfaceSetState @ 0x14045A1AC
 * Callers:
 *     PiSwIrpInterfaceRegister @ 0x14045A410 (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpInterfaceSetState @ 0x1405C44E0 (PiSwIrpInterfaceSetState.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PnpAllocatePWSTR @ 0x14043B32C (PnpAllocatePWSTR.c)
 *     _CmSetDeviceInterfacePathFormat @ 0x140458398 (_CmSetDeviceInterfacePathFormat.c)
 *     IoSetDeviceInterfaceState @ 0x14045A0B4 (IoSetDeviceInterfaceState.c)
 */

__int64 __fastcall PiSwDeviceInterfaceSetState(__int64 a1, __int64 a2, BOOLEAN a3)
{
  WCHAR *v3; // rbx
  NTSTATUS v4; // edi
  __int64 v6; // rax
  __int64 v8; // rax
  int PWSTR; // eax
  __int64 v11; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  PCWSTR SourceString; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0LL;
  v4 = 0;
  SourceString = 0LL;
  v6 = *(_QWORD *)(a1 + 120);
  if ( !v6
    || (v8 = *(_QWORD *)(v6 + 64)) == 0
    || (*(_DWORD *)(v8 + 8) & 1) == 0
    || *(_BYTE *)(a2 + 36) == a3
    || (PWSTR = PnpAllocatePWSTR(*(NTSTRSAFE_PCWSTR *)(a2 + 16), 0x7FFFFFFFuLL, 0x57706E50u, (PVOID *)&SourceString),
        v3 = (WCHAR *)SourceString,
        v4 = PWSTR,
        PWSTR >= 0)
    && (v4 = CmSetDeviceInterfacePathFormat(v11, SourceString, 1), v4 >= 0)
    && (RtlInitUnicodeString(&DestinationString, v3), v4 = IoSetDeviceInterfaceState(&DestinationString, a3), v4 >= 0) )
  {
    *(_BYTE *)(a2 + 36) = a3;
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0x57706E50u);
  return (unsigned int)v4;
}
