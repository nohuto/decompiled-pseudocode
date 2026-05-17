/*
 * XREFs of RtlInitializeCriticalSection @ 0x180060EE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAddDebugInfoToCriticalSection @ 0x1800077B0 (RtlpAddDebugInfoToCriticalSection.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x180093EE0 (NtTraceEvent.c)
 */

__int64 __fastcall RtlInitializeCriticalSection(__int64 a1)
{
  bool v2; // al
  _BYTE v4[6]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v5; // [rsp+26h] [rbp-42h]
  __int64 v6; // [rsp+40h] [rbp-28h]
  __int64 v7; // [rsp+48h] [rbp-20h]

  *(_DWORD *)(a1 + 8) = -1;
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( NtCurrentPeb()->NumberOfProcessors <= 1 )
    *(_QWORD *)(a1 + 32) = 0LL;
  else
    *(_QWORD *)(a1 + 32) = 33556432LL;
  v2 = RtlpForceCSDebugInfoCreation != 0;
  *(_QWORD *)a1 = -1LL;
  if ( v2 )
  {
    RtlpAddDebugInfoToCriticalSection(a1);
    if ( *(_QWORD *)a1 == -1LL )
      *(_QWORD *)(a1 + 32) |= 0x1000000uLL;
  }
  if ( MEMORY[0x7FFE0382] && (NtCurrentPeb()->TracingFlags & 2) != 0 )
  {
    v5 = 5923;
    v6 = *(_QWORD *)(a1 + 32);
    v7 = a1;
    NtTraceEvent(MEMORY[0x7FFE0382], 66562LL, 16LL, v4);
  }
  return 0LL;
}
