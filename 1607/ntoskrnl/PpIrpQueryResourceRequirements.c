/*
 * XREFs of PpIrpQueryResourceRequirements @ 0x1404C9260
 * Callers:
 *     IopQueryDeviceResources @ 0x1404C89E8 (IopQueryDeviceResources.c)
 *     PiQueryResourceRequirements @ 0x1404C90AC (PiQueryResourceRequirements.c)
 * Callees:
 *     memset @ 0x1401715C0 (memset.c)
 *     IopSynchronousCall @ 0x140505B9C (IopSynchronousCall.c)
 */

__int64 __fastcall PpIrpQueryResourceRequirements(int a1, _QWORD *a2)
{
  int v4; // r9d
  __int64 result; // rax
  _WORD v6[36]; // [rsp+30h] [rbp-58h] BYREF

  *a2 = 0LL;
  memset(v6, 0, sizeof(v6));
  v6[0] = 2843;
  result = IopSynchronousCall(a1, (unsigned int)v6, -1073741637, v4, (__int64)a2);
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
