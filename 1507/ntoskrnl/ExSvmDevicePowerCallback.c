/*
 * XREFs of ExSvmDevicePowerCallback @ 0x14026500C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ExSvmDevicePowerCallback(__int64 a1, int a2, __int64 a3)
{
  bool v3; // zf
  __int64 v4; // rdx

  v3 = a2 == 1;
  v4 = a3;
  LOBYTE(a3) = v3;
  return (*((__int64 (__fastcall **)(__int64, __int64, __int64))HalIommuDispatch[0] + 16))(
           ExpSvmIommuSystemContext,
           v4,
           a3);
}
