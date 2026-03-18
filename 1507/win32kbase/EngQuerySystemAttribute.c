/*
 * XREFs of EngQuerySystemAttribute @ 0x1C00BD8D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 */

BOOL __stdcall EngQuerySystemAttribute(ENG_SYSTEM_ATTRIBUTE CapNum, PDWORD pCapability)
{
  __int32 v3; // ecx
  DWORD v4; // ebx
  _BYTE v6[8]; // [rsp+20h] [rbp-68h] BYREF
  int v7; // [rsp+28h] [rbp-60h]
  _BYTE SystemInformation[64]; // [rsp+30h] [rbp-58h] BYREF

  v3 = CapNum - 1;
  if ( !v3 )
  {
    v4 = 0;
    if ( ZwQuerySystemInformation(SystemProcessorInformation, v6, 0xCu, 0LL) >= 0 )
    {
      if ( (v7 & 0x100) != 0 )
        v4 = 256;
      if ( (v7 & 0x2000) != 0 )
        v4 |= 0x2000u;
      if ( (v7 & 0x4000) != 0 )
        v4 |= 0x4000u;
      if ( (v7 & 0x10000) != 0 )
        v4 |= 0x10000u;
      if ( (v7 & 0x80000) != 0 )
        v4 |= 0x80000u;
      *pCapability = v4;
      return 1;
    }
    return 0;
  }
  if ( v3 != 1 || ZwQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) < 0 )
    return 0;
  *pCapability = SystemInformation[56];
  return 1;
}
