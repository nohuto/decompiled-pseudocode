/*
 * XREFs of ACPIDevicePowerProcessPhase1DeviceSubPhase2 @ 0x1C0023750
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompleteGenericPhase @ 0x1C000C790 (ACPIDeviceCompleteGenericPhase.c)
 *     AMLIAsyncEvalObject @ 0x1C00187D8 (AMLIAsyncEvalObject.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase1DeviceSubPhase2(__int64 a1)
{
  int v2; // ecx
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 *v5; // rdi
  __int64 result; // rax

  v2 = 0;
  v3 = *(int *)(a1 + 104);
  v4 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 212) = 5;
  v5 = *(__int64 **)(v4 + 8 * v3 + 400);
  if ( !v5
    || (*(_DWORD *)(a1 + 56) |= 0x1000000u,
        v2 = AMLIAsyncEvalObject(v5, 0LL, 0, 0LL, ACPIDeviceCompleteGenericPhase, a1),
        result = 259LL,
        v2 != 259) )
  {
    ACPIDeviceCompleteGenericPhase((__int64)v5, v2, 0LL, a1);
    return 0LL;
  }
  return result;
}
