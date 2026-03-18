/*
 * XREFs of MiPerSessionProtosCompare @ 0x14021C688
 * Callers:
 *     MiLocateSessionProtosInSubsection @ 0x14021C63C (MiLocateSessionProtosInSubsection.c)
 *     MiUpdatePerSessionProto @ 0x14021CBD0 (MiUpdatePerSessionProto.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPerSessionProtosCompare(unsigned int a1, __int64 a2)
{
  unsigned int v2; // eax

  v2 = *(_DWORD *)(a2 + 24);
  if ( a1 <= v2 )
    return (unsigned int)-(a1 < v2);
  else
    return 1LL;
}
