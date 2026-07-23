/*
 * XREFs of PspSetAffinityLimitCallback @ 0x1406809AC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PspSetAffinityLimitCallback(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a1 + 772) & 0x4000000) == 0 || (*(_DWORD *)(a1 + 768) & 1) != 0 )
    return 0LL;
  else
    return PspCheckJobAccessState(a2, a1);
}
