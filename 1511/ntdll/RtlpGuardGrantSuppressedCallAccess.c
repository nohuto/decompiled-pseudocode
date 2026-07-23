/*
 * XREFs of RtlpGuardGrantSuppressedCallAccess @ 0x1800EA22C
 * Callers:
 *     RtlGuardGrantSuppressedCallAccess @ 0x1800EA1DC (RtlGuardGrantSuppressedCallAccess.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x1800EA410 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     ZwSetInformationVirtualMemory @ 0x1800A8150 (ZwSetInformationVirtualMemory.c)
 */

NTSTATUS __fastcall RtlpGuardGrantSuppressedCallAccess(__int64 a1)
{
  char v2; // [rsp+30h] [rbp-50h] BYREF
  _DWORD VmInformation[2]; // [rsp+38h] [rbp-48h] BYREF
  char *v4; // [rsp+40h] [rbp-40h]
  _QWORD *v5; // [rsp+48h] [rbp-38h]
  _MEMORY_RANGE_ENTRY VirtualAddresses; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v7[2]; // [rsp+60h] [rbp-20h] BYREF

  VmInformation[1] = 0;
  VirtualAddresses.NumberOfBytes = 4096LL;
  VirtualAddresses.VirtualAddress = (PVOID)(a1 & 0xFFFFFFFFFFFFF000uLL);
  v7[1] = 1LL;
  v7[0] = a1 & 0xFFF;
  v4 = &v2;
  VmInformation[0] = 1;
  v5 = v7;
  return ZwSetInformationVirtualMemory(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           VmCfgCallTargetInformation,
           1uLL,
           &VirtualAddresses,
           VmInformation,
           0x18u);
}
