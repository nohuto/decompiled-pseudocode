/*
 * XREFs of IsProcSpeedStepCapable @ 0x1C0003DAC
 * Callers:
 *     ValidatePStateCapability @ 0x1C0002030 (ValidatePStateCapability.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002510 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C0002A20 (GetCpuIdInfo.c)
 */

bool IsProcSpeedStepCapable()
{
  char v0; // bl
  int v1; // ecx
  unsigned __int64 v2; // rax
  bool v3; // zf
  int v4; // r8d
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned int v7; // eax
  unsigned __int64 v8; // rax
  _DWORD v10[4]; // [rsp+20h] [rbp-28h] BYREF

  v0 = 0;
  GetCpuIdInfo(1u, v10);
  v1 = (v10[0] >> 8) & 0xF;
  if ( v1 == 15 && (v10[0] & 0xF0u) <= 0x20 )
  {
    v2 = __readmsr(0x2Cu);
    v3 = (v2 & 0xFF00) == 0 || (v2 & 0x200000) == 0;
  }
  else
  {
    if ( v1 != 6 )
      return v0;
    v4 = LOBYTE(v10[0]) >> 4;
    if ( v4 != 8 && v4 != 11 )
      return v0;
    if ( (v10[0] & 0xF0000) != 0 )
      return v0;
    v5 = __readmsr(0x17u);
    v6 = (((unsigned __int64)HIDWORD(v5) << 32) | (unsigned int)v5) >> 32;
    if ( (v6 & 0x40000) == 0 )
      return v0;
    if ( (v6 & 0x3000000) != 0 )
      return 1;
    if ( v4 != 8 )
      goto LABEL_19;
    if ( (v10[0] & 0xF) == 6 )
    {
      v7 = ((unsigned int)v6 >> 19) & 3;
      if ( !v7 || v7 == 3 )
        return 1;
      return v0;
    }
    if ( (v10[0] & 0xF) != 0xA )
    {
LABEL_19:
      if ( v4 == 11 )
        return (__readmsr(0x20u) & 0x100000000000LL) != 0;
      return v0;
    }
    v8 = __readmsr(0x119u);
    v3 = (v8 & 1) == 0;
  }
  if ( !v3 )
    return 1;
  return v0;
}
