/*
 * XREFs of PfpQueryGpuUtilization @ 0x1404B93B4
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x140417410 (PfQuerySuperfetchInformation.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140024B6C (MmGetSessionIdEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PsInvokeWin32Callout @ 0x140427EE0 (PsInvokeWin32Callout.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 */

__int64 __fastcall PfpQueryGpuUtilization(__int64 a1, char a2, _DWORD *a3)
{
  __int64 result; // rax
  int SessionId; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+28h] [rbp-20h] BYREF

  if ( *(_DWORD *)(a1 + 24) < 0x10u )
    return 3221225990LL;
  if ( a2 )
    ProbeForWrite(*(volatile void **)(a1 + 16), 0x10uLL, 8u);
  v7 = *(_OWORD *)*(_QWORD *)(a1 + 16);
  if ( (_DWORD)v7 != 1 )
    return 3221225561LL;
  SessionId = DWORD1(v7);
  if ( DWORD1(v7) == -1 )
    SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
  result = PsInvokeWin32Callout(25, (__int64)&v7 + 8, 1, (__int64)&SessionId);
  if ( (int)result >= 0 )
  {
    *(_OWORD *)*(_QWORD *)(a1 + 16) = v7;
    *a3 = 16;
    return 0LL;
  }
  return result;
}
