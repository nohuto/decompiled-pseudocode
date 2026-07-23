/*
 * XREFs of RtlInitBarrier @ 0x1800D3B90
 * Callers:
 *     <none>
 * Callees:
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     NtQueryInformationProcess @ 0x180093A90 (NtQueryInformationProcess.c)
 *     ZwCreateEvent @ 0x180093D80 (ZwCreateEvent.c)
 */

NTSTATUS __cdecl RtlInitBarrier(PRTL_BARRIER Barrier, ULONG TotalThreads, ULONG SpinCount)
{
  DWORD v3; // ebx
  DWORD v6; // edx
  __int64 i; // rcx
  NTSTATUS result; // eax
  int Event; // ebx
  __int64 v10; // [rsp+30h] [rbp-38h] BYREF
  __int64 v11; // [rsp+40h] [rbp-28h]

  Barrier->Reserved2 = TotalThreads;
  v3 = 0;
  Barrier->Reserved1 = TotalThreads;
  if ( NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessBasicInformation, &v10, 0x30u, 0LL) >= 0 )
  {
    for ( i = v11; i; i &= i - 1 )
      ++v3;
    v6 = v3;
  }
  else
  {
    v6 = 1;
  }
  Barrier->Reserved4 = v6;
  if ( SpinCount == -1 )
    SpinCount = 2000;
  Barrier->Reserved5 = SpinCount;
  result = ZwCreateEvent((PHANDLE)Barrier->Reserved3, 0x100003u, 0LL, NotificationEvent, 0);
  if ( result >= 0 )
  {
    Event = ZwCreateEvent((PHANDLE)&Barrier->Reserved3[1], 0x100003u, 0LL, NotificationEvent, 0);
    if ( Event >= 0 )
    {
      return 0;
    }
    else
    {
      NtClose((HANDLE)Barrier->Reserved3[0]);
      return Event;
    }
  }
  return result;
}
