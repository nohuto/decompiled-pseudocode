/*
 * XREFs of RtlInitializeCriticalSectionAndSpinCount @ 0x180066ED0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAddDebugInfoToCriticalSection @ 0x18002B140 (RtlpAddDebugInfoToCriticalSection.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 */

__int64 __fastcall RtlInitializeCriticalSectionAndSpinCount(__int64 a1, int a2)
{
  int v3; // edx
  bool v4; // al
  _BYTE v6[6]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v7; // [rsp+26h] [rbp-42h]
  __int64 v8; // [rsp+40h] [rbp-28h]
  __int64 v9; // [rsp+48h] [rbp-20h]

  v3 = a2 & 0xFFFFFF;
  *(_DWORD *)(a1 + 8) = -1;
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( NtCurrentPeb()->NumberOfProcessors <= 1 )
  {
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  else if ( v3 )
  {
    *(_QWORD *)(a1 + 32) = v3 & 0xFFFFFFLL;
  }
  else
  {
    *(_QWORD *)(a1 + 32) = 33556432LL;
  }
  v4 = RtlpForceCSDebugInfoCreation != 0;
  *(_QWORD *)a1 = -1LL;
  if ( v4 )
  {
    RtlpAddDebugInfoToCriticalSection(a1);
    if ( *(_QWORD *)a1 == -1LL )
      *(_QWORD *)(a1 + 32) |= 0x1000000uLL;
  }
  if ( MEMORY[0x7FFE0382] && (NtCurrentPeb()->TracingFlags & 2) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 32);
    v7 = 5923;
    v9 = a1;
    NtTraceEvent(MEMORY[0x7FFE0382], 66562LL, 16LL, v6);
  }
  return 0LL;
}
