/*
 * XREFs of MiVadCompareVpnRange @ 0x1400100A4
 * Callers:
 *     MiCheckForConflictingVad @ 0x140010030 (MiCheckForConflictingVad.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadCompareVpnRange(unsigned __int64 *a1, __int64 a2)
{
  if ( a1[1] < (*(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32)) )
    return 0xFFFFFFFFLL;
  else
    return *a1 > (*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32));
}
