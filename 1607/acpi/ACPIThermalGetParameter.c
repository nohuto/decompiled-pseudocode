/*
 * XREFs of ACPIThermalGetParameter @ 0x1C0082830
 * Callers:
 *     ACPIThermalWorker @ 0x1C0081BD0 (ACPIThermalWorker.c)
 * Callees:
 *     ACPIGet @ 0x1C00015D0 (ACPIGet.c)
 *     __security_check_cookie @ 0x1C002BC20 (__security_check_cookie.c)
 *     OSReadRegValue @ 0x1C008D4A4 (OSReadRegValue.c)
 */

__int64 __fastcall ACPIThermalGetParameter(__int64 *a1, __int64 a2, int a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // [rsp+58h] [rbp-30h] BYREF
  char SourceString[4]; // [rsp+60h] [rbp-28h] BYREF
  char v11; // [rsp+64h] [rbp-24h]

  v9 = 0LL;
  if ( a2 && (*(_DWORD *)SourceString = a3, v11 = 0, result = OSReadRegValue(SourceString), (int)result >= 0) )
  {
    v8 = v9;
  }
  else
  {
    result = ACPIGet(a1, a3, 268697602, 0LL, 0, 0LL, 0LL, (__int64)&v9, 0LL);
    v8 = v9;
    if ( (int)result < 0 )
      v8 = 0LL;
  }
  *a4 = v8;
  return result;
}
