/*
 * XREFs of PiSwDeviceInterfaceSetState @ 0x140486F20
 * Callers:
 *     PiSwIrpInterfaceRegister @ 0x140487098 (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpInterfaceSetState @ 0x14057EA2C (PiSwIrpInterfaceSetState.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     IoSetDeviceInterfaceState @ 0x1403EFF24 (IoSetDeviceInterfaceState.c)
 *     _CmSetDeviceInterfacePathFormat @ 0x1404D9D6C (_CmSetDeviceInterfacePathFormat.c)
 *     PnpAllocatePWSTR @ 0x1404E4D00 (PnpAllocatePWSTR.c)
 */

__int64 __fastcall PiSwDeviceInterfaceSetState(__int64 a1, __int64 a2, BOOLEAN a3)
{
  NTSTATUS PWSTR; // edi
  __int64 v5; // rax
  __int64 v7; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  PWSTR = 0;
  v5 = *(_QWORD *)(a1 + 120);
  if ( !v5
    || (v7 = *(_QWORD *)(v5 + 64)) == 0
    || (*(_DWORD *)(v7 + 8) & 1) == 0
    || *(_BYTE *)(a2 + 36) == a3
    || (PWSTR = PnpAllocatePWSTR(*(NTSTRSAFE_PCWSTR *)(a2 + 16)), PWSTR >= 0)
    && (LOBYTE(v10) = 1, PWSTR = CmSetDeviceInterfacePathFormat(v9, 0LL, v10), PWSTR >= 0)
    && (RtlInitUnicodeString(&DestinationString, 0LL),
        PWSTR = IoSetDeviceInterfaceState(&DestinationString, a3),
        PWSTR >= 0) )
  {
    *(_BYTE *)(a2 + 36) = a3;
  }
  return (unsigned int)PWSTR;
}
