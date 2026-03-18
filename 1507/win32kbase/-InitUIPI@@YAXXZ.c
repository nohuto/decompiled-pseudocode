/*
 * XREFs of ?InitUIPI@@YAXXZ @ 0x1C007BEA4
 * Callers:
 *     Win32UserInitialize @ 0x1C0138B1C (Win32UserInitialize.c)
 * Callees:
 *     IsUIPISQMStatusSupported_0 @ 0x1C0002990 (IsUIPISQMStatusSupported_0.c)
 *     UIPISQMStatus_0 @ 0x1C0002998 (UIPISQMStatus_0.c)
 *     FastGetProfileDwordW @ 0x1C007CAF0 (FastGetProfileDwordW.c)
 */

void InitUIPI(void)
{
  char v0; // [rsp+40h] [rbp+8h] BYREF

  if ( (int)RtlQueryElevationFlags(&v0) < 0 || (v0 & 1) != 0 )
  {
    if ( !(unsigned int)FastGetProfileDwordW(0LL, 49LL, L"EnableUIPI") )
      gbEnforceUIPI = 1;
    if ( (int)IsUIPISQMStatusSupported_0() >= 0 )
      goto LABEL_6;
  }
  else if ( (int)IsUIPISQMStatusSupported_0() >= 0 )
  {
LABEL_6:
    UIPISQMStatus_0();
  }
}
