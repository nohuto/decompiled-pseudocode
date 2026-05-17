/*
 * XREFs of TpDisassociateCallback @ 0x1800849C0
 * Callers:
 *     <none>
 * Callees:
 *     TppBarrierAdjust @ 0x180063E84 (TppBarrierAdjust.c)
 */

__int64 __fastcall TpDisassociateCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  char v5; // al
  __int64 v6; // rdx

  if ( !a1 )
    return TppRaiseInvalidParameter(a1, a2, a3, a4);
  v4 = *(_QWORD *)(a1 + 184);
  if ( !v4 )
    return TppRaiseInvalidParameter(a1, a2, a3, a4);
  if ( *(_QWORD *)(a1 + 176) )
    return TppRaiseInvalidParameter(a1, a2, a3, a4);
  v5 = *(_BYTE *)(a1 + 76);
  if ( (v5 & 2) != 0 )
    return TppRaiseInvalidParameter(a1, a2, a3, a4);
  *(_DWORD *)(a1 + 144) &= ~0x40u;
  *(_BYTE *)(a1 + 76) = v5 | 2;
  v6 = *(_QWORD *)(v4 + 16);
  *(_QWORD *)(a1 + 176) = v6;
  if ( v6 )
  {
    *(_DWORD *)(a1 + 144) |= 0x20u;
    TppBarrierAdjust((volatile signed __int64 *)(v6 + 32), 1, 0LL, a4);
  }
  return TppBarrierAdjust((volatile signed __int64 *)(v4 + 56), -1, 0LL, a4);
}
