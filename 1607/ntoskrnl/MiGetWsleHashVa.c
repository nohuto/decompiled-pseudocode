/*
 * XREFs of MiGetWsleHashVa @ 0x1400FCF54
 * Callers:
 *     MiUpdateWsle @ 0x14003C310 (MiUpdateWsle.c)
 *     MiTryLocateWsle @ 0x140046710 (MiTryLocateWsle.c)
 *     MiReplaceWsleHash @ 0x1400FCEC4 (MiReplaceWsleHash.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetWsleHashVa(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx

  if ( (a2 & 0x800000000000LL) != 0 )
    v2 = a2 | 0xFFFF000000000000uLL;
  else
    v2 = a2 & 0xFFFFFFFFFFFFLL;
  return *(_QWORD *)(a1 + 64) + 8 * ((v2 - *(_QWORD *)(a1 + 48)) >> 12);
}
