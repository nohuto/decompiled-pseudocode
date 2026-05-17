/*
 * XREFs of RtlResetStackOverflow @ 0x1800D97F8
 * Callers:
 *     TppWorkerThread @ 0x18001E750 (TppWorkerThread.c)
 *     EtwpWriteToPrivateBuffers @ 0x18005B254 (EtwpWriteToPrivateBuffers.c)
 *     RtlQueryWnfStateData @ 0x180080DE0 (RtlQueryWnfStateData.c)
 *     RtlQueryWnfStateDataWithExplicitScope @ 0x180086F70 (RtlQueryWnfStateDataWithExplicitScope.c)
 *     EtwpCheckForEnoughStackSpace @ 0x1800FD808 (EtwpCheckForEnoughStackSpace.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x1800A6720 (ZwAllocateVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x1800A6880 (ZwQueryVirtualMemory.c)
 *     NtQuerySystemInformation @ 0x1800A6AE0 (NtQuerySystemInformation.c)
 *     ZwProtectVirtualMemory @ 0x1800A6E20 (ZwProtectVirtualMemory.c)
 */

char *RtlResetStackOverflow()
{
  char *result; // rax
  unsigned __int64 v1; // r9
  unsigned __int64 v2; // r8
  char v3; // [rsp+48h] [rbp-31h] BYREF
  __int64 v4; // [rsp+50h] [rbp-29h]
  _BYTE SystemInformation[8]; // [rsp+80h] [rbp+7h] BYREF
  unsigned int v6; // [rsp+88h] [rbp+Fh]

  result = (char *)ZwQueryVirtualMemory();
  if ( (int)result >= 0 )
  {
    NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
    v1 = ~(unsigned __int64)(v6 - 1);
    v2 = v1 & (NtCurrentTeb()->GuaranteedStackBytes + v6 - 1LL);
    if ( v2 )
      v2 += v6;
    result = &v3;
    if ( v2 < 3 * v6 )
      v2 = 3 * v6;
    if ( ((unsigned __int64)&v3 & v1) - v2 >= v4 + (unsigned __int64)(17 * v6) )
    {
      result = (char *)ZwAllocateVirtualMemory();
      if ( (int)result >= 0 )
        return (char *)ZwProtectVirtualMemory();
    }
  }
  return result;
}
