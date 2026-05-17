/*
 * XREFs of RtlResetStackOverflow @ 0x1800C8A08
 * Callers:
 *     EtwpWriteToPrivateBuffers @ 0x180010AEC (EtwpWriteToPrivateBuffers.c)
 *     TppWorkerThread @ 0x180039390 (TppWorkerThread.c)
 *     RtlQueryWnfStateData @ 0x18006DC50 (RtlQueryWnfStateData.c)
 *     RtlQueryWnfStateDataWithExplicitScope @ 0x1800772B0 (RtlQueryWnfStateDataWithExplicitScope.c)
 *     EtwpCheckForEnoughStackSpace @ 0x1800F41B8 (EtwpCheckForEnoughStackSpace.c)
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x180093A80 (ZwAllocateVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x180093B30 (ZwQueryVirtualMemory.c)
 *     NtQuerySystemInformation @ 0x180093C60 (NtQuerySystemInformation.c)
 *     ZwProtectVirtualMemory @ 0x180093E00 (ZwProtectVirtualMemory.c)
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
