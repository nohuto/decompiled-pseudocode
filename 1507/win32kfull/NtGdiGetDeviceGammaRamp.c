/*
 * XREFs of NtGdiGetDeviceGammaRamp @ 0x1C02B1130
 * Callers:
 *     <none>
 * Callees:
 *     GreGetDeviceGammaRamp @ 0x1C012D754 (GreGetDeviceGammaRamp.c)
 */

__int64 __fastcall NtGdiGetDeviceGammaRamp(HDC a1, _BYTE *a2)
{
  __int64 v2; // r8
  unsigned int v3; // ebx

  v2 = (__int64)a2;
  v3 = 0;
  if ( a2 )
  {
    if ( ((unsigned __int8)a2 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      a2 = (_BYTE *)W32UserProbeAddress;
    *a2 = *a2;
    a2[1535] = a2[1535];
    return (unsigned int)GreGetDeviceGammaRamp(a1, v2);
  }
  else
  {
    EngSetLastError(6u);
  }
  return v3;
}
