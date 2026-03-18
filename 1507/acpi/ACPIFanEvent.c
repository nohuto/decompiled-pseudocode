/*
 * XREFs of ACPIFanEvent @ 0x1C003B0D0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIFanLoop @ 0x1C003B218 (ACPIFanLoop.c)
 */

__int64 __fastcall ACPIFanEvent(ULONG_PTR a1, int a2)
{
  __int64 result; // rax

  result = ACPIInternalGetDeviceExtension(a1);
  if ( a2 == 128 )
    return ACPIFanLoop(result, 1LL, 0LL);
  return result;
}
