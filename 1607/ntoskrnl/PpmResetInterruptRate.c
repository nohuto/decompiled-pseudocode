/*
 * XREFs of PpmResetInterruptRate @ 0x14020D534
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmResetInterruptRate(_DWORD *a1)
{
  int v1; // eax

  _disable();
  v1 = a1[5824];
  a1[2889] = 0;
  a1[2888] = v1;
  _enable();
  return 0LL;
}
