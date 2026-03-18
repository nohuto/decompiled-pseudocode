/*
 * XREFs of TR_InitializeLinkTrb @ 0x1C000146C
 * Callers:
 *     Bulk_InsertLinkTrb @ 0x1C00019D4 (Bulk_InsertLinkTrb.c)
 *     Control_Transfer_MapIntoRing @ 0x1C000D090 (Control_Transfer_MapIntoRing.c)
 *     Isoch_InsertLinkTrb @ 0x1C002B824 (Isoch_InsertLinkTrb.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TR_InitializeLinkTrb(__int64 a1, int a2, __int64 a3, char a4)
{
  unsigned int v4; // r10d
  __int64 result; // rax

  *(_QWORD *)a3 = 0LL;
  *(_QWORD *)(a3 + 8) = 0LL;
  v4 = *(_DWORD *)(a3 + 12) & 0xFFFF03FF | 0x1800;
  *(_DWORD *)(a3 + 12) = v4;
  if ( a4 )
    *(_DWORD *)(a3 + 12) = v4 ^ ((*(_DWORD *)(a1 + 192) == 0) ^ (unsigned __int8)v4) & 1;
  else
    *(_DWORD *)(a3 + 12) = v4 ^ ((unsigned __int8)v4 ^ (unsigned __int8)*(_DWORD *)(a1 + 192)) & 1;
  if ( (*(_QWORD *)(*(_QWORD *)(a1 + 40) + 232LL) & 0x800LL) == 0 && (a4 || (unsigned int)(a2 - 5) > 2) )
    *(_DWORD *)(a3 + 12) &= ~0x10u;
  else
    *(_DWORD *)(a3 + 12) |= 0x10u;
  result = *(_DWORD *)(a3 + 8) & 0x3FFFFF;
  *(_DWORD *)(a3 + 8) = result | (*(unsigned __int16 *)(a1 + 104) << 22);
  return result;
}
