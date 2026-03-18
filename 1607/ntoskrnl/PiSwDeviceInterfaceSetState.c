/*
 * XREFs of PiSwDeviceInterfaceSetState @ 0x1404C67BC
 * Callers:
 *     PiSwIrpInterfaceRegister @ 0x1404C648C (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpInterfaceSetState @ 0x14057E580 (PiSwIrpInterfaceSetState.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     IoSetDeviceInterfaceState @ 0x1403F1060 (IoSetDeviceInterfaceState.c)
 *     _CmSetDeviceInterfacePathFormat @ 0x1404F6DE0 (_CmSetDeviceInterfacePathFormat.c)
 *     PnpAllocatePWSTR @ 0x140501D70 (PnpAllocatePWSTR.c)
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
