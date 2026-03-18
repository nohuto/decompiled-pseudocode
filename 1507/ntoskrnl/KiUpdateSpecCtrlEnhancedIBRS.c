/*
 * XREFs of KiUpdateSpecCtrlEnhancedIBRS @ 0x140208E38
 * Callers:
 *     KiUpdateSpeculationControl @ 0x140208FA0 (KiUpdateSpeculationControl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiUpdateSpecCtrlEnhancedIBRS(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int16 v4; // cx
  unsigned __int16 v5; // cx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 11560);
  if ( !v2 || v2 == *(_QWORD *)(a2 + 1952) )
  {
    *(_WORD *)(a1 + 11568) &= 0xFFDBu;
  }
  else
  {
    *(_WORD *)(a1 + 11568) |= 4u;
    v4 = *(_WORD *)(a1 + 11568);
    if ( (KiSpeculationFeatures & 8) == 0 )
      *(_WORD *)(a1 + 11568) = v4 | 0x20;
  }
  v5 = *(_WORD *)(a1 + 11572);
  if ( (dword_1403D123C & 0x40) != 0 && KiSsbdMsr == 72 )
  {
    *(_WORD *)(a1 + 11574) |= 4u;
    *(_WORD *)(a1 + 11578) |= 4u;
    v5 |= 4u;
  }
  else if ( (dword_1403D123C & 0x80) != 0 )
  {
    *(_WORD *)(a1 + 11574) = 1;
    *(_WORD *)(a1 + 11578) = 1;
    if ( *(_QWORD *)(a2 + 1952) )
    {
      *(_WORD *)(a1 + 11574) = 5;
      v5 |= 4u;
    }
    if ( (*(_DWORD *)(a2 + 1716) & 0x2000) != 0 )
      *(_WORD *)(a1 + 11578) = 5;
  }
  if ( (dword_1403D123C & 0x400000) != 0 )
  {
    *(_WORD *)(a1 + 11574) |= 0x400u;
    *(_WORD *)(a1 + 11578) |= 0x400u;
    *(_WORD *)(a1 + 11576) |= 0x400u;
    v5 |= 0x400u;
  }
  if ( *(_QWORD *)(a2 + 1952) && (*(_BYTE *)(a1 + 11570) & 0x18) != 0 )
  {
    result = 256LL;
    *(_WORD *)(a1 + 11568) |= 0x100u;
  }
  else
  {
    result = 65279LL;
    *(_WORD *)(a1 + 11568) &= ~0x100u;
  }
  if ( v5 != *(_WORD *)(a1 + 11572) )
  {
    result = v5;
    *(_WORD *)(a1 + 11572) = v5;
    __writemsr(0x48u, v5);
  }
  if ( (KiSpeculationFeatures & 0x2000) != 0 )
    *(_WORD *)(a1 + 11574) |= 0x80u;
  return result;
}
