/*
 * XREFs of HvlRegisterInterruptCallback @ 0x1401BAAE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlRegisterInterruptCallback(int a1, signed __int64 a2, _DWORD *a3)
{
  if ( !HvlHypervisorConnected )
    return 3221225659LL;
  if ( (void (*)())_InterlockedCompareExchange64(
                     (volatile signed __int64 *)&HvlpInterruptCallback[a1],
                     a2,
                     (signed __int64)xHalFreeMessageTarget) != xHalFreeMessageTarget )
    return 3221225473LL;
  if ( a3 )
    *a3 = a1 + 48;
  return 0LL;
}
