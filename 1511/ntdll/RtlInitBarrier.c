/*
 * XREFs of RtlInitBarrier @ 0x1800DBE80
 * Callers:
 *     <none>
 * Callees:
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     NtQueryInformationProcess @ 0x1800A53E0 (NtQueryInformationProcess.c)
 *     ZwCreateEvent @ 0x1800A59C0 (ZwCreateEvent.c)
 */

__int64 __fastcall RtlInitBarrier(__int64 a1, int a2, int a3)
{
  int v3; // ebx
  int v6; // edx
  __int64 i; // rcx
  __int64 result; // rax
  int Event; // ebx
  __int64 v10; // [rsp+30h] [rbp-38h] BYREF
  __int64 v11; // [rsp+40h] [rbp-28h]

  *(_DWORD *)(a1 + 4) = a2;
  v3 = 0;
  *(_DWORD *)a1 = a2;
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
  *(_DWORD *)(a1 + 24) = v6;
  if ( a3 == -1 )
    a3 = 2000;
  *(_DWORD *)(a1 + 28) = a3;
  result = ZwCreateEvent();
  if ( (int)result >= 0 )
  {
    Event = ZwCreateEvent();
    if ( Event >= 0 )
    {
      return 0LL;
    }
    else
    {
      NtClose(*(HANDLE *)(a1 + 8));
      return (unsigned int)Event;
    }
  }
  return result;
}
