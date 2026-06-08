/*
 * XREFs of ValidatePStateCapability @ 0x1C0002030
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0002510 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C0002A20 (GetCpuIdInfo.c)
 *     IsProcSpeedStepCapable @ 0x1C0003DAC (IsProcSpeedStepCapable.c)
 */

__int64 __fastcall ValidatePStateCapability(_BYTE *a1, __int64 a2, _DWORD *a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  _BYTE v9[16]; // [rsp+20h] [rbp-28h] BYREF

  v5 = -1073741637;
  GetCpuIdInfo(1LL, v9);
  if ( v9[8] < 0 )
  {
    v6 = 416LL;
    v7 = __readmsr(0x1A0u);
    if ( (v7 & 0x10000) != 0 && (*a1 == 127 || *a1 == 1) )
      return 0;
  }
  if ( *a1 == 1 && (unsigned __int8)IsProcSpeedStepCapable(v6) )
    return 0;
  else
    *a3 |= 0x20u;
  return v5;
}
