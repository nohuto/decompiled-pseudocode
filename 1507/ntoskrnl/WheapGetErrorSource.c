/*
 * XREFs of WheapGetErrorSource @ 0x140266D80
 * Callers:
 *     WheapReportBootError @ 0x1402664B0 (WheapReportBootError.c)
 *     WheaGetErrorSource @ 0x1402666A0 (WheaGetErrorSource.c)
 *     WheaReportHwError @ 0x1402666C8 (WheaReportHwError.c)
 *     WheapWmiExecuteErrorSourceMethod @ 0x1402678C0 (WheapWmiExecuteErrorSourceMethod.c)
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
