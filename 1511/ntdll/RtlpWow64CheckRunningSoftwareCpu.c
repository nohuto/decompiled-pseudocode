/*
 * XREFs of RtlpWow64CheckRunningSoftwareCpu @ 0x1800D054C
 * Callers:
 *     RtlWow64SuspendThreadEx @ 0x1800D0350 (RtlWow64SuspendThreadEx.c)
 * Callees:
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     ZwReadVirtualMemory @ 0x1800A58A0 (ZwReadVirtualMemory.c)
 */

__int64 __fastcall RtlpWow64CheckRunningSoftwareCpu(__int64 a1, __int64 a2, bool *a3)
{
  int VirtualMemory; // ecx
  __int64 v6; // [rsp+30h] [rbp-28h]
  char v7; // [rsp+3Ch] [rbp-1Ch]

  VirtualMemory = ZwReadVirtualMemory();
  if ( VirtualMemory >= 0 )
  {
    if ( v6 )
    {
      VirtualMemory = ZwReadVirtualMemory();
      if ( VirtualMemory >= 0 )
        *a3 = (v7 & 2) != 0;
    }
    else
    {
      *a3 = 0;
    }
  }
  return (unsigned int)VirtualMemory;
}
