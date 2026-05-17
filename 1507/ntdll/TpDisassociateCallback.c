/*
 * XREFs of TpDisassociateCallback @ 0x1800751B0
 * Callers:
 *     <none>
 * Callees:
 *     TppBarrierAdjust @ 0x18007DD84 (TppBarrierAdjust.c)
 */

__int64 __fastcall TpDisassociateCallback(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  char v4; // al
  __int64 v5; // rdx

  if ( !a1 )
    return TppRaiseInvalidParameter(a1, a2, a3);
  v3 = *(_QWORD *)(a1 + 184);
  if ( !v3 )
    return TppRaiseInvalidParameter(a1, a2, a3);
  if ( *(_QWORD *)(a1 + 176) )
    return TppRaiseInvalidParameter(a1, a2, a3);
  v4 = *(_BYTE *)(a1 + 76);
  if ( (v4 & 2) != 0 )
    return TppRaiseInvalidParameter(a1, a2, a3);
  *(_DWORD *)(a1 + 144) &= ~0x40u;
  *(_BYTE *)(a1 + 76) = v4 | 2;
  v5 = *(_QWORD *)(v3 + 16);
  *(_QWORD *)(a1 + 176) = v5;
  if ( v5 )
  {
    *(_DWORD *)(a1 + 144) |= 0x20u;
    TppBarrierAdjust(v5 + 32, 1LL);
  }
  return TppBarrierAdjust(v3 + 56, 0xFFFFFFFFLL);
}
