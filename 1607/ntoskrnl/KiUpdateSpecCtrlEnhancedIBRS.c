/*
 * XREFs of KiUpdateSpecCtrlEnhancedIBRS @ 0x1401D9D48
 * Callers:
 *     KiUpdateSpeculationControl @ 0x1401D9EB0 (KiUpdateSpeculationControl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiUpdateSpecCtrlEnhancedIBRS(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int16 v4; // cx
  unsigned __int16 v5; // cx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 11568);
  if ( !v2 || v2 == *(_QWORD *)(a2 + 1976) )
  {
    *(_WORD *)(a1 + 11576) &= 0xFFDBu;
  }
  else
  {
    *(_WORD *)(a1 + 11576) |= 4u;
    v4 = *(_WORD *)(a1 + 11576);
    if ( (KiSpeculationFeatures & 8) == 0 )
      *(_WORD *)(a1 + 11576) = v4 | 0x20;
  }
  v5 = *(_WORD *)(a1 + 11580);
  if ( (dword_1403AA26C & 0x40) != 0 && KiSsbdMsr == 72 )
  {
    *(_WORD *)(a1 + 11582) |= 4u;
    *(_WORD *)(a1 + 11586) |= 4u;
    v5 |= 4u;
  }
  else if ( (dword_1403AA26C & 0x80) != 0 )
  {
    *(_WORD *)(a1 + 11582) = 1;
    *(_WORD *)(a1 + 11586) = 1;
    if ( *(_QWORD *)(a2 + 1976) )
    {
      *(_WORD *)(a1 + 11582) = 5;
      v5 |= 4u;
    }
    if ( (*(_DWORD *)(a2 + 1740) & 0x2000000) != 0 )
      *(_WORD *)(a1 + 11586) = 5;
  }
  if ( (dword_1403AA26C & 0x400000) != 0 )
  {
    *(_WORD *)(a1 + 11582) |= 0x400u;
    *(_WORD *)(a1 + 11586) |= 0x400u;
    *(_WORD *)(a1 + 11584) |= 0x400u;
    v5 |= 0x400u;
  }
  if ( *(_QWORD *)(a2 + 1976) && (*(_BYTE *)(a1 + 11578) & 0x18) != 0 )
  {
    result = 256LL;
    *(_WORD *)(a1 + 11576) |= 0x100u;
  }
  else
  {
    result = 65279LL;
    *(_WORD *)(a1 + 11576) &= ~0x100u;
  }
  if ( v5 != *(_WORD *)(a1 + 11580) )
  {
    result = v5;
    *(_WORD *)(a1 + 11580) = v5;
    __writemsr(0x48u, v5);
  }
  if ( (KiSpeculationFeatures & 0x2000) != 0 )
    *(_WORD *)(a1 + 11582) |= 0x80u;
  return result;
}
