/*
 * XREFs of CalculateMouseSensitivity @ 0x1C0135BB8
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C003A8E0 (xxxSystemParametersInfo.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C0133984 (xxxUpdatePerUserSystemParameters.c)
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
