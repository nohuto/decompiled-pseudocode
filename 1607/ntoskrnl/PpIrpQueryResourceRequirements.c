/*
 * XREFs of PpIrpQueryResourceRequirements @ 0x14050E9BC
 * Callers:
 *     PiQueryResourceRequirements @ 0x14050E808 (PiQueryResourceRequirements.c)
 *     IopQueryDeviceResources @ 0x14050EDDC (IopQueryDeviceResources.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     IopSynchronousCall @ 0x1404E8B2C (IopSynchronousCall.c)
 */

__int64 __fastcall PpIrpQueryResourceRequirements(struct _DEVICE_OBJECT *a1, _QWORD *a2)
{
  __int64 v4; // r9
  __int64 result; // rax
  _WORD v6[44]; // [rsp+30h] [rbp-58h] BYREF

  *a2 = 0LL;
  memset(v6, 0, 0x48uLL);
  v6[0] = 2843;
  result = IopSynchronousCall(a1, (__int64)v6, -1073741637, v4, a2);
  if ( (int)result >= 0 )
  {
    if ( !*a2 )
      return 3221225659LL;
  }
  else
  {
    *a2 = 0LL;
  }
  return result;
}
