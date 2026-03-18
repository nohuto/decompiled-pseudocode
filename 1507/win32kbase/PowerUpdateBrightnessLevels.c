/*
 * XREFs of PowerUpdateBrightnessLevels @ 0x1C007BAD8
 * Callers:
 *     UserPowerInfoCallout @ 0x1C000517C (UserPowerInfoCallout.c)
 *     DriverEntry @ 0x1C01372C0 (DriverEntry.c)
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

  v0 = dword_1C00FFF90;
  if ( dword_1C00FFFE0 )
  {
    if ( dword_1C00FFEF8 )
    {
      if ( (unsigned int)dword_1C00FFF90 < 0x32 )
      {
        v4 = dword_1C00FFFA0 * (50 - dword_1C00FFF90);
        result = 1374389535 * v4;
        v0 = dword_1C00FFFA0 - v4 / 0x32;
      }
      else
      {
        v3 = (dword_1C00FFF90 - 50) * (100 - dword_1C00FFFA0);
        result = 1374389535 * v3;
        v0 = dword_1C00FFFA0 + v3 / 0x32;
      }
    }
    else if ( dword_1C00FFFA0 != 100 )
    {
      result = (unsigned int)(1374389535 * dword_1C00FFF90 * dword_1C00FFFA0);
      v0 = dword_1C00FFF90 * dword_1C00FFFA0 / 0x64u;
      if ( v0 > 0x64 )
        v0 = 100;
    }
  }
  v1 = v0;
  dword_1C00FFF94 = v0;
  if ( dword_1C00FFF98 != 100 )
  {
    result = 1374389535 * v0 * dword_1C00FFF98;
    v0 = v0 * dword_1C00FFF98 / 0x64;
    if ( v0 > 0x64 )
      v0 = 100;
  }
  dword_1C00FFF9C = v0;
  if ( dword_1C00FFFDC && (unsigned int)dword_1C00FFFA4 < 0x64 )
  {
    result = 1374389535 * dword_1C00FFFA4 * v1;
    v5 = dword_1C00FFFA4 * v1 / 0x64;
    if ( v0 > v5 )
      v5 = v0;
    if ( v1 )
    {
      result = 1LL;
      if ( !v5 )
        v5 = 1;
      dword_1C00FFF94 = v5;
    }
  }
  return result;
}
