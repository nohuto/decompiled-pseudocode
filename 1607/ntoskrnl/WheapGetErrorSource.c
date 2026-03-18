/*
 * XREFs of WheapGetErrorSource @ 0x1402308A8
 * Callers:
 *     WheapReportBootError @ 0x14022FFBC (WheapReportBootError.c)
 *     WheaGetErrorSource @ 0x1402301AC (WheaGetErrorSource.c)
 *     WheaReportHwError @ 0x1402301D4 (WheaReportHwError.c)
 *     WheapWmiExecuteErrorSourceMethod @ 0x140231414 (WheapWmiExecuteErrorSourceMethod.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall WheapGetErrorSource(__int64 a1, int a2)
{
  int v2; // r9d
  int v3; // r8d
  __int64 *result; // rax

  v2 = *(_DWORD *)(a1 + 4);
  v3 = 0;
  result = *(__int64 **)(a1 + 8);
  if ( v2 <= 0 )
    return 0LL;
  while ( *(_DWORD *)((char *)result + 117) != a2 || *((_BYTE *)result + 88) )
  {
    result = (__int64 *)*result;
    if ( ++v3 >= v2 )
      return 0LL;
  }
  return result;
}
