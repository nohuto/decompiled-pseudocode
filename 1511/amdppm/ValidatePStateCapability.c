/*
 * XREFs of ValidatePStateCapability @ 0x1C0001050
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0005940 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C0005DB0 (GetCpuIdInfo.c)
 */

__int64 __fastcall ValidatePStateCapability(_BYTE *a1, __int64 a2, _DWORD *a3)
{
  unsigned int v5; // ebx
  unsigned int v7[4]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v8[24]; // [rsp+30h] [rbp-28h] BYREF

  v5 = -1073741637;
  GetCpuIdInfo(0x80000000LL, v7);
  if ( v7[0] >= 7 )
  {
    GetCpuIdInfo(2147483655LL, v8);
    if ( v8[12] < 0 && (*a1 == 1 || *a1 == 127) )
      return 0;
  }
  if ( *a1 == 1 )
    return 0;
  else
    *a3 |= 0x20u;
  return v5;
}
