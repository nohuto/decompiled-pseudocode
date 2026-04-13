/*
 * XREFs of sub_180014090 @ 0x180014090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180014090(__int64 a1, unsigned __int16 a2)
{
  unsigned __int16 v2; // r8
  unsigned __int64 v3; // r9

  v2 = 0;
  v3 = **(_QWORD **)(a1 + 56);
  if ( !v3
    || v3 <= **(_QWORD **)(a1 + 24)
    || a2 != 0xFFFF && a2 != *(_WORD *)(v3 - 2) && (*(_BYTE *)(a1 + 112) & 2) != 0 )
  {
    return 0xFFFFLL;
  }
  ++**(_DWORD **)(a1 + 80);
  **(_QWORD **)(a1 + 56) -= 2LL;
  if ( a2 != 0xFFFF )
  {
    v2 = a2;
    ***(_WORD ***)(a1 + 56) = a2;
  }
  return v2;
}
