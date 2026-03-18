/*
 * XREFs of ACPIFilterIrpStartDevice @ 0x1C0068C30
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInitStartDevice @ 0x1C0007D8C (ACPIInitStartDevice.c)
 */

__int64 __fastcall ACPIFilterIrpStartDevice(ULONG_PTR a1, __int64 a2)
{
  __int64 result; // rax

  result = ACPIInitStartDevice(
             a1,
             *(_QWORD *)(a2 + 184),
             (void (__fastcall *)(__int64, __int64, _QWORD))ACPIFilterIrpStartDeviceCompletion,
             a2,
             a2);
  if ( (int)result >= 0 )
    return 259LL;
  return result;
}
