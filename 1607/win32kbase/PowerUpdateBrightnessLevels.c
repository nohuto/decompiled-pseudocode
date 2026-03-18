/*
 * XREFs of PowerUpdateBrightnessLevels @ 0x1C0053100
 * Callers:
 *     UserPowerInfoCallout @ 0x1C0070B38 (UserPowerInfoCallout.c)
 *     DriverEntry @ 0x1C0154670 (DriverEntry.c)
 * Callees:
 *     <none>
 */

__int64 PowerUpdateBrightnessLevels()
{
  unsigned int v0; // r8d
  unsigned int v1; // r9d
  __int64 result; // rax
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  unsigned int v5; // edx

  if ( gbPowerHighPrecisionBrightness )
  {
    dword_1C011BB18 = dword_1C011BB34;
    dword_1C011BB1C = dword_1C011BB34;
    result = (unsigned int)dword_1C011BB44;
    dword_1C011BB20 = dword_1C011BB44;
    dword_1C011BB24 = dword_1C011BB44;
  }
  else
  {
    v0 = dword_1C011BB18;
    if ( dword_1C011BB88 )
    {
      if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) )
      {
        if ( (unsigned int)dword_1C011BB18 < 0x32 )
        {
          v4 = dword_1C011BB28 * (50 - dword_1C011BB18);
          result = 1374389535 * v4;
          v0 = dword_1C011BB28 - v4 / 0x32;
        }
        else
        {
          v3 = (dword_1C011BB18 - 50) * (100 - dword_1C011BB28);
          result = 1374389535 * v3;
          v0 = dword_1C011BB28 + v3 / 0x32;
        }
      }
      else if ( dword_1C011BB28 != 100 )
      {
        result = (unsigned int)(1374389535 * dword_1C011BB18 * dword_1C011BB28);
        v0 = dword_1C011BB18 * dword_1C011BB28 / 0x64u;
        if ( v0 > 0x64 )
          v0 = 100;
      }
    }
    v1 = v0;
    dword_1C011BB1C = v0;
    if ( dword_1C011BB20 != 100 )
    {
      result = 1374389535 * v0 * dword_1C011BB20;
      v0 = v0 * dword_1C011BB20 / 0x64;
      if ( v0 > 0x64 )
        v0 = 100;
    }
    dword_1C011BB24 = v0;
    if ( dword_1C011BB84 && (unsigned int)dword_1C011BB2C < 0x64 )
    {
      result = 1374389535 * dword_1C011BB2C * v1;
      v5 = dword_1C011BB2C * v1 / 0x64;
      if ( v0 > v5 )
        v5 = v0;
      if ( v1 )
      {
        result = 1LL;
        if ( !v5 )
          v5 = 1;
        dword_1C011BB1C = v5;
      }
    }
  }
  return result;
}
