/*
 * XREFs of UpdatePointerDeviceCount @ 0x1C00E4AB0
 * Callers:
 *     Win32kRIMDevChangeCallback @ 0x1C00E2AC0 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UpdatePointerDeviceCount(int a1)
{
  __int64 result; // rax
  int v2; // ecx

  result = (unsigned int)gcPointerDevices;
  v2 = a1 - 1;
  if ( !v2 )
  {
    result = (unsigned int)(gcPointerDevices + 1);
LABEL_3:
    gcPointerDevices = result;
    return result;
  }
  if ( v2 == 1 )
  {
    result = (unsigned int)(gcPointerDevices - 1);
    goto LABEL_3;
  }
  return result;
}
