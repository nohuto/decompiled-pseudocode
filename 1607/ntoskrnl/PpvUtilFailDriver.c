/*
 * XREFs of PpvUtilFailDriver @ 0x1401D0EE4
 * Callers:
 *     IoGetDeviceProperty @ 0x1404DC2F8 (IoGetDeviceProperty.c)
 *     PiProcessNewDeviceNode @ 0x140510338 (PiProcessNewDeviceNode.c)
 * Callees:
 *     VfErrorReport7 @ 0x14070EA4C (VfErrorReport7.c)
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
