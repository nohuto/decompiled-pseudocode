/*
 * XREFs of PpvUtilFailDriver @ 0x1401FD690
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1404D7558 (PiProcessNewDeviceNode.c)
 *     IoGetDeviceProperty @ 0x1404E2C80 (IoGetDeviceProperty.c)
 * Callees:
 *     VfErrorReport7 @ 0x14074422C (VfErrorReport7.c)
 */

__int64 __fastcall PpvUtilFailDriver(int a1)
{
  int v1; // ecx
  __int64 result; // rax

  if ( PpvUtilVerifierEnabled )
  {
    if ( a1 )
    {
      v1 = a1 - 1;
      if ( v1 )
      {
        if ( v1 == 1 )
          return VfErrorReport8(589LL);
      }
      else
      {
        return VfErrorReport8(587LL);
      }
    }
    else
    {
      return VfErrorReport7();
    }
  }
  return result;
}
