/*
 * XREFs of PpIrpQueryResourceRequirements @ 0x14045D5D0
 * Callers:
 *     IopQueryDeviceResources @ 0x14045CCC0 (IopQueryDeviceResources.c)
 *     PiQueryResourceRequirements @ 0x14045D384 (PiQueryResourceRequirements.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     IopSynchronousCall @ 0x1404D457C (IopSynchronousCall.c)
 */

__int64 __fastcall PpIrpQueryResourceRequirements(int a1, _QWORD *a2)
{
  __int64 result; // rax
  _WORD v5[36]; // [rsp+30h] [rbp-58h] BYREF

  *a2 = 0LL;
  memset(v5, 0, sizeof(v5));
  v5[0] = 2843;
  result = IopSynchronousCall(a1, (unsigned int)v5, -1073741637, 0, (__int64)a2);
  if ( (int)result < 0 )
  {
    *a2 = 0LL;
  }
  else if ( !*a2 )
  {
    return 3221225659LL;
  }
  return result;
}
