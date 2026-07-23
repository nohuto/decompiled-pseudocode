/*
 * XREFs of RtlpWow64CheckRunningSoftwareCpu @ 0x1800C721C
 * Callers:
 *     RtlWow64SuspendThreadEx @ 0x1800C7020 (RtlWow64SuspendThreadEx.c)
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     ZwReadVirtualMemory @ 0x180093CF0 (ZwReadVirtualMemory.c)
 */

__int64 __fastcall RtlpWow64CheckRunningSoftwareCpu(HANDLE ProcessHandle, __int64 a2, bool *a3)
{
  NTSTATUS VirtualMemory; // ecx
  PVOID Buffer; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v8[16]; // [rsp+38h] [rbp-20h] BYREF

  VirtualMemory = ZwReadVirtualMemory(ProcessHandle, (PVOID)(a2 + 5328), &Buffer, 8uLL, 0LL);
  if ( VirtualMemory >= 0 )
  {
    if ( Buffer )
    {
      VirtualMemory = ZwReadVirtualMemory(ProcessHandle, Buffer, v8, 0x10uLL, 0LL);
      if ( VirtualMemory >= 0 )
        *a3 = (v8[4] & 2) != 0;
    }
    else
    {
      *a3 = 0;
    }
  }
  return (unsigned int)VirtualMemory;
}
