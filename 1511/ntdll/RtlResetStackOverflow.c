/*
 * XREFs of RtlResetStackOverflow @ 0x1800D1444
 * Callers:
 *     TppWorkerThread @ 0x18002B350 (TppWorkerThread.c)
 *     EtwpWriteToPrivateBuffers @ 0x180049FD4 (EtwpWriteToPrivateBuffers.c)
 *     RtlQueryWnfStateData @ 0x18007A910 (RtlQueryWnfStateData.c)
 *     RtlQueryWnfStateDataWithExplicitScope @ 0x180082E70 (RtlQueryWnfStateDataWithExplicitScope.c)
 *     EtwpCheckForEnoughStackSpace @ 0x1800F4058 (EtwpCheckForEnoughStackSpace.c)
 * Callees:
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x1800A53C0 (ZwAllocateVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x1800A5520 (ZwQueryVirtualMemory.c)
 *     NtQuerySystemInformation @ 0x1800A5780 (NtQuerySystemInformation.c)
 *     ZwProtectVirtualMemory @ 0x1800A5AC0 (ZwProtectVirtualMemory.c)
 */

int RtlResetStackOverflow()
{
  _BYTE *v0; // rax
  unsigned __int64 v1; // r9
  ULONG_PTR v2; // r8
  PVOID v4; // [rsp+30h] [rbp-49h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-41h] BYREF
  ULONG OldProtect; // [rsp+40h] [rbp-39h] BYREF
  _BYTE BaseAddress[8]; // [rsp+48h] [rbp-31h] BYREF
  __int64 v8; // [rsp+50h] [rbp-29h]
  _BYTE SystemInformation[8]; // [rsp+80h] [rbp+7h] BYREF
  unsigned int v10; // [rsp+88h] [rbp+Fh]

  LODWORD(v0) = ZwQueryVirtualMemory(
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  BaseAddress,
                  MemoryBasicInformation,
                  BaseAddress,
                  0x30uLL,
                  0LL);
  if ( (int)v0 >= 0 )
  {
    NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
    v1 = ~(unsigned __int64)(v10 - 1);
    v2 = v1 & (NtCurrentTeb()->GuaranteedStackBytes + v10 - 1LL);
    if ( v2 )
      v2 += v10;
    v0 = BaseAddress;
    if ( v2 < 3 * v10 )
      v2 = 3 * v10;
    RegionSize = v2;
    v4 = (PVOID)(((unsigned __int64)BaseAddress & v1) - v2);
    if ( (unsigned __int64)v4 >= v8 + (unsigned __int64)(17 * v10) )
    {
      LODWORD(v0) = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v4, 0LL, &RegionSize, 0x1000u, 4u);
      if ( (int)v0 >= 0 )
        LODWORD(v0) = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v4, &RegionSize, 0x104u, &OldProtect);
    }
  }
  return (int)v0;
}
