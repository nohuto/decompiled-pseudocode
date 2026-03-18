/*
 * XREFs of ACPIDockIntfSetMode @ 0x1C0097DF0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 */

__int64 __fastcall ACPIDockIntfSetMode(ULONG_PTR a1, int a2)
{
  __int64 DeviceExtension; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( *(char *)(DeviceExtension + 8) < 0 )
    return 3221225486LL;
  if ( a2 == 1 )
    a2 = 4;
  *(_DWORD *)(DeviceExtension + 192) = a2;
  return 0LL;
}
