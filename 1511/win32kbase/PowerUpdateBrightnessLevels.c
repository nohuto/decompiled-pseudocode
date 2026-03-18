/*
 * XREFs of PowerUpdateBrightnessLevels @ 0x1C0067944
 * Callers:
 *     UserPowerInfoCallout @ 0x1C000CEC8 (UserPowerInfoCallout.c)
 *     DriverEntry @ 0x1C013B110 (DriverEntry.c)
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

  v0 = dword_1C010473C;
  if ( dword_1C0104788 )
  {
    if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) )
    {
      if ( (unsigned int)dword_1C010473C < 0x32 )
      {
        v4 = dword_1C010474C * (50 - dword_1C010473C);
        result = 1374389535 * v4;
        v0 = dword_1C010474C - v4 / 0x32;
      }
      else
      {
        v3 = (dword_1C010473C - 50) * (100 - dword_1C010474C);
        result = 1374389535 * v3;
        v0 = dword_1C010474C + v3 / 0x32;
      }
    }
    else if ( dword_1C010474C != 100 )
    {
      result = (unsigned int)(1374389535 * dword_1C010473C * dword_1C010474C);
      v0 = dword_1C010473C * dword_1C010474C / 0x64u;
      if ( v0 > 0x64 )
        v0 = 100;
    }
  }
  v1 = v0;
  dword_1C0104740 = v0;
  if ( dword_1C0104744 != 100 )
  {
    result = 1374389535 * v0 * dword_1C0104744;
    v0 = v0 * dword_1C0104744 / 0x64;
    if ( v0 > 0x64 )
      v0 = 100;
  }
  dword_1C0104748 = v0;
  if ( dword_1C0104784 && (unsigned int)dword_1C0104750 < 0x64 )
  {
    result = 1374389535 * dword_1C0104750 * v1;
    v5 = dword_1C0104750 * v1 / 0x64;
    if ( v0 > v5 )
      v5 = v0;
    if ( v1 )
    {
      result = 1LL;
      if ( !v5 )
        v5 = 1;
      dword_1C0104740 = v5;
    }
  }
  return result;
}
