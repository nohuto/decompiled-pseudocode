/*
 * XREFs of CalculateMouseSensitivity @ 0x1C0112A44
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C012420C (xxxUpdatePerUserSystemParameters.c)
 *     xxxSystemParametersInfo @ 0x1C0126360 (xxxSystemParametersInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CalculateMouseSensitivity(int a1)
{
  int v1; // eax
  int v2; // ecx
  int v3; // eax

  if ( a1 <= 2 )
  {
    v3 = a1 << 8;
    v2 = 32;
  }
  else
  {
    if ( a1 > 10 )
    {
      v1 = a1 - 6;
      v2 = 4;
    }
    else
    {
      v1 = a1 - 2;
      v2 = 8;
    }
    v3 = v1 << 8;
  }
  return (unsigned int)(v3 / v2);
}
